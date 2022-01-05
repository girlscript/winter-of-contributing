# Getting Started with Theano

## Video link : [Getting Started with Theano](https://drive.google.com/file/d/1rRmsx1CV77ed3Y1eH8OTuNvRQowVWIbQ/view?usp=sharing)

- The Machine Learning model development requires lot of mathematical computations. These generally require arithmetic computations especially large matrices of multiple dimensions. These days we use Neural Networks rather than the traditional statistical techniques for developing Machine Learning applications. The Neural Networks need to be trained over a huge amount of data. The training is done in batches of data of reasonable size. 
- Thus, the learning process is iterative. Thus, if the computations are not done efficiently, training the network can take several hours or even days. Thus, the optimization of the executable code is highly desired. And that is what exactly Theano provides.

- Theano is a Python library that lets you define mathematical expressions used in Machine Learning, optimize these expressions and evaluate those very efficiently by decisively using GPUs in critical areas. It can rival typical full C-implementations in most of the cases.

- Theano was written at the LISA lab with the intention of providing rapid development of efficient machine learning algorithms. It is released under a BSD license.

## Theano - Installation
Theano can be installed on Windows, MacOS, and Linux. The installation in all the cases is trivial. Before you install Theano, you must install its dependencies. The following is the list of dependencies −

- Python
- NumPy − Required
- SciPy − Required only for Sparse Matrix and special functions
- BLAS − Provides standard building blocks for performing basic vector and matrix operations
- The optional packages that you may choose to install depending on your needs are −

- nose: To run Theano’s test-suite
- Sphinx − For building documentation
- Graphiz and pydot − To handle graphics and images
- NVIDIA CUDA drivers − Required for GPU code generation/execution
- libgpuarray − Required for GPU/CPU code generation on CUDA and OpenCL devices


## What is Theano?

- Theano is a Python library. It lets you define, optimize, and evaluate mathematical expressions, especially the ones which are used in Machine Learning Model development. Theano itself does not contain any pre-defined ML models; it just facilitates its development. It is especially useful while dealing with multi-dimensional arrays. It seamlessly integrates with NumPy, which is a fundamental and widely used package for scientific computations in Python.

- Theano facilitates defining mathematical expressions used in ML development. Such expressions generally involve Matrix Arithmetic, Differentiation, Gradient Computation, and so on.

- Theano first builds the entire Computational Graph for your model. It then compiles it into highly efficient code by applying several optimization techniques on the graph. The compiled code is injected into Theano runtime by a special operation called function available in Theano. We execute this function repetitively to train a neural network. The training time is substantially reduced as compared to using pure Python coding or even a full C implementation.

## Theano - Data Types

![image](https://user-images.githubusercontent.com/63282184/143810004-47f427ec-307b-4cc9-a1ab-a5a4127977e8.png)


## Theano - Variables

![image](https://user-images.githubusercontent.com/63282184/143810051-b43fd7b9-ea94-4090-b4f8-a580b2c1d79d.png)

##  Conclusion
- The Machine Learning model building involves intensive and repetitive computations involving tensors. These require intensive computing resources. As a regular compiler would provide the optimizations at the local level, it does not generally produce a fast execution code.

- Theano first builds a computational graph for the entire computation. As the whole picture of computation is available as a single image during compilation, several optimization techniques can be applied during pre-compilation and that’s what exactly Theano does. 
- It restructures the computational graph, partly converts it into C, moves shared variables to GPU, and so on to generate a very fast executable code. The compiled code is then executed by a Theano function which just acts as a hook for injecting the compiled code into the runtime. Theano has proved its credentials and is widely accepted in both academics and industry.

