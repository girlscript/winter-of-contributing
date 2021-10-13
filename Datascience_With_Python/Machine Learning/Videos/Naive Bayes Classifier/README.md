## Naive Bayes Classifier

## VIDEO LINK: [Naive Bayes Classifier](https://drive.google.com/file/d/1Es6BE43W_TEwW6cokirDxyCL3fl_0uco/view?usp=sharing)

## What is a classifier?
A classifier is a machine learning model that is used to 
discriminate different objects based on certain features.

## Principle of Naive Bayes Classifier:

A Naive Bayes classifier is a probabilistic machine learning 
model that’s used for classification task. The crux of the 
classifier is based on the Bayes theorem.

## Bayes Theorem:

![image](https://user-images.githubusercontent.com/63282184/137082355-94e9a30f-d3e7-4b40-af06-1466ae312755.png)


Using Bayes theorem, we can find the probability 
of A happening, given that B has occurred. Here, B is the 
evidence and A is the hypothesis. The assumption made here is 
that the predictors/features are independent. That is presence 
of one particular feature does not affect the other. Hence it is 
called naive.

## Example:

Let us take an example to get some better intuition. Consider 
the problem of playing golf. The dataset is represented as below.

![image](https://user-images.githubusercontent.com/63282184/137082442-15ae1d39-22a2-4be0-9b68-8634e7a14f4b.png)


- We classify whether the day is suitable for playing golf, given the 
features of the day. 
- The columns represent these features and 
the rows represent individual entries. 
- If we take the first row of 
the dataset, we can observe that is not suitable for playing golf if 
the outlook is rainy, temperature is hot, humidity is high and it 
is not windy. We make two assumptions here, one as stated 
above we consider that these predictors are independent. 
- That is, if the temperature is hot, it does not necessarily mean that 
the humidity is high. Another assumption made here is that all 
the predictors have an equal effect on the outcome. 
- That is, the 
day being windy does not have more importance in deciding to 
play golf or not.

According to this example, Bayes theorem can be rewritten as:

![image](https://user-images.githubusercontent.com/63282184/137082583-54110ca8-93cf-4d9b-8d68-e5e9e4a1b5a5.png)

The variable y is the class variable(play golf), which represents if 
it is suitable to play golf or not given the conditions. 

Variable X represent the parameters/features.

X is given as

![image](https://user-images.githubusercontent.com/63282184/137082705-5f0ae08d-0e5a-4ce0-bc6c-4f42b0c19c9f.png)

Here x_1,x_2….x_n represent the features, i.e they can be 
mapped to outlook, temperature, humidity and windy. By 
substituting for X and expanding using the chain rule we get

![image](https://user-images.githubusercontent.com/63282184/137082834-7659d794-3973-46de-8de0-615e18a90cde.png)


## Types of Naive Bayes Classifier:

Multinomial Naive Bayes:

This is mostly used for document classification problem, i.e 
whether a document belongs to the category of sports, politics, 
technology etc. The features/predictors used by the classifier are 
the frequency of the words present in the document.

Bernoulli Naive Bayes:

This is similar to the multinomial naive bayes but the predictors 
are boolean variables. The parameters that we use to predict the 
class variable take up only values yes or no, for example if a 
word occurs in the text or not.

Gaussian Naive Bayes:

When the predictors take up a continuous value and are not 
discrete, we assume that these values are sampled from a 
gaussian distribution.

![image](https://user-images.githubusercontent.com/63282184/137082918-57e1139e-9a8b-4c6a-945c-54e9bee4d428.png)

Since the way the values are present in the dataset changes, the 
formula for conditional probability changes to


![image](https://user-images.githubusercontent.com/63282184/137082982-91587c0b-44bf-4f43-ac66-af6d17b767d5.png)



## Conclusion:


Naive Bayes algorithms are mostly used in sentiment analysis, 
spam filtering, recommendation systems etc. They are fast and 
easy to implement but their biggest disadvantage is that the 
requirement of predictors to be independent. In most of the real 
life cases, the predictors are dependent, this hinders the 
performance of the classifier


