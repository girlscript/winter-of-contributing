A deep learning model generally works well when it has a huge amount of data. In general, the more data we have better will be the performance of the model. Image augmentation is a technique of altering the existing data to create some more data for the model training process. In other words, it is the process of artificially expanding the available dataset for training a deep learning model.

# Purpose
---
Image augmentation is a technique of altering the existing data to create some more data for the model training process. In other words, it is the process of artificially expanding the available dataset for training a deep learning model.

# Description
---
The Keras deep learning neural network library provides the capability to fit models using image data augmentation via the ImageDataGenerator class.

# Techniques
---
There are various techniques to increase the classes of data, to make it balanced. For this, the various data augmentation techniques are as follows:
- Image shifting : Horizontal & vertical
- Image rotation
- Image flipping : Horizontal & vertical
- Brightness augmentation
- Zooming augmentation

# Libraries to be imported
---
'''Python
from numpy import expand_dims
from tensorflow.keras.preprocessing.image import load_img
from tensorflow.keras.preprocessing.image import img_to_array
from tensorflow.keras.preprocessing.image import ImageDataGenerator
from matplotlib import pyplot
'''
Libraries for loading the image, converting the image to array and Image Data Generator are imported

# Results after augmentation
---
All the images are available in the image folder
***Horizontal Shift***
***Vertical Shift***
***Horizontal Flip***
***Vertical Flip***
***Rotation***
***Brightness Augmentation***
***Zoom Augmentation***

# Use
---
Data augmentation techniques are used to increase the classes of data. This is mostly done when dataset is balanced in terms of classes or also done to increase the dataset size for better predictions

# Advantages
---
- Increases the size of data
- Balances the different classes of data
- Provides different variations of data

# Summary
---
Here, data augmentation techniques for image have been described. The Keras deep learning neural network library provides the capability to fit models using image data augmentation via the ImageDataGenerator class.

# References
---
1. https://www.analyticsvidhya.com/blog/2021/03/image-augmentation-techniques-for-training-deep-learning-models/
2. https://machinelearningmastery.com/how-to-configure-image-data-augmentation-when-training-deep-learning-neural-networks/



