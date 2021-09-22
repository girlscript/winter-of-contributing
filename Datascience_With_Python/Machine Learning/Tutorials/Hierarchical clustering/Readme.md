## **What is Hierarchical Clustering?**

- Hierarchical clustering, also known as hierarchical cluster analysis, is an algorithm that groups similar objects into groups called clusters.
- The output is a set of clusters, where each cluster is distinct from each other cluster, and the objects within each cluster are broadly similar to each other.

**The Hierarchical Clustering can be dived into 2 types:**
1. Agglomerative
2. Divisive

![image](https://user-images.githubusercontent.com/63282184/134355337-737f160b-9d31-46f5-8e25-e927ba38bd14.png)



## **1. Agglomerative**

- The agglomerative clustering is the most common type of hierarchical clustering which is used to group objects into clusters based on their similarity. 
- It’s also known as AGNES (Agglomerative Nesting).
- The algorithm starts by treating each object as a singleton cluster. 
- Next, pairs of clusters are successively merged until all clusters have been merged into one big cluster containing all objects. 
- The result is a tree-based representation of the objects, named dendrogram.


**Example:** Lets say we have six data points {A,B,C,D,E,F}.
- Step- 1: In the initial step, we calculate the proximity of individual points and consider all the six data points as individual clusters as shown in the image below.
- Step- 2: In step two, similar clusters are merged together and formed as a single cluster. Let’s consider B,C, and D,E are similar clusters that are merged in step two. Now, we’re left with four clusters which are A, BC, DE, F.

![image](https://user-images.githubusercontent.com/63282184/134357953-59ce9212-0d74-4a12-9b14-25d07899d759.png)

- Step- 3: We again calculate the proximity of new clusters and merge the similar clusters to form new clusters A, BC, DEF.
- Step- 4: Calculate the proximity of the new clusters. The clusters DEF and BC are similar and merged together to form a new cluster. We’re now left with two clusters A, BCDEF.
- Step- 5: Finally, all the clusters are merged together and form a single cluster.

## **2. Divisive**

- In simple words, we can say that the Divisive Hierarchical clustering is exactly the opposite of the Agglomerative Hierarchical clustering. 
- In Divisive Hierarchical clustering, we consider all the data points as a single cluster and in each iteration, we separate the data points from the cluster which are not similar. 
- Each data point which is separated is considered as an individual cluster. 
- In the end, we’ll be left with n clusters.
- As we’re dividing the single clusters into n clusters, it is named as Divisive Hierarchical clustering.

![image](https://user-images.githubusercontent.com/63282184/134359640-2caf09c0-338e-400f-a76a-aa1121f8531d.png)


## Dendrogram
**The Hierarchical clustering Technique can be visualized using a Dendrogram.**

![image](https://user-images.githubusercontent.com/63282184/134359840-bb525d3f-ae04-4220-9d7d-af5234ac6de6.png)

**A Dendrogram is a tree-like diagram that records the sequences of merges or splits.**
















































