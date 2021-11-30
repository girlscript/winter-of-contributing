1] AIM

The aim is to predict the output of a continuous value, like a price or a probability. Contrast this with a classification problem, where the aim is to select a class from a list of classes (for example, where a picture contains an apple or an orange, recognizing which fruit is in the picture).

2] PURPOSE

The automotive industry is extremely competitive. With increasing fuel prices and picky consumers, automobile makers are constantly optimizing their processes to increase fuel efficiency.
But, what if you could have a reliable estimator for a car’s mpg given some known specifications about the vehicle?
Then, you could beat a competitor to market by both having a more desirable vehicle that is also more efficient, reducing wasted R&D costs and gaining large chunks of the market.
Utilizing machine learning, Cocolevio can help you build prediction models designed to give you an edge over your competitors.

3] INTRODUCTION

This tutorial uses the classic Auto MPG dataset and demonstrates how to build models to predict the fuel efficiency of the late-1970s and early 1980s automobiles. To do this, you will provide the models with a description of many automobiles from that time period. This description includes attributes like cylinders, displacement, horsepower, weight, MPG, acceleration and so on.

4] STEPS TO PREDICT FUEL EFFICIENCY

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

11) Now we need to separate target value that is "label" from the features.

12) Next step is to normalize the dataset.The goal of normalization is to change the values of numeric columns in the dataset to use a common scale, without distorting differences in the ranges of values or losing information. Normalization avoids these problems by creating new values that maintain the general distribution and ratios in the source data, while keeping values within a scale applied across all numeric columns used in the model.
This module offers several options for transforming numeric data:
•	You can change all values to a 0-1 scale, or transform the values by representing them as percentile ranks rather than absolute values.
•	You can apply normalization to a single column, or to multiple columns in the same dataset.
•	If you need to repeat the experiment, or apply the same normalization steps to other data, you can save the steps as a normalization transform, and apply it to other datasets that have the same schema.

-first step here is to create normalization layer using tf.keras.layers.normalization() which is a clean and simple way to add feature normalization into your model.
-Next fit the state of the preprocessing layer to the data by calling Normalization.adapt
-Calculate the mean and variance, and store them in the layer
-When the layer is called, it returns the input data, with each feature independently normalized

13) First model used is simple linear regression with one input. 
-Create a numpy array of a specific feature
-build keras sequential model
-predict mpg from the specific feature choosen
-configure the training procedure using the Keras Model.compile method which has two major parameters loss and optimizer
-use Keras Model.fit to execute the training for 100 epochs
-Visualize the model's training progress using the stats stored in the history object
-Collect the results on the test set for later

Repeat these steps again for simple linear regression with multiple inputs and regression with deep neural network for multiple inputs

14) Testing set performance is then analysed using mean absolute error.

15) Make predictions with dnn_model using model.predict() function.

16) Calculate error using test_predictions - test_labels and plot a histogram.

17) We can save the model for future use using model.save() function.

18) models.load_model() function is used to reload the model. Because of this you will get output regardless of how many times you ran the model.

5] COMPARISON

If we compare the metrics calculated for the 3 models, Regression with DNN had mean absolute value that is 0.23,while Linear regression with one input had mae value the highest that is 3.644. Linear regression with multiple inputs had mae value of 0.09 which was lowest amongst the three models. So, Linear regression with multiple inputs is more suitable for predicting fuel efficiency.

6] ADVANTAGE

This project helps companies find reliable estimator for a car’s mpg given some known specifications about the vehicle. With help of this, comapnies can work on more efficient vehicle reducing wasted R&D costs and gaining large chunks of the market.

7] MODELS USED 

-Linear regression with one input
-Linear regression with multiple inputs
-Regression with Deep neural network

8] AUTO MPG DATASET
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

9] CONCLUSION
•	Mean squared error (MSE) (tf.losses.MeanMeanSquaredError) and mean absolute error (MAE) (tf.losses.MeanAbsoluteError) are common loss functions used for regression problems. MAE is less sensitive to outliers. Different loss functions are used for classification problems.
•	Similarly, evaluation metrics used for regression differ from classification.
•	When numeric input data features have values with different ranges, each feature should be scaled independently to the same range.
•	Overfitting is a common problem for DNN models



