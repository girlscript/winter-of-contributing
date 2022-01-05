#  DBSCAN   Algorithm
# Introduction
DBSCAN (Density-Based Spatial Clustering of Applications with Noise) Clustering is a unsupervised learning clustering methods that make groups/clusters in the data based on density. It creates separate points for higher density data points and lower density datapoints.

# Necessity 
There are multiple clustering algorithms like K means, PAM clustering and hierarchiarcal clustering for the clustering spherical -shaped dataset. But these algorithm doesn't work better in orbitary datasets. On a simialr note, these algoirthm are compact and well sperated . Those algortihm also doesn't work in if we have outliers in dataset.
So, we need DBSCAN algorithm for :
- Noisy data
- Outliers present in data
- For arbitary data.

# DBSCAN Parameters
There are two parameters we need to know about before going to DBSCAN:

 - Epsilion : It defines the neighborhood around a data point. If the eps value is chosen  small then large part of the data will be considered as outliers. If it is chosen very large then the clusters will merge and majority of the data points will be in the same clusters

- Min_sample: Minimum number of neighbors (data points) within eps radius. Larger the dataset, the larger value of MinPts must be chosen.

 <img src="https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Audios/DBSCAN%20algorithm/Images/eps.png">

# DBSCAN data points
Based on these two parameters (epsilon and min_samples, this algorithm classify every point  into three categories. They are

- Core points : s a core point condition is the number of neighbors must be greater than or equal to our threshold min_samples

- Boundary points or border points :: It has  which has fewer than MinPts within eps but it is in the neighborhood of a core point. Another condition is this point should be
 in the neighborhood of a core point.
 
- Noise points:  If a point is neither a core point nor a boundary point, then it is called a noise point. 

 <img src="https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Audios/DBSCAN%20algorithm/Images/data%20point.jpg">
 
 
# Steps in DBSCAN algorithm 
There are five seps of this algorithm. Those are:
1. Classify the points: It is according to the data points 

2. Discard noise: DBSCAN cant handle high dimensional data in a long run. For this, we have to check large volume of data .

3. Assign cluster to a core point

4. Color all the density connected points of a core point.

5. Color boundary points according to the nearest core point.

<img src="https://github.com/ron352/gs-/blob/main/dbs.png">

# Implementation 

A sample code  is shown below:

<img src="https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Audios/DBSCAN%20algorithm/Images/code1.PNG">
<img src="https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Audios/DBSCAN%20algorithm/Images/code2.PNG">
<img src="https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Audios/DBSCAN%20algorithm/Images/code3.PNG">
<img src="https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Audios/DBSCAN%20algorithm/Images/out.PNG">


For further contents, check the audio file
# Audio Content
The whole algorithm is described in an audio. The contents are: 
-  Necessacity
-  DBSCAN Algorithm
-  Difference of DBSCAN and other clustering algorithm
-  Procedure
-  Reachability 
-  Connectivity
-  Disadvantages
-  Applications
 
## Audio Link: 
 
https://drive.google.com/file/d/1e9-02NwOCeWbFIMDv9Xc01yxnbkLn6B5/view?usp=sharing

 # References
 1. https://www.geeksforgeeks.org/dbscan-clustering-in-ml-density-based-clustering/
 2. https://www.analyticsvidhya.com/blog/2021/06/understand-the-dbscan-clustering-algorithm/
 
 
 
Thank you.
