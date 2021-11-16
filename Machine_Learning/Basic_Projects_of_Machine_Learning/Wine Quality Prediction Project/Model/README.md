# Project Title: Wine Quality Prediction 🍷

## Abstract/Brief Description about the Project:
Wine is an alcoholic drink that is made up of fermented grapes. There are different types of wine such as red wine and white wine based on different varieties of grapes 🍇. The worldwide distribution of wine is 31 million tonnes.<br>
According to experts, the wine is differentiated according to its smell, flavor, and color, but we are not a wine expert to say that wine is good or bad. So we use Machine Learning to check the wine quality.

## Dataset:
For this task, I have used Kaggle's [Red Wine Quality](https://www.kaggle.com/uciml/red-wine-quality-cortez-et-al-2009) dataset. Each wine in this dataset is given a quality score between 0 and 10. The quality of a wine is determined by 11 input variables: Fixed acidity, Volatile acidity, Citric acid, Residual sugar, Chlorides, Free sulfur dioxide, Total sulfur dioxide, Density, pH, Sulfates, and Alcohol.

## Goal/Aim of the project:
In this task we are going to predict the quality of wine i.e. to predict whether the wine quality is good(1) or bad(0) using three different ML models: RandomForestClassifier, DecisionTreeClassifier, AdaBoostClassifier, and Gradient Boosting and to see which yields the highest accuracy score.

## Libraries used:
* Numpy
* Pandas
* Matplotlib
* Seaborn
* Sklearn

## Data Visualization:
* Countplot:<br>
  ![countplot](https://user-images.githubusercontent.com/89564985/141829763-9106851a-4f43-4779-9bf7-978c7c022625.png)

* Fixed acidity vs quality:<br>
  ![fixed acidity vs quality](https://user-images.githubusercontent.com/89564985/141829948-396c4133-de4c-43e6-af7f-75d90bb9820a.png)

* Volatile acidity vs quality:<br>
  ![volatile acidity vs quality](https://user-images.githubusercontent.com/89564985/141829990-e3a439dd-54e5-4c8e-8a0c-ae065b90fd16.png)

* Sulphates vs quality:<br>
  ![sulphates vs quality](https://user-images.githubusercontent.com/89564985/141830022-5467b9bc-4f16-4bc7-8ba1-61ba318d05dd.png)

* pH vs quality:<br>
  ![pH vs quality](https://user-images.githubusercontent.com/89564985/141830045-00c07dca-fc94-4451-9a8f-398734d6c105.png)

* Correlation:<br>
  ![Correlation](https://user-images.githubusercontent.com/89564985/141830080-f4c407d7-bb08-415d-b574-768030d4f04e.png)

## Model comparison:
I have used four models to predict the quality of wine. Lets take a look at the accuracy score of these models<br>
<table>
  <th>Model name</th>
  <th>Accuracy score</th>
  <tr>
    <td>Random Forest</td>
    <td>0.928</td>
  </tr>
  <tr>
    <td>Decision Tree</td>
    <td>0.909</td>
  </tr>
  <tr>
    <td>AdaBoost</td>
    <td>0.925</td>
  </tr>
  <tr>
    <td>Gradient Boosting</td>
    <td>0.937</td>
  </tr>
</table><br>

![Comparison between the Models](https://user-images.githubusercontent.com/89564985/141903743-efc117d4-ba80-4a46-8004-2bd24cc1c8e2.png)


## Conclusion and Discussion:
In this task, I have used three machine learning models to classify wine quality into good or bad i.e. 1 or 0.<br>
Gradient Boosting algorithm stand out to be the best model among all the models based on the accuracy score.<br>
The accuracy score for:
* Gradient Boosting model is 0.937
* Random Forest model is 0.928
* Decision Tree is 0.909
* AdaBoost model is 0.925.

---

GirlScript Winter of Contributions 2021
