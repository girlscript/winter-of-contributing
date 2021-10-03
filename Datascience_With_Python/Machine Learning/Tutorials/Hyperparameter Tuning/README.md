# **Hyperparameter Tuning**
# **What exactly are Parameters?**
#### In Machine Learning, there are two types of parameters: 
#####  

1.   Model Paramaters: These are the properties of the training data that are learnt during model training process. Examples include: weights and biases of a neural network etc.
2.  Hyperparameters: These are the parameters that is set beforehand and cannot be learnt during the training process. Examples include: input features, learning rate, Activation function etc. 

# **What exactly is Hyperparameter Tuning?**
Hyperparameter Tuning is the process of choosing a set of hyperparameters for an algorithm to obtain a best fitting, optimal model.  The user will monitor and experiment around the number of hidden layers, the number of neurons, learning rate, and other hyperparameters to obtain a superior model accuracy. We shall look at different hyperparameters, their definition, workings, usage, advantages, disadvantages, and more. 

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
'α' or the learning rate is a hyperparameter that monitors the weights of a neural network with respect to the gradient loss. Take a look at the picture below. The learning rate determines how slow or how fast you travel down the slope. One can observe from the figure that the higher the learning rate 'α', the more giant steps it takes and smaller the learning rate α', the more timid the steps. 
 
![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter%20Tuning/Images/learning_rate.png)

Have a look at the gradient descent algorithm formula, if the 'α' is too small, a smaller number would be subtracted from the existing weight, and if 'α' is too large, the subtraction term would be large. An optimum 'α' would not result in such hazards.

![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter%20Tuning/Images/grad_descent_lr.png)

The plot figure below again shows how the loss function would stay stagnant if your 'α' is too small and might start to diverge if your 'α' is too large. The optimum 'α' results in a steady improvement of the loss function, thus improving your model's performance tremendously. 

![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter%20Tuning/Images/lr.png)

## 2. Momentum β
Momentum 'β' is a hyperparameter that helps to speed up learning, thus helping you not get stuck at the minima of the function. It results in attenuating the gradient descent, so it does not oscillate dangerously with a huge difference, thus improving training speed and eventually improving the model's accuracy. 

Take a look at the pictures below. As you change 'β', the oscillation close to minima does not seem to vary much, but when you increase the 'β', the steps taken oscillate by a considerable amount. When you tune 'β' in your neural network, it is advisable to experiment around with multiple values. 

![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter%20Tuning/Images/1.png)
![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter%20Tuning/Images/2.png)

## 3. Number of Hidden Layers
While adding hidden or dense layers in your neural network, the most crucial fact is understanding the training set the model will be trained upon. You do not need hidden layers/ dense layers if your data is linearly separable. More complex is your training data; the better option would be adding more hidden layers to extract essential features. 

![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter%20Tuning/Images/underfit_overfit_optimum.png)

But one can see from the picture below what happens if we add unnecessarily more hidden layers. The model starts 'memorizing' instead of actually 'learning' and will start to overfit. Same way, the less the number of hidden layers, the model won't extract important features and will result in underfitting. 
The right amount of hidden layers will result in an optimal model. 

## 4. Mini-batch size
Mini-batch is the number of data samples that will be sent through or propagated through the neural network. Batch size is essentially like packets of data, such as training data samples that are passed through the neural network. The training data is split into several packets containing a 'batch size' number of samples and fed to the network. Neural networks are observed to run faster when mini-batch is used too. Another advantage of using this is that it requires less memory if you can't fit the whole dataset in your local machine memory. Observe the figure below, how increasing batch size improves the computation of the model and reduces loss to a great extent. 

![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter%20Tuning/Images/batch%20size.png)

## 5. Learning rate decay
Learning rate decay hyperparameter controls the learning rate, which slowly reduces learning rate 'α' over time, thus improving your model's performance. When you have noisy steps that essentially don't exactly end up at the minima but wanders around it, you may want to consider including this hyperparameter in your model. This happens due to the fixed alpha. Learning rate decay solves it by reducing 'α', so you can reach the minima. Take a look at the formula below that is used to implement the same. 
The second picture shows how implementing discrete staircase learning rate decay improves the model's performance and reduces loss. 

![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter%20Tuning/Images/lr%20decay.png)
![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter%20Tuning/Images/discrete%20staircase%20lr%20decay.png)

## 6. Activation function
(a)Linear/Identity Activation Function:

This activation function follows the equation of a simple straight line, giving outputs proportional to the input. This function has a major disadvantage as backpropagation fails as the derivative is just a constant. Another disadvantage is that it renders the usage of hidden layers useless as all layers collapse into one, resulting into just one layer, which acts as a constraint for training complex data. 

(b) Sigmoid Activation Function: 

This is the mod commonly used activation function used at the final output node as its output is between 0 and 1 and can be used for probability determination. 

(c)Tanh Activation Function: 

This activation function has a slight edge or an advantage over the sigmoid function. It centers the output to 0 and eventually brings the mean close to 0, thus acting as a feature normalizer. 

(d)ReLU Activation Function: 

This activation function has the power of solving the problem of vanishing gradient that is faced by sigmoid and tanh functions. (Observe the graphs of sigmoid and tanh at +∞ and -∞). In ReLU, the gradient tends to 0 when x tends to +∞ and -∞, thus acting as a much better activation function compared to sigmoid and tanh.

![Hyperparameter Tuning](https://github.com/imedusa/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Hyperparameter%20Tuning/Images/activation_function.png)

# **Conclusion**
Hyperparameter Tuning is an art within itself. It comes by practice and dealing with several models; when you correctly start analyzing how much to a great extent are each hyperparameter inter-related as well as to the model. Monitoring and experimenting with them is the best way to learn and tweak your model's performance. 


