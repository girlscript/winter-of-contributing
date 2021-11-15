# Topic: Credit Card Fraud Detection 💳

## Introduction:
As we are moving towards the digital world — cybersecurity is becoming a crucial part of our life. When we talk about security in digital life then the main challenge is to find the abnormal activity.<br>
In this task we are going to classify abnormal transactions using three different ML models: LogisticRegression, RandomForestClassifier, and DecisionTreeClassifier.

## Dataset:
For this task, I have used Kaggle's [Credit Fraud](https://www.kaggle.com/janiobachmann/credit-fraud-dealing-with-imbalanced-datasets/data?select=creditcard.csv) dataset.<br>
This dataset contains the real bank transactions made by European cardholders in the year 2013. As a security concern, the actual variables are not being shared but — they have been transformed versions of PCA. As a result, we can find 29 feature columns and 1 final class column.

## Workflow:
* Importing necessary libraries
* Reading the dataset
* Data Analysis: checking for null values, calculating the number of values for each class, plotting correlation
* Balancing dataset: Since there are too few examples of the minority class (i.e. fradulent transactions) for a model to effectively learn, we balance our dataset.
* Train test split: Randomnly splitting the dataset into training data and testing data for training the model and prediction
* Training the model using three algorithms
* Prediction
* Calculate Accuracy score
* Display Confusion Matrix


## Logistic Regression:
Logistic regression is an algorithm used for classification where the predicted variable y is a discrete value.<br>
Examples of classification problems:<br>
* Email: spam/ not spam<br>
* Tumor: malignant/ benign<br>
Such classification problems are known as binary classification where the predicted variable y can take only two values that is either 0 or 1/ spam or not spam.<br>
In a multi-class classification problem, the predicted variable y can take more than two values like 0,1, or 2.

## Decision Tree:
A decision tree is a graphical representation of all the possible solutions to a decision based on some conditions.<br>
![image](https://user-images.githubusercontent.com/89564985/141346256-63184b7f-0261-4421-8fc9-1ec3a089df8d.png)<br>
For example in the above decision tree, our dataset contains two 1s and five 0s. First, we have to classify it using color features. So we have a condition i.e. "Is it red?" to split our first node. Now we have two options either the Yes branch or the No branch. The data which meet the criteria go down the Yes branch and the ones that don't go down the No branch.<br>
The No branch cannot be split further, but the Yes branch can be split further. Here we use another feature that is whether the number is underlined or not.<br<
Similarly, for this case, we have two branches either Yes or No. The underlined number goes down the Yes branch and the other numbers go down the No branch.<br>
That's it. We have built our decision tree.

## Random Forest:
Random forest is an ensemble model. Ensemble models are those that use more than two or three models in combination for prediction. Ensemble uses two types of methods: Bagging and Boosting.<br>
![image](https://user-images.githubusercontent.com/89564985/141355336-3d36e085-f3af-44a6-b4fb-3831e86756b5.png)<br>
[Image source](https://www.pluralsight.com/guides/ensemble-methods:-bagging-versus-boosting)<br>
Random forest works on the Bagging principle. Bagging chooses a random sample from the dataset.Hence each model (individual decision tree) is generated from the samples known as row sampling. This step of row sampling with replacement is called bootstrap. Each model is trained independently which generates results. The final answer is based on majority voting after combining the results of all the models. This step is known as aggregation.<br>
![image](https://user-images.githubusercontent.com/89564985/141353446-160fba98-a213-4269-b750-9b37872ec7d6.png)<br>
Random forest gives more accurate and stable predictions.<br>

## Summary:
In this task, I have used three different ML models to classify abnormal transactions.<br>
The accuracy score using:
* Logistic Regression is: 0.949
* Random Forest is: 0.934
* Decision Tree is: 0.918

#### References:
* https://towardsdatascience.com/credit-card-fraud-detection-using-machine-learning-python-5b098d4a8edc
* https://www.geeksforgeeks.org/ml-credit-card-fraud-detection/
* https://www.analyticsvidhya.com/blog/2021/06/understanding-random-forest/
* https://towardsdatascience.com/understanding-random-forest-58381e0602d2
