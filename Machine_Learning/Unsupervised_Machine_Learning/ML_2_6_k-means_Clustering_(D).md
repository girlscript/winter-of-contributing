## k-means Clustering

Clustering is used to group or cluster the homogeneous groups. Homogeneous groups are formed by using distance measures.

**K-means Clustering:**

K-means clustering is an unsupervised machine learning model. It is used to group similar data values. The similarity is measured by distance.
It transforms the unlabeled data to labeled data.

![Capture_2](https://user-images.githubusercontent.com/79050917/135743169-6fe6f16b-493c-40fd-9128-a879abe8bca7.PNG)


**How do data points forms clusters in the k-means machine learning model?**

In k-means clustering, clusters are formed based on the k values. K is a number of clusters in k-means clustering. We generally upfront decide the number of clusters to form. It is a centroid-based algorithm, where each cluster is associated with a centroid. The main aim of this algorithm is to minimize the sum of distances between the data point and their corresponding clusters.
K-centroids are chosen in an iterative process. After choosing the centroids, the data points near to the centroids with the least distance are formed a cluster.

**How to choose the number of clusters?**
- Earlier,  the number of clusters are chosen based on the thumb rule.
Thumb rule: sqrt(n/2)
- Nowadays, elbow curve visualization is used to detect the number of clusters.
The Elbow method is the method used in finding the elbow curve.
The Elbow method is one of the most popular ways to find the optimal number of clusters. This method uses the concept of WCSS value.

![Capture_1](https://user-images.githubusercontent.com/79050917/135743206-0a3e6b9e-be6b-41aa-893c-c956f6d1605a.PNG)


**Advantages of k-means**
- Relatively simple to implement.
- Guarantees convergence.
- Can warm-start the positions of centroids.
- Easily adapts to new examples.
- Generalizes to clusters of different shapes and sizes, such as elliptical clusters.

**Disadvantages of k-means**
- The clusters are manually chosen using elbow curve visualization. 
- Generally, k-means clustering does not detect outliers, which might affect the performance of the model.

![Capture_3](https://user-images.githubusercontent.com/79050917/135743111-07051947-101e-4433-b9f2-3184dcfe68b9.PNG)


