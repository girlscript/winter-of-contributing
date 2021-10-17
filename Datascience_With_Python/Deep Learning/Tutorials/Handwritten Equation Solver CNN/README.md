Machine learning and deep learning allows us to solve different problems by making machines learn with the help of datasets and training models on them. One such problem is quick solving of equations and specially complex equations by machines. Here's a simple equation solving model, which solves simple equations of addtion, substraction, multiplication and division.

# Dataset
***
The dataset can be downloaded through this [link](https://www.kaggle.com/xainano/handwrittenmathsymbols). Also the dataset is uploaded in DS Datasets directory of Datascience_With_Python folder. The name of the dataset is math numbers and operators.

# Extracting Features
***
Contour extraction is used for feature extraction
Steps :
1. The image of handwritten equation is inverted  and then converted to a binary image. 
We use contour extraction because it is the best option when the bg is black and the object is black.

2. For features, we obtain a bounding rectangle by boundingRect function. It is the smallest possible rectangle that covers the object.

3. Each bounding box covers one feature each. Hence area of each bounding rectangle is calculated, and rectangle with max area is chosen.

4. The max sized rectangle is resized to 28 x 28. For feature extraction it is again reshaped to 784 by 1. With this, corresponding label is assigned, according to integers 0-9 labels, for '+' operator '11' label is assigned, for '-', label 10 and so on.
There are 14 classes of labels.
After feature extraction, the data is saved to csv file.

# Training CNN on data
***
After reshaping the images with contours, its time to build and train the CNN model.

For better understanding, do follow this path of files :
1. Data extraction file - Bringing_out_req_data.ipynb
2. Modelling file - Model_training,ipynb
3. CNN Model testing file - CNN_model_test.ipynb
Some other files that will be required - model_final.json, model_final.h5 weights, train_data.csv, a test image

First the model is built using Keras library, and needed modules are imported. Then the trained data is converted to binary using 'to-categorical' function.

# Fitting data into the model
***
After importing the required modules, the data is put into a numpy array and fitted to the model. 
The accuracy achieved through this process is above 99% but it takes excsesive time to train it. Hence, we store the trained model and its weughts into json and h5 file. 

# Testing of the model 
***
After training and storing the model, we test the model on a testing image. The input image follows the same process as mentioned in Extractng features part. Image to binary, obtain contours, draw bounding boxes, resizing the images, assign a label and find the answer accordingly.
