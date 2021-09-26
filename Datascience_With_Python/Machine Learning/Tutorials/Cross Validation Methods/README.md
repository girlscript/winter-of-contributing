## Cross-validation Methods

Data mining is a step in data science where we apply machine learning models to train the data. After applying machine learning models we need to validate in order to validate we use cross-validation methods which help to understand the accuracy and loss function of the model.

**What is Cross-validation?**

Cross-validation is a statistical method used to estimate the or accuracy of machine learning models. It is also to avoid overfitting of the model.

![Capture_4](https://user-images.githubusercontent.com/79050917/134687595-e85170ad-7cc7-46ac-b902-005feca2c13a.PNG)

**Purpose of cross-validation?**

The purpose of cross-validation is to test the ability of a machine learning model to predict new data. It is also used to flag problems like overfitting or selection bias and gives insights on how the model will generalize to an independent dataset.
 
**Types of cross-validation**
- Holdout Method
- K-Fold Cross-Validation
- Stratified K-Fold Cross-Validation
- Leave-P-Out Cross-Validation

**Holdout Method:**

The holdout technique is an exhaustive cross-validation method, that randomly splits the dataset into train and test data depending on data analysis.

![Capture_1](https://user-images.githubusercontent.com/79050917/134687703-1e3f46fd-90e4-404f-8c35-872640223352.PNG)


**K-Fold Cross-Validation:**

In k-fold cross-validation, the original dataset is equally partitioned into k subparts or folds. Out of the k-folds or groups, for each iteration, one group is selected as validation data, and the remaining (k-1) groups are selected as training data. The process is repeated for k times until each group is treated as validation and remaining as training data.

![Capture_2](https://user-images.githubusercontent.com/79050917/134687745-896932f5-cb39-45f8-8464-1396db04676b.PNG)


**Stratified K-Fold Cross-Validation:**

Stratified k-fold cross-validation solved the problem of an imbalanced dataset.In Stratified k-fold cross-validation, the dataset is partitioned into k groups or folds such that the validation data has an equal number of instances of the target class label.

![Capture_3](https://user-images.githubusercontent.com/79050917/134687777-6e5cb582-013e-47be-9c0e-ba63056ad558.PNG)


**Leave-P-Out Cross-Validation:**

Leave p-out cross-validation (LpOCV) is an exhaustive cross-validation technique, that involves using p-observation as validation data, and remaining data is used to train the model. This is repeated in all ways to cut the original sample on a validation set of p observations and a training set.

**Advantages of Cross-Validation:**
 - Reduces Overfitting
 - Hyperparameter Tuning
 
**Disadvantages of Cross-Validation:**
 
- Increases Training Time
 
- Needs Expensive Computation



**Code:**
![Capture_6](https://user-images.githubusercontent.com/79050917/134779713-4d31a27f-f66b-410b-81ba-2f64c0c1f8f2.PNG)
![Capture_7](https://user-images.githubusercontent.com/79050917/134779717-697ebc63-8937-4805-a6aa-b2471cfdbac3.PNG)

**Conclusion:**

Cross-Validation is a very useful tool of a data scientist for assessing the effectiveness of the model, especially for tackling overfitting and underfitting.


