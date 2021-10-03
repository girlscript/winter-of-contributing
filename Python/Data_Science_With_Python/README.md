
# Data Analysis with Scikit-Learn

(Issue #1027)

Scikit-Learn is an open source machine learning library that supports supervised and unsupervised learning.

It provides various tools for model-fitting,data pre-processing,model selection and evaluation.

Scikit-Learn provides dozens of built in machine learning algorithms and models called as **estimators.**

**Machine Learning emphasis on predictive accuracy whereas statistical learning emphasis on model interpretability and uncertainity.**


![Logo](https://images.g2crowd.com/uploads/product/image/social_landscape/social_landscape_77c883b19775c25838d2055fc2e7387e/scikit-learn.png)


## Important applications of Scikit-Learn library
*   **Classification:** Identifying which category an object belongs to. One of the applications of the Classification algorithm is Spam Detection.
*   **Regression:** Predicting an attribute associated with an object. This algorithm can be used to predict the stock prices.


*   **Clustering:** This refers to automatic grouping of similar objects into sets.One of the applications is customer segmentation.
*   **Model Selection:** Comparing,Validating and choosing parameters and models.One of the applications can be improving model efficiency via parameter tuning.


*   **Dimensionality Reduction:** Reducing the number of random variables to consider.This feature can be used to increase the model efficiency.
*   **Pre-Processing:** Feature extraction and normalization.The application can be transforming input data such as text for use with machine learning alogorithms.


## Getting Started with scikit-learn:
In this tutorial we will be using winequality-red dataset from Kaggle, which consists of 1599 samples of red wine.
  
**Machine learning on our dataset:**
1.   Framed as a supervised learning problem.
2.   Predicting the quality of red wine.

(Supervised learning problem because we are trying to learn  the relationship between the data and the outcome. If the data would have been unlabelled,this would have been an unsupervised learning problem.)
## Documentation
Refer the documentation for the complete tutorial in which we will use various predictive models on our dataset.

[Documentation](https://colab.research.google.com/drive/1-RxNjjYiAVJ0G11EhHVk73nQeAJ8OrRV?usp=sharing)


## Observation

After referring the documentation/tutorial we can see that the main goal here is to estimate how well each model is likely to perform on out-of-sample data/future observations.

* If we try to maximize the training accuracy then we will be moving towards creating overly complex models.

Models with overly high training accuracy may not actually do well while making predictions on out-of-sample data.

* Creating an unnecessarily complex model is known as **overfitting**.

* Models that overfit have learned the noise in the data rather than the signal.
![image](https://drive.google.com/uc?id=17fCBUHkv3lOzPqZoJobYQm3VAOA-04Tw)

* The points in the figure above represent observations whereas the black line represents the **decision boundary.**

* The colour of the points represents the response class of the observation.

* The decision boundary is a good boundary for classifying future observations.

* The model that learns the green line as decision boundary is over-fitting the data.

## Train-Test-Split

The following steps are to be followed:

*   Splitting the data set into two pieces,a training set and a testing set.
*   Train the model on the testing set.
*   Test the model on testing set and evaluate the performance of model.

*If we use an optional parameter called **random state** and give it an integer value it will split a given data set the exact same way. In our case we are assigning the value of random state as 42.*

* Training accuracy rises as the model complexity increases.

* Testing accuracy penalizes models that are too complex enough.


  
## Review of Model Evaluation Procedures

* **Motivation:** Need a way to choose between machine learning models.
* Goal is to estimate likely performance of a model on out-of-sample data.
* Initial Idea: Train and Test on same data.

(This may eventually lead to overfitting.)
* Alternative Idea: Train/Test-Split
   
   * *Split the dataset into two pieces,so that the model can be trained and tested on different data.*

   * *Testing accuracy is a better estimate then training accuracy of out-of-sample data.*

   * *But,it provides a high variance estimate since changing which observations to be in testing set can significantly change testing accuracy.*
    **That is why Testing Accuracy is known as high variance estimate.**
  
  This further leads us to **CROSS VALIDATION.**
  
## Cross Validation Recommendations

(Follow the documentation to get a step-by-step tutorial on how to implement Cross-Validation.)

* We will implement the most common format of Cross Validation which is K-Fold. (not to be confused with K of K-Neighbours Classifier)
* K can be any number ; but K = 10 is generally recommended.
* For classfication problems, **Stratified Sampling** is recommended for creating folds.

  Which means that each response should be represented with approximately equal proportions in each of the folds.
  
## How cross validation in scikit-learn helps us to parameter tuning

* The goal in this case is to select the best tuning parameters also known as hyper parameters for KNN classification model.

 We want to select the tuning parameters for KNN,which will produce a model that best generalizes to out of sample data.
  
* We have to find an optimal value of K for KNN which we set using neighbours parameter.

(Thus we will loop through a range of reasonable values of K and for each value use 10 fold Cross Validation to eastimate out-of-sample accuracy.)
## Screenshots
 Here are some of the screenshots from the documentation.

![Screenshot 1](https://drive.google.com/uc?id=1w9qofh00et_iQzDmrCm3ACfcKQl2OiNo)


![Screenshot 2](https://drive.google.com/uc?id=1kJsRrX8_2OHAjtGCAPuOrb5EMjFUylcL)
  


## Acknowledgements
List of Sources Referred:

 - [Youtube Playlist](https://www.youtube.com/playlist?list=PL5-da3qGB5ICeMbQuqbbCOQWcS6OYBr5A)
 - [Official Scikit-Learn page](https://scikit-learn.org/stable/)
 - [Scikit-Learn Tutorial: Tutorialspoint](https://www.tutorialspoint.com/scikit_learn/index.htm)
 - [KNN Classification Model Signal-Noise Image](https://raw.githubusercontent.com/ritchieng/machine-learning-dataschool/master/images/05_overfitting.png)
 - [Develop KNN in Python from Scratch](https://machinelearningmastery.com/wp-content/uploads/2019/10/Develop-k-Nearest-Neighbors-in-Python-From-Scratch.png)
 - [KNN Observation point Image](https://cs231n.github.io/assets/knn.jpeg)
 - [5-Fold Cross Validation](https://www.askpython.com/wp-content/uploads/2020/11/5-Fold-Cross-Validation.jpg)
## 🔗 Links
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/preeti-chaudhari-6403a7187/)
[![twitter](https://img.shields.io/badge/twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://twitter.com/preetiesque)
[![discord](https://img.shields.io/badge/discord-7289DA?style=for-the-badge&logo=discord&logoColor=white)](https://discordapp.com/users/preeti_0448#4178/) 


  