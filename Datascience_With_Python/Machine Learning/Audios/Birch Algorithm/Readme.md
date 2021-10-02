#  Birch Algorithm

# Introduction
Balanced Iterative Reducing and Clustering using Hierarchies (BIRCH) is a clustering algorithm in data science. It csn cluster large datasets by generating a small and comapct summary and then cluster the summary using existing method.

# Why We need BIRCH Algorithm
There are mutilple clustering method for example k Means Clustering . The steps of K means are simple but problem is it can't be used in large dataset .The existing clustering algorithm perform really slow . So, the reasons of using BIRCH algorithm is:
- Faster Computation time.
-  Works better in large dataset.
-  Less memory storage.

# BIRCH Algorithm Steps: 
There are four steps of BIRCH Algorithm. 
- Step one: Dataaset load into memory using one scan. 
- Step two : Condense those Data using Clustering Feature . It will reduce the dataset by building smaller Clustering Feature (CF ) tree.
- Step three: Global Clustering : Performing Cluster using existing algorithm like KMEANS or HC.
- Step four: Cluster Refining: Fix Cluster tree data points.


<img src="https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Audios/Birch%20Algorithm/Images/birch.jpg">

# Important Factors
 There are three parameters in the BIRCH algorithm.

- Threshold – Maximum number of data samples  in a  subcluster of a CF tree's leaf node.
- Branching_factor – Specify the number of CF sub-clusters node.
- N_clusters –  Total number of clusters.

# Implementation
The implemention steps are illustrated below

<img src="https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Audios/Birch%20Algorithm/Images/s1_birch.PNG">
<img src="https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Audios/Birch%20Algorithm/Images/s3_birch.PNG">
<img src="https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Audios/Birch%20Algorithm/Images/s4.PNG">
<img src="https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Audios/Birch%20Algorithm/Images/s5.PNG">


# References
1. https://www.kaggle.com/sarmisthasarna/birch-algorithm
2. https://towardsdatascience.com/machine-learning-birch-clustering-algorithm-clearly-explained-fb9838cbeed9
3. https://analyticsindiamag.com/guide-to-birch-clustering-algorithmwith-python-codes/


# Audio Content
The whole BIRCH algorithm is described in an audio. The contents are: 
- Clustering
- Why we use Birch algorithm
-  Birch algorithm Explain
-  Clustering Feature
-  Clustering Feature Tree
-  Disadvantages of Birch
-  Applications


## Audio Link: 
https://drive.google.com/file/d/1GdDu_4F3OcfOOFWmU9PmDrwNrhYcbB45/view?usp=sharing

Thank you.
