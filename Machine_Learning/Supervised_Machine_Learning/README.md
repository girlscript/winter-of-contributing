
## Supervised Machine Learning
### Supervised Machine Learning refers to the type of machine learning, in which the system or the machine is provided with input values along with the labels.
### Labels: They are the output for the given input values.
### Input value: It is basically the different values in various rows formed by the equation : (y=a0 + a1x1 + a2x2+ a3x3+ ... anxn). Here, x1, x2, x3, ... refers to the parameters and a1,a2,a3, ... refers to the weights. Initially weights are initialized with the value of 0, using numpy in python. They can be initialied with any values basically... but they are initizalized with this value of 0, for convenience.

### After this, the epochs(loops) are run, in order to change the weights according to the value of the parameters(defined in input value).


## Losses in ML
### Loss refers to, that, how far is the predicted value of our ML model, from the actual label given (label is defined by output variable y: defined above). This is also called as cost function or loss function.

## Regression algorithms used for ML
### Gradient descent: This algorithm, is used to minimize the loss incurred dueing the prediction by the model. This basically finds out the global minimum of the cost function, and changes the weight or parameters of our model.
