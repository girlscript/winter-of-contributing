# **<ins>Parzen Windows</ins>**
Parzen windows classification is a technique for nonparametric density estimation, which can also be used for classification. Using a given kernel function, the technique approximates a given training set distribution via a linear combination of kernels centered on the observed points. In this work, we separately approximate densities for each of the two classes, and we assign a test point to the class with maximal posterior probability.

The resulting algorithm is extremely simple and closely related to support vector machines. The decision function is
<br><img src='https://i.ibb.co/hYkgwZ0/image.png' style='width:20%'><br>
where the kernel function K is the radial basis function of the equation, without normalization applied to the inputs. As for the radial basis SVM, a constant is added to the kernel function whenever the two inputs are identical 
<br><br>

Parzen Window is a non-parametric density estimation technique. Density estimation 
in Pattern Recognition can be achieved by using the approach of the Parzen 
Windows.

- Parzen window density estimation technique is a kind of generalization of 
the histogram technique.
It is used to derive a density function, f(x).
- f(x) is used to implement a Bayes Classifier. When we have a new sample feature x 
and when there is a need to compute the value of the class conditional 
densities, f(x) is used.
- f(x) takes sample input data value and returns the density estimate of the given data 
sample.
- Feature space is the space where our training data lies so that we can work on it 
which is then basically divided into equal sized cells or bins of length h.Here h refers 
to the height of different bins that are made on the histogram on which we are 
working
<br><img src='https://www.projectrhea.org/rhea/images/8/8c/Lec15_comparison_OldKiwi.PNG' style='width:30%'><br>

- Probability of a sample x being located in a cell is estimated for each of the cell where n is the total number of samples and Kn is located inside the cell.
- Now probability is    :   p = Kn / n
- Now the value of probability density function through the cell is given as 
<br><img src='https://i.ibb.co/pymY3NB/imgonline-com-ua-Replace-Color-D3-Ym-PKEXZVCa-Bc9-K.jpg' style='width:30%'><br>
where x̄ is the middle point of the cell
<br><img src='https://media.geeksforgeeks.org/wp-content/uploads/20191224162530/gft_parzen_cube.png' style='width:30%'><br>

- Now to estimate densities consider the region as d-dimensional hypercube. Let length of an edge of that hypercube be hn then volume is given by V<sub>n</sub> = h<sub>n</sub><sup>d</sup> where dis considered as the edges of the hypercube.
- Defining window function, the number of samples falling in the hypercube is given as
- (u) = 1 if |u₁| ≤; j=1,2,...,d<br>
0 otherwise<br>
where (u) = unit hypercube centred at origin which means the sample must lie in between the half distance from centre of origin otherwise there is no need to follow with this method if it is lying outside that specific boundary.
- It follows the <img src='https://i.ibb.co/tsg9Y5P/image.png' style='width:75px'> is equal to unity if x<sub>i</sub> falls within the hypercube of volume v centered at x and is zero otherwise.
<br><img src='https://i.ibb.co/K7B6Y77/image.png' style='width:20%'><br>

- Thus the number of samples in this hypercube is given by This leads to density estimate:
<br><img src='https://i.ibb.co/G5tjhqc/image.png' style='width:20%'><br>
<br><img src='https://media.geeksforgeeks.org/wp-content/uploads/20191226010201/gfg_parzen_window.png' style='width:30%'><br>
<br><br>

## **<ins>Kernel density estimation</ins>**
In statistics, kernel density estimation (KDE) is a non-parametric way to estimate the probability density function of a random variable. 
<br><img src='https://i.ibb.co/6FVWgBt/image.png' style='width:30%'>
<br><br>
Parzen window density estimation is described as
<br><img src="https://i.ibb.co/JkNnjCg/image.png" style='width:20%'><br>
where n is number of elements in the vector, x is a vector, p(x) is a probability density of x, h is dimension of the Parzen Window, and ϕ is a window function.
<br>

Parzen window density estimation is another name for kernel density estimation. It is a nonparametric method for estimating continuous density function from the data.<br><br>
Kernel density estimation is the third alternative. The main idea is that you approximate f by a mixture of continuous distributions K (using your notation ϕ), called kernels, that are centered at xi datapoints and have scale (bandwidth) equal to h:
<br><img src="https://i.ibb.co/dWdWbtz/image.png" style='width:20%'><br>
<br><br>

## **<ins>Example</ins>**
Parzen window density estimates are closely related to histograms, but can be endowed with properties such as smoothness or continuity by using a suitable kernel. The diagram below based on these 6 data points illustrates this relationship:
<br><img src='https://i.ibb.co/L0JNJWD/image.png' style='width:30%'><br>
For the histogram, first the horizontal axis is divided into sub-intervals or bins which cover the range of the data: In this case, six bins each of width 2. Whenever a data point falls inside this interval, a box of height 1/12 is placed there. If more than one data point falls inside the same bin, the boxes are stacked on top of each other.<br><br>
For the Parzen window density estimate, normal kernels with standard deviation 2.25 (indicated by the red dashed lines) are placed on each of the data points xi. The kernels are summed to make the Parzen window density estimate (solid blue curve). The smoothness of the Parzen window density estimate (compared to the discreteness of the histogram) illustrates how Parzen window density estimates converge faster to the true underlying density for continuous random variables.
<br><img src='https://upload.wikimedia.org/wikipedia/commons/thumb/4/41/Comparison_of_1D_histogram_and_KDE.png/750px-Comparison_of_1D_histogram_and_KDE.png' style='width:50%'>
<br><br>

## **<ins>Conclusion</ins>**
Though the ability to effectively cast aside the issue of parameter estimation can be a compelling reason to employ the Parzen window method for density estimation, it is difficult to tout the method too highly in light of its heavy computation time and the difficulty associated with choosing an appropriate h-parameter.
<br><br>

## **References**
- https://www.geeksforgeeks.org/parzen-windows-density-estimation-technique/
- https://stats.stackexchange.com/questions/244012/can-you-explain-parzen-window-kernel-density-estimation-in-laymans-terms
- https://datascience.stackexchange.com/questions/26182/parzen-and-k-nearest-neighbor#:~:text=(knn%20count%20the%20k%20nearest,Parzen%20the%20volume%20is%20fixed).







