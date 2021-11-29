# Step Wise Regression

## Video Link : [Step Wise Regression](https://drive.google.com/file/d/1l92XxIkE4wRn7egWZMo-xINhkA2_GrCa/view?usp=sharing)

## What Is Stepwise Regression?
Stepwise regression is the step-by-step iterative construction of a regression model that involves the selection of independent variables to be used in a final model. It involves adding or removing potential explanatory variables in succession and testing for statistical significance after each iteration.

## Types of Stepwise Regression
- The underlying goal of stepwise regression is, through a series of tests (e.g. F-tests, t-tests) to find a set of independent variables that significantly influence the dependent variable. This is done with computers through iteration, which is the process of arriving at results or decisions by going through repeated rounds or cycles of analysis. Conducting tests automatically with help from statistical software packages has the advantage of saving time and limiting mistakes.

- Stepwise regression can be achieved either by trying out one independent variable at a time and including it in the regression model if it is statistically significant or by including all potential independent variables in the model and eliminating those that are not statistically significant. Some use a combination of both methods and therefore there are three approaches to stepwise regression:

1. Forward selection begins with no variables in the model, tests each variable as it is added to the model, then keeps those that are deemed most statistically significant—repeating the process until the results are optimal.

2. Backward elimination starts with a set of independent variables, deleting one at a time, then testing to see if the removed variable is statistically significant.

3. Bidirectional elimination is a combination of the first two methods that test which variables should be included or excluded.

![image](https://user-images.githubusercontent.com/63282184/143803834-afe4672f-7233-4000-91e4-f2d96e9ee2cd.png)


## Example

- An example of a stepwise regression using the backward elimination method would be an attempt to understand energy usage at a factory using variables such as equipment run time, equipment age, staff size, temperatures outside, and time of year. 
- The model includes all of the variables—then each is removed, one at a time, to determine which is least statistically significant. 
- In the end, the model might show that time of year and temperatures are most significant, possibly suggesting the peak energy consumption at the factory is when air conditioner usage is at its highest. 

## Limitations of Stepwise Regression
- Regression analysis, both linear and multivariate, is widely used in the economics and investment world today. The idea is often to find patterns that existed in the past that might also recur in the future. 
- A simple linear regression, for example, might look at the price-to-earnings ratios and stock returns over many years to determine if stocks with low P/E ratios (independent variable) offer higher returns (dependent variable).
-  The problem with this approach is that market conditions often change and relationships that have held in the past do not necessarily hold true in the present or future.

- Meanwhile, the stepwise regression process has many critics and there are even calls to stop using the method altogether. Statisticians note several drawbacks to the approach, including incorrect results, an inherent bias in the process itself, and the necessity for significant computing power to develop complex regression models through iteration.






## Conclusion:

- Stepwise regression is a method that iteratively examines the statistical significance of each independent variable in a linear regression model.
- The forward selection approach starts with nothing and adds each new variable incrementally, testing for statistical significance.
- The backward elimination method begins with a full model loaded with several variables and then removes one variable to test its importance relative to overall results.
- Stepwise regression has its downsides, however, as it is an approach that fits data into a model to achieve the desired result.
