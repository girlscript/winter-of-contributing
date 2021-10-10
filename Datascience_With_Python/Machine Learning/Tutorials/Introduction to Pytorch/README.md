
# Introduction to Pytorch 
## What is PyTorch?
#### It’s a Python based package for serving as a replacement of Numpy and to provide flexibility as a Deep Learning Development Platform.
## Why PyTorch?
*I encourage you to read Fast AI’s blog post for the reason of the course’s switch to PyTorch.
Or simply put:*
* Dynamic Graphs
* More intuitive than TF (Personal View)
---
## Terminologies
###  PyTorch NumPy <br />
A PyTorch tensor is identical to a NumPy array. A tensor is an n-dimensional array and with respect to PyTorch, it provides many functions to operate on these tensors.

PyTorch tensors usually utilize GPUs to accelerate their numeric computations. These tensors which are created in PyTorch can be used to fit a two-layer network to random data. The user can manually implement the forward and backward passes through the network.

### Variables and Autograd <br />
When using autograd, the forward pass of your network will define a computational graph − nodes in the graph will be Tensors, and edges will be functions that produce output Tensors from input Tensors.

PyTorch Tensors can be created as variable objects where a variable represents a node in computational graph.

### Dynamic Graphs <br />
Static graphs are nice because user can optimize the graph up front. If programmers are re-using same graph over and over, then this potentially costly up-front optimization can be maintained as the same graph is rerun over and over.

The major difference between them is that Tensor Flow’s computational graphs are static and PyTorch uses dynamic computational graphs.

### Optim Package <br />
The optim package in PyTorch abstracts the idea of an optimization algorithm which is implemented in many ways and provides illustrations of commonly used optimization algorithms. This can be called within the import statement.

###  Multiprocessing  <br />

Multiprocessing supports the same operations, so that all tensors work on multiple processors. The queue will have their data moved into shared memory and will only send a handle to another process.

---
## Tensors
Tensors are similar to numpy’s ndarrays, with the addition being that Tensors can also be used on a GPU to accelerate computing. Tensors are multi dimensional Matrices.

torch.Tensor(x,y)

This will create a X by Y dimensional Tensor that has been instantiated with random values.To Create a 5x3 Tensor with values randomly selected from a Uniform Distribution between -1 and 1

torch.Tensor(5,3).uniform(-1,1)

Tensor have a size attribute that can be called to chek their size 

print(x.size()))

Tensors are similar to numpy’s ndarrays, with the addition being that Tensors can also be used on a GPU to accelerate computing. Tensors are multi dimensional Matrices.
torch.Tensor(x,y)
This will create a X by Y dimensional Tensor that has been instantiated with random values.To Create a 5x3 Tensor with values randomly selected from a Uniform Distribution between -1 and 1
torch.Tensor(5,3).uniform(-1,1)
Tensor have a size attribute that can be called to chek their size 
print(x.size()))

---
## Basic Operations (Inline, Tensor Indexing, Slicing)
PyTorch supports various Tensor Functions with different syntax: Consider Addition: 
* Normal Addition

 y = torch.rand(5, 3) <br />
print(x + y) <br />

Getting Result in a Tensor 

result = torch.Tensor(5, 3) <br />
torch.add(x, y, out=result) <br />
* In Line <br />
 y.add_(x) <br />
 
 Inline functions are denoted by an underscore following their name. Note: These have faster execution time (With a higher memory complexity tradeoff) All Numpy Indexing, Broadcasting and Reshaping functions are supported Note: PyTorch doesn’t support a negative hop so [::-1] will result in an error 
print(x[:, 1]) <br />

y = torch.randn(5, 10, 15) <br />
 print(y.size()) <br />
print(y.view(-1, 15).size())

---

## Features
#### The major features of PyTorch are mentioned below −

* Easy Interface − PyTorch offers easy to use API; hence it is considered to be very simple to operate and runs on Python. The code execution in this framework is quite easy.

* Python usage − This library is considered to be Pythonic which smoothly integrates with the Python data science stack. Thus, it can leverage all the services and functionalities offered by the Python environment.

* Computational graphs − PyTorch provides an excellent platform which offers dynamic computational graphs. Thus a user can change them during runtime. This is highly useful when a developer has no idea of how much memory is required for creating a neural network model.

PyTorch is known for having three levels of abstraction as given below −

Tensor − Imperative n-dimensional array which runs on GPU.

Variable − Node in computational graph. This stores data and gradient.

Module − Neural network layer which will store state or learnable weights.

---

### PYTORCH PROS:
* Python-like coding.
* Dynamic graph.
* Easy & quick editing.
* Good documentation and community support.
* Open source.
* Plenty of projects out there using PyTorch.
 
### PYTORCH CONS:
* Third-party needed for visualization.
* API server needed for production.
---
## Applications
#### 1- Image classification : 
PyTorch can be used to build specialized neural network architectures called Convolutional Neural Networks (CNNs). These multilayer CNNs are fed images of a specific thing, say, a kitten, and much like how human brains works, once the CNN sees a data set of kitten images, it should be able to confidently identify a new image of a kitten. This application is seeing momentum in healthcare, where a CNN was recently used in a study to detect skin cancer. 
#### 2- Handwriting recognition:
This involves deciphering human handwriting and its inconsistencies from person to person and across languages. Facebook’s Chief AI Scientist, Yann LeCun, pioneered CNNs that could recognize handwritten numerical digits.
#### 3-Forecast time sequences:
A Recurrent Neural Network (RNN) is a type of neural network designed for sequence modeling and is especially useful for training an algorithm on the past. It can make decisions and predictions based on past data, so that it can make decisions based on the past. For example, an airline may want to forecast the number of passengers it will have in a single month based on the data from past months.  
#### 4-Text generation: 
RNNs and PyTorch also power text generation, which is the training of an AI model on a specific text (all of Shakespeare’s works, for example) to create its own output on what it learned. 
#### 5-Style transfer: 
One of the most popular and fun applications of PyTorch is a style transfer. It uses a class of deep learning algorithms to manipulate videos or images and adopt the visual style of that image on another image. For example, a style transfer can make your favorite digital vacation photo look like a painting or drawing by a famous artist, such as Monet. It’s even advanced enough to do the reverse, convert paintings into realistic looking photos! Check out the image below for some examples.



---

## conclusion
* PyTorch is an open source machine learning library based on the Torch library, used for applications such as computer vision and natural language processing,[6] primarily developed by Facebook's AI Research lab.<br />
* Researchers who are were inspired by torch’s programming style decided to implementation it in python calling is pytorch
* It’s a Python based package for serving as a replacement of Numpy and to provide flexibility as a Deep Learning Development Platform.
# [Reference Video](https://drive.google.com/drive/folders/1siSX4qze00nyxh16FpT8vbo3RfYXKAUm?usp=sharing)



