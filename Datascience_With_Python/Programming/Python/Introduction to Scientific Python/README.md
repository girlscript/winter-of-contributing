
# **Introduction to Scientic Python**

![Scipy](https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Programming/Python/Introduction%20to%20Scientific%20Python/Images/SciPy-a-Python-library-for-mathematics-science-and-engineering.jpg)


# Table of Contents:
 1. [ Introduction ](#introduction)
 2. [ Features](#benefits)
 3. [ Environment Setup](#env)
 4. [ SciPy Subpackages](#sub)
 5. [ Topics covered in ipnyb file](#topic)
 6. [ Applications](#app)
 7. [ Resources](#res)
 8. [ Conclusion](#sum)

<a name="introduction"></a>

## Introduction:

Scientific Python (SciPy) is scientific computation library for solving mathematical equations or algorithms. It is based on NumPy library for providing more flexible solutions, better ananlysis of code and reducing the complexity. Scipy is userfriendly, efficient and easy to use.


<a name="benefits"></a>

## Features:
- Contains varieties of sub packages for Scientific Computation.
- Easy to use and understand.
- Fast because of high computational power.
- Can provide numpy or matplotlib solutions
- Provides full featured version of the linear algebra as well as other numerical module
- Works as interactive Python session supporting alike a data-processing library 
- Can Compete with MATLAB, Octave, R-Lab,etc

<a name="env"></a>

##  Environment Setup
To setup the environment for Scientiific python (SciPy), we can use pip or anaconda command.
 
#### For windows :
Go to command prompt and type :
$ pip install scipy  
or 
$ conda install -c anaconda scipy  

#### For Ubuntu:
Run the following command:

$ sudo apt install python3-venv python3-pip  

For activating the latest version, follow the command

$ sudo apt install python3.7 python3.7-dev python3.7-venv  
$ python3.7 -m venv work 3.7  
$ source work3.7/bin/activate  
$ pip install scipy

#### For Mac:
As it doesn't have preinstall package manager, run following command:
$ sudo port install py35-numpy py35-scipy py35-matplotlib py35-ipython +notebook py35-pandas py35-sympy py35-nose  
 
<a name="sub"></a>

## SciPy Subpackages
It has numerous number of subpackages:
1. scipy.cluster for  vector quantization/ Kmeans.
2. scipy.constants for representing  physical and mathematical constants
3. scipy.fftpack  for fourier transform.
4. scipy.integrate for integration routines.
5. scipy.interpolation for interpolation.
6. scipy.linalg for linear algebra routine
7. scipy.io for  data input and output.
8. scipy.ndimage for the n-dimension image.
9. scipy.optimize for optimization.
10. scipy.signal	use in signal processing.

<a name="topic"></a>
##  Topics covered in ipnyb file 
* File input/Output ([scipy.io](http://docs.scipy.org/doc/scipy/reference/io.html))
* Special functions ([scipy.special](http://docs.scipy.org/doc/scipy/reference/special.html))
* Linear Algebra ([scipy.linalg](http://docs.scipy.org/doc/scipy/reference/linalg.html))
* Integration ([scipy.integrate](http://docs.scipy.org/doc/scipy/reference/integrate.html))
* Fourier Transforms ([scipy.fftpack](http://docs.scipy.org/doc/scipy/reference/fftpack.html))
* Optimization ([scipy.optimize](http://docs.scipy.org/doc/scipy/reference/optimize.html))
* Interpolation ([scipy.interpolate](http://docs.scipy.org/doc/scipy/reference/interpolate.html))
* Statistics ([scipy.stats](http://docs.scipy.org/doc/scipy/reference/stats.html))
* Image processing ([scipy.ndimage](http://docs.scipy.org/doc/scipy/reference/ndimage.html))
* Sparse matrix Problems ([scipy.sparse](http://docs.scipy.org/doc/scipy/reference/sparse.html))

<a name="app"></a>
## Applications :
* Data representations and interactions.
* Linear models, multiple factors, and analysis of variance.
* 3D plotting with Mayavi.
* Slicing and dicing data: sources, modules and filters.
* Making animatic solutions.
* Signal Processing.

<a name="res"></a>
## Resources :
1. https://www.javatpoint.com/scipy-sub-packages
2. https://www.geeksforgeeks.org/data-analysis-with-scipy/
3. https://www.w3schools.com/python/scipy/scipy_intro.php
4. https://www.scipy.org/
5. https://www.guru99.com/scipy-tutorial.html

<a name="sum"></a>
## Conclusion:
As a sum of whole documentation, Scientific Python (SciPy)'s benefits, environment setup and its applications are discussed below. It has vast range of functionalities becuase of its multiple subpackages which is used to manipulate and visualize data using high level commands.
