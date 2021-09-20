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

Now, with regards to our dataset, we can apply Bayes’ theorem in following way:
![image](https://user-images.githubusercontent.com/64693139/133975680-446c7550-5ac8-45b6-b62f-251bdaabcfb2.png) <br>
where, y is class variable and X is a dependent feature vector (of size n) where:
![image](https://user-images.githubusercontent.com/64693139/133975709-c47fafe1-05e1-413b-b3e5-d2d009f93457.png) <br>
Now, we can obtain the values for each by looking at the dataset and substitute them into the equation. For all entries in the dataset, the denominator does not change, it remains static. Therefore, the denominator can be removed and a proportionality can be introduced.
![image](https://user-images.githubusercontent.com/64693139/133975745-be97d4d8-358c-4c63-9d42-db025701a77c.png) <br>
In our case, the class variable(y) has only two outcomes, yes or no. There could be cases where the classification could be multivariate. Therefore, we need to find the class y with maximum probability. <br>
![image](https://user-images.githubusercontent.com/64693139/133975764-b9d406f8-4cf4-4185-b698-d9f7ff73ff0e.png) <br>
Using the above function, we can obtain the class, given the predictors.
<h2> Working of Naïve Bayes Classifier Example </h2>
<ol>
  <li>Convert the data set into a frequency table.</li>
  <li>Create Likelihood table by finding the probabilities like Overcast probability = 0.29 and probability of playing is 0.64.</li>
  <li>Now, use Naive Bayesian equation to calculate the posterior probability for each class. The class with the highest posterior probability is the outcome of prediction.</li>
</ol>
<br>
  ![image](https://user-images.githubusercontent.com/64693139/133976742-b0b3d8d5-165c-4ece-83dc-3ff4b7b81849.png)

  
