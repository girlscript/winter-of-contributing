## Contrast between k- means, k-medoids and Hierarchical Clustering

### Clustering

Clustering is a machine learning technique that involves the grouping of data points. Various clustering algorithms can be used to classify a given a set of data points into a specific group. In simple words, the aim is to segregate groups with similar traits and assign them into clusters. A good clustering algorithm is one that makes clusters such that the Intercluster distance between different clusters is maximized and Intracluster distance of same cluster is minimized.

### K-means Clustering

K-means clustering is one of the simplest and popular unsupervised machine learning algorithms. The k-means algorithm partitions the given data into k clusters. Median or mean can be chosen as a cluster centre to represent each cluster. Each cluster has a cluster center,
called **centroid** specified by the user.

In other words, the K-means algorithm identifies k number of centroids, and then allocates every data point to the nearest cluster, while keeping the centroids as small as possible.

Given k, the k-means algorithm works as follows:

1. Randomly choose k data points to be the initial centroids.
2. Assign each data point to the closest centroid
3. Re-compute the centroids using the current cluster memberships.
4. If a convergence criterion is not met, repeat step 2.

ADVANTAGES:

1. Convergence is guaranteed.
2. Specialized to clusters of different sizes and shapes.

DISADVANTAGES:

1.  K-Value is not easy to predict.
2.  Doesn't work well with global cluster.

### K-medoids Clustering

K-medoids is a partition algorithm similar to K-means clustering that partitions data into k distinct clusters, by finding medoids that minimize the sum of dissimilarities between points in the data and their nearest medoid.

The **medoid** of a set is a member of that set whose average dissimilarity with the other members of the set is the smallest. Similarity can be defined for many types of data that do not allow a mean to be calculated, allowing k-medoids to be used for a broader range of problems than k-means.

The most common realisation of k-medoid clustering is the Partitioning Around Medoids (PAM) algorithm and is as follows:

1. randomly select k of the n data points as the medoids
2. Associate each data point to the closest medoid.
3. For each medoid m and each data point o associated to m; swap m and o and compute the total cost of the configuration (i.e., the average dissimilarity of o to all the data points associated to m).
4. Select the medoid o with the lowest cost of the configuration.
   Repeat alternating steps 2, 3 and 4 until there is no change in the assignments.

ADVANTAGES:

- Simple to understand and easy to implement.
- Fast and converges in a fixed number of steps.
- Handles outliers.

DISADVANTAGES:

- It requires precision and is complex enough.
- It does not scale well for large datasets.

### Hierarchial Clusterin

A Hierarchical clustering method works via grouping data into a tree of clusters. Hierarchical clustering begins by treating every data points as a separate cluster. Then, it repeatedly executes the subsequent steps:

1. Identify the two clusters which can be closest together, and
2. Merge the two maximum comparable clusters.
3. We need to continue these steps until all the clusters are merged together.

The endpoint is a set of clusters, where each cluster is distinct from each other cluster, and the objects within each cluster are broadly similar to each other. A diagram called **dendrogram** which is a a hierarchical series of nested clusters is formed.

Hierarchical clustering can be divided into two main types: agglomerative and divisive.

1. Agglomerative clustering: Also known as AGNES (Agglomerative Nesting). It works in a bottom-up manner.
2. Divisive hierarchical clustering: Also known as DIANA (Divise Analysis). It works in a top-down manner.

ADVANTAGES:

1. Ease of handling of any forms of similarity or distance.
2. Consequently, applicability to any attributes types.

DISADVANTAGES:

1. Hierarchical clustering requires the computation and storage of an n×n distance matrix.
2. For very large datasets, this can be expensive and slow.

### K-means Clustering Vs K-medoids Clustering

- Both K-means and K-medoids clustering are partitional algorithms.

- The difference lies in the fact that K-means attempts to minimize the total squared error, while k-medoids minimizes the sum of dissimilarities between points labeled to be in a cluster and a point designated as the center of that cluster.
- In contrast to the k -means algorithm, k -medoids chooses datapoints as centers.

- K-medoids could be more robust to noise and outliers as compared to k-means because it minimizes a sum of general pairwise dissimilarities instead of a sum of squared Euclidean distances.

### Hierarchial Clustering Vs Partitional Clustering Techniques

- Hierarchical clustering can't handle big data well but K Means clustering can. This is because the time complexity of K Means is linear i.e. O(n) while that of hierarchical clustering is quadratic i.e. O(n2).
- Hierarchical clustering does not require any input parameters, while partitional clustering algorithms like K-means Clustering and K-medoids Clustering require the number of clusters to start running.
- Hierarchical clustering returns a much more meaningful and subjective division of clusters but partitional clustering results in exactly k clusters.
