# K Medoid Algorithm
## AUDIO LINK: [K Medoid Algorithm](https://drive.google.com/file/d/1jeJ9ZWF8mHMTQsQsJ5lXfwX4BmdrAlTr/view?usp=sharing)

- K- Medoids is a clustering algorithm resembling the K-Means clustering technique. 
- It falls under the category of unsupervised machine learning. It majorly differs from the K-Means algorithm in terms of the way it selects the clusters’ centres. 
- The former selects the average of a cluster’s points as its centre (which may or may not be one of the data points) while the latter always picks the actual data points from the clusters as their centres (also known as ‘exemplars’ or ‘medoids’).
-  K-Medoids also differs in this respect from the K-Medians algorithm which is the same as K-means, except that it chooses the medians (instead of means) of the clusters as centres.

## Working of the K-Medoids approach

1.	Randomly choose ‘k’ points from the input data (‘k’ is the number of clusters to be formed). The correctness of the choice of k’s value can be assessed using methods such as silhouette method.
2.	Each data point gets assigned to the cluster to which its nearest medoid belongs.
3.	For each data point of cluster i, its distance from all other data points is computed and added. The point of ith cluster for which the computed sum of distances from other points is minimal is assigned as the medoid for that cluster.
4.	Steps (2) and (3) are repeated until convergence is reached i.e. the medoids stop moving.

## Complexity of K-Medoids algorithm

The complexity of the K-Medoids algorithm comes to O(N2CT) where N, C and T denote the number of data points, number of clusters and number of iterations respectively. With similar notations, the complexity K-Means algorithm can be given as O(NCT).

### The time complexity is  O(k * (n-k)^2).

## Advantages:

- It is simple to understand and easy to implement.
- K-Medoid Algorithm is fast and converges in a fixed number of steps.
- PAM is less sensitive to outliers than other partitioning algorithms.
- Mean of the data points is a measure that gets highly affected by the extreme points. So in K-Means algorithm, the centroid may get shifted to a wrong position and hence result in incorrect clustering if the data has outliers because then other points will move away from  . 
- On the contrary, a medoid in the K-Medoids algorithm is the most central element of the cluster, such that its distance from other points is minimum. Since medoids do not get influenced by extremities, the K-Medoids algorithm is more robust to outliers and noise than K-Means algorithm. 
- Besides, K-Medoids algorithm can be used with arbitrarily chosen dissimilarity measure (e.g. cosine similarity) or any distance metric, unlike K-Means which usually needs Euclidean distance metric to arrive at efficient solutions.
- K-Medoids algorithm is found useful for practical applications such as face recognition. The medoid can correspond to the typical photo of the individual whose face is to be recognized. 
- But if K-Means algorithm is used instead, some blurred image may get assigned as the centroid, which has mixed features from several photos of the individual and hence makes the face recognition task difficult.


## Disadvantages:

- The main disadvantage of K-Medoid algorithms is that it is not suitable for clustering non-spherical (arbitrary shaped) groups of objects. This is because it relies on minimizing the distances between the non-medoid objects and the medoid (the cluster centre) – briefly, it uses compactness as clustering criteria instead of connectivity.
- It may obtain different results for different runs on the same dataset because the first k medoids are chosen randomly.

## Implementation



This module implements a K-medoids algorithm using as input a list of points
and a distance function, like ``distance(p, q) = ||q - p||``:

.. code-block:: python

    >>> points = [1, 2, 3, 4, 5, 6, 7]
    >>> def distance(a, b):
    ...     return abs(b - a)

Just import the main ``k_medoids`` function:

.. code-block:: python

    >>> from medoids import k_medoids
    >>> diameter, medoids = k_medoids(points, k=2, distance, spawn=2) #doctest: +SKIP
    * New chosen kernels: [2, 3]
    * Iteration over after 3 steps, max diameter 3
    * New chosen kernels: [1, 2]
    * Iteration over after 4 steps, max diameter 3
    ~~ Spawn end: min of max diameters 3.000 for medoids: [Medoid(2, [1, 2, 3]), Medoid(5, [4, 5, 6, 7])]

There is also a ``k_medoids_auto_k`` which increases automatically the number of clusters
until we have homogeneous clusters:

.. code-block:: python

    >>> from medoids import k_medoids_auto_k
    >>> diameter, medoids = k_medoids_auto_k(points, diam_max=3, distance, spawn=3) #doctest: +SKIP
    * New chosen kernels: [2]
    * Iteration over after 2 steps, max diameter 6
    * New chosen kernels: [6]
    * Iteration over after 2 steps, max diameter 6
    * New chosen kernels: [2]
    * Iteration over after 2 steps, max diameter 6
    ~~ Spawn end: min of max diameters 6.000 for medoids: [Medoid(4, [1, 2, 3, 4, 5, 6, 7])]
    *** Diameter too big 6.000 > 3.000
    *** Now trying 2 clusters

    * New chosen kernels: [6, 2]
    * Iteration over after 2 steps, max diameter 3
    * New chosen kernels: [2, 6]
    * Iteration over after 1 steps, max diameter 3
    * New chosen kernels: [2, 1]
    * Iteration over after 3 steps, max diameter 4
    ~~ Spawn end: min of max diameters 3.000 for medoids: [Medoid(5, [4, 5, 6, 7]), Medoid(2, [1, 2, 3])]
    *** Diameter ok 3.000 <= 3.000
    *** Stopping, 2 clusters enough (7 points initially)

## CONCLUSION

k-medoid is based on medoids (which is a point that belongs to the dataset) calculating by minimizing the absolute distance between the points and the selected centroid, rather than minimizing the square distance. As a result, it's more robust to noise and outliers than k-means.

### Refrences
- https://www.geeksforgeeks.org/ml-k-medoids-clustering-with-example/
- https://iq.opengenus.org/k-medoids-clustering/
