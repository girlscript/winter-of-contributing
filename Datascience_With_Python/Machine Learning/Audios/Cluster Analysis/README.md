# **Cluster Analysis**

# [Click on this to listen audio](https://drive.google.com/file/d/1yRM8aVie7_ptxRT7FsyAvsXnCzcikZvw/view?usp=sharing)

## **Outline**
* Introduction
* Types of Cluster Analysis
* Implementaion of Cluster Analysis
* Applications of Cluster Analysis
* References and Resources
* Summary

## **Introduction**
In simple terms, clustering is nothing but separating observations based on certain properties. In a more technical term, clustering is an unsupervised machine learning algorithm, a process, by which observations (data) are grouped in a way that similar observations are put closer to each other. It is an “unsupervised” algorithm because unlike supervised algorithms (e.g. random forest) you do not have to train it with labeled data, and instead, you put your data into a “clustering machine” along with some instructions (e.g. # of clusters you want), and the machine will figure out the rest and cluster the data based on the underlying patterns and properties.

![Clusters](https://miro.medium.com/max/1332/1*TCILsPRt1EG7eCv6jnUAKQ.png)

## **Types of Cluster Analysis**

There are a number of different methods to perform cluster analysis. Some of them are:

* **Hierarchical Cluster Analysis:**

In this method, first, a cluster is made and then added to another cluster (the most similar and closest one) to form one single cluster. This process is repeated until all subjects are in one cluster. This particular method is known as Agglomerative method. Agglomerative clustering starts with single objects and starts grouping them into clusters.

* **Centroid-based Clustering:**

In this type of clustering, clusters are represented by a central entity, which may or may not be a part of the given data set. K-Means method of clustering is used in this method, where k are the cluster centers and objects are assigned to the nearest cluster centres.

* **Distribution-based Clustering:**

It is a type of clustering model closely related to statistics based on the modals of distribution. Objects that belong to the same distribution are put into a single cluster.This type of clustering can capture some complex properties of objects like correlation and dependence between attributes.

* **Density-based Clustering:**

In this type of clustering, clusters are defined by the areas of density that are higher than the remaining of the data set. Objects in sparse areas are usually required to separate clusters.The objects in these sparse points are usually noise and border points in the graph.The most popular method in this type of clustering is DBSCAN.

![types](https://www.empirical-methods.hslu.ch/files/2017/02/cluster-arlgorithms-cluster-analysis.png)

## **Implementaion of Cluster Analysis**

* Step 1-Install dependencies

```python
# to import and work with data
import pandas as pd 
# to visualize data and results
import seaborn as sns
import matplotlib.pyplot as plt 
# to pre-process model inputs
from sklearn import preprocessing 
# clustering algorithm
from sklearn.cluster import KMeans
```

* Step 2-Data

```python
# import data
df = pd.read_csv("iris.csv")
df.head()

# select data
df = df[["petal_length", "petal_width"]]
# see if there's NA values
df.isna().sum()
```

* Step 3-Prepare model inputs
```python
# data normalization
df = preprocessing.scale(df)
df = pd.DataFrame(df)
# input
import numpy as np
X = df.iloc[:, [0,1]].values
```

* Step 4-Determine number of clusters

```python
k_range = range(1,10)
sse = []
for k in k_range:
    km = KMeans(n_clusters = k)
    km.fit(X)
    sse.append(km.inertia_)
plt.xlabel("K")
plt.ylabel("Sum of squared errors")
plt.plot(k_rng, sse, marker='o')
```
* Step 5-Model implementation

```python
# model
km = KMeans(n_clusters = 3)
y_km=km.fit_predict(X)
# plot the 3 clusters
plt.scatter(
    X[y_km == 0, 0], X[y_km == 0, 1],
    s=50, c='lightgreen',
    marker='s', edgecolor='black',
    label='cluster 1'
)
plt.scatter(
    X[y_km == 1, 0], X[y_km == 1, 1],
    s=50, c='orange',
    marker='o', edgecolor='black',
    label='cluster 2'
)
plt.scatter(
    X[y_km == 2, 0], X[y_km == 2, 1],
    s=50, c='lightblue',
    marker='v', edgecolor='black',
    label='cluster 3'
)

# value counts in different clusters
frame = pd.DataFrame(X)
frame['cluster'] = y_km
frame['cluster'].value_counts()
```


## **Applications of Cluster Analysis**

Cluster analysis is a powerful data mining tool in a wide range of business application cases. 

1. Exploratory data analysis (EDA)
2. Statistics analysis
3. Urban planning
4. Anomaly detection
5. Customer segmentation
6. Computer vision
7. In Biology

![example](https://th.bing.com/th/id/OIP.Aczgwp5UkCIIO7nf9ItLiAHaD9?pid=ImgDet&rs=1)

## **References and Resources**

* https://byjus.com/maths/cluster-analysis
* https://towardsdatascience.com/cluster-analysis-theory-and-implementation-of-unsupervised-algorithms-87823c4c5e03

### **Image links:**
* https://miro.medium.com/max/1332/1*TCILsPRt1EG7eCv6jnUAKQ.png
* https://th.bing.com/th/id/OIP.Aczgwp5UkCIIO7nf9ItLiAHaD9?pid=ImgDet&rs=1
* https://www.empirical-methods.hslu.ch/files/2017/02/cluster-arlgorithms-cluster-analysis.png

## **Summary**
Clustering is a useful technique which is widely used for various purposes. Clustering analysis is a newly developed computer-oriented data analysis technique. It is a product of many research fields: statistics, computer science, operations research, and pattern recognition. So we should have knowledge of this one so that when needed we can implement it easily.
