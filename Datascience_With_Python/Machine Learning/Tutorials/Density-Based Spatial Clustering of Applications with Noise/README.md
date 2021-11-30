# Density-based spatial clustering of applications with noise (DBSCAN)
<br>

* Density-based spatial clustering of applications with noise (DBSCAN) is a well-known data clustering algorithm that is commonly used in data mining and machine learning. 
* It is a density-based clustering non-parametric algorithm: given a set of points in some space, it groups together points that are closely packed together (points with many nearby neighbors), marking as outliers points that lie alone in low-density regions (whose nearest neighbors are too far away). 
* DBSCAN Clustering is basically an Unsupervised learning method that divides the data points into a number of specific batches or groups, such that the data points in the same groups have similar properties and data points in different groups have different properties in some sense. 
* The DBSCAN algorithm is based on this intuitive notion of “clusters” and “noise”. The key idea is that for each point of a cluster, the neighborhood of a given radius has to contain at least a minimum number of points.
* **The main concept of DBSCAN algorithm is to locate regions of high density that are separated from one another by regions of low density.**
 
![DBSCAn clustering](https://github.com/HastiSutaria/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Density-Based%20Spatial%20Clustering%20of%20Applications%20with%20Noise/Images/dbscan-clustering.png)

# Why to use DBSCAN ?
* While dealing with spatial clusters of different density, size and shape, it could be challenging to detect the cluster of points. The task can be even more complicated if the data contains noise and outliers. 
* To deal with large spatial databases, Martin Ester and his co-authors proposed Density-Based Spatial Clustering of Applications with Noise (DBSCAN), which still remains as one of the highest cited science papers. 
* K-Means and Hierarchical Clustering both fail in creating clusters of arbitrary shapes. They are not able to form clusters based on varying densities. That’s why we need DBSCAN clustering.
* It requires minimum domain knowledge.
* It can discover clusters of arbitrary shape.
* Efficient for large database, i.e. sample size more than few thousands.

# Parameters in DBSCAN 
In DBSCAN, clustering happens based on two important parameters such as :
* neighbourhood (n) - cutoff distance of a point from (core point – discussed below) for it to be considered a part of a cluster. Commonly referred to as epsilon (abbreviated as eps).
* minimum points (m) - minimum number of points required to form a cluster. Commonly referred to as minPts.

# Types of Points in DBSCAN
There are three types of points after the DBSCAN clustering is complete viz.,

* Core - This is a point which has at least m points within distance n from itself.
* Border - This is a point which has at least one Core point at a distance n.
* Noise - This is a point which is neither a Core nor a Border. And it has less than m points within distance n from itself.

![Types of points](https://github.com/HastiSutaria/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Density-Based%20Spatial%20Clustering%20of%20Applications%20with%20Noise/Images/points.png)

# Working 
1. Pick an arbitrary data point p as your first point.
2. Mark p as visited.
3. Extract all points present in its neighborhood (upto eps distance from the point), and call it a set nb
4. If nb >= minPts, then
    a. Consider p as the first point of a new cluster
    b. Consider all points within eps distance (members of nb) as other points in this cluster.
    c. Repeat step b for all points in nb
5. else label p as noise
6. Repeat steps 1–5 till the entire dataset has been labelled ie the clustering is complete.

**After the algorithm is executed, we should ideally have a dataset separated into a number of clusters, and some points labelled as noise which do not belong to any cluster.**

# Practical implementation

### Importing necessary libraries
```python 
import numpy as np
import matplotlib.pyplot as plt
from sklearn import metrics
from sklearn.datasets import make_blobs
from sklearn.preprocessing import StandardScaler
from sklearn.cluster import DBSCAN
```
### Applying DBSCAN algorithm
```python
CopyX, y = make_blobs(n_samples=500,n_features=2,
centers=4, cluster_std=1,
center_box=(-10.0, 10.0),
shuffle=True, random_state=1)
X = StandardScaler().fit_transform(X)
y_pred = DBSCAN(eps=0.3, min_samples=30).fit_predict(X)
plt.scatter(X[:,0], X[:,1], c=y_pred)
print('Number of clusters: {}'.format(len(set(y_pred[np.where(y_pred != -1)]))))
print('Homogeneity: {}'.format(metrics.homogeneity_score(y, y_pred)))
```
### Output
![](https://github.com/HastiSutaria/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Density-Based%20Spatial%20Clustering%20of%20Applications%20with%20Noise/Images/example.png)

### Outcome
It is clear that 4 clusters are detected as expected. The black points are outliers or noise according to the DBSCAN model. Since the dataset being analyzed has been generated by us and we know the ground truths about it, we can use metrics like the homogeneity score (checking if each cluster only has members of one class) and the completeness score (checking if all members of a class have been assigned the same cluster).

# Advantages, disadvantages and applications of DBSCAN
![](https://github.com/HastiSutaria/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Density-Based%20Spatial%20Clustering%20of%20Applications%20with%20Noise/Images/Advantages-Disadvantages-and-Applications-of-DBSCAN.png)

## Refer the practical implementation [here](https://github.com/HastiSutaria/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Density-Based%20Spatial%20Clustering%20of%20Applications%20with%20Noise/DBSCAN.ipynb) and find the used dataset [here.](https://github.com/HastiSutaria/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/DS%20Datasets/Machine%20Learning/Country-data.csv)

# Conclusion
Thus, I explained the DBSCAN clustering algorithm in-depth and also showcased how it is useful in comparison with other clustering algorithms.

NOTE : There also exists a much better and recent version of this algorithm known as HDBSCAN which uses Hierarchical Clustering combined with regular DBSCAN. It is much faster and accurate than DBSCAN.

## References
* https://www.analyticsvidhya.com/blog/2020/09/how-dbscan-clustering-works/
* https://scikit-learn.org/stable/modules/generated/sklearn.cluster.DBSCAN.html
* https://www.geeksforgeeks.org/dbscan-clustering-in-ml-density-based-clustering/?ref=lbp

# THANK YOU!
