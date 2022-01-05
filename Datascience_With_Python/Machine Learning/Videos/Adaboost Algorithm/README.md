# Adaboost Algorithm
## Video Link: [Adaboost Algorithm](https://drive.google.com/file/d/1-DLtbB2w3ET95OHudTHB_3gYV8ot5h7e/view?usp=sharing)

## What is Boosting ?

Boosting is an ensemble modelling technique that attempts to build a strong classifier from the number of weak classifiers.
- It is done by building a model by using weak models in series. 
- 	Firstly, a model is built from the training data. Then the second model is built which tries to correct the errors present in the first model. 
- 	This procedure is continued and models are added until either the complete training data set is predicted correctly or the maximum number of models are added. 

## what is Adaboosting ?
AdaBoost was the first really successful boosting algorithm developed for the purpose of binary classification. 
-	AdaBoost is short for Adaptive Boosting and is a very popular boosting technique that combines multiple “weak classifiers” into a single “strong classifier”. 
-	It was formulated by Yoav Freund and Robert Schapire. They also won the 2003 Gödel Prize for their work. 

OR

AdaBoost also called Adaptive Boosting is a technique in Machine Learning used as an Ensemble Method. The most common algorithm used with AdaBoost is decision trees with one level that means with Decision trees with only 1 split. These trees are also called Decision Stumps.

![image](https://user-images.githubusercontent.com/63282184/139245358-1ecb0859-dfe6-4206-9210-7c2bb2adfcad.png)

What this algorithm does is that it builds a model and gives equal weights to all the data points. It then assigns higher weights to points that are wrongly classified. Now all the points which have higher weights are given more importance in the next model. It will keep training models until and unless a lowe error is received.

![image](https://user-images.githubusercontent.com/63282184/139245413-88b37397-761d-454f-b1ba-11cdacfeb339.png)


### Algorithm: 
 
1.	Initialise the dataset and assign equal weight to each of the data point.

2.	Provide this as input to the model and identify the wrongly classified data points.

3.	Increase the weight of the wrongly classified data points.



4.	             if (got required results) 

                          Goto step 5 

                 else 

                          Goto step 2 

5.	End


## Example:

![image](https://user-images.githubusercontent.com/63282184/139177318-4bacf77d-9d65-4f8f-abfd-eccf37fcf439.png)






## Explanation: 

The above diagram explains the AdaBoost algorithm in a very simple way. Let’s try to understand it in a stepwise process: 

•	B1 consists of 10 data points which consist of two types namely plus(+) and minus(-) and 5 of which are plus(+) and the other 5 are minus(-) and each one has been assigned equal weight initially. The first model tries to classify the data points and generates a vertical separator line but it wrongly classifies 3 plus(+) as minus(-).

•	B2 consists of the 10 data points from the previous model in which the 3 wrongly classified plus(+) are weighted more so that the current model tries more to classify these pluses(+) correctly. This model generates a vertical separator line that correctly classifies the previously wrongly classified pluses(+) but in this attempt, it wrongly classifies two minuses(-).

•	B3 consists of the 10 data points from the previous model in which the 3 wrongly classified minus(-) are weighted more so that the current model tries more to classify these minuses(-) correctly. This model generates a horizontal separator line that correctly classifies the previously wrongly classified minuses(-).

•	B4 combines together B1, B2, and B3 in order to build a strong prediction model which is much better than any individual model used.


## Advantages of Adaboost
- Adaboost is less prone to overfitting as the input parameters are not jointly optimized. 
- The accuracy of weak classifiers can be improved by using Adaboost. 
- Nowadays, Adaboost is being used to classify text and images rather than binary classification problems.


## Disadvantage of Adaboost
- It needs a quality dataset. 
- Noisy data and outliers have to be avoided before adopting an Adaboost algorithm.

## AdaBoost Limitation

- The resulting “flat” probability distribution of AdaBoost is its main limitation. Depending on your use case, it may not be an issue for you. Say if you only care about assigning the correct class, then the prediction probability is less relevant.
- However, if you care more about the probability itself, you may want to use Random Forest, which provides you with probability predictions such as 9% or 78%, as shown in the rain prediction modeling above. This is in contrast to AdaBoost, where all predictions are much closer to 50%.
