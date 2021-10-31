## Title : Implement a Multi Layered Perceptron Model on XOR function with 3 inputs.
🔴 Domain : **Machine Learning** <br>
🔴 Type : **Documentation** <br>
🔴 Module : **Dimensionality Reduction and Neural Networks** <br>

************************************************************

## Perceptron

The perceptron is a classification algorithm. Basically, it works as a linear binary classifier. It was invented in the late 1950s by Frank Rosenblatt.<br>
The perceptron basically works as a threshold function — non-negative outputs are put into one class while negative ones are put into the other class.



<b>A perceptron has the following components:</b>
<br><br>
* Input nodes<br>
* Output node<br>
* An activation function<br>
* Weights and biases<br>

![Single Layer Perceptron](https://github.com/amitrakshar01/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/Assets/perceptron.png)

Error function<br>


* <b>Input Nodes</b><br>
These nodes contain the input to the network. In any iteration — whether testing or training — these nodes are passed the input from our data.<br><br>
* <b>Weights and Biases</b><br>
These parameters are what we update when we talk about “training” a model. They are initialized to some random value or set to 0 and updated as the training progresses. The bias is analogous to a weight independent of any input node. Basically, it makes the model more flexible, since you can “move” the activation function around.<br><br>
* <b>Evaluation</b><br>
The output calculation is straightforward.<br><br>
<i>Compute the dot product of the input and weight vector</i><br>
<i>Add the bias</i><br>
<i>Apply the activation function.</i><br>
<b>Activation Function</b><br><br>
This function allows us to fit the output in a way that makes more sense. For example, in the case of a simple classifier, an output of say -2.5 or 8 doesn’t make much sense with regards to classification. If we use something called a sigmoidal activation function, we can fit that within a range of 0 to 1, which can be interpreted directly as a probability of a datapoint belonging to a particular class.<br>

<b>Classification</b><br>
We know that a datapoint’s evaluation is expressed by the relation wX + b . We define a threshold (θ) which classifies our data. Generally, this threshold is set to 0 for a perceptron.<br>
So points for which wX + b is greater than or equal to 0 will belong to one class while the rest (wX + b is negative) are classified as belonging to the other class.

### The 2D XOR problem
In the XOR problem, we are trying to train a model to mimic a 2D XOR function.

The XOR function
The function is defined like so:

![Table](https://github.com/amitrakshar01/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/Assets/XOR.png)


If we plot it, we get the following chart. This is what we’re trying to classify. The ⊕ (“o-plus”) symbol you see in the legend is conventionally used to represent the XOR boolean operator.

![graph](https://github.com/amitrakshar01/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/Assets/XOR%20graph.png)


Our algorithm —regardless of how it works — must correctly output the XOR value for each of the 4 points. We’ll be modelling this as a classification problem, so Class 1 would represent an XOR value of 1, while Class 0 would represent a value of 0.


### Implementation

Apart from the usual visualization ( matplotlib and seaborn) and numerical libraries (numpy), we’ll use cycle from itertools.

```from itertools import cycle
import matplotlib.pyplot as plt
import seaborn as sns
import numpy as np
```

We next create our training data.

```train_data = np.array(
    [
        [0, 0],
        [0, 1],
        [1, 0],
        [1, 1]])

target_xor = np.array(
    [
        [0],
        [1],
        [1],
        [0]])

target_nand = np.array(
    [
        [1],
        [1],
        [1],
        [0]])

target_or = np.array(
    [
        [0],
        [1],
        [1],
        [1]])

target_and = np.array(
    [
        [0],
        [0],
        [0],
        [1]])
 
def train(self):
    """
    Train a single layer perceptron.
    """
    # the number of consecutive correct classifications
    correct_counter = 0

    for train, target in cycle(zip(self.train_data, self.target)):
        # end if all points are correctly classified
        if correct_counter == len(self.train_data):
            break

        output = self.classify(train)
        self.node_val = train

        if output == target:
            correct_counter += 1
        else:
            # if incorrectly classified, update weights and reset correct_counter
            self.update_weights(target, output)
            correct_counter = 0
 ```

```ef _gradient(self, node, exp, output):
    """
    Return the gradient for a weight.
    This is the value of delta-w.
    """
    return node * (exp - output)

def update_weights(self, exp, output):
    """
    Update weights and bias based on their respective gradients
    """
    for i in range(self.input_nodes):
        self.w[i] += self.lr * self._gradient(self.node_val[i], exp, output)

    # the value of the bias node can be considered as being 1 and the weight between this node
    # and the output node being self.b
    self.b += self.lr * self._gradient(1, exp, output)

def forward(self, datapoint):
    """
    One forward pass through the perceptron.
    Implementation of "wX + b".
    """
    return self.b + np.dot(self.w, datapoint)

def classify(self, datapoint):
    """
    Return the class to which a datapoint belongs based on
    the perceptron's output for that point.
    """
    if self.forward(datapoint) >= 0:
        return 1
```

```def plot(self, h=0.01):
    """
    Generate plot of input data and decision boundary.
    """
    # setting plot properties like size, theme and axis limits
    sns.set_style('darkgrid')
    plt.figure(figsize=(20, 20))

    plt.axis('scaled')
    plt.xlim(-0.1, 1.1)
    plt.ylim(-0.1, 1.1)

    colors = {
        0: "ro",
        1: "go"
    }

    # plotting the four datapoints
    for i in range(len(self.train_data)):
        plt.plot([self.train_data[i][0]],
                 [self.train_data[i][1]],
                 colors[self.target[i][0]],
                 markersize=20)

    x_range = np.arange(-0.1, 1.1, h)
    y_range = np.arange(-0.1, 1.1, h)

    # creating a mesh to plot decision boundary
    xx, yy = np.meshgrid(x_range, y_range, indexing='ij')
    Z = np.array([[self.classify([x, y]) for x in x_range] for y in y_range])

    # using the contourf function to create the plot
    plt.contourf(xx, yy, Z, colors=['red', 'green', 'green', 'blue'], alpha=0.4)
```

To bring everything together, we create a simple Perceptron class with the functions we just discussed.

```class Perceptron:
    """
    Create a perceptron.
    train_data: A 4x2 matrix with the input data.
    target: A 4x1 matrix with the perceptron's expected outputs
    lr: the learning rate. Defaults to 0.01
    input_nodes: the number of nodes in the input layer of the perceptron.
        Should be equal to the second dimension of train_data.
    """

    def __init__(self, train_data, target, lr=0.01, input_nodes=2):
        self.train_data = train_data
        self.target = target
        self.lr = lr
        self.input_nodes = input_nodes

        # randomly initialize the weights and set the bias to -1.
        self.w = np.random.uniform(size=self.input_nodes)
        self.b = -1

        # node_val hold the values of each node at a given point of time.
        self.node_val = np.zeros(self.input_nodes)

    def _gradient(self, node, exp, output):
        """
        Return the gradient for a weight.
        This is the value of delta-w.
        """
        return node * (exp - output)

    def update_weights(self, exp, output):
        """
        Update weights and bias based on their respective gradients
        """
        for i in range(self.input_nodes):
            self.w[i] += self.lr * self._gradient(self.node_val[i], exp, output)

        # the value of the bias node can be considered as being 1 and the weight between this node
        # and the output node being self.b
        self.b += self.lr * self._gradient(1, exp, output)

    def forward(self, datapoint):
        """
        One forward pass through the perceptron.
        Implementation of "wX + b".
        """
        return self.b + np.dot(self.w, datapoint)

    def classify(self, datapoint):
        """
        Return the class to which a datapoint belongs based on
        the perceptron's output for that point.
        """
        if self.forward(datapoint) >= 0:
            return 1

        return 0
    def plot(self, h=0.01):
        """
        Generate plot of input data and decision boundary.
        """
        # setting plot properties like size, theme and axis limits
        sns.set_style('darkgrid')
        plt.figure(figsize=(20, 20))

        plt.axis('scaled')
        plt.xlim(-0.1, 1.1)
        plt.ylim(-0.1, 1.1)

        colors = {
            0: "ro",
            1: "go"
        }

        # plotting the four datapoints
        for i in range(len(self.train_data)):
            plt.plot([self.train_data[i][0]],
                     [self.train_data[i][1]],
                     colors[self.target[i][0]],
                     markersize=20)

        x_range = np.arange(-0.1, 1.1, h)
        y_range = np.arange(-0.1, 1.1, h)

        # creating a mesh to plot decision boundary
        xx, yy = np.meshgrid(x_range, y_range, indexing='ij')
        Z = np.array([[self.classify([x, y]) for x in x_range] for y in y_range])

        # using the contourf function to create the plot
        plt.contourf(xx, yy, Z, colors=['red', 'green', 'green', 'blue'], alpha=0.4)


    def train(self):
        """
        Train a single layer perceptron.
        """
        # the number of consecutive correct classifications
        correct_counter = 0

        for train, target in cycle(zip(self.train_data, self.target)):
            # end if all points are correctly classified
            if correct_counter == len(self.train_data):
                break

            output = self.classify(train)
            self.node_val = train

            if output == target:
                correct_counter += 1
            else:
                # if incorrectly classified, update weights and reset correct_counter
                self.update_weights(target, output)
                correct_counter = 0
```

### Results

Let’s create a perceptron object and train it on the XOR data.

```p_xor = Perceptron(train_data, target_xor)
p_xor.train()
```
