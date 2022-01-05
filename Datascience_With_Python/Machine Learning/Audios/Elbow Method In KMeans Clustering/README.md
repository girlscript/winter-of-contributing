## Elbow Method In KMeans Clustering
## [Click here to listen audio](https://drive.google.com/file/d/1dmdfQ0pCPQzyyghY7J3P9c67s_zMlGep/view?usp=sharing)

**What is clustering?**

- Clustering is unsupervised machine learning model, it is used to cluster the homogenous groups based on similarity. 
- Distance is the measure that is used to measure the similarity.

**What is k-means clustering?**

- K-means clustering is a non-hierarchical clustering. It is non-hierarchical because it does not follow any hierarchy.
- K-means clustering used to group the homogeneous data points.

**How do k-means clustering algorithm works?**

- K-means clustering usually forms the clusters based on the number of clusters we pass while building the model.
- It randomly chooses centroid and forms a cluster by grouping the nearest data points.
- It is a non-deterministic model which changes on every execution.

![image](https://user-images.githubusercontent.com/79050917/143386569-aeab0ee4-d538-44e9-aa5a-89a29e14b060.png)

**Selection of k in k-mean clustering:**
- Randomly assigned 
- Odd number of k is chosen
- Large number of k is not preferred as it forms large number of cluster which might lose the homogeneity nature of clusters.
- Too small is not chosen as it has more prone to outliers.
- For choosing the k in k-mean algorithm we also use elbow curve method.

Now, lets understand elbow-curve:
- It is a representation or visualization.
- It helps in predicting the number of k needed in k-means clustering.
- It is used broadly, as it gives the confidence on the number.

![image](https://user-images.githubusercontent.com/79050917/143386616-7a562016-0488-4771-aa12-5c5d6016497f.png)

**K-Means Advantages :**
1) If variables are huge, then  K-Means most of the times computationally faster than hierarchical clustering.
2) K-Means produce tighter clusters than hierarchical clustering.

**K-Means Disadvantages :**
1) Difficult to predict K-Value.
2) Different initial partitions can result in different final clusters.
3) It does not work well with clusters of Different size and Different density

![image](https://user-images.githubusercontent.com/79050917/143386550-48266121-86f2-420a-beec-e9dd165edd01.png)

## Conclusion:
- k-means clustering is a non-hierarchical clustering.
- It is used to group the similar groups.
- The number of k in k-means can be identified by elbow curve.
- Elbow curve is a visualization method.
- Choose the k which has the highest accuracy is generally prefered.





