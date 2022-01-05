## DBSCAN Clustering Algorithm
---
## Purpose
In this documentation, we will learn about the basics and the work-flow of DBSCAN Clustering Algorithm along with its advantages/ disadvantages.
## What is Clustering?<br>
1) Clustering is techinque used to group data with similar characteristics from a group of large, unlabeled data.<br>
2) It divides the data set in small groups known as clusters, hence making it easy to process large, complex datasets.<br>
## DBSCAN Clustering Algorithm
### Introduction
1) DBSCAN stands for **D**ensity-**B**ased **S**patial **C**lustering **A**pplication with **N**oise.<br>
2) It is an unsupervised machine learning clustering technique.<br>
3) It is mainly used when:<br>
a) One wants to deal with Outliers(Unusual or Unsimilar datapoints in  a dataset)<br>
b) Where clusters of any shape and sizes are required.<br>
4) It forms clusters based on 'density' or how closed the datapoints are.<br>
5) Points outside the 'dense' region are exculded and it thus helps in detecting unwanted datapoints(Outliers)<br>
### Working
**Step 1)** In this algorithm we make use of two parameters and decide their value first, which are -<br>
eps(epsilon) and min_pts.<br>
**eps -** a) Measures and notes the values of the distance/ radius of points in the neighbourhood of any specific datapoint under consideration.<br>
          b) Mostly this distance is calculated using the Euclidean distance approach.<br>
**min_pts -** Stands for 'Minimum Points' and signifies about how many minimum points we want in a 'dense' cluster.This is done to know about points that are not in the dense area so that they can be considered as an 'outlier'.<br><br>
**Step 2)** For each datapoint(Lets assume A) present in the dataset:<br>
a) Firstly, calculate its distance from all other datapoints. If the datapoints value is less than or equal to the epsilon value, then it is a neighbour of A.<br>
b) If there are least ‘min_pts’ points then we consider all these points to be part of the same cluster. If not we then create a new cluster. <br><br>
**Step 3)** We do the above steps recursively, till all the data points are visited.<br>
## How are the parameters decided
### min_pts
1) They are calclated on the basis of dimensions(D) present in the data set using the formula: **min_pts ≥ D + 1**<br>
2) The value min_pts should start from is 3 as-<br>
a) if it is 1, each data point will be its own cluster<br>
b)if it is 2, a dendrogram same as that of hierarchical clustering is formed.<br>
3) The more larger the value of min_pts the more efficient result is obtained.Noise/Outliers will be detected easily and the clusters form will be accurate.<br>
### eps
1) The epsilon value is generally derieved by using the K_Distance Graph.<br>
2) It is a graph that plots the distance(k) using the formula k = min_pts -1<br>
3) An 'elbow' is formed in the curve of this graph when it is ordered from maximum to minimum value. This elbow value is choosen to be the epsilon factor.<br>
4) If the epsilon value is too small, sparse/ thinly scattered clusters are consdered as noise/ outliers.<br>
5) It the epsilon value is too large, it may result in the merging of two or more denser clusters together.<br>
### Types of output Data-Points
After completion of DBSCAN Clustering we get three types of datapoints-<br>
1) Core DataPoint - These points are found in the interior of clusters that is they belong in  a dense region.<br>
2) Border DataPoints - These points are present inside the cluster but are at the border of the cluster and belong at the border of the dense cluter region.<br>
3) Noise DataPoints - These points are neither core datapoints nor border datapoints they do not belong to any clusters and are also considered outliers.<br>
![EXPLAIN](https://user-images.githubusercontent.com/34717612/136365779-c6b191c5-1d0f-4bbf-aa32-f01ee27a8b05.png)<br>
### Implementation of sample code-
Link to the sample code(.ipynb file) - [Click Here](https://github.com/uttarabahad/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/DBSCAN%20Clustering%20Algorithm/dbscan_clustering.ipynb)
#### I) Steps Followed During Implementation
1)We generate a dataset consisting of random datapoints by importing make_blobs from klearn.datasets.<br>
2)We decide and assign the value of eps and min_pts<br>
3)We then apply DBSCAN algorithm by importing DBSCAN from sklearn.cluster and detect the clusters. We assign label -1 to the noise/outliers points.<br>
4)Then the clusters obtained by DBSCAN Algorithm are plotter after eliminating the outliers.<br>
#### II) Outcome of the Implementation
In the above Output Visualization-<br>
![output](https://user-images.githubusercontent.com/34717612/136543665-18e128d7-919f-4de3-9e51-06bfce543c6f.png)<br>
The different colors represent two different clusters formed based on the density of datapoints.<br>
### Time Complexity
If there are N data points:<br>
1) Best Case- **O(N log N)** when we use a structrured or tree based dataset.<br>
2) Worst Case-  **O(N^2)** when we use unstructured dataset.<br>
### Advantages
1) Clusters can be of any shape/ size.<br>
2) Clusters can be non-spherical or circular.<br>
3) Any number of clusters can be generated without a prior decided number.<br>
4) Very accurate in identification of noise/ outliers.<br>
### Disadvantages
1) Inaccurate when there is very little or no change in between density between two points.<br>
2) Sensitive to parameters(min_pts and eps).<br>
3) Identifying clusters is hard when the dataset is small.<br>
## Conclusion
DBSCAN Clustering Algorithm is very accurate in detecting clusters and eliminating outliers.
