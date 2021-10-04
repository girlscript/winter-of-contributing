## ML 2.14 : Support Vector Machine (D)
The SVM (Support Vector Machine) is a supervised machine learning algorithm typically used for binary classification problems.<br><br>
<img src="https://github.com/ishreyakumari/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/SVM%20Algo.png"/><br><br>
The **advantages** of support vector machines are:

- Effective in high dimensional spaces.

- Still effective in cases where number of dimensions is greater than the number of samples.

- Uses a subset of training points in the decision function (called support vectors), so it is also memory efficient.

- Versatile: different Kernel functions can be specified for the decision function. Common kernels are provided, but it is also possible to specify custom kernels.

The **disadvantages** of support vector machines include:

- If the number of features is much greater than the number of samples, avoid over-fitting in choosing Kernel functions and regularization term is crucial.

- SVMs do not directly provide probability estimates, these are calculated using an expensive five-fold cross-validation (see Scores and probabilities, below).
