# :dart: Application of Machine Learning

## :nazar_amulet: Objective
collect application of AI and connect them with machine learning algorithm

## :nazar_amulet: Introduction
Machine learning is an application of artificial intelligence (AI) that provides systems the ability to automatically learn and improve from experience without being explicitly programmed. Machine learning focuses on the development of computer programs that can access data and use it to learn for themselves.
The process of learning begins with observations or data, such as examples, direct experience, or instruction, in order to look for patterns in data and make better decisions in the future based on the examples that we provide. The primary aim is to allow the computers learn automatically without human intervention or assistance and adjust actions accordingly.

<p align="center">
  <img width="350" height="250" src="https://www.thermofisher.com/blog/connectedlab/wp-content/uploads/sites/14/2020/01/istock-962219860-2-scaled.jpg">
  </p>

Some Applications of ML are:
:stars: House Price Prediction using Regression
:stars: Face mask Detection using CNN
:stars: Parkinson's disease detection using XGBoost Algorithm.
:Stars: Fingerprint Recognition using YOLOV3.

In this documentation , we are gonna se :star: Parkinson's disease Detection using XGBoost Algorithm :star: .

## :nazar_amulet: What is Parkinson's Disease?
A disorder of the central nervous system that affects movement, often including tremors. Nerve cell damage in the brain causes dopamine levels to drop, leading to the symptoms of Parkinson's. Parkinson's often starts with a tremor in one hand. Other symptoms are slow movement, stiffness and loss of balance.

<p align="center">
  <img width="350" height="250" src="https://www.news-medical.net/image.axd?picture=2017%2F4%2FParkinson%27s_disease_brain_680x_-_Designua.jpg">
  </p>


## :nazar_amulet: What is XGBoost Algorithm?
XGBoost is an algorithm that has recently been dominating applied machine learning and Kaggle competitions for structured or tabular data. XGBoost is an implementation of gradient boosted decision trees designed for speed and performance.
The two reasons to use XGBoost are also the two goals of the project:
### :small_orange_diamond: Execution Speed:
Generally, XGBoost is fast. Really fast when compared to other implementations of gradient boosting.
### :small_orange_diamond: Model Performance:
XGBoost dominates structured or tabular datasets on classification and regression predictive modeling problems.

## :nazar_amulet: Implementation:
1. Install following libraries: numpy , pandas , xgboost(from sklearn).
2. Import all the necessary libraries required.
3. Read the csv file into the dataframe.
4. Get the features and labels from the DataFrame (dataset).
5. Initialize a MinMaxScaler.
6. Scale the features to between -1 and 1 to normalize them. The MinMaxScaler transforms features by scaling them to a given range.
7. Use the fit_transform() method fits to the data and then transforms it.
8. Split the dataset into training and testing sets.
9. Initialize an XGBClassifier and train the model.
10. Generate y_pred and calculate the accuracy for the model.

## :nazar_amulet: Output:

The accuracy of model is 

## :nazar_amulet: CONCLUSION:

Parkinson’s disease affects the central newvous system of the brain and has yet no treatment unless it’s detected early. Late detection leads to no treatment and loss of life. Thus its early detection is significant. For early detection of the disease, we utilized machine learning algorithm XGBoost to predict the onset of disease and save many lives.
Nowadays, Machine Learning (ML) is an exciting major of research in computer science and engineering. Also, it is used in various areas and fields in real-life during these days such as finance, CRM, self-driving cars, business intelligence, and so on. In fact, Machine Learning allows software to become accurate in predicting outcomes.

## :nazar_amulet: Contributor

Freny Reji
![LinkedIn](www.linkedin.com/in/freny-reji-2401)
![GitHub](https://github.com/freny24)