# **Naive Bayes Algorithm**

Naive Bayes Algorithm is a supervised learning technique which is based on **Baye's Theorem** and is used to solve classification porblems. It is the simple yet most powerful algorithm to solve classfication problems which helps in building fast machine learning models than can make quick predictions.  
Some of it's popular applications are **spam filtering**, **text classification** and **weather prediction**.  
It is also sometimes called as **Naive Bayes Classifier**.
<br />  
![Nive](https://miro.medium.com/max/957/1*eq8jCobknKvbSIfwTzBMZQ.jpeg) 
<br />

Since now we have a basic understanding what is *Naive Bayes*. Lets see why is it called *Naive Bayes*.
<br />

## **Why is it called Naive Bayes** ?
<br > It is made up of 2 words **Naive** and **Bayes**. Lets understand those words in detail. 

* **Naive** - This algorithm concludes that all variables or features are independent of each other. According to this algorithm the existence or absence of a variable does not impact the the existence or absence of any other variable. For example, a fruit may be observed as an apple if it is red,round and about 4" in diameter. Even if all these features are interealated to each other, Naive Bayes classifier will ignore those and and observe them independently contributing to the probability of the fruit as an apple.

* **Bayes** - This algo works on the principle of conditional probability given by baye's theorem.

So before moving further lets look a bit what is bayes theorem and what is its formula. 

## **Bayes' Theorem**
<br />Bayes theorem theorem give us the probability of an event A, given that an event B has already occured. It is used to determine the probability of an event based on prior knowledge of an event related to the previous event.  
Formula for the theorem is given below:  <br />

![Bayes_Theorem](https://cdn.hswstatic.com/gif/bayes-theorem-2.jpg)

> P(A | B) => Probability of event A given that event B has already happened  
P(B | A) => Probability of event B given that event A has already happened. <br >  

## **Working of Naive Bayes' Classifier**
<br />Now lets understand the working of the Naive Bayes Classifier with the help of some examples.  

* First, we are taking the example for weather prediction and on the basis of that prediction we will predict whether we could play on a certain day or not. So, in order to predict this we should do the folllowing things:<br/>

    1. We need to convert the given dataset into the frequency table.

    2. Generating likelihood table

    3. And finally, using bayes' theorem to calculate the probability<br >  



### **Dataset** :
<br>

|Weather|Play|
|-------|----|
|Rainy  | Yes|
|Sunny  | Yes|
|Overcast  | Yes|
|Overcast  | Yes|
|Sunny  | Yes|
|Rainy  | Yes|
|Sunny  | Yes|
|Overcast  | Yes|
|Rainy  | Yes|
|Sunny  | Yes|
|Sunny  | Yes|
|Rainy  | Yes|
|Overcast  | Yes|
|Overcast  | Yes|
<br>  
<br>Now lets make the frequency table:

### **Frequency Table**
<br>

|Weather|Yes|No|
|-------|---|--|
|Overcast| 5 | 0 |
|Rainy| 2 | 2 |
|Sunny| 3 | 2 |
|Total| 10 | 4 |

<br>

### **Likelihood Table**
<br>

|Weather|No|Yes| Overall|
|-------|--|---|--|
|Overcast|0|5|5/14=0.35|
|Sunny|2|3|5/14=0.35|
|Rainy|2|2|4/14=0.29|
|All|4/14=0.29|10/14=0.71|

<br>


Now Applying **Bayes Theorem** :

> P ( Yes | Sunny ) =  P ( Sunny | Yes ) * P ( Yes ) / P ( Sunny )  
P ( Sunny | Yes ) =  3 / 10 =  0.3  
P ( Sunny ) =  0.35  
P ( Yes ) = 0.71  
So P ( Yes | Sunny ) = 0.3 * 0.71 / 0.35 = 0.60  
P ( No | Sunny ) =  P ( Sunny | No ) * P ( No ) / P ( Sunny )  
P ( Sunny | No ) =  2 / 4 = 0.5  
P( No ) =  0.29  
P ( Sunny ) =  0.35  
So P ( No | Sunny ) = 0.5 * 0.29 / 0.35 = 0.41  
So as we can see from the above calculation that **P ( Yes | Sunny ) > P ( No | Sunny )**  

**Hence on a Sunny day, Player can play the game**.
<br>
<br>


## **Types of Naive Bayes Algorithm**
<br >
Now since we know the working of the Naive Bayes and why and where it is used, now lets understand some of its different types. These are of 3 types:
<br ><br>

1. **Gaussian Naive Bayes**: When chracteristics values are continuos in nature then an assumption is made that the values linked in each class are dispersed according to Gaussian that is Noraml distribution

2. **Multinomial Naive Bayes**: Multinomial Naive Bayes is favoured to use on data that is multinomial distributed. It is widely used in text classification in NLP. Each event in text classification constitutes the presence of word in document. This is what is used in spam filtering. Multinomial here means when there are lots of terms, for example in case of spam filtering it has to take a whole lot of words into regard before predicting whether a mail is spam or not.

3. **Bernoulli Naive Bayes**: When data is dispensed according to the multivariate Bernoulli distributions then Bernoulli Naive Bayes is used. That means there exist multiple features but each one is assumed to contain a binary value. So, it requires features to be binary-valued.

## **Advantages**

There are many other algorithms so why do we have to use *Naive Bayes* over them. Here are some advantages:

* Simple and easy to implement
* Needs less training data
* can handle both continuous and discrete data
* It is fast, thats why it is used in real-time predictions like spam filter, predictions on referrals, news classification and many more.

## **Disadvantages**

Even though it has lot of advantages and is very fast but still there are some disadvantages:

* Since *Naive Bayes* considers that all features or variables are independent of each other, therefore it would never be able to understand the relationship between those variables. 

## **Applications of Naive Bayes**


* **Real-time Prediction**:  Being a fast learning algorithm can be used to make predictions in real-time as well.

* **MultiClass Classification**:  It can be used for multi-class classification problems also.

* **Text Classification**: As it has shown good results in predicting multi-class classification so it has more success rates compared to all other algorithms. As a result, it is majorly used in sentiment analysis & spam detection.

<br><br>

## **Referrences**

Below are some resources where you can even learn how to implement Naive Bayes algorithm.

* https://www.javatpoint.com/machine-learning-naive-bayes-classifier

* https://www.analyticsvidhya.com/blog/2017/09/naive-bayes-explained/

* https://www.youtube.com/watch?v=O2L2Uv9pdDA
