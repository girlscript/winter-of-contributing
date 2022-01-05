<h1 align="center"> :mask: Face Mask Detection using Python, Keras and OpenCV</h1>

<div align= "center"><img src="./Images/Face%20Mask%20Detection.png" width="540" height="360"/>

</div>

# 😷 What is Face Mask Detection ?  
Face mask detection is an AI based technology that analyzes a video stream to detect and recognize a face mask worn by an individual person or a crowd of people.

# :warning: Frameworks and Libraries 
- [OpenCV](https://opencv.org/about/) (Open Source Computer Vision Library) : It is an open source computer vision and machine learning software library. OpenCV was built to provide a common infrastructure for computer vision applications and to accelerate the use of machine perception in the commercial products. Being a BSD-licensed product, OpenCV makes it easy for businesses to utilize and modify the code. 
- [Keras](https://keras.io/about/) : It is a deep learning API written in Python, running on top of the machine learning platform TensorFlow. It was developed with a focus on enabling fast experimentation. Being able to go from idea to result as fast as possible is key to doing good research. 
- [MobileNet V2](https://keras.io/api/applications/mobilenet/) : It is a lightweight pre-trained model available in Keras Applications; used as a base model for our transfer learning
- [OpenCV DNN Face Detector](https://caffe.berkeleyvision.org) : Caffe-based Single Shot-Multibox Detector (SSD) model used to detect faces

# :star: Purpose of face mask detection 
- Check Individuals And Crowds Wearing Masks In Public
- Use Digital Screens To Remind Visitors To Wear Masks
- Alert Staff When No Masks Are Detected

# 😄 Usage and Application 
- **Taxis** : Because cars usually have very limited space especially when travelling with multiple people, there is no option to keep the standard 1,5 m distance. Thus enforcing masks is important for minimizing the threat of spreading infection.
- **Corporate Buildings** : With many office buildings opening up and employees coming back to work, face mask detection can be used to maintain a safe environment for everyone. The mask detection system can send alerts or reminders to those not complying.
- **Public Transport** : Wearing face masks in public transport will be mandatory in many parts of the world. Public transport organizations can use the software to automate the checking process with very little resources needed and with efficiency.
- **Retail** : Retailers need to monitor their premises to control the current occupancy and wearing of masks. Digital screens can be used to display information for both the number of people allowed in the store and for mask detection. 
- **Airports** : Our face mask detector can be very effectively used at airports mainly for entrance flow management and monitoring. The software can be added to any access gate or entrance to make sure that all passengers follow the safety rules when boarding a plane.
- **Hospitality** : Hotels, restaurants and bars are opening their doors to the public with certain regulations. In many cases, visitors will be required to wear masks when checking in or interacting with the staff. Ensure a smooth and safe visitor experience. 

# :clap: Advantage
- Face Mask Detection system can help in reducing spread of COVID
- Face Mask Detection system automates Mask Detection, hence reducing labour cost to check manually

# :file_folder: Dataset

- Download the dataset from here : https://www.kaggle.com/omkargurav/face-mask-dataset
- Now let us take a look at the dataset, inside dataset there will be two folders named with_mask and without_mask. 
- with_mask folder will have images of people wearing mask in their faces. There are 1916 images of people wearing mask.
- Similarly, withou_mask folder have images of people not wearing mask.

## :key: Prerequisites

All the dependencies and required libraries are included in the file <code>requirements.txt</code> [See here](./requirements.txt)


## 🚀&nbsp; Installation
1. Clone the repo

2. Change your directory to the cloned repo 
```
$ cd Face-Mask-Detection
```
3. Create a Python virtual environment named 'test' and activate it
```
$ virtualenv test
```
For linux :
```
$ source test/scripts/activate
```
For windows :
```
$ test\scripts\activate
```
4. Now, run the following command in your Terminal/Command Prompt to install the libraries required
```
$ pip3 install -r requirements.txt
```
## :bulb: Working
1. Open terminal. Go into the cloned project directory and type the following command:
```
$ python3 train_mask_detector.py 
```
2. To detect face masks in real-time video streams type the following command:
```
$ python3 detect_mask_video.py 
```

# :sparkles: Data Preprocessing

- We are going to convert all our images from with_mask and without_mask into arrays so that with those arrays we can create our deep learning model.
- We then will create two list, "data" and "labels" inside the list we will append all the image array in that list and inside the labels list we will append the corresponding label to the image if it is with_mask or without_mask.
- We then loop through each image in both the directories "with_mask" and "without_mask", and convert each image into size 224x224 pixels (uniformity) and then into an array (to train deep learning model).
- Then we append the image array into data list and their resptective category in labels list.

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

# 🔥 Training 

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

# :jack_o_lantern: Create Face detector model

- We are going to use the face detector model to run the mask detector model for predicting if a person is wearing mask or not through our face-cam. For this camera operation we will be using OpenCV.
- We load [FaceNet](https://www.pluralsight.com/guides/face-recognition-walkthrough-facenet) ( face recognition system developed by Google ) with pretrained [caffeemodel deep neural network](https://recodeminds.com/blog/a-beginners-guide-to-caffe-for-deep-learning/) by using cv2.dnn.readNet.
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

## :key: Final outputs and results

- Our model gave 99% accuracy for Face Mask Detection after training 

![Untitled](./Images/training%20model%20accuracy.png)

- We got the following accuracy/loss training curve plot

![plot](./Images/train%20and%20loss%20accuracy%20plot.png)

- Live demo 

https://user-images.githubusercontent.com/72177954/134049736-782a48ac-e7a2-462d-be8d-fd8f8041af3b.mp4

# 🌟 Conclusion

Face Mask Detection is very useful technology to enforce covid protocols and reduce spread of covid 19. Business enterprises and Public Transportations should leverage this technology to reduce labor cost and ensure a safer environment for everyone. 

# :innocent: Credits
- https://opencv.org/about/ 
- https://keras.io/about/ 
- https://sightcorp.com/face-mask-detection/
- https://github.com/chandrikadeb7/Face-Mask-Detection/blob/master/README.md#bulb-working
- https://www.youtube.com/watch?v=Ax6P93r32KU
- https://github.com/balajisrinivas/Face-Mask-Detection
- https://github.com/achen353/Face-Mask-Detector
