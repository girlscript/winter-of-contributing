<h1> Naïve Bayes Classifier </h1>

<h2>What is a classifier? </h2>
A classifier is a machine learning model that is used to differentiate among various objects based on certain features as applicable to the dataset.

<h2>What is Naïve Bayes Classifier? </h2>
Naive Bayes classifiers are a collection of classification algorithms based on Bayes’ Theorem. It comprises of a collection of algorithms where all of them share a common principle, that is every pair of features being classified is independent of each other.

![image](https://user-images.githubusercontent.com/64693139/133974884-5f8c0586-6473-456d-af33-ebc90b61e8d0.png)

Using Bayes theorem, we can find the probability of event A happening, given that event B has occurred. Here, B is called the evidence and A is called the hypothesis. The assumption made here is that the features are independent. That is presence of one particular feature does not affect the other. Hence it is called naïve.

Consider a fictional dataset that describes the weather conditions for playing a game of golf. Given the weather conditions, each tuple classifies the conditions as fit(“Yes”) or unfit(“No”) for playing golf.
The dataset is divided into two parts, namely, feature matrix and the response vector.

<ul>
  <li>Feature matrix contains all the vectors (rows) of dataset in which each vector consists of the value of dependent features. In below dataset, features are ‘Outlook’, ‘Temperature’, ‘Humidity’ and ‘Windy’.</li>
  <li>Response vector contains the value of class variable (prediction or output) for each row of feature matrix. In below dataset, the class variable name is ‘Play golf’. </li>
</ul>

![image](https://user-images.githubusercontent.com/64693139/133975332-157448ba-418b-478e-bb3c-ee6ea0afdb52.png)

The fundamental Naive Bayes assumption is that each feature is:
<ul>
<li>Independent: We assume that no pair of features are dependent. For example, the temperature being ‘Hot’ has nothing to do with the humidity or the outlook being ‘Rainy’ has no effect on the winds. Hence, the features are assumed to be independent.</li>
<li>Equal: Secondly, each feature is given the same weight (or importance). For example, knowing only temperature and humidity alone can’t predict the outcome accurately. None of the attributes is irrelevant and assumed to be contributing equally to the outcome.</li>
</ul>

Now, with regards to our dataset, we can apply Bayes’ theorem in following way: <br>
![image](https://user-images.githubusercontent.com/64693139/133975680-446c7550-5ac8-45b6-b62f-251bdaabcfb2.png) <br>
where, y is class variable and X is a dependent feature vector (of size n) where: <br>
![image](https://user-images.githubusercontent.com/64693139/133975709-c47fafe1-05e1-413b-b3e5-d2d009f93457.png) <br>
Now, we can obtain the values for each by looking at the dataset and substitute them into the equation. For all entries in the dataset, the denominator does not change, it remains static. Therefore, the denominator can be removed and a proportionality can be introduced.
![image](https://user-images.githubusercontent.com/64693139/133975745-be97d4d8-358c-4c63-9d42-db025701a77c.png) <br>
In our case, the class variable(y) has only two outcomes, yes or no. There could be cases where the classification could be multivariate. Therefore, we need to find the class y with maximum probability. <br>
![image](https://user-images.githubusercontent.com/64693139/133975764-b9d406f8-4cf4-4185-b698-d9f7ff73ff0e.png) <br>
Using the above function, we can obtain the class, given the predictors.
<h2> Working of Naïve Bayes Classifier Example </h2>
<ol>
  <li>Convert the data set into a frequency table.</li>
  <li>Create Likelihood table by finding the probabilities of each feature.
  <li>Now, use Naive Bayesian equation to calculate the posterior probability for each class. The class with the highest posterior probability is the outcome of prediction.</li>
</ol>
<br>

![1](https://user-images.githubusercontent.com/64693139/134051352-b5c2d792-9b9f-4349-8e40-ee89aaaf3fd0.jpg)

![2](https://user-images.githubusercontent.com/64693139/134051388-060f0276-c983-4e9a-8140-4f4bce916746.jpg)

![3](https://user-images.githubusercontent.com/64693139/134051409-1fa4a7be-4af5-48a9-badd-54a020184eac.jpg)

Naive Bayes uses a similar method to predict the probability of different class based on various attributes. This algorithm is mostly used in text classification and with problems having multiple classes.

<h2>Types of Naive Bayes Classifier:</h2>
<ol>
  <li><em>Multinomial Naive Bayes:</em> This is mostly used for document classification problem, i.e. whether a document belongs to the category of sports, politics, technology etc. The features/predictors used by the classifier are the frequency of the words present in the document.</li>
  <li><em>Bernoulli Naive Bayes:</em> This is similar to the multinomial naive bayes but the predictors are Boolean variables. The parameters that we use to predict the class variable take up only values yes or no, for example if a word occurs in the text or not.</li>
  <li><em>Gaussian Naive Bayes:</em> When the predictors take up a continuous value and are not discrete, we assume that these values are sampled from a gaussian distribution.</li>
</ol>

<h2>Pros and Cons of Naive Bayes:</h2>
<b>Pros:</b>
<ul>
  <li>This algorithm works very fast and can easily predict the class of a test dataset.</li>
  <li>You can use it to solve multi-class prediction problems as it’s quite useful with them.</li>
  <li>Naive Bayes classifier performs better than other models with less training data if the assumption of independence of features holds.</li>
  <li>If you have categorical input variables, the Naive Bayes algorithm performs exceptionally well in comparison to numerical variables.</li>
</ul>
<b>Cons:</b>
<ul>
  <li>If your test data set has a categorical variable of a category that wasn’t present in the training data set, the Naive Bayes model will assign it zero probability and won’t be able to make any predictions in this regard. This phenomenon is called ‘Zero Frequency,’ and you’ll have to use a smoothing technique to solve this problem.</li>
  <li>It assumes that all the features are independent. While it might sound great in theory, in real life, you’ll hardly find a set of independent features.</li>
</ul>

<h2>Applications of Naive Bayes Algorithm:</h2>
<ol>
  <li><em>Real time Prediction:</em> Naive Bayes is an eager learning classifier and it is sure fast. Thus, it could be used for making predictions in real time. </li>
  <li><em>Multi class Prediction:</em> This algorithm is also well known for multi class prediction feature. Here we can predict the probability of multiple classes of target variable.</li>
  <li><em>Text classification/ Spam Filtering/ Sentiment Analysis:</em> Naive Bayes classifiers mostly used in text classification, have higher success rate as compared to other algorithms. As a result, it is widely used in Spam filtering and Sentiment Analysis.</li>
  <li><em>Recommendation System:</em> Naive Bayes Classifier and Collaborative Filtering together builds a Recommendation System that uses machine learning and data mining techniques to filter unseen information and predict whether a user would like a given resource or not.</li>
</ol>
<h2>Conclusion</h2>
Naive Bayes algorithms are mostly used in sentiment analysis, spam filtering, recommendation systems etc. They require a small amount of training data to estimate the necessary parameters. They are fast and easy to implement but their biggest disadvantage is that the requirement of predictors to be independent. In most of the real life cases, the predictors are dependent, this sometimes hinders the performance of the classifier.
