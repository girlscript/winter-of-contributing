## Topic: Data Science with Python : Clustering of Countries #5390
---
### What is Clustering in Machine Learning?

A Clustering algorithm is a type of Unsupervised Machine Learning algorithm which groups unlabelled dataset into different clusters based on the similarity in data points through various features of dataset.

![image](https://user-images.githubusercontent.com/83827603/137102965-b1121188-bc91-4bd2-9dc2-db135ca0fa98.png)

---
### Different Clustering techniques:

* k-Means Clustering
* Hierarchical Clustering
* Fuzzy Analysis Clustering
* Mean Shift Clustering
* DBSCAN – Density-based Spatial Clustering
* Gaussian Mixed Models (GMM) with Expectation-Maximization Clustering

---
### Where is Clustering used:

* In movie recommendation systems for Netflix where a huge amount of data consisting of different movies watched by the customers are available. The algorithm groups customers with similar interest and movies that people with that interest have watched is suggested to the other users.
* It is used in image segmentation in bioinformatics to detect cancerous cells in the body, overcoming many possible human errors.
* Grouping documents to prevent spread of fake news on Social Media
* Text clustering: In academics, clustering can be used in the associative analysis of various documents which is used in plagiarism, copyright infringement, patent analysis etc

---
### The Dataset used

Dataset Link:

https://www.kaggle.com/rohan0301/unsupervised-learning-on-country-data

This dataset consists different features which help identifying the level of a country in this developing world!

The different features and their description are:
![image](https://user-images.githubusercontent.com/83827603/137103492-c3d0d429-96cd-4f52-90c7-b8090930025d.png)

All the columns, except for the first, country name, will help clustering the countries.

The algorithms used will be K-Means Clustering and Hierarchical Clustering.
The models will be trained with the dataset and the best model will be used to cluster and visualize the dataset.

---
### Let's begin!
 
1. The required Libraries and the dataset is imported. Variable X is defined consisting of all columns except the 1st, the country column
2. The two algorithms are applied on the dataset:
   i) K-Means Clustering:
   K-Means Clustering involves partition of the datapoints into k number of clusters in which each observation belongs to the cluster with the nearest centroid, serving as a prototype of the cluster.
   
   First, the elbow method is used to find optimal k before proceeding to forming groups of datapoints.
   
   The Elbow Method gives the optimal number of clusters. The point at which the slope (of WCSS vs Number of Clusters graph) changes abruptly depicts the optimal number of clusters.
   
   K-Means Clustering follows the following steps:
    1. Number of clusters k is chosen and the same number of centroids, k are chosen
    2. By Euclidean or Manhattan distance, points are assigned to nearest centroid
    3. Now centroid of each newly formed group is calculated.
    4. It the position of this cetroid is diiferent fron that of the assumed centroid, then the datapoints are again assigned to the new centroids and step 3 is carried out.
    5. Optimal number of clusters k, is found using 'The Elbow Method'

   ![image](https://user-images.githubusercontent.com/83827603/137104379-efe20b52-5c1e-4022-ade6-3416109f8911.png)
   
   The model fits and returns dependant variables values, which has two different values (0,1) corresponding to two different clusters containing different grps of countries, grouped by similarities   
   
   ii) Hierarchical clustering:
   Hierarchical Clustering is a method of cluster analysis which involves building of a hierarchy of clusters.
   
   A dendrogram is plotted and the longest vertical line between two hypothetical horizontal lines is considered. The number of such vertical lines beside it, in the same level, represent the optimal number of clusters...
   
   It then involves the following steps:
    1. Each datapoint is initially considered a cluster. So N datapoints form N clusters.
    2. Two closest datapoints (or clusters) form one cluster, and two closest clusters combine forming one cluster.
    3. Step 2 keeps on repeating until there's only 1 cluster left!
    
   ![image](https://user-images.githubusercontent.com/83827603/137104938-b2527c57-4500-48d1-b398-225b493e539a.png)
   
3. The Silhouette scores are calculated.
    * The best value that could be attained is 1 and the worst value is -1. 
    * Silhouette values near 0 indicate overlapping clusters. 
    * Negative values generally indicate that a sample has been assigned to the wrong cluster, as a different cluster is more similar.

With K-means algorithm showing a little highe silhouette score, we can conclude tha K-Means Clustering Algorithm is the better algorithm for the given dataset.
   
The countries after applying K Means Clustering algorithm are clustered as follows:
   
![image](https://user-images.githubusercontent.com/83827603/137105802-50d3be66-9ff3-4fe0-92cc-86143716bcb9.png)
   
 Thus, yellow or 1 represents "Developed countries" 
 and, blue or 0 represents "Developing countries"
   
---
### Conclusion:

Thus, the countries have been classified into developed and developing countries. The K Means algorithm has been found to give better silhouette score of 0.7256314906273207 which is quite satisfactory!

--- 
### References:

* https://www.analytixlabs.co.in/blog/types-of-clustering-algorithms/
* https://stanford.edu/~cpiech/cs221/handouts/kmeans.html
* https://www.datavedas.com/hierarchical-clustering/
* https://bdtechtalks.com/2020/02/10/unsupervised-learning-vs-supervised-learning/ for image

---
   
