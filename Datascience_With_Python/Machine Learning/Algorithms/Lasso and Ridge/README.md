**Ridge and Lasso are regresssion techniques used to reduce model complexity (the number of predictors) and prevent over-fitting which may result from simple Linear Regression.**

![cover](https://user-images.githubusercontent.com/81156510/143045988-944e0420-0e30-4559-bae5-cf353c5ab2e5.png)

# Ridge

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

# Lasso

- **Definition:** It is a type of linear regression that uses shrinkage. Shrinkage is where data values are shrunk towards a central point, like the mean.

- **Abbreavation:** Least Absoulte Shrinkage and Selection Operator

- It adds penalty for the non-zero coefficients as well and also penalizes the sum of their absolute value, hence it comes under the category of `L1 Regularisation`

- L<sub>lasso</sub> (β) = Σ(y<sub>i</sub> - β x'<sub>i</sub>)<sup>2</sup> + λ (Σ β<sub>k</sub>)
  - here λ - Regularisation Penalty
    - as λ -> ∞ then, β = 0

## Overall Comparsion

| Lasso | Ridge       |
| :--------------: | :--------------: |
| Neither is overall better | Neither is overall better |
| Can bring co-efficients to zero | It cannot |
| One has large correaltion value, whereas others are almost zeroed | Co-efficients are almost similar |
| Used when there are small number of parameters to examine | Used when there are large number of parameters to examine |

**References:**

1. [Meduim-Blog](https://towardsdatascience.com/ridge-and-lasso-regression-a-complete-guide-with-python-scikit-learn-e20e34bcbf0b)

1. [AnalyticsVidhya-Blog](https://www.analyticsvidhya.com/blog/2017/06/a-comprehensive-guide-for-linear-ridge-and-lasso-regression/)
