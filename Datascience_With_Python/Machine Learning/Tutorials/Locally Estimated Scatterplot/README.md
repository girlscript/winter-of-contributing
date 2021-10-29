
# **LOCALLY ESTIMATED SCATTERPLOT**

- LOESS, originally proposed by Cleveland (1979) and further developed by Cleveland and Devlin (1988), specifically denotes a method that is (somewhat) more descriptively known as locally weighted polynomial regression.

- LOESS is one of many "modern" modeling methods that build on "classical" methods, such as linear and nonlinear least squares regression.Modern regression methods are designed to address situations in which the classical procedures do not perform well or cannot be effectively applied without undue labor.


- Loess stands for locally estimated scatterplot smoothing (lowess stands for
locally weighted scatterplot smoothing) and is one of many non-parametric
regression techniques, but arguably the most flexible. 

-  A smoothing function is a function that attempts to capture general patterns in stressor-response
relationships while reducing the noise and it makes minimal assumptions about
the relationships among variables.

-  The result of a loess application is a line
through the moving central tendency of the stressor-response relationship.

- Loess is essentially used to visually assess the relationship between two
variables and is especially useful for large datasets, where trends can be hard to
visualize. 


> # How does it work? 

- Loess is fairly
straightforward. 

- A
specific width of points
along the x axis is
selected (the bandwidth
or tension) adjacent to
the point being predicted,
and a low degree
polynomial equation
(often just linear) is fit
through that subset of
the data. More weight is
given to points closest to
the value being
predicted. This resulting
equation is then used to
predict the value for the selected point. 

- The data are then shifted one
point to the right and the process continues, with a new prediction for the
second point, and so on. The resulting points are then connected together
with a line. 

- The user can control how wide a band of points are used – the
smaller the bandwidth, the fewer points that are used and the less smooth the
final line. Users can also adjust the type of line-fitting that is used – weighted
least squares is the most common. Users can also adjust what types of
weights are used.

># Some Assumptions:

• Very few

• Need a lot lot of data – the more the better 

# Data Requirements

Independently collected numeric data in the form of paired observations are best.

 These are typically
continuous numeric data, although discrete numeric data can be used. 

As with correlation and regression,
the greater the range of environmental conditions encompassed the better.

#  REGRESSION

Regression is a mathematical function which show the relationship between one dependent variable and one more variable. The obtained function is called regression equation.

# SMOOTHING

Smoothing is a technique to group variables with similar expectations and fit a suitable curve. It helps to decrease the volatility in data series. Therefore trend can be observed clearly.

# WEIGHT FUNCTION

Weight Function	 gives the most weight to the data points nearest the point of estimation and the least weight to the data points that are furthest away.

The use of the weights is based on the idea that points near each other in the explanatory variable space are more likely to be related to each other in a simple way than points that are further apart.


Following this logic, points that are likely to follow the local model best influence the local model parameter estimates the most. Points that are less likely to actually conform to the local model have less influence on the local model parameter estimates.

The traditional weight function used for LOESS is the tri-cube weight function,

     w(x)={(1−|x|^3)^3  for |x|<1}
          {0            for |x|≥1}

            
However, any other weight function that satisfies the properties listed in Cleveland (1979) could also be used. 

The weight for a specific point in any localized subset of data is obtained by evaluating the weight function at the distance between that point and the point of estimation, after scaling the distance so that the maximum absolute distance over all of the points in the subset of data is exactly one.

# EXAMPLE OF LOESS:

Here the scatterplot will be displayed on the basis of car dataset with box plots in the margins and non-parametric regression smooth.


    x <- mtcars$wt
    y <- mtcars$mpg

     plot(x, y, main = "Main title", 
     xlab = "X axis title", ylab = "Y axis title",
        pch = 19, frame = FALSE)
     lines(lowess(x, y), col = "green")

**Output:**

![Picture](https://static.wixstatic.com/media/6e3b57_04b30e00419c40bc86a87f03e70c4049~mv2.jpg/v1/fill/w_477,h_272,al_c,q_90/6e3b57_04b30e00419c40bc86a87f03e70c4049~mv2.webp)


# Implementation of Locally Weighted Linear Regression(LOWESS or LOESS) in Python

>The algorithm is used for making predictions when there exists a non-linear relationship between the features.

>Locally weighted linear regression is a supervised learning algorithm.
It a non-parametric algorithm.

Suppose we want to evaluate the hypothesis function h at a certain query point x. For linear regression we would do the following:   
  

**Code: Importing Libraries**
 

    import numpy as np
    import matplotlib.pyplot as plt
    import pandas as pd
    
    plt.style.use("seaborn")

**Code: Loading Data**
 



    dfx = pd.read_csv('weightedX_LOWES.csv')
    dfy = pd.read_csv('weightedY_LOWES.csv')
    X = dfx.values
    Y = dfy.values

**Output:**
 
![Picture](https://media.geeksforgeeks.org/wp-content/uploads/20200820060319/Screenshot-2020-08-20-at-10.32.57-AM.png)



**Code: Function to calculate weight matrix**
 



      def get_WeightMatrix_for_LOWES(query_point, Training_examples, Bandwidth)
        M = Training_examples.shape[0]
        W = np.mat(np.eye(M))
        for i in range(M):
          xi = Training_examples[i]
          denominator = (-2 * Bandwidth * Bandwidth)
          W[i, i] = np.exp(np.dot((xi-query_point), (xi-query_point).T)/denominator)
          return W

**Code: Making Predictions:**
 


    def predict(training_examples, Y, query_x, Bandwidth):
      M = Training_examples.shape[0]
      all_ones = np.ones((M, 1))
      X_ = np.hstack((training_examples, all_ones))
      qx = np.mat([query_x, 1])
      W = get_WeightMatrix_for_LOWES(qx, X_, Bandwidth)
      theta = np.linalg.pinv(X_.T*(W * X_))*(X_.T*(W * Y))
      pred = np.dot(qx, theta)
      return theta, pred

**Code: Visualise Predictions**
 
    Bandwidth = 0.1
    X_test = np.linspace(-2, 2, 20)
    Y_test = []
    for query in X_test:
      theta, pred = predict(X, Y, query, Bandwidth)
      Y_test.append(pred[0][0])
    horizontal_axis = np.array(X)
    vertical_axis = np.array(Y)
    plt.title("Tau / Bandwidth Param %.2f"% Bandwidth)
    plt.scatter(horizontal_axis, vertical_axis)
    Y_test = np.array(Y_test)
    plt.scatter(X_test, Y_test, color ='red')
    plt.show()

![Picture](https://media.geeksforgeeks.org/wp-content/uploads/20200820060106/Screenshot-2020-08-20-at-10.30.16-AM2.png)







# APPLICATION 

- Fitting a line to a scatter plot where noisy data values with your ability to see a line of best fit.

- Linear regression where least squares fitting does not create a line of good fit

- Data explorations in social science.



# ADVANTAGES

• Simple and flexible.

• No assumptions about the
relationships between variables.

• Valuable for visualizing complex
relationships.

• Users can estimate new values to
the fit and validate models if
needed.

# DISADVANTAGES

 • Requires densely sampled datasets.


• No ready formula is produced, so
it is hard to transport the results.


• Computationally intensive – but
not a problem for most computers.


• Sensitive to outliers.



# Conclusion

We have gone through the rationale for using the LOESS local regression model and lifted the veil on how it works. 

A Python implementation was developed and presented making heavy use of the NumPy library and its vectorization feature.

# Purpose

By combined with scatterplots, locally weighted scatterplot smoothing (LOESS) is used to examine biological attribute changes along a nutrient gradient. It is designed to address nonlinear relationships where linear methods do not perform well.





