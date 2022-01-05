## What is Clustering?

- Clustering is a type of unsupervised learning method of machine learning.
- In the unsupervised learning method, the inferences are drawn from the data sets which do not contain labelled output variable. 
- It is an exploratory data analysis technique that allows us to analyze the multivariate data sets.

## Types of Clustering

![image](https://user-images.githubusercontent.com/63282184/134457458-2a8f77b6-3b56-476e-9d0b-a61d7cf90bc7.png)


## **What is Hierarchical Clustering?**

- Hierarchical clustering, also known as hierarchical cluster analysis, is an algorithm that groups similar objects into groups called clusters.
- The output is a set of clusters, where each cluster is distinct from each other cluster, and the objects within each cluster are broadly similar to each other.

**The Hierarchical Clustering can be dived into 2 types:**
1. Agglomerative Clustering
2. Divisive Clustering

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



## How do we measure the similarity between the clusters:

- Measuring the similarity between two clusters is important to merge or divide the clusters. 
- Some of the approaches which are used to calculate the similarity between two clusters are:

1. **MIN**
2. **MAX**
3. **Group Average**
4. **Distance Between Centroids**
5. **Ward’s Method**

## 1. MIN

- This is also known as single-linkage algorithm can be defined as the similarity of two clusters C1 and C2 is equal to the minimum of the similarity between points Pi and Pj such that Pi belongs to C1 and Pj belongs to C2.

![image](https://user-images.githubusercontent.com/63282184/134361351-425dc982-d8e2-4e40-9d0c-3b31c756ecea.png)

**Advantages of MIN:**

- This approach can separate non-elliptical shapes as long as the gap between the two clusters is not small.

![image](https://user-images.githubusercontent.com/63282184/134362455-82857f21-eb09-4642-a625-5b9189a67df9.png)

**Disadvantages of MIN:**

- MIN approach cannot separate clusters properly if there is noise between clusters.

![image](https://user-images.githubusercontent.com/63282184/134362687-2ab3c381-ac48-4897-9898-b0caf2f84ac8.png)


## 2. **MAX**

- It is known as the complete linkage algorithm, this is exactly opposite to the MIN approach.
- The similarity of two clusters C1 and C2 is equal to the maximum of the similarity between points Pi and Pj such that Pi belongs to C1 and Pj belongs to C2.

![image](https://user-images.githubusercontent.com/63282184/134370428-a5aacc66-0a50-4ecb-9a14-e0071228d3db.png)

**Advantages of Max:**

- MAX approach does well in separating clusters if there is noise between clusters.

![image](https://user-images.githubusercontent.com/63282184/134370685-c2aeb43d-fd7a-4829-91ad-eeab1d12c375.png)


**Disadvantages of Max:**

- Max approach is biased towards globular clusters.
- Max approach tends to break large clusters.

![image](https://user-images.githubusercontent.com/63282184/134370833-4922c60f-199d-46ad-83e9-5ff47a049e8e.png)


## 3. **Group Average**

- Take all the pairs of points and compute their similarities and calculate the average of the similarities.

![image](https://user-images.githubusercontent.com/63282184/134370997-145e13bc-14f7-42cc-ac9e-df1767d2c993.png)


**Advantages of Group Average:**
- The group Average approach does well in separating clusters if there is noise between clusters.

**Disadvantages of Group Average:**
- The group Average approach is biased towards globular clusters.


## 4. **Distance Between Centroids**

- Compute the centroids of two clusters C1 & C2 and take the similarity between the two centroids as the similarity between two clusters. 
- This is a less popular technique in the real world.

![image](https://user-images.githubusercontent.com/63282184/134371740-1cc9cd6d-8162-4f81-ae3f-84f3d559d8b1.png)


## 5. **Ward’s Method**

- This approach of calculating the similarity between two clusters is exactly the same as Group Average except that Ward’s method calculates the sum of the square of the distances Pi and PJ.

**Advantages of Ward's Method:**
- Ward’s method approach also does well in separating clusters if there is noise between clusters.

**Disadvantages of Ward's Method:**
- Ward’s method approach is also biased towards globular clusters.

## Space and Time Complexity of Hierarchical clustering Technique:

**Space complexity:**

- The space required for the Hierarchical clustering Technique is very high when the number of data points are high as we need to store the similarity matrix in the RAM. The space complexity is the order of the square of n.

- **Space complexity = O(n²)** where n is the number of data points.

**Time complexity:**

- Since we’ve to perform n iterations and in each iteration, we need to update the similarity matrix and restore the matrix, the time complexity is also very high. The time complexity is the order of the cube of n.

- **Time complexity = O(n³)** where n is the number of data points.

## Limitations of Hierarchical clustering Technique:

1. There is no mathematical objective for Hierarchical clustering.
2. All the approaches to calculate the similarity between clusters has its own disadvantages.
3. High space and time complexity for Hierarchical clustering. Hence this clustering algorithm cannot be used when we have huge data.
  
