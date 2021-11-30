# Audio Link : [Clustering Techniques](https://drive.google.com/file/d/1-89U4ZEvtjAeYGVvN6dZGymP-zhzay0Y/view?usp=sharing)

---

# <b>CLUSTERING</b>

- Clustering is the task of dividing the population or data points into a number of groups such that data points in the same groups are more similar to other data points in the same group and dissimilar to the data points in other groups. It is basically a collection of objects on the basis of similarity and dissimilarity between them. 
- It is basically a type of unsupervised learning method. An unsupervised learning method is a method in which we draw references from datasets consisting of input data without labeled responses. Generally, it is used as a process to find meaningful structure, explanatory underlying processes, generative features, and groupings inherent in a set of examples. 
- <b>For ex</b> – The data points in the graph below clustered together can be classified into one single group. We can distinguish the clusters, and we can identify that there are 3 clusters in the below picture.<br>

<img src="Images\cluster.png" style="max-width: 70%; height: auto; display: block; margin-left: auto; margin-right: auto;"/>

---
---

# Types of Clustering Methods

<p>The clustering methods are broadly divided into <b>Hard clustering</b> (datapoint belongs to only one group) and <b>Soft Clustering</b> (data points can belong to another group also). But there are also other various approaches of Clustering exist. Below are the main clustering methods used in Machine learning:</p>

- Partitioning Clustering
- Density-Based Clustering
- Distribution Model-Based Clustering
- Hierarchical Clustering
- Fuzzy Clustering

---

## Partitioning Clustering

- It is a type of clustering that divides the data into non-hierarchical groups. It is also known as the <b>centroid-based method</b>. The most common example of partitioning clustering is the <b>K-Means Clustering algorithm</b>.
- In this type, the dataset is divided into a set of k groups, where K is used to define the number of pre-defined groups. The cluster center is created in such a way that the distance between the data points of one cluster is minimum as compared to another cluster centroid.

<img src="Images\1.png" style="max-width: 70%; height: auto; display: block; margin-left: auto; margin-right: auto;"/>

---

## Density-Based Clustering

- The density-based clustering method connects the highly-dense areas into clusters, and the arbitrarily shaped distributions are formed as long as the dense region can be connected. This algorithm does it by identifying different clusters in the dataset and connects the areas of high densities into clusters. The dense areas in data space are divided from each other by sparser areas.
- These algorithms can face difficulty in clustering the data points if the dataset has varying densities and high dimensions.

<img src="Images\2.png" style="max-width: 70%; height: auto; display: block; margin-left: auto; margin-right: auto;"/>

---

## Distribution Model-Based Clustering

- In the distribution model-based clustering method, the data is divided based on the probability of how a dataset belongs to a particular distribution. The grouping is done by assuming some distributions commonly <b>Gaussian Distribution</b>.
- The example of this type is the <b>Expectation-Maximization Clustering algorithm</b> that uses Gaussian Mixture Models (GMM).

<img src="Images\3.png" style="max-width: 70%; height: auto; display: block; margin-left: auto; margin-right: auto;"/>

---

## Hierarchical Clustering

- Hierarchical clustering can be used as an alternative for the partitioned clustering as there is no requirement of pre-specifying the number of clusters to be created. 
- In this technique, the dataset is divided into clusters to create a tree-like structure, which is also called a <b>dendrogram</b>. The observations or any number of clusters can be selected by cutting the tree at the correct level. The most common example of this method is the <b>Agglomerative Hierarchical algorithm</b>.

<img src="Images\4.png" style="max-width: 70%; height: auto; display: block; margin-left: auto; margin-right: auto;"/>

---

## Fuzzy Clustering

- Fuzzy clustering is a type of soft method in which a data object may belong to more than one group or cluster. Each dataset has a set of membership coefficients, which depend on the degree of membership to be in a cluster. 
- <b>Fuzzy C-means algorithm</b> is the example of this type of clustering; it is sometimes also known as the Fuzzy k-means algorithm.

<img src="Images\5.png" style="max-width: 60%; height: auto; display: block; margin-left: auto; margin-right: auto;"/>

---
---

# Clustering Algorithms

<p>The Clustering algorithms can be divided based on their model. The clustering algorithm is based on the kind of data that we are using. Such as, some algorithms need to guess the number of clusters in the given dataset, whereas some are required to find the minimum distance between the observation of the dataset.</p>

- K-Means algorithm
- Mean-shift algorithm
- DBSCAN Algorithm
- Expectation-Maximization Clustering using GMM
- Agglomerative Hierarchical algorithm
- Affinity Propagation

---

<p><b>K-Means algorithm:</b> The k-means algorithm is one of the most popular clustering algorithms. It classifies the dataset by dividing the samples into different clusters of equal variances. The number of clusters must be specified in this algorithm. It is fast with fewer computations required, with the linear complexity of <b>O(n)</b>.</p>

---

<p><b>Mean-shift algorithm:</b> Mean-shift algorithm tries to find the dense areas in the smooth density of data points. It is an example of a centroid-based model, that works on updating the candidates for centroid to be the center of the points within a given region.</p>

---

<p><b>DBSCAN Algorithm:</b> It stands for <b>Density-Based Spatial Clustering of Applications with Noise</b>. It is an example of a density-based model similar to the mean-shift, but with some remarkable advantages. In this algorithm, the areas of high density are separated by the areas of low density. Because of this, the clusters can be found in any arbitrary shape.</p>

---

<p><b>Expectation-Maximization Clustering using GMM:</b> This algorithm can be used as an alternative for the k-means algorithm or for those cases where K-means can be failed. In GMM, it is assumed that the data points are Gaussian distributed.</p>

---

<p><b>Agglomerative Hierarchical algorithm:</b> The Agglomerative hierarchical algorithm performs the bottom-up hierarchical clustering. In this, each data point is treated as a single cluster at the outset and then successively merged. The cluster hierarchy can be represented as a tree-structure.</p>

---

<p><b>Affinity Propagation:</b> It is different from other clustering algorithms as it does not require to specify the number of clusters. In this, each data point sends a message between the pair of data points until convergence. It has O(N2T) time complexity, which is the main drawback of this algorithm.</p>

---
---

# Applications of Clustering

<p>Some commonly known applications of clustering technique in Machine Learning are:</p>

- <b>In Identification of Cancer Cells:</b> The clustering algorithms are widely used for the identification of cancerous cells. It divides the cancerous and non-cancerous data sets into different groups.
- <b>In Search Engines:</b> Search engines also work on the clustering technique. The search result appears based on the closest object to the search query. It does it by grouping similar data objects in one group that is far from the other dissimilar objects. The accurate result of a query depends on the quality of the clustering algorithm used.
- <b>Customer Segmentation:</b> It is used in market research to segment the customers based on their choice and preferences.
- <b>In Biology:</b> It is used in the biology stream to classify different species of plants and animals using the image recognition technique.
- <b>In Land Use:</b> The clustering technique is used in identifying the area of similar lands use in the GIS database. This can be very useful to find that for what purpose the particular land should be used, that means for which purpose it is more suitable.

---
---

# RESOURCES

- https://www.javatpoint.com/clustering-in-machine-learning
- https://www.analyticsvidhya.com/blog/2016/11/an-introduction-to-clustering-and-different-methods-of-clustering/
- https://www.geeksforgeeks.org/clustering-in-machine-learning/

## <center>Thank You</center>