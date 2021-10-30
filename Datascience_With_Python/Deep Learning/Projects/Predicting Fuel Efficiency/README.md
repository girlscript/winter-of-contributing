1] INTRODUCTION

In a regression problem, the aim is to predict the output of a continuous value, like a price or a probability. Contrast this with a classification problem, where the aim is to select a class from a list of classes (for example, where a picture contains an apple or an orange, recognizing which fruit is in the picture).

This tutorial uses the classic Auto MPG dataset and demonstrates how to build models to predict the fuel efficiency of the late-1970s and early 1980s automobiles. To do this, you will provide the models with a description of many automobiles from that time period. This description includes attributes like cylinders, displacement, horsepower, and weight.

2] STEPS TO PREDICT FUEL EFFICIENCY

1) Install libraries Seaborn and tensorflow using the command !pip install

2) Import the libraries like matplotlib, numpy, pandas, seaborn, tensorflow and keras. The tensorflow version used in this project is 2.2.0

3) Download the AUTO MPG DATASET from UCI Machine Learning Repository.

4) After downloading, load or import the data set using pandas libraries using pd.read_csv() function. Column names include MPG, CYLINDERS, DISPLACEMENT, HORSEPOWER, WEIGHT, ACCELERATION, MODEL YEAR AND ORIGIN
 
5) Look for the first 5 and last 5 rows in dataset using head() and tail() function.

6) Next step is to clean the dataset. Firsty, presence of null values is checked using isna().sum() function. It is seen that Horsepower column has 6 null values. For now, these null values are dropped to make prediction more efficient using dropna() function.

7) There are some columns in dataset which are not numeric type. For example, origin is categorical. So, convert the type using map() function.

8) Now, split the dataset into training and testing, we are spliting 80% of the dataset as training and 20% as testing.

9) In order to visualize data, pairplot function of seaborn library is being used, This gives insights regarding relation of every column with every other column mentioned in the pairplot() function. I have mentioned 4 attributes, MPG, CYLINDERS, DISPLACEMENT AND WEIGHT
 
10) Describe() function is used to calculate count, mean, standard deviation, min, 25%, 50%, 75% quartile, max values corresponding to every column in dataset. It is clearly seen that there are 314 rows in the dataset.

11) Next step is to normalize the dataset.The goal of normalization is to change the values of numeric columns in the dataset to use a common scale, without distorting differences in the ranges of values or losing information. Normalization avoids these problems by creating new values that maintain the general distribution and ratios in the source data, while keeping values within a scale applied across all numeric columns used in the model.
This module offers several options for transforming numeric data:
•	You can change all values to a 0-1 scale, or transform the values by representing them as percentile ranks rather than absolute values.
•	You can apply normalization to a single column, or to multiple columns in the same dataset.
•	If you need to repeat the experiment, or apply the same normalization steps to other data, you can save the steps as a normalization transform, and apply it to other datasets that have the same schema.
Normalization is also required for some algorithms to model the data correctly. We can achieve this using norm() function

12) Following this, We need to build a model and model used in this case is sequential keras. Activation function used is RELU and dense layers added are 64 layers, optimiser used is RMSprop,metrics used are mean squuare error and mean absolute error. A Sequential model is appropriate for a plain stack of layers where each layer has exactly one input tensor and one output tensor.

13) In this project, first 10 rows of the training dataset are considered and then model.predict() function is applied to those 10 rows

14) model is trained for 1000 epochs, and record the training and validation accuracy in the history object. Epoch indicates the number of passes of the entire training dataset the machine learning algorithm has completed. Datasets are usually grouped into batches (especially when the amount of data is very large). This can be attained using model.fit() function

15) use an EarlyStopping callback that tests a training condition for every epoch. If a set amount of epochs elapses without showing improvement, then it automatically stops the training. This is done using keras.callbacks.EarlyStopping() function
The patience parameter is the amount of epochs to check for improvement.

16) Metrics used to evaluate testing dataset are MAE, MSE, RMSE, LOSS AND RSE. Predict MPG values using data in the testing set using model.predict() function.

17) Lastly, Calculate error using test_predictions - test_labels and plot a histogram.

3] AUTO MPG DATASET
This dataset was taken from the StatLib library which is maintained at Carnegie Mellon University. The dataset was used in the 1983 American Statistical Association Exposition. This dataset is a slightly modified version of the dataset provided in the StatLib library. In line with the use by Ross Quinlan (1993) in predicting the attribute "mpg", 8 of the original instances were removed because they had unknown values for the "mpg" attribute. The original dataset is available in the file "auto-mpg.data-original".

"The data concerns city-cycle fuel consumption in miles per gallon, to be predicted in terms of 3 multivalued discrete and 5 continuous attributes." (Quinlan, 1993)

Attributes:
1. mpg: continuous
2. cylinders: multi-valued discrete
3. displacement: continuous
4. horsepower: continuous
5. weight: continuous
6. acceleration: continuous
7. model year: multi-valued discrete
8. origin: multi-valued discrete
9. car name: string (unique for each instance

4] CONCLUSION
•	Mean squared error (MSE) (tf.losses.MeanMeanSquaredError) and mean absolute error (MAE) (tf.losses.MeanAbsoluteError) are common loss functions used for regression problems. MAE is less sensitive to outliers. Different loss functions are used for classification problems.
•	Similarly, evaluation metrics used for regression differ from classification.
•	When numeric input data features have values with different ranges, each feature should be scaled independently to the same range.
•	Overfitting is a common problem for DNN models



