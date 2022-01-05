# WHAT IS PERCEPTRON ?

The perceptron is an **artificial neuron** or a neural network unit that performs certain calculations to detect input data capabilities or business intelligence. In 1957, Frank Rosenblatt invented Perceptron.

(OR)

The perceptron is the building block of artificial neural networks, it is a simplified model of the biological neurons in our brain. A perceptron is the simplest neural network, one that is comprised of just one neuron.

(OR)

A Perceptron is an algorithm for supervised learning of binary classifiers. This algorithm enables neurons to learn and processes elements in the training set one at a time.

## WHAT IS ARTIFICIAL NEURON ?

The artificial neuron has the following characteristics:

- A neuron is a mathematical function modeled on the working of biological neurons
- It is an elementary unit in an artificial neural network
- One or more inputs are separately weighted
- Inputs are summed and passed through a nonlinear function to produce output
- Every neuron holds an internal state called activation signal
- Each connection link carries information about the input signal
- Every neuron is connected to another neuron via connection link

## Perceptron 

Perceptron was introduced by Frank Rosenblatt in 1957. He proposed a Perceptron learning rule based on the original MCP neuron. A Perceptron is an algorithm for supervised learning of binary classifiers. This algorithm enables neurons to learn and processes elements in the training set one at a time.

![image](https://user-images.githubusercontent.com/63282184/137610730-614c893f-ef6d-48c6-b708-22d272e57bed.png)


## There are two types of Perceptrons: Single layer and Multilayer.

- **Single layer** - Single layer perceptrons can learn only linearly separable patterns

- **Multilayer** - Multilayer perceptrons or feedforward neural networks with two or more layers have the greater processing power
The Perceptron algorithm learns the weights for the input signals in order to draw a linear decision boundary.

This enables you to distinguish between the two linearly separable classes +1 and -1.

## Perceptron Learning Rule

Perceptron Learning Rule states that the algorithm would automatically learn the optimal weight coefficients. The input features are then multiplied with these weights to determine if a neuron fires or not.

![image](https://user-images.githubusercontent.com/63282184/137610764-a0549bb5-f1e1-4e86-8b25-a57d8035c813.png)


- The Perceptron receives multiple input signals, and if the sum of the input signals exceeds a certain threshold, it either outputs a signal or does not return an output. 
- In the context of supervised learning and classification, this can then be used to predict the class of a sample.


## Perceptron Function

Perceptron is a function that maps its input “x,” which is multiplied with the learned weight coefficient; an output value ”f(x)”is generated.

![image](https://user-images.githubusercontent.com/63282184/137610800-1b1b1a08-d951-4969-bdeb-650bd1af1cb4.png)

In the equation given above:

- “w” = vector of real-valued weights

- “b” = bias (an element that adjusts the boundary away from origin without any dependence on the input value)

- “x” = vector of input x values

![image](https://user-images.githubusercontent.com/63282184/137610823-4d5d32ee-81de-489e-9a41-0f1e5e786291.png)

- “m” = number of inputs to the Perceptron

The output can be represented as “1” or “0.”  It can also be represented as “1” or “-1” depending on which activation function is used.

## Inputs of a Perceptron

A Perceptron accepts inputs, moderates them with certain weight values, then applies the transformation function to output the final result. The image below shows a Perceptron with a Boolean output.

![image](https://user-images.githubusercontent.com/63282184/137610847-ae32208f-e5a4-429b-a546-7301008b071f.png)

A Boolean output is based on inputs such as salaried, married, age, past credit profile, etc. It has only two values: Yes and No or True and False. The summation function “∑” multiplies all inputs of “x” by weights “w” and then adds them up as follows:

![image](https://user-images.githubusercontent.com/63282184/137610855-dc9ea11c-5e9f-46e8-aba8-83490ca1737b.png)


## Activation Functions of Perceptron

The activation function applies a step rule (convert the numerical output into +1 or -1) to check if the output of the weighting function is greater than zero or not.

![image](https://user-images.githubusercontent.com/63282184/137610867-8556ec51-eb81-4971-82c9-572b7cd7265f.png)


For example:

If ∑ wixi> 0 => then final output “o” = 1 (issue bank loan)

Else, final output “o” = -1 (deny bank loan)

Step function gets triggered above a certain value of the neuron output; else it outputs zero. Sign Function outputs +1 or -1 depending on whether neuron output is greater than zero or not. Sigmoid is the S-curve and outputs a value between 0 and 1.


## Output of Perceptron

Perceptron with a Boolean output:

Inputs: x1…xn

Output: o(x1….xn)

![image](https://user-images.githubusercontent.com/63282184/137610882-13faf48c-8557-45fe-95cd-eefb3e4cf7e3.png)

Weights: wi=> contribution of input xi to the Perceptron output;

w0=> bias or threshold




If ∑w.x > 0, output is +1, else -1. The neuron gets triggered only when weighted input reaches a certain threshold value.

![image](https://user-images.githubusercontent.com/63282184/137610898-9c8a99de-36c0-46ec-9f1d-8584decd64ec.png)

An output of +1 specifies that the neuron is triggered. An output of -1 specifies that the neuron did not get triggered.

“sgn” stands for sign function with output +1 or -1.

## Error in Perceptron

In the Perceptron Learning Rule, the predicted output is compared with the known output. If it does not match, the error is propagated backward to allow weight adjustment to happen.

# CONCLUSION

- Perceptron is an algorithm for Supervised Learning of single layer binary linear classifiers.
- Optimal weight coefficients are automatically learned.
- Weights are multiplied with the input features and decision is made if the neuron is fired or not.
- Activation function applies a step rule to check if the output of the weighting function is greater than zero.
- Linear decision boundary is drawn enabling the distinction between the two linearly separable classes +1 and -1.
- If the sum of the input signals exceeds a certain threshold, it outputs a signal; otherwise, there is no output.

