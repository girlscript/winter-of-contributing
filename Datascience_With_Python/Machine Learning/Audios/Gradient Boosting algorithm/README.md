## Gradient Boosting algorithm
## [Click here to listen the audio](https://drive.google.com/file/d/12Jj_ni9M4F68W09CStEuGTCD4W5iOqBn/view?usp=sharing)

- Gradient boosting algorithm is one of the most powerful algorithms in the field of machine learning. 
- As we know that the errors in machine learning algorithms are broadly classified into two categories i.e. Bias Error and Variance Error. 
- As gradient boosting is one of the boosting algorithms it is used to minimize bias error of the model.
- Unlike, Adaboosting algorithm, the base estimator in the gradient boosting algorithm cannot be mentioned by us. 
- The base estimator for the Gradient Boost algorithm is fixed and i.e. Decision Stump. Like, AdaBoost, we can tune the n_estimator of the gradient boosting algorithm. 
- However, if we do not mention the value of n_estimator, the default value of n_estimator for this algorithm is 100.

![image](https://user-images.githubusercontent.com/79050917/143843489-110b160c-4ccc-456f-9926-0fee6862391a.png)

**How does gradient boosting algorithm work:**
- Gradient boosting is a type of machine learning boosting. 
- It relies on the intuition that the best possible next model, when combined with previous models, minimizes the overall prediction error.
- If a small change in the prediction for a case causes no change in error, then next target outcome of the case is zero.

![image](https://user-images.githubusercontent.com/79050917/143843540-6ef94bce-0158-452d-94d9-11534340361c.png)

**Advantages:**
- It supports different loss functions.
- It works well with interactions.

**Disadvantages**
- While boosting can increase the accuracy of a base learner, such as a decision tree or linear regression, it sacrifices intelligibility and interpretability.
- Furthermore, its implementation may be more difficult due to the higher computational demand.

![image](https://user-images.githubusercontent.com/79050917/143843569-46e0664a-da71-488d-9954-b36ffc5f081b.png)

**Overview:**
- Gradient boosting is a machine learning technique used in regression and classification tasks. 
- It gives a prediction model in the form of an ensemble of weak prediction models, which are typically decision trees.
- When a decision tree is the weak learner, the resulting algorithm is called gradient-boosted trees; it usually outperforms random forest.
