Machine learning and deep learning allows us to solve different problems by making machines learn with the help of datasets and training models on them. One such problem is quick solving of equations and specially complex equations by machines. Here's a simple equation solving model, which solves simple equations of addtion, substraction, multiplication and division.

# Purpose
***
The purpose of this tutorial is to help figure out an answer of an equation faster in times of need. This project is explained with an simle equation solution but it can also be trained to complex equation solving by importing the required symbols from the dataset.

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

# Use
***
This project can be used for simple to the most complex equations in mathematics just by using the dataset efiiciently, assigning labels to operators, and training the model on the same. It can be quite useful in the varied different fields for different purposes.

# Advantages 
***
- Can be used to make programmed calculators
- Faster solving of simple as well as complex equations

# Data Visualisations
***
This images are also uploaded in the Images folder

![5](https://user-images.githubusercontent.com/85014366/137632461-44b0fde8-396f-4efb-bae7-3e0542cb37fa.PNG)

![4](https://user-images.githubusercontent.com/85014366/137632474-e02f614e-867c-4be2-a444-08739da191ed.PNG)

![+](https://user-images.githubusercontent.com/85014366/137632477-34f0a35c-5374-4bf7-89aa-4ced27e69261.PNG)

![cv2 image capture](https://user-images.githubusercontent.com/85014366/137632488-9de783f4-511c-4dca-8bd9-86b688f1633e.PNG)


# Summary of project files
***
This project contains 3 ipynb files, a test image, model weights and model json file, and an Images folder which contains the output images of cv2.imshow of CNN_model_test.ipynb
1. Bringing_out_req_data.ipynb - contains code nof extraction of required data to solve simple mathematical operations such as addition, substraction, multiplication and division, storing it into a csv file.
2. Model_training.ipynb - contains the training part  of model using the csv file we created before
3. CNN_model_test.ipynb - testing of the trained model saved to json with its weights on the test image
4. test_image.jpeg - test image used in model testing
5. model.h5 - weights trained in model training
6. model.json - model saved in json file to save time for next training

# References
***
1. [Geeks for geeks](https://www.geeksforgeeks.org/handwritten-equation-solver-in-python/)
2. [Towards Data Science](https://towardsdatascience.com/building-a-handwritten-multi-digit-calculator-f03cf5028052)
