# 🎯 Lasso and Ridge Regression

**Ridge and Lasso are regresssion techniques used to reduce model complexity (the number of predictors) and prevent over-fitting which may result from simple Linear Regression.**

<!-- Insert image here -->
![cover](https://user-images.githubusercontent.com/81156510/143574615-d8254466-3c6f-4120-9456-4852043fa0ff.png)

## 🧿Ridge

<!-- Insert image here -->
![ridge](https://user-images.githubusercontent.com/81156510/143574736-dbf874da-46c0-4811-9bef-3b4c9c33fa0a.png)

- **Definiton:** It is a way to create a predictive and explonatory model when the number of predictor variables in a set exceeds the number of observations, or when a data set has multicollinearity (correlations between predictor variables).

- It penalizes sum of squared coefficients, hence it comes under the category of `L2 Regularisation`

- They penalize the size of regression coffecient based on L<sup>2</sup> norm:

- L<sub>ridge</sub> (β) = Σ(y<sub>i</sub> - β x'<sub>i</sub>)<sup>2</sup> + λ (Σ β<sup>2</sup><sub>k</sub>)

  - here λ - Regularisation Penalty
    - as λ -> ∞ then, β -> 0
    - as λ -> 0 then, β<sub>ridge</sub> -> β<sub>OLS</sub> (**OLS:** Ordinary Least Squares - Method to evaluate regression coefficients)

- Tuning parameter serves λ to control the relative impact on these two terms on the regression coefficients estimates.

- Bias-Variance Trade-Off:

  - as λ >> 0 then, variance decreases and bias increases.

- Selecting a good value of λ is critical and to make the task easier we use cross-validation for this.

## 🧿Lasso
![lasso](https://user-images.githubusercontent.com/81156510/143574649-a48b34be-97bb-440a-8976-bef940799067.png)

<!-- Insert image here -->

- **Definition:** It is a type of linear regression that uses shrinkage. Shrinkage is where data values are shrunk towards a central point, like the mean.

- **Abbreavation:** Least Absoulte Shrinkage and Selection Operator

- It adds penalty for the non-zero coefficients as well and also penalizes the sum of their absolute value, hence it comes under the category of `L1 Regularisation`

- L<sub>lasso</sub> (β) = Σ(y<sub>i</sub> - β x'<sub>i</sub>)<sup>2</sup> + λ (Σ |β<sub>k</sub>|)
  - here λ - Regularisation Penalty
    - as λ -> ∞ then, β = 0

# ⬇️Workflow (Notebook)

- Importing Libraries
- Importing Dataset
- Data Visualisation
- Data Preprocessing
  - Scaling (raw_data)
- Model Building
  - Lasso
    - Lasso - Predict
  - Ridge
    - Ridge - Predict
  - With and Without Regularisation
- Summary (Conclusion)

# 🧑‍💻Impementation
*In this dataset we 2 columns namely age(years) and height (inches) of 100 rows. Here we have to predict the height of the given person provided the age. It is implemented in 2 different ways:*
  
  *1. Directly using the modules from Sklearn Library.*
  
  *2. Using the help of a function to train parmaters to get better predictions*

- We can see from the plots that Untrained Predictions (linear regression) are very poor compared to Trained Predictions (Regularisation).

<!-- Insert image here -->
![untrained_predictions](https://user-images.githubusercontent.com/81156510/143675311-8e78f525-77f0-427f-83eb-7029d6b1bbd6.png)

<!-- Insert image here -->
![trained_predictions](https://user-images.githubusercontent.com/81156510/143675316-e12ea18a-7a75-490a-9085-29f10d91f0bd.png)

- Similar results are obtained through using respective Modules from the Sklearn Library.

# 🏹Overall Comparsion

| Lasso | Ridge       |
| :--------------: | :--------------: |
| Neither is overall better | Neither is overall better |
| Can bring co-efficients to zero | It cannot |
| One has large correaltion value, whereas others are almost zeroed | Co-efficients are almost similar |
| Used when there are small number of parameters to examine | Used when there are large number of parameters to examine |

## 🙅‍♂️Consequences With and Without Regularisation
> Consider that we have a Overfitting Model (works well on train data and fails on test data) if we feed the same trained data in the model again, then value ŷ will be very close (sometimes same) to y<sub>true</sub>. Hence we tend to choose a less accurate value of λ (uses regularisation) i.e. less perfect so it fits both train and test data with good score.

> Weights for different training data will be more or less the same — therefore model variance is reduced (in contrast, if we shifted our weights randomly each time just to move away from the overfitted solution, the variance would not change).

# Conclusion
- It is recommended to use simple Linear Regression wherever possible.
- Use Regularisation Algorithms where Linear Regression doesn't come to prove handy or provides unexpected results.
- Use Lasso when: need to perform feature selection
- Use Ridge when: have collinear/codependent features

**📚References:**

1. [Meduim-Blog](https://towardsdatascience.com/ridge-and-lasso-regression-a-complete-guide-with-python-scikit-learn-e20e34bcbf0b)

1. [AnalyticsVidhya-Blog](https://www.analyticsvidhya.com/blog/2017/06/a-comprehensive-guide-for-linear-ridge-and-lasso-regression/)

1. [Youtube Video](https://youtu.be/VqKq78PVO9g)
