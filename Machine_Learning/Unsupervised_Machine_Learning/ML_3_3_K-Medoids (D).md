# **K-Medoids**

K-Medoids is a classical partitioning technique of clustering that splits the data set of n objects into k clusters, where the number k of clusters assumed is known as **a priori** (which implies that the programmer must specify k before the execution of a k-medoids algorithm). It is a clustering problem similar to k-means. The name was coined by Leonard Kaufman and Peter J. Rousseeuw with their Partitioning Around Medoid(PAM) algorithm. Because k-medoids minimizes a sum of pairwise dissimilarities instead of a sum of squared Euclidean distances, it is more robust to noise and outliers than k-means. The "goodness" of the given value of k can be assessed with methods such as the silhouette method.

**Medoid**
: The point in the cluster, whose dissimilarities with all the other points in the cluster is minimum, that is, it is a most centrally located point in the cluster.

### Comparison with K-Means

- Both the k-means and k-medoids algorithms are partitional (breaking the dataset up into groups). They attempt to minimize the distance between points labeled to be in a cluster and a point designated as the center of that cluster.
- In contrast to the k-means algorithm, k-medoids chooses actual data points as centers (medoids or exemplars), and thereby allows for greater interpretability of the cluster centers than in k-means, where the center of a cluster is not necessarily one of the input data points (it is the average between the points in the cluster).
- K-medoids can be used with arbitrary dissimilarity measures, whereas k-means generally requires Euclidean distance for efficient solutions.

### **Steps**

1. Randomly choose ‘k’ points from the input data of 'n' points (‘k’ is the number of clusters to be formed).
2. Each data point gets assigned to the cluster to which its nearest medoid belongs.
3. For each data point of cluster i, its distance from all other data points is computed and added. The point of ith cluster for which the computed sum of distances from other points is minimal is assigned as the medoid for that cluster.
4. Steps (2) and (3) are repeated until convergence is reached i.e. the medoids stop moving.

### Complexity of K-Medoids algorithm
The complexity of the K-Medoids algorithm comes to

$$
O(k(n-k)^2)
$$

where k and n denote the number of clusters and the number of data points.

### Advantages

1. It is simple to understand and easy to implement.
2. It is fast and converges in a fixed number of steps.
3. It is less sensitive to outliers than other partitioning algorithms.

### Disadvantages:

1. The main disadvantage is that it is not suitable for clustering non-spherical (arbitrary shaped) groups of objects. This is because it relies on minimizing the distances between the non-medoid objects and the medoid (the cluster centre). It uses compactness as clustering criteria instead of connectivity.
2. It may obtain different results for different runs on the same dataset because the first k medoids are chosen randomly.

### Applications
K-Medoids algorithm is found useful for practical applications such as face recognition. The medoid can correspond to the typical photo of the individual whose face is to be recognized. But if K-Means algorithm is used instead, some blurred image may get assigned as the centroid, which has mixed features from several photos of the individual and hence makes the face recognition task difficult.

```
# importing libraries and creating dataframe
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import math
data = [[8, 7], [3, 7],[4, 9],[9, 6],[8, 5],[5, 8],[7, 3],[8, 4], [7, 5],[4, 5]]
df = pd.DataFrame(data, columns = ['X', 'Y'])

```

![](https://drive.google.com/uc?export=view&id=1MWLLt5ZW_XTZ0HxJjzeyl1-eFV7x6bwP)

```
# plot of dataset
plt.scatter(df["X"], df['Y'], color= "blue", s=30)

# x-axis label
plt.xlabel('X')
# frequency label
plt.ylabel('Y')
```

![](https://drive.google.com/uc?export=view&id=1ktN2TuKdbIdN-Lwv8WMAEdPzr9sL5qty)

```
sum = math.inf
# to try all values for mediods
for i in range(len(df)-1):
  C1=df.iloc[i][0:2]
  for j in range(i+1,len(df)):
    C2=df.iloc[j][0:2]
    # to find distance from mediods
    df['Distance from C1']=abs(df['X']-C1[0]) + abs(df['Y']-C1[1])
    df['Distance from C2']=abs(df['X']-C2[0]) + abs(df['Y']-C2[1])
    cluster1=cluster2=0
    # to divide points into clusters and calculate sum of difference of distances of respective clusters
    for x in range(len(df)):
      if df.iloc[x][2]<df.iloc[x][3]:
        cluster1+=df.iloc[x][2]
      else:
        cluster2+=df.iloc[x][3]
    # to find minimum sum
    if sum>cluster1+cluster2:
      sum=cluster1+cluster2
      C1_final=C1
      C2_final=C2
      df1=df
print(df1)
print(C1_final, C2_final)
clus1=[]
clus2=[]
for x in range(len(df)):
  if df.iloc[x][2]<df.iloc[x][3]:
    clus1.append(df.index[x])
  else:
    clus2.append(df.index[x])
print(f'cluster 1 = {clus1}\ncluster 2 = {clus2}')
print(f'sum of cluster 1 = {cluster1}, sum of cluster 2 = {cluster2}')

```

![](https://drive.google.com/uc?export=view&id=1YAj5nnPRjG7QhFF3LAaVwUBKqo6IYZWH)

---

#### References

1. https://analyticsindiamag.com/comprehensive-guide-to-k-medoids-clustering-algorithm/
2. https://towardsdatascience.com/k-medoids-clustering-on-iris-data-set-1931bf781e05
3. https://www.geeksforgeeks.org/ml-k-medoids-clustering-with-example/
