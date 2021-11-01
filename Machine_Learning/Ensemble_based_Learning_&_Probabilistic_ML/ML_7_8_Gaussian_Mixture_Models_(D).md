## Title : Gaussian Mixture Models
🔴 **Type of Content** : Documentation

🔴 **Domain** : Machine Learning

🔴 **Module** : Ensemble based Learning & Probabilistic ML

*********************************************************************


![gmm2](https://user-images.githubusercontent.com/80235375/139640493-d316482d-432c-49ec-91ff-25ac9b62a8a9.png)


### DEFINITION

A Gaussian Mixture is a function that is comprised of several Gaussians, each identified by k ∈ {1,…, K}, where K is the number of clusters of our dataset. Each Gaussian k in the mixture is comprised of the following parameters:

- A mean μ that defines its centre.
- A covariance Σ that defines its width. This would be equivalent to the dimensions of an ellipsoid in a multivariate scenario.
- A mixing probability π that defines how big or small the Gaussian function will be.

### UNDERSTANDING GMM

In simple terms, Gaussian mixture models are probabilistic models for representing normally distributed subpopulations within an overall population. Mixture models in general don't require knowing which subpopulation a data point belongs to, allowing the model to learn the subpopulations automatically.

For example, in modeling human height data, height is typically modeled as a normal distribution for each gender with a mean value of approximately 5'10" for males and 5'5" for females. Given only the height data and not the gender assignments for each data point, the distribution of all heights would follow the sum of two scaled (different variance) and shifted (different mean) normal distributions. A model making this assumption is an example of a Gaussian mixture model (GMM), though in general a GMM may have more than two components. Estimating the parameters of the individual normal distribution components is a canonical problem in modeling data with GMMs.

### CONTRAST BETWEEN K-MEANS AND GMM

- In k-Means, clusters and defined by their means. While in GMM, clusters are defined by their means and variances, modeled by Gaussians.
- GMM's work well even if clusters are overlapping unlike in k-Means.
- Uses Euclidean distance to the mean, while GMM's use probability of X belonging to a cluster.
<img width="625" alt="kmeans vs gmm2" src="https://user-images.githubusercontent.com/80235375/139640016-783cd6fc-0cea-4b66-9b62-77fa6149ca20.png">

### Expectation Maximization Algorithm

EM can be used for variables that are not directly observable and deduce from the value of other observed variables. It can be used with unlabeled data for its classification. It is one of the popular approaches to maximize the likelihood.

Given a set of incomplete data and set of starting parameters.

- E-Step: Using the given data and the current value of parameters, we estimate the value of hidden data.

- M-Step: After the E-step, it is used to maximize the hidden variable and joint distribution of the data.

- Repeat E-step and M-step until convergence.

Even though, training the GMM with EM Algorithm can ensure that missing data are filled up and the latent variables are found, it slows convergence and it converges up to the local optima only.

### ADVANTAGES

- Mixture models are more general than partitioning,i.e. different densities and sizes of clusters.
- Clusters can be characterized using a small number of parameters.
- The results satisfy the statistical assumptions of generative models.

### DISADVANTAGES

- Converge to local optimum
- Computationally more expensive
- Hard to estimate the number of clusters
- Can only deal with spherical clusters

### APPLICATIONS

GMMs have been used for feature extraction from speech data, and have also been used extensively in object tracking of multiple objects, where the number of mixture components and their means predict object locations at each frame in a video sequence.


*********************************************************************

### GirlScript Winter of Contributions 2021 
