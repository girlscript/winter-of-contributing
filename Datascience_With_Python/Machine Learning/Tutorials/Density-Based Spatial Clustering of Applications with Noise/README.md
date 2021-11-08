# Density-based spatial clustering of applications with noise (DBSCAN)
<br>

* Density-based spatial clustering of applications with noise (DBSCAN) is a well-known data clustering algorithm that is commonly used in data mining and machine learning. 
* It is a density-based clustering non-parametric algorithm: given a set of points in some space, it groups together points that are closely packed together (points with many nearby neighbors), marking as outliers points that lie alone in low-density regions (whose nearest neighbors are too far away). 
* DBSCAN Clustering is basically an Unsupervised learning method that divides the data points into a number of specific batches or groups, such that the data points in the same groups have similar properties and data points in different groups have different properties in some sense. 
* The DBSCAN algorithm is based on this intuitive notion of “clusters” and “noise”. The key idea is that for each point of a cluster, the neighborhood of a given radius has to contain at least a minimum number of points.
 
![DBSCAn clustering]()

# Why to use DBSCAN ?
* While dealing with spatial clusters of different density, size and shape, it could be challenging to detect the cluster of points. The task can be even more complicated if the data contains noise and outliers. 
* To deal with large spatial databases, Martin Ester and his co-authors proposed Density-Based Spatial Clustering of Applications with Noise (DBSCAN), which still remains as one of the highest cited science papers. 
* It requires minimum domain knowledge.
* It can discover clusters of arbitrary shape.
* Efficient for large database, i.e. sample size more than few thousands.


**The main concept of DBSCAN algorithm is to locate regions of high density that are separated from one another by regions of low density.**
