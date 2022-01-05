## Bias vs Variance tradeoff
## [Click here to listen the audio](https://drive.google.com/file/d/1oiUsHgyAbJSr5osBZuYdB9ZFh2vq4S3r/view?usp=sharing)

- Supervised machine learning algorithms can best be understood through the lens of the bias-variance trade-off.
- The goal of any supervised machine learning algorithm is to best estimate the mapping function (f) for the output variable (Y) given the input data (X). 
- The mapping function is often called the target function because it is the function that a given supervised machine learning algorithm aims to approximate.
- The prediction error for any machine learning algorithm can be broken down into three parts:
     - Bias Error
     - Variance Error
     - Irreducible Error

**Bias Error:**
- Bias are the simplifying assumptions made by a model to make the target function easier to learn.
- Generally, linear algorithms have a high bias making them fast to learn and easier to understand but generally less flexible. 
- In turn, they have lower predictive performance on complex problems that fail to meet the simplifying assumptions of the algorithms bias.
    - Low Bias: Suggests less assumptions about the form of the target function.
    - High-Bias: Suggests more assumptions about the form of the target function.

![image](https://user-images.githubusercontent.com/79050917/143805438-6cb1ee84-e76c-4951-98c5-3d82214e0d06.png)

**Variance error:**
- Machine learning algorithms that have a high variance are strongly influenced by the specifics of the training data. 
- This means that the specifics of the training have influences the number and types of parameters used to characterize the mapping function.
   - Low Variance: Suggests small changes to the estimate of the target function with changes to the training dataset.
   - High Variance: Suggests large changes to the estimate of the target function with changes to the training dataset.

**Bias-Variance Trade-Off**
- The goal of any supervised machine learning algorithm is to achieve low bias and low variance. In turn the algorithm should achieve good prediction performance.
- Linear machine learning algorithms often have a high bias but a low variance.
- Nonlinear machine learning algorithms often have a low bias but a high variance.

![image](https://user-images.githubusercontent.com/79050917/143805403-3992d7ab-cd59-4dbf-a450-2ecbb472b040.png)

**Detection and Solution to High Bias problem - if the training error is high:**
- Train longer
- Train a more complex model
- Obtain more features
- More features can be collected for the existing data.
- Feature Engineering can be performed on existing features to extract more non-linear features. 
- Decrease regularization
- New model architecture

![image](https://user-images.githubusercontent.com/79050917/143805581-966ceec1-7980-4ceb-9069-adc74290fab8.png)

**Detection and Solution to High Variance problem - if a validation error is high:** 
- Obtain more data
- Decrease number of features 
- Increase Regularization
- New model architecture

![image](https://user-images.githubusercontent.com/79050917/143806118-3c51f5a7-b7b1-41e8-b465-939bf1282326.png)

**Overview:**
- Bias is the simplifying assumptions made by the model to make the target function easier to approximate.
- Variance is the amount that the estimate of the target function will change given different training data.
- Trade-off is tension between the error introduced by the bias and the variance.
