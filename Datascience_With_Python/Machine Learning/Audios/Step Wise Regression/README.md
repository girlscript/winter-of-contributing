## Step Wise Regression
## [Click here to listen the audio](https://drive.google.com/file/d/1IfqN00RyvyGRmauAmlGPel80qHKgHrMc/view?usp=sharing)

Stepwise regression is the step-by-step iterative construction of a regression model that involves the selection of independent variables to be used in a final model. It involves adding or removing potential explanatory variables in succession and testing for statistical significance after each iteration.
The availability of statistical software packages makes stepwise regression possible, even in models with hundreds of variables.
The variables to be added or removed are chosen based on the test statistics of the estimated coefficients. While the technique does have its benefits, it requires skill on the part of the researcher so should be performed by people who are very familiar with statistical testing. In essence, unlike most regression models, the models created with stepwise regression should be taken with a grain of salt; they require a keen eye to detect whether they make sense or not.

![image](https://user-images.githubusercontent.com/79050917/143868496-24d9f1e6-70df-4e10-ab64-ed80235a0cf8.png)

**Advantages:** 
- The ability to manage large amounts of potential predictor variables, fine-tuning the model to choose the best predictor variables from the available options.
- It’s faster than other automatic model-selection methods.
- Watching the order in which variables are removed or added can provide valuable information about the quality of the predictor variables.

![image](https://user-images.githubusercontent.com/79050917/143868536-8a54c0c8-f9de-42ab-ac9a-69e314bce9d4.png)

**Disadvantages:**
- Stepwise regression often has many potential predictor variables but too little data to estimate coefficients meaningfully. Adding more data does not help much, if at all.
- If two predictor variables in the model are highly correlated, only one may make it into the model.
- R-squared values are usually too high.
- Adjusted r-squared values might be high, and then dip sharply as the model progresses. If this happens, identify the variables that were added or removed when this happens and adjust the model.

**Overview:**
- Stepwise regression is a method that iteratively examines the statistical significance of each independent variable in a linear regression model.
- The forward selection approach starts with nothing and adds each new variable incrementally, testing for statistical significance.
- The backward elimination method begins with a full model loaded with several variables and then removes one variable to test its importance relative to overall results.
- Stepwise regression has its downsides, however, as it is an approach that fits data into a model to achieve the desired result.
