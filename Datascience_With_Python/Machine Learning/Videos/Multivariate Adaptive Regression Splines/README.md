## Multivariate Adaptive Regression Splines

![https://drive.google.com/file/d/14Zm3gjndst7FOUnN2T8WBZ3Hnn_bHGI5/view?usp=sharing](https://imgur.com/yqVUPNG.png)
 
[Link to video](https://drive.google.com/file/d/14Zm3gjndst7FOUnN2T8WBZ3Hnn_bHGI5/view?usp=sharing)

### What is Multivariate Regression Splines?
- Multivariate Adaptive Regression Splines is used to make preditions with the help of piecewise linear functions.
- Used for non-liear regression problems.

## Why use MARS Algorithm?
- Easy to implement in both Python and R.
- Increases the accuracy of the prediction.
- Eliminates the outliers and gives good pradiction.

### Plotting of MARS in a graph
![image](https://user-images.githubusercontent.com/47640427/141655517-a2b63308-8d7a-4e6b-8308-1fd9602c6a87.png)

As we can see that in the above dataset MARS forms a piecewise linear function to cover whole plotted data,
Whereas using linear regression would not give us accurate results for the same data while minimizing the error.

### Implementation of MARS in Python
- MARS is provided by py-Earth library in python which is installed in windows using pypi package as follows:

```
pip install sklearn-contrib-py-earth
```
- Importing py-erth
```
import pyearth
```

- Creating an instance of the earth class
```
model_1 = Earth()
```

- Implementation of MARS
```
from numpy import mean
from numpy import std
from sklearn.datasets import make_regression
from sklearn.model_selection import cross_val_score
from sklearn.model_selection import RepeatedKFold
from pyearth import Earth
# define dataset
X, y = make_regression(n_samples=10000, n_features=20, n_informative=15, noise=0.5, random_state=7)
# define the model
model = Earth()
# define the evaluation procedure
cv = RepeatedKFold(n_splits=10, n_repeats=3, random_state=1)
# evaluate the model and collect results
n_scores = cross_val_score(model, X, y, scoring='neg_mean_absolute_error', cv=cv, n_jobs=-1)
# report performance
print('MAE: %.3f (%.3f)' % (mean(n_scores), std(n_scores)))
```

### Things Discussed
- About Linear Regression.
- How is linear regression different than MARS.
- About Hinge functions.
-Mathematics behind MARS Algorithm.

## Conclusion
- MARS in used in non linear problems.
- py-earth library to build MARS models.
- Data visualization is essential to identify if MARS should be applied.
