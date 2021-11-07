# Latent Variables 

- A latent variable is a random variable which you can't observe neither in training nor in test phase . 
- It is derived from the latin word latēre which means hidden.
- Some phenomenons like incidences,altruism one can’t measure while others like speed or height one can. 
- These variables which you can’t measure on a quantitative scale are called latent variables.
- Let me present a simple scenario which will clear our concepts on latent variables.
- An IT company wants to hire an employee for one of its open position.
- The candidates have the following features.

          1)High School Grade 
          2) University School Grade 
          3)IQ Score 
          4)Phone Interview Score 
- The XYZ company wants to bring some candidates for an onsite interview.

![image](https://user-images.githubusercontent.com/79050917/140643803-0e5a8060-2848-4143-9a4b-3f5a49112689.png)


- They can’t bring all of them because of the expenses involved .So they decided to predict the onsite interview score based on which they will entertain the idea of whether to bring the candidate for an on-site interview or not .They had the previous historical data for performance of on-site candidates .
- It seems a trivial standard regression model where one had to predict the regression score.Well it seems to be not for basically two reasons :
     
      1)Missing values in the dataset- We can fill them with all the trades and tricks we have learnt from Machine Learning foundations but still they will induce an uncertainty which will hamper any probabilistic model drawn from here.
      
      2)Quantifying the uncertainty in predictions-Two persons having same score 50/100 one with some missing data and one with none.We are sure about the one with none missing data that he is going to perform badly owing to low prediction score but we are not so sure about the one with same score but with missing values.He may be good after all .



- Thus we go for probabilistic model of data owing to the above mentioned reasons.
- We draw some random variables and understand the connection between these random variables.
- In our case all the random variables might be connected to each other.
- A High IQ score might affect High School grade , a GPA might affect the phone interview and so on.

![image](https://user-images.githubusercontent.com/79050917/140643918-1ce9dc8d-77ce-418e-8bbb-e48a6a7d48ad.png)


- In this scenario we fail to capture the structure of probabilistic model.So we end up with most flexible and least structured model that we can possibly have.
- To build a probabilistic model we have to assign probability to each and every combination of our observed variables as depicted in Figure.
- There might be exponentially different combinations of all the values of features .
- It is just impractical to treat them as parameters.

![image](https://user-images.githubusercontent.com/79050917/140643982-c60dc8f3-2ced-4c8d-b544-3726750a60d7.png)


**Now to deal with this situation the concept of latent variable has come into existence , where we introduce a latent variable which will be a measure that quantifies the uncertainty .In our case it might be Intelligence.**

The latent variable is direct causation of all the parameters .Now our model is much simpler to work with and we will get the same efficiency without reducing the flexibility of model.


![image](https://user-images.githubusercontent.com/79050917/140644037-330215e0-f409-4530-86c0-b3a79895478e.png)


The joint probability of all the parameters is now the summation of the dependency of the parameters on the latent variable.This way we have reduced the humongous combination of table into a table of 5 conditioned on a latent variable and its prior probability. 

We can further break the conditional probabilities into a simple dependency of each variable on the latent one due to the structure of our model.



**Benefits of using Latent Variable Models:**

i)Fewer Parameters 

ii)Simple Model 

iii)Easy to interpret.


**Drawbacks:**

Harder to train

**Why are latent variables important?**

The use of latent variables can serve to reduce the dimensionality of data. Many observable variables can be aggregated in a model to represent an underlying concept, making it easier to understand the data. 

In this sense, they serve a function similar to that of scientific theories.
