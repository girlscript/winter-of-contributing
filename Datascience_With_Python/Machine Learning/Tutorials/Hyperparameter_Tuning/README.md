# Hyperparameter Tuning
# **What exactly are Parameters?**
#### In Machine Learning, there are two types of parameters: 
#####  

1.   Model Paramaters: These are the properties of the training data that are learnt during model training process. Examples include: weights and biases of a neural network etc.
2.  Hyperparameters: These are the parameters that is set beforehand and cannot be learnt during the training process. Examples include: input features, learning rate, Activation function etc. 

# **What are the things to keep in mind while Hyperparameter Tuning?**


1.   First step is always to choose the right set of hyperamaters that you will be tuning. These hyperaamaters have to be the most impact or influential parameters governing your model.
2.   Second step is to understand the relation between these hyperparameters. In simple words, understand the impact of changing a hyperparameter, say, A on another hyperparameter, say, B.
3.   Third step is to experiment around = tuning, keeping in mind that our final objective is to improve model's performance, which is the *optimal hyperparameterization*.

# **Hyperparameter Tuning in Neural Networks**
### Some of the hyperparameters to be taken care of: 

1.   Learning rate α 
2.   Momentum term β
3.   Number of hidden layers
4.   Mini-batch size
5.   Learning rate decay
6.   Activation Function


## 1. Learning rate α
![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter_Tuning/Images/learning_rate.png)
![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter_Tuning/Images/lr.png)

## 2. Momentum β
![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter_Tuning/Images/1.png)
![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter_Tuning/Images/2.png)

## 3. Number of Hidden Layers
![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter_Tuning/Images/underfit_overfit_optimum.png)

## 4. Mini-batch size
![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter_Tuning/Images/batch%20size.png)

## 5. Learning rate decay
![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter_Tuning/Images/lr%20decay.png)
![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter_Tuning/Images/discrete%20staircase%20lr%20decay.png)

## 6. Activation function
![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter_Tuning/Images/activation_function.png)

# Useful Resources
* [Course 2 of Deep Learning Specialization](https://www.coursera.org/learn/deep-neural-network#syllabus)
* [Hyper-Parameter Optimization: A Review of Algorithms and Applications](https://arxiv.org/abs/2003.05689)
