# Discriminant Analysis

## Video Link : [Discriminant Analysis](https://drive.google.com/file/d/19-Xp6uAkMIRCzry8MqaMvmeytLYhqeDM/view?usp=sharing)


- Discriminant analysis is statistical technique used to classify observations into non-overlapping groups, based on scores on one or more quantitative predictor variables.
- For example, a doctor could perform a discriminant analysis to identify patients at high or low risk for stroke. The analysis might classify patients into high- or low-risk groups, based on personal attributes (e.g., chololesterol level, body mass) and/or lifestyle behaviors (e.g., minutes of exercise per week, packs of cigarettes per day).

![download](https://user-images.githubusercontent.com/63282184/143848907-0e7e0867-8e34-4dd1-84d1-6510143dd999.png)


## Two-Group Discriminant Analysis
A common research problem involves classifying observations into one of two groups, based on two or more quantitative, predictor variables.

When there are only two classification groups, discriminant analysis is really just multiple regression, with a few tweaks.

- The dependent variable is a dichotomous, categorical variable (i.e., a categorical variable that can take on only two values).
- The dependent variable is expressed as a dummy variable (having values of 0 or 1).
- Observations are assigned to groups, based on whether the predicted score is closer to 0 or to 1.
- The regression equation is called the discriminant function.
- The efficacy of the discriminant function is measured by the proportion of correct assignments.

The biggest difference between discriminant analysis and standard regression analysis is the use of a catergorical variable as a dependent variable. Other than that, the two-group discriminant analysis is just like standard multiple regression analysis. The key steps in the analysis are:

- Estimate regression coefficients.
- Define regression equation, which is the discriminant function.
- Assess the fit of the regression equation to the data.
- Assess the ability of the regression equation to correctly classify observations.
- Assess the relative importance of predictor variables.


## Multiple Discriminant Analysis
Regression can also be used with more than two classification groups, but the analysis is more complicated. When there are more than two groups, there are also more than two discriminant functions.

For example, suppose you wanted to classify voters into one of three political groups - Democrat, Republican, or Independent. Using two-group discriminant analysis, you might:

- Define one discriminant function to classify voters as Democrats or non-Democrats.
- Define a second discriminant function to classify non-Democrats as Republicans or Independents.

The maximum number of discriminant functions will equal the number of predictor variables or the number of group categories minus one - whichever is smaller.


## When To Use Discriminant Analysis
By performing discriminant analysis, researchers are able to address classification problems in which two or more groups, clusters, or populations are known up front, and one or more new observations are placed into one of the known classifications based on measured characteristics. 

Discriminant analysis is also used to investigate how variables contribute to group separation, and to what degree. For this reason, it’s often leveraged to compliment the findings of cluster analysis.
With multiple discriminant analysis, the goal is to define discriminant functions that maximize differences between groups and minimize differences within groups. 


## The Benefits of Discriminant Analysis and conclusion

- Discriminant analysis can be closely compared to regression analysis for the ways in which it identifies the degree to which objects adhere to the specifications of certain groups.
- Discriminant analysis is also commonly used by marketers to develop perceptual maps.


