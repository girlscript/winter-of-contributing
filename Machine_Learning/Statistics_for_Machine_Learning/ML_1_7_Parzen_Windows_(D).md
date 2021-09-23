# **<ins>Parzen Windows</ins>**
Parzen windows classification is a technique for nonparametric density estimation, which can also be used for classification. Using a given kernel function, the technique approximates a given training set distribution via a linear combination of kernels centered on the observed points. In this work, we separately approximate densities for each of the two classes, and we assign a test point to the class with maximal posterior probability.

The resulting algorithm is extremely simple and closely related to support vector machines. The decision function is
<br><img src='https://compbio.soe.ucsc.edu/genex/genexTR2html/img34.gif'><br>
where the kernel function K is the radial basis function of the equation, without normalization applied to the inputs. As for the radial basis SVM, a constant is added to the kernel function whenever the two inputs are identical 
<br><br>

## **<ins>Density estimator</ins>**
Parzen Window is a non-parametric density estimation technique. Density estimation in Pattern Recognition can be achieved by using the approach of the Parzen Windows. Parzen window density estimation technique is a kind of generalization of the histogram technique.
<br>

It is used to derive a density function, f(x).
f(x) is used to implement a Bayes Classifier. When we have a new sample feature x and when there is a need to compute the value of the class conditional densities, f(x) is used.
<br>
f(x) takes sample input data value and returns the density estimate of the given data sample.
<br>

An n-dimensional hypercube is considered which is assumed to possess k-data samples.
The length of the edge of the hypercube is assumed to be hn.
<br>
Hence the volume of the hypercube is: Vn = hnd
<br>
We define a hypercube window function, φ(u) which is an indicator function of the unit hypercube which is centered at origin.:<br>
φ(u) = 1 if |ui| <= 0.5<br>
φ(u) = 0 otherwise<br>
Here, u is a vector, u = (u1, u2, …, ud)T.<br>
φ(u) should satisfy the following:<br>

- φ(u) >= 0; ∀u
- <img src = 'https://www.geeksforgeeks.org/wp-content/ql-cache/quicklatex.com-6986c1ab1a362ef6058dc49aed60e9ec_l3.svg'>

Let <img src = 'https://www.geeksforgeeks.org/wp-content/ql-cache/quicklatex.com-28beb3e98152f962dbaeeb8ef8450a7b_l3.svg' style='margin-left:25px'>

Since, φ(u) is centered at the origin, it is symmetric.<br>
φ(u) = φ(-u)

- <img src='https://www.geeksforgeeks.org/wp-content/ql-cache/quicklatex.com-eac0023f555edbb1cd73ed863f11005a_l3.svg'> is a hypercube of size h cenetered at u0
- Let D = {x1, x2, …, xn} be the data samples.
- For any <img src='https://www.geeksforgeeks.org/wp-content/ql-cache/quicklatex.com-d2ec2ec88d1230741db842bd0791dfa9_l3.svg' style='margin-left:25px; margin-right:25px'> would be 1 only if x<sub>i</sub> falls in a hypercube of side h centered at x.
- Hence the number of data points falling in a hypercube of side h centered at x is <img src='https://www.geeksforgeeks.org/wp-content/ql-cache/quicklatex.com-191a07f3468e0704444a1711b78a6127_l3.svg' style='margin-left:25px'>

Hence the estimated density function is : <img src='https://www.geeksforgeeks.org/wp-content/ql-cache/quicklatex.com-703e4955d27eb5a82607a766ba649c03_l3.svg' style='margin-left:25px'>

Also Since, Vn = hnd, Density Function becomes :<br>
<img src='https://www.geeksforgeeks.org/wp-content/ql-cache/quicklatex.com-b6c7469d41d2896b15a98791a90ddf6d_l3.svg'>

f(x) would satisfy the following conditions:

- f(x) >= 0 ;   ∀x
- <img src='https://www.geeksforgeeks.org/wp-content/ql-cache/quicklatex.com-db7bc5010bb11e02be8a03aa2593c1c3_l3.svg'>

<img src='https://media.geeksforgeeks.org/wp-content/uploads/20191226010201/gfg_parzen_window.png' style='width:30%'>
<br><br>

## **<ins>Kernel density estimation</ins>**
In statistics, kernel density estimation (KDE) is a non-parametric way to estimate the probability density function of a random variable. Kernel density estimation is a fundamental data smoothing problem where inferences about the population are made, based on a finite data sample. In some fields such as signal processing and econometrics it is also termed the Parzen–Rosenblatt window method, after Emanuel Parzen and Murray Rosenblatt, who are usually credited with independently creating it in its current form. One of the famous applications of kernel density estimation is in estimating the class-conditional marginal densities of data when using a naive Bayes classifier, which can improve its prediction accuracy.
<br><img src='https://upload.wikimedia.org/wikipedia/commons/thumb/2/2a/Kernel_density.svg/375px-Kernel_density.svg.png' style='width:30%'>
<br><br>
Parzen window density estimation is described as
<br><img src="https://i.ibb.co/JkNnjCg/image.png" style='width:20%'><br>
where n is number of elements in the vector, x is a vector, p(x) is a probability density of x, h is dimension of the Parzen Window, and ϕ is a window function.
<br>

Parzen window density estimation is another name for kernel density estimation. It is a nonparametric method for estimating continuous density function from the data.<br><br>
Imagine that you have some datapoints x1,…,xn that come from common unknown, presumably continuous, distribution f. You are interested in estimating the distribution given your data. One thing that you could do is simply to look at the empirical distribution and treat it as a sample equivalent of the true distribution. However if your data is continuous, then most probably you would see each xi point appear only once in the dataset, so based on this, you would conclude that your data comes from an uniform distribution since each of the values have equal probability. Hopefully, you can do better then this: you can pack your data in some number of equally-spaced intervals and count the values that fall into each interval. This method would be based on estimating the histogram. Unfortunately, with histogram you end up with some number of bins, rather then with continuous distribution, so it's only a rough approximation.<br><br>
Kernel density estimation is the third alternative. The main idea is that you approximate f by a mixture of continuous distributions K (using your notation ϕ), called kernels, that are centered at xi datapoints and have scale (bandwidth) equal to h:
<br><img src="https://i.ibb.co/dWdWbtz/image.png" style='width:20%'><br>

This is illustrated on the picture below, where normal distribution is used as kernel K and different values for bandwidth h are used to estimate distribution given the seven datapoints (marked by the colorful lines on the top of the plots). The colorful densities on the plots are kernels centered at xi points. Notice that h is a relative parameter, it's value is always chosen depending on your data and the same value of h may not give similar results for different datasets.
<br><img src='https://i.stack.imgur.com/JDEG5.png' style='width:40%'><br>

Kernel K can be thought as a probability density function, and it needs to integrate to unity. It also needs to be symmetric so that K(x)=K(−x) and, what follows, centered at zero. Wikipedia article on kernels lists many popular kernels, like Gaussian (normal distribution), Epanechnikov, rectangular (uniform distribution), etc. Basically any distribution meeting those requirements can be used as a kernel.<br><br>
Obviously, the final estimate will depend on your choice of kernel (but not that much) and on the bandwidth parameter h. The following thread How to interpret the bandwidth value in a kernel density estimation? describes the usage of bandwidth parameters in greater detail.<br><br>
Saying this in plain English, what you assume in here is that the observed points xi are just a sample and follow some distribution f to be estimated. Since the distribution is continuous, we assume that there is some unknown but nonzero density around the near neighborhood of xi points (the neighborhood is defined by parameter h) and we use kernels K to account for it. The more points is in some neighborhood, the more density is accumulated around this region and so, the higher the overall density of fh^. The resulting function fh^ can be now evaluated for any point x (without subscript) to obtain density estimate for it, this is how we obtained function fh^(x) that is an approximation of unknown density function f(x).<br><br>
The nice thing about kernel densities is that, not like histograms, they are continuous functions and that they are themselves valid probability densities since they are a mixture of valid probability densities. In many cases this is as close as you can get to approximating f.<br><br>
The difference between kernel density and other densities, as normal distribution, is that "usual" densities are mathematical functions, while kernel density is an approximation of the true density estimated using your data, so they are not "standalone" distributions.<br><br>
I would recommend you the two nice introductory books on this subject by Silverman (1986) and Wand and Jones (1995).
<br><br>

## **<ins>Example</ins>**
Kernel density estimates are closely related to histograms, but can be endowed with properties such as smoothness or continuity by using a suitable kernel. The diagram below based on these 6 data points illustrates this relationship:
<br><img src='https://i.ibb.co/L0JNJWD/image.png' style='width:30%'><br>
For the histogram, first the horizontal axis is divided into sub-intervals or bins which cover the range of the data: In this case, six bins each of width 2. Whenever a data point falls inside this interval, a box of height 1/12 is placed there. If more than one data point falls inside the same bin, the boxes are stacked on top of each other.<br><br>
For the kernel density estimate, normal kernels with standard deviation 2.25 (indicated by the red dashed lines) are placed on each of the data points xi. The kernels are summed to make the kernel density estimate (solid blue curve). The smoothness of the kernel density estimate (compared to the discreteness of the histogram) illustrates how kernel density estimates converge faster to the true underlying density for continuous random variables.
<br><img src='https://upload.wikimedia.org/wikipedia/commons/thumb/4/41/Comparison_of_1D_histogram_and_KDE.png/750px-Comparison_of_1D_histogram_and_KDE.png' style='width:50%'>
<br><br>

## **<ins>Conclusion</ins>**
Though the ability to effectively cast aside the issue of parameter estimation can be a compelling reason to employ the Parzen window method for density estimation, it is difficult to tout the method too highly in light of its heavy computation time and the difficulty associated with choosing an appropriate h-parameter.







