# Face Mask Detection using Keras and OpenCV

# Install Dependcies

- Inorder to install the dependencies, first you need to clone this repository to your local computer. 
- Inside the clone folder there will be a text file named "requirements.txt". We need to install all the mentioned libraries from there.
- We do this by opening anaconda command prompt, go to the folder where you have cloned the repository with `cd` command and write the following command `pip install -r requirements.txt`

# Dataset

- Download the dataset from here : https://www.kaggle.com/omkargurav/face-mask-dataset
- Now let us take a look at the dataset, inside dataset there will be two folders named with_mask and without_mask. 
- with_mask folder will have images of people wearing mask in their faces. There are 1916 images of people wearing mask.
- Similarly, withou_mask folder have images of people not wearing mask.

# Data Preprocessing

- We are going to convert all our images from with_mask and without_mask into arrays so that with those arrays we can create our deep learning model.
- We then will create two list, "data" and "labels" inside the list we will append all the image array in that list and inside the labels list we will append the corresponding label to the image if it is with_mask or without_mask.
- We then loop through each image in both the directories "with_mask" and "without_mask", and convert each image into size 224x224 pixels (uniformity) and then into an array (to train deep learning model).
- Now we use mobelnets
- Then we append the image array into data list and their resptextive category in labels list.

```
data = []
labels = []

for category in CATEGORIES:
    path = os.path.join(DIRECTORY, category)
    for img in os.listdir(path):
    	img_path = os.path.join(path, img)
    	image = load_img(img_path, target_size=(224, 224))
    	image = img_to_array(image)
    	image = preprocess_input(image)

    	data.append(image)
    	labels.append(category)
```

- Currently the data list now has all numerical values but the labels are still alphabet value ("with_mask","without_mask"). Since ML models cant understand text characters we need to convert it into numerical values ie 0 and 1 using [LabelBinarizer()](https://scikit-learn.org/stable/modules/generated/sklearn.preprocessing.LabelBinarizer.html).
- After that we convert it into a [numpy array](https://stackoverflow.com/questions/111983/python-array-versus-numpy-array) since only with numpy arrays deep learning models work.
- Then we split the data for testing and training.
```
lb = LabelBinarizer()
labels = lb.fit_transform(labels)
labels = to_categorical(labels)

data = np.array(data, dtype="float32")
labels = np.array(labels)

(trainX, testX, trainY, testY) = train_test_split(data, labels, test_size=0.20, stratify=labels, random_state=42)
```

# Training 

- We are going to follow CNN for training but we are making a small change in it. We are going to eliminate CNN layer and instead use [MobileNet](https://keras.io/api/applications/mobilenet/) because it’s also computationally efficient and thus making it easier to deploy the model to embedded systems (Raspberry Pi, Google Coral, etc.). 
- We initialize the learning rate as 1e-4, number of EPOCHS to train for as 20 and Batch Size as 32. We can play around with these values to improve accuracy.` INIT_LR, EPOCHS, BS = 1e-4, 20, 32`
- We also use ImageDataGenerator for data augmentation. It creates many images from a single image by adding various properties like flipping, rotating, shifting, zooming etc. so that we can create more dataset with this. This is basically done to increase accuaracy of model for different variants of the same image.` aug = ImageDataGenerator(rotation_range=20, zoom_range=0.15, width_shift_range=0.2, height_shift_range=0.2, shear_range=0.15, horizontal_flip=True, fill_mode="nearest") `
- Lets dive deep into mobilenet application, by using ,mobilenet we are creating two types of models. First model will be mobile net model of whose output we are going to pass to the normal model that we are going to develop. We will call these models as base model and head model respectively. 
- After input is processed as numpy array we send it to the MobileNet, then we do Max-pooling, then flatten it, then create a fully connected layer, and then get our output (either Mask or Without Mask). 
- Output of headModel is of two layers, one for with mask and another for without mask.
``` 
baseModel = MobileNetV2(weights="imagenet", include_top=False,input_tensor=Input(shape=(224, 224, 3)))

# construct the head of the model that will be placed on top of the base model
headModel = baseModel.output
headModel = AveragePooling2D(pool_size=(7, 7))(headModel)
headModel = Flatten(name="flatten")(headModel)
headModel = Dense(128, activation="relu")(headModel)
headModel = Dropout(0.5)(headModel)
headModel = Dense(2, activation="softmax")(headModel)

# place the head FC model on top of the base model (this will become the actual model we will train)
model = Model(inputs=baseModel.input, outputs=headModel)
```
- We now fit the model, we use the image data generator's new datasets inside the model. (It is always advisable to use image data generator when we have less dataset.
` H = model.fit(aug.flow(trainX, trainY, batch_size=BS), steps_per_epoch=len(trainX) // BS, validation_data=(testX, testY), validation_steps=len(testX) // BS, epochs=EPOCHS)`

# Run the Training Model

- type the following in the repository that you cloned using anaconda prompt, `python train_mask_detector.py`.
- Now the model training will, It might take some time to completely train the model.
- After the model is successfully trained, you will see a message in anaconda prompt, `[INFO] saving mask detector model`. And the new file mask_detector.model and plot image will be created in that same directory. Plot image will contain training loss and acuracy graph.

![plot](https://user-images.githubusercontent.com/72177954/134034483-ecb0875f-1efa-491d-9891-6b21610c335b.png)

# Face detector model

- We are going to use the face detector model to run the mask detector model for predicting if a person is wearing mask or not through our face-cam. For this camera operation we will be using OpenCV.
- We load [FaceNet](https://www.pluralsight.com/guides/face-recognition-walkthrough-facenet) ( face recognition system developed by Google ) with pretrained [caffeemodel deep neural network]() by using cv2.dnn.readNet.
```
prototxtPath = r"face_detector\deploy.prototxt"
weightsPath = r"face_detector\res10_300x300_ssd_iter_140000.caffemodel"
faceNet = cv2.dnn.readNet(prototxtPath, weightsPath)
```
- we now load our mask detector model : `maskNet = load_model("mask_detector.model")`
- we then load our cammera with `vs = VideoStream(src=0).start()`
- we now loop over each frames of video stream, now we detect faces in the stream and predict if it is wearing a mask or not using detect_and_predict_mask function.
- detect_and_predict_mask function returns two things : location of face and prediction percentage of whether it is wearing mask or not.
- then we loop over the detected face location and draw a rectangle, mention above the rectangle the prediction label whether "Mask" or "No Mask" and add red or green color to rectangle and label depending on prediction (mask=green,no mask=red).
- we also add character "q" for ending the loop. Then we stop video stream and close the window. 

# Run the Face Detector Model

- open anaconda prompt and type the following command : `python detect_mask_video.py` in the correct directory.

https://user-images.githubusercontent.com/72177954/134049736-782a48ac-e7a2-462d-be8d-fd8f8041af3b.mp4

