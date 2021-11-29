# Kernel Ridge Regression

## Video Link : [Kernel Ridge Regression](https://drive.google.com/file/d/1MNZ1s46Ru3wdlaV7dBH4wUKyvriJv7m4/view?usp=sharing)

Kernel ridge regression is a non-parametric form of ridge regression. The aim is to learn a function in the space induced by the respective kernel k by minimizing a squared loss with a squared norm regularization term.

Gaussian Kernel Regression is a regression technique which interestingly does not require any iterative learning (such as gradient descent in linear regression).

How does kernel ridge regression work

Kernel ridge regression (KRR) combines ridge regression (linear least squares with l2-norm regularization) with the kernel trick. It thus learns a linear function in the space induced by the respective kernel and the data. For non-linear kernels, this corresponds to a non-linear function in the original space.


- Kernel ridge regression (KRR) [M2012] combines Ridge regression and classification (linear least squares with l2-norm regularization) with the kernel trick. It thus learns a linear function in the space induced by the respective kernel and the data. For non-linear kernels, this corresponds to a non-linear function in the original space.

- The form of the model learned by KernelRidge is identical to support vector regression (SVR). However, different loss functions are used: KRR uses squared error loss while support vector regression uses -insensitive loss, both combined with l2 regularization. In contrast to SVR, fitting KernelRidge can be done in closed-form and is typically faster for medium-sized datasets. On the other hand, the learned model is non-sparse and thus slower than SVR, which learns a sparse model for , at prediction-time.

- The following figure compares KernelRidge and SVR on an artificial dataset, which consists of a sinusoidal target function and strong noise added to every fifth datapoint. The learned model of KernelRidge and SVR is plotted, where both complexity/regularization and bandwidth of the RBF kernel have been optimized using grid-search. The learned functions are very similar; however, fitting KernelRidge is approximately seven times faster than fitting SVR (both with grid-search). However, prediction of 100000 target values is more than three times faster with SVR since it has learned a sparse model using only approximately 1/3 of the 100 training datapoints as support vectors.

![image](https://user-images.githubusercontent.com/63282184/143856471-99a111d9-2f78-437b-a905-221c8f14e806.png)

The next figure compares the time for fitting and prediction of KernelRidge and SVR for different sizes of the training set. Fitting KernelRidge is faster than SVR for medium-sized training sets (less than 1000 samples); however, for larger training sets SVR scales better. With regard to prediction time, SVR is faster than KernelRidge for all sizes of the training set because of the learned sparse solution. Note that the degree of sparsity and thus the prediction time depends on the parameters  and  of the SVR;  would correspond to a dense model.

![image](https://user-images.githubusercontent.com/63282184/143856532-3d78c896-e19b-45eb-91f9-20fb8e4351cb.png)


## Conclusion:

 It solves the problem of overfitting , as just regular squared error regression fails to recognize the less important features and uses all of them, leading to overfitting.
 It also adds a slight bias, to fit the model according to the true values of the data.
