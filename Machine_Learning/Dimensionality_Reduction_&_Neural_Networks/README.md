<div align = 'center'>
  <h1> 🟣 Chapter 6 - Dimensionality Reduction & Neural Networks 🟣 </h1></div>
  
<p align = 'justify'>
  The number of input features, variables, or columns present in a given dataset is known as dimensionality, and the process to reduce these features is called dimensionality reduction.
<p align = 'justify'>
A dataset contains a huge number of input features in various cases, which makes the predictive modeling task more complicated. Because it is very difficult to visualize or make predictions for the training dataset with a high number of features, for such cases, dimensionality reduction techniques are required to use.
<p align = 'justify'>
Dimensionality reduction technique can be defined as, "It is a way of converting the higher dimensions dataset into lesser dimensions dataset ensuring that it provides similar information." These techniques are widely used in machine learning for obtaining a better fit predictive model while solving the classification and regression problems.
<p align = 'justify'>
It is commonly used in the fields that deal with high-dimensional data, such as speech recognition, signal processing, bioinformatics, etc. It can also be used for data visualization, noise reduction, cluster analysis, etc.
  
**Benefits of Dimensionality Reduction:**
  
Some benefits of applying dimensionality reduction technique to the given dataset are given below:
* By reducing the dimensions of the features, the space required to store the dataset also gets reduced.
* Less Computation training time is required for reduced dimensions of features.
* Reduced dimensions of features of the dataset help in visualizing the data quickly.
* It removes the redundant features (if present) by taking care of multicollinearity.
  
**Neural Network:**
<p align = 'justify'>
A neural network is a series of algorithms that endeavors to recognize underlying relationships in a set of data through a process that mimics the way the human brain operates. In this sense, neural networks refer to systems of neurons, either organic or artificial in nature.
<p align = 'justify'>  
Neural networks generally perform supervised learning tasks, building knowledge from data sets where the right answer is provided in advance. The networks then learn by tuning themselves to find the right answer on their own, increasing the accuracy of their predictions.
  
Let's talk about the topics of this  chapter,
****************************************************************************

## 📌 List of Contents

| Sl. No. | Topics | Audio | Documentation |  Video |
| :-: |:-: |:-: |:-: |:-: |
| 6.1 | **Singular Value Decomposition** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_1_Singular_Value_Decomposition_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_1_Singular_Value_Decomposition_(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_1_Singular_Value_Decomposition_(V).md) |
| 6.2 | **Principle Component Analysis** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_2_Principle_Component_Analysis_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_2_%20Principal_Component_Analysis_(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_2_Principle_Component_Analysis_(V).md) |
| 6.3 | **Self Organizing Maps** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_3_Self_Organizing_Maps_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_3_Self_Organizing_Maps_(D)_.ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_3_Self_Organizing_Maps_(V).md) | 
| 6.4 | **Perceptron** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_4_Perceptron_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_4_Perceptron_(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_4_Perceptron_(V).md) | 
| 6.5 | **Multilayered Perceptron** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_5_Multilayered_Perceptron_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_5_Multilayered_Perceptron_(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_5_Multilayered_Perceptron_(V).md) | 
| 6.6 | **Feedforward Neural Networks** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_6_Feedforward_Neural_Networks_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6.6_Feedforward_Neural_Networks_(D).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_6_Feedforward_Neural_Networks_(V).md) |
| 6.7 | **Gradient (Vanilla) Descent** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_7_Gradient_(Vanilla)_Descent_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML%20_6_7_Gradient_(Vanilla)_Descent_(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_7_Gradient_(Vanilla)_Descent_(V).md) | 
| 6.8 | **Stochastic and Minibatch Gradient Descent** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_8_Stochastic_and_Minibatch_Gradient_Descent_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_8_Stochastic%20and%20Minibatch%20Gradient%20Descent%20(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_8_Stochastic_and_Minibatch_Gradient_Descent_(V).md) |
| 6.9 | **Momentum and Nesterov Gradient Descent** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_9_Momentum_and_Nesterov_Gradient_Descent_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_9_Momentum_and_Nesterov_Gradient_Descent_(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_9_Momentum_and_Nesterov_Gradient_Descent_(V).md) |
| 6.10 | **Backpropagation** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_10_Back_propagation_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_10_Back_propagation_(D).ipynb) | - |
| 6.11 | **Implement a MultiLayered Perceptron model on XOR function with 3 inputs. ⭐** | ❌ | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_11_Implement%20a%20Multi%20Layered%20Perceptron%20model%20on%20XOR%20function%20with%203%20inputs%20(D).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Dimensionality_Reduction_%26_Neural_Networks/ML_6_11_Implement_a_Multi_Layered_Perceptron_model_on_XOR_function_with_3_inputs_(V).md) |


**N.B.: ⭐ marked issue is the Star issue of this week!**
  
*************************************************************************

**_Happy Contributions!_** 🍀 ❤️
### GirlScript Winter of Contributions 2021 ❄️
