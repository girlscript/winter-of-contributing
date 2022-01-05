# **Disaster Tweets Prediction**
<a href="https://www.kaggle.com/c/nlp-getting-started/data"> Click here to access Dataset from Kaggle

## **What is Classification?**

The Classification algorithm is a Supervised Learning technique that is used to identify the category of new observations on the basis of training data. 
  
In Classification, a program learns from the given dataset or observations and then classifies new observation into a number of classes or groups. Such as, Yes or No, 0 or 1, Spam or Not Spam, cat or dog, etc. Classes can be called as targets/labels or categories.
  
The best example of an ML classification algorithm is Email Spam Detector.

The main goal of the Classification algorithm is to identify the category of a given dataset, and these algorithms are mainly used to predict the output for the categorical data.

Classification algorithms can be better understood using the below diagram. In the below diagram, there are two classes, class A and Class B. These classes have features that are similar to each other and dissimilar to other classes.

![image](https://user-images.githubusercontent.com/62233992/142577145-98cfe492-6a0c-48d7-838f-c0db0e004503.png)

## **Types of ML Classification Algorithms:**
Classification Algorithms can be further divided into the Mainly two category:

1. **Linear Models**
    * Logistic Regression
    * Support Vector Machines
  
2. **Non-linear Models**
    * K-Nearest Neighbours
    * Kernel SVM
    * Naïve Bayes
    * Decision Tree Classification
    * Random Forest Classification
  
## **Competition Description**
  
Twitter has become an important communication channel in times of emergency.
  
The ubiquitousness of smartphones enables people to announce an emergency they’re observing in real-time. Because of this, more agencies are interested in programatically monitoring Twitter (i.e. disaster relief organizations and news agencies).

But, it’s not always clear whether a person’s words are actually announcing a disaster. Take this example:
  
The author explicitly uses the word “ABLAZE” but means it metaphorically. This is clear to a human right away, especially with the visual aid. But it’s less clear to a machine.

In this competition, you’re challenged to build a machine learning model that predicts which Tweets are about real disasters and which one’s aren’t. You’ll have access to a dataset of 10,000 tweets that were hand classified. If this is your first time working on an NLP problem, we've created a quick tutorial to get you up and running.

##  **The Goal**

In this competition, you’re challenged to build a machine learning model that predicts which Tweets are about real disasters and which one’s aren’t.
  
You are predicting whether a given tweet is about a real disaster or not. If so, predict a 1. If not, predict a 0.

## Workflow
  
  ### 1. Importing the libraries
  ### 2. Importing the dataset
  
  The Training and Test dataset are imported... Also, a dataset_total is created consisting of both training and test set to apply the preprocessing techniques to the whole dataset...
  
  ### 3. Data Preprocessing
   
  To figure out the different preprocessing techniques to be applied on the dataset, we first have a look at the dataset
  
![image](https://user-images.githubusercontent.com/62233992/142578358-e3287b27-e66e-4e1f-9bee-b5e9818df47a.png)
  
  * Class Distribution
  
  Before we begin with anything else,let's check the class distribution. There are only two classes 0 and 1.
  
  ![image](https://user-images.githubusercontent.com/62233992/142579096-799c0cb5-0fe0-4d2d-8640-4c86de7964e3.png)

  There is a class distribution. There are more tweets with class 0 ( No disaster) than class 1 ( disaster tweets).
  
  * Exploratory Data Analysis of tweets
  
  First,we will do very basic analysis,that is character level,word level and sentence level analysis.

  **Number of characters in tweets**
  
  ![image](https://user-images.githubusercontent.com/62233992/142579779-44def7d3-8937-4d9f-8935-aebf1a843353.png)

  The distribution of both seems to be almost same. 120 t0 140 characters in a tweet are the most common among both.
  
  **Number of words in a tweet**
  
  ![image](https://user-images.githubusercontent.com/62233992/142579934-ca851b31-e6d3-4335-bd27-b7937a9fb2ee.png)

  **Common stopwords in tweets**
  
  First we will analyze tweets with class 0.
  
  ![image](https://user-images.githubusercontent.com/62233992/142580439-377eb1bf-ca79-4883-86ce-bf30d46c464d.png)

  Now,we will analyze tweets with class 1.
  
  ![image](https://user-images.githubusercontent.com/62233992/142580516-9f76eaec-5a14-444a-968b-ce07dca841d1.png)

  In both of them,"the" dominates which is followed by "a" in class 0 and "in" in class 1.
  
  ### 4. Data Cleaning
  
  As we know,twitter tweets always have to be cleaned before we go onto modelling. So we will do some basic cleaning such as spelling correction,removing punctuations,removing html tags and emojis etc. So let's start.
  
  1) Removing urls
  2) Removing HTML tags
  3) Romoving Emojis
  4) Removing punctuations
  5) Spelling Correction
  
  * Preparing dataset
  
  The dataset_total consisting of both training and test set is divided into training and test set. y_train is obtained from the original "dataset" because it consists of plain numerical value and did not require any preprocessing.
  
  ### 5. Applying the models:

  * **GloVe for Vectorization**
  
  GloVe stands for global vectors for word representation. It is an unsupervised learning algorithm developed by Stanford for generating word embeddings by aggregating global word-word co-occurrence matrix from a corpus. The resulting embeddings show interesting linear substructures of the word in vector space.

  Here we will use GloVe pretrained corpus model to represent our words.It is available in 3 varieties :50D ,100D and 200 Dimentional.We will try 100 D here.
  
  Baseline Model:
  
  ![image](https://user-images.githubusercontent.com/62233992/142581705-49fe4da0-8c83-490a-935e-2327bec17b80.png)

  ![image](https://user-images.githubusercontent.com/62233992/142581744-88e59fc7-6a58-4db9-8690-5167a754fc22.png)
  
  ### 6. Evaluating model score:
  
  After the 15th Epoch we have the got the accuracy as 0.7665 and val_loss as 0.4885.

  Since, the value of val_loss is gradually decreasing this proves that our model is performing good and that it is has a good accuracy.
  
  ![image](https://user-images.githubusercontent.com/62233992/142748417-134963ae-7661-439b-90dc-db27b24354d3.png)

  ### 7. Making our Submission:
  
  Various classification models have been successfully applied on the given dataset...

  The different models can be evaluated using F1 between the predicted and expected answers
  
  The submission dataframe is as given below and contains all for each ID in the test set, we must predict 1 if the tweet is describing a real disaster, and 0 otherwise. Our submission dataframe is:
  
  ![image](https://user-images.githubusercontent.com/62233992/142584758-1d13c06a-4091-4af8-b952-3fe73b3be5a4.png)
  
## Conclusion!
  
  Various classification models have been successfully applied on the given dataset...
  
  The different models can be evaluated using F1 between the predicted and expected answers
  
  F1 is calculated as follows:
  
  ![image](https://user-images.githubusercontent.com/62233992/142583358-6bf8f257-811e-436a-ab5e-2558987893d2.png)

  where, 
  
  ![image](https://user-images.githubusercontent.com/62233992/142583387-3fc69aea-e772-4a2a-bcea-c6e515d43aaa.png)
  
  
      - True Positive [TP] = your prediction is 1, and the ground truth is also 1 - you predicted a positive and that's true!
      - False Positive [FP] = your prediction is 1, and the ground truth is 0 - you predicted a positive, and that's false.
      - False Negative [FN] = your prediction is 0, and the ground truth is 1 - you predicted a negative, and that's false.
  
  The final results are predicted using our Model because of it has the best accuracy of 0.7665 which is pretty good.
  

  The submission dataframe is as given below and contains all for each ID in the test set, we must predict 1 if the tweet is describing a real disaster, and 0 otherwise. Our submission dataframe is: 
  
![image](https://user-images.githubusercontent.com/62233992/142584758-1d13c06a-4091-4af8-b952-3fe73b3be5a4.png)

  
## References
  
  For definitions:

* [What is GloVe? - Medium](https://medium.com/analytics-vidhya/word-vectorization-using-glove-76919685ee0b)
* [Classification Algorithm in Machine Learning - Javatpoint](https://www.javatpoint.com/classification-algorithm-in-machine-learning)
