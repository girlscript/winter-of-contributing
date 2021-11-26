# Bagging and Boosting

## Video Link: [Bagging and Boosting](https://drive.google.com/file/d/17nIfQL9MEU0WBc2RUYopjQ3Rh7zY5rek/view?usp=sharing)

- As we know, Ensemble learning helps improve machine learning results by combining several models. This approach allows the production of better predictive performance compared to a single model.
-  Basic idea is to learn a set of classifiers (experts) and to allow them to vote. Bagging and Boosting are two types of Ensemble Learning. These two decrease the variance of a single estimate as they combine several estimates from different models.
-   So the result may be a model with higher stability. Let’s understand these two terms in a glimpse.

**Bagging:** It is a homogeneous weak learners’ model that learns from each other independently in parallel and combines them for determining the model average.

**Boosting:** It is also a homogeneous weak learners’ model but works differently from Bagging. In this model, learners learn sequentially and adaptively to improve model predictions of a learning algorithm.

## Bagging
Bootstrap Aggregating, also knows as bagging, is a machine learning ensemble meta-algorithm designed to improve the stability and accuracy of machine learning algorithms used in statistical classification and regression. It decreases the variance and helps to avoid overfitting. It is usually applied to decision tree methods. Bagging is a special case of the model averaging approach. 

### Implementation Steps of Bagging

```
Step 1: Multiple subsets are created from the original data set with equal tuples, selecting observations with replacement.
Step 2: A base model is created on each of these subsets.
Step 3: Each model is learned in parallel from each training set and independent of each other.
Step 4: The final predictions are determined by combining the predictions from all the models.

```

![image](https://user-images.githubusercontent.com/63282184/143377777-62bbe2a4-de13-4123-8edc-330a3285e6a5.png)

### Example of Bagging

The Random Forest model uses Bagging, where decision tree models with higher variance are present. It makes random feature selection to grow trees. Several random trees make a Random Forest.

## Boosting
Boosting is an ensemble modeling technique that attempts to build a strong classifier from the number of weak classifiers. It is done by building a model by using weak models in series. Firstly, a model is built from the training data. Then the second model is built which tries to correct the errors present in the first model. This procedure is continued and models are added until either the complete training data set is predicted correctly or the maximum number of models are added.


```
Algorithm:

Initialise the dataset and assign equal weight to each of the data point.
Provide this as input to the model and identify the wrongly classified data points.
Increase the weight of the wrongly classified data points.
if (got required results)
  Goto step 5
else
  Goto step 2
End

```

![image](https://user-images.githubusercontent.com/63282184/143377873-642f6dd9-9346-48da-9380-9884abcd4e5b.png)



## Similarities Between Bagging and Boosting
Bagging and Boosting, both being the commonly used methods, have a universal similarity of being classified as ensemble methods. Here we will explain the similarities between them.

- Both are ensemble methods to get N learners from 1 learner.
- Both generate several training data sets by random sampling.
- Both make the final decision by averaging the N learners (or taking the majority of them i.e Majority Voting).
- Both are good at reducing variance and provide higher stability.

## Differences 

![image](https://user-images.githubusercontent.com/63282184/143377958-d9ea9bc8-1d92-499c-b958-e2660bdb81ee.png)

## Conclusive Summary
Now that we have thoroughly described the concepts of Bagging and Boosting, we have arrived at the end of the article and can conclude how both are equally important in Data Science and where to be applied in a model depends on the sets of data given, their simulation and the given circumstances. Thus, on the one hand, in a Random Forest model, Bagging is used, and the AdaBoost model implies the Boosting algorithm.

A machine learning model’s performance is calculated by comparing its training accuracy with validation accuracy, which is achieved by splitting the data into two sets: the training set and validation set. The training set is used to train the model, and the validation set is used for evaluation. 
