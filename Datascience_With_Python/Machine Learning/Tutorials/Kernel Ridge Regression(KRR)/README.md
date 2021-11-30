# **KERNEL RIDGE REGRESSION**

# **INTRODUCTION**

* Kernel ridge regression (KRR) combines ridge regression (linear least squares with l2-norm regularization) with the kernel trick. 

* It thus learns a linear function in the space induced by the respective kernel and the data. 

* For non-linear kernels, this corresponds to a non-linear function in the original space.

* The form of the model learned by KRR is identical to support vector regression (SVR). However, different loss functions are used: KRR uses squared error loss while support vector regression uses epsilon-insensitive loss, both combined with l2 regularization.

*  In contrast to SVR, fitting a KRR model can be done in closed-form and is typically faster for medium-sized datasets. On the other hand, the learned model is non-sparse and thus slower than SVR, which learns a sparse model for epsilon > 0, at prediction-time.

## **COMPARISON BETWEEN KRR AND SVR**

* The following figure compares KernelRidge and SVR on an artificial dataset, which consists of a sinusoidal target function and strong noise added to every fifth datapoint.

*  The learned model of KernelRidge and SVR is plotted, where both complexity/regularization and bandwidth of the RBF kernel have been optimized using grid-search.

*    The learned functions are very similar; however, fitting KernelRidge is approximately seven times faster than fitting SVR (both with grid-search). 
   
*    However, prediction of 100000 target values is more than three times faster with SVR since it has learned a sparse model using only approximately 1/3 of the 100 training datapoints as support vectors.


![Picture](https://scikit-learn.org/stable/_images/sphx_glr_plot_kernel_ridge_regression_001.png)

* The next figure compares the time for fitting and prediction of KernelRidge and SVR for different sizes of the training set. 
 
* Fitting KernelRidge is faster than SVR for medium-sized training sets (less than 1000 samples); however, for larger training sets SVR scales better.
 
* With regard to prediction time, SVR is faster than KernelRidge for all sizes of the training set because of the learned sparse solution. 
  
* Note that the degree of sparsity and thus the prediction time depends on the parameters  and  of the SVR;  would correspond to a dense model.

![Picture](https://scikit-learn.org/stable/_images/sphx_glr_plot_kernel_ridge_regression_003.png)


## **PARAMETERS**

## **1. alphafloat or array-like of shape (n_targets,), default=1.**

Regularization strength; must be a positive float. Regularization improves the conditioning of the problem and reduces the variance of the estimates. Larger values specify stronger regularization. Alpha corresponds to 1 / (2C) in other linear models such as LogisticRegression or LinearSVC. If an array is passed, penalties are assumed to be specific to the targets. Hence they must correspond in number. See Ridge regression and classification for formula.

## **2.kernelstr or callable, default=”linear”**

Kernel mapping used internally. This parameter is directly passed to pairwise_kernel. If kernel is a string, it must be one of the metrics in pairwise.PAIRWISE_KERNEL_FUNCTIONS. If kernel is “precomputed”, X is assumed to be a kernel matrix. Alternatively, if kernel is a callable function, it is called on each pair of instances (rows) and the resulting value recorded. The callable should take two rows from X as input and return the corresponding kernel value as a single number. This means that callables from sklearn.metrics.pairwise are not allowed, as they operate on matrices, not single samples. Use the string identifying the kernel instead.

## **3.gammafloat, default=None**

Gamma parameter for the RBF, laplacian, polynomial, exponential chi2 and sigmoid kernels. Interpretation of the default value is left to the kernel; see the documentation for sklearn.metrics.pairwise. Ignored by other kernels.

## **4.degreefloat, default=3**

Degree of the polynomial kernel. Ignored by other kernels.

## **5.coef0float, default=1**

Zero coefficient for polynomial and sigmoid kernels. Ignored by other kernels.

## **6.kernel_paramsmapping of str to any, default=None**

Additional parameters (keyword arguments) for kernel function passed as callable object.

# **ATTRIBUTES**

## **1.dual_coef_ndarray of shape (n_samples,) or (n_samples, n_targets)**

Representation of weight vector(s) in kernel space

## **2.X_fit_{ndarray, sparse matrix} of shape (n_samples, n_features)**
Training data, which is also required for prediction. If kernel == “precomputed” this is instead the precomputed training matrix, of shape (n_samples, n_samples).

## **3.n_features_in_int**

Number of features seen during fit.



## **4.feature_names_in_ndarray of shape (n_features_in_,)**

Names of features seen during fit. Defined only when X has feature names that are all strings.

# **ADVANTAGES OF KRR**

* Works on any size of the dataset.

* It works really well with a clear margin of separation.

* Works very well on non-linear problems.


# **DISADVANTAGES OF KRR**

* We need to choose the right polynomial degree for good variance tradeoff.

* It doesn’t directly provide probability estimates.

# **APPLICATIONS OF KRR**

a) Slope System Reliability Analysis.

b) Prediction of Bearing Capacity of Cement-Flyash-Gravel Pile Composite Foundation.

c) Spectroscopy for carbon and nitrogen prediction in soils under sugarcane.

d) Streamflow Forecast.

e) Determine Stability State of Asphaltene in Oilfields by Utilizing SARA Fractions.


## **CONCLUSION**

Here,we have given a brief idea on Kernel Ridge Regression, their pros and cons,  applications and implementation with the help of Python.
