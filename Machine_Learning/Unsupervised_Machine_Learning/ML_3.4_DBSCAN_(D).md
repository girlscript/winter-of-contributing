# **<ins>DBSCAN</ins>**
Density-based spatial clustering of applications with noise (DBSCAN) is a data clustering algorithm. It is a density-based clustering non-parametric algorithm: given a set of points in some space, it groups together points that are closely packed together (points with many nearby neighbors), marking as outliers points that lie alone in low-density regions (whose nearest neighbors are too far away). DBSCAN is one of the most common clustering algorithms and also most cited in scientific literature.
<br><br>

## **Introduction to DBSCAN**

**There are two key parameters of DBSCAN:**
- eps: The distance that specifies the neighborhoods. Two points are considered to be neighbors if the distance between them are less than or equal to eps.
- minPts: Minimum number of data points to define a cluster.

**Based on these two parameters, points are classified as core point, border point, or outlier:**
- Core point: A point is a core point if there are at least minPts number of points (including the point itself) in its surrounding area with radius eps.
- Border point: A point is a border point if it is reachable from a core point and there are less than minPts number of points within its surrounding area.
- Outlier: A point is an outlier if it is not a core point and not reachable from any core points.
<br><img src='https://i.ibb.co/2hw0JWm/image.png' style='width:30%'>

Consider a set of points in some space to be clustered. Let ε be a parameter specifying the radius of a neighborhood with respect to some point. For the purpose of DBSCAN clustering, the points are classified as core points, (density-) reachable points and outliers, as follows:
<br>
- A point p is a core point if at least minPts points are within distance ε of it (including p).
- A point q is directly reachable from p if point q is within distance ε from core point p. Points are only said to be directly reachable from core points.
- A point q is reachable from p if there is a path p1, ..., pn with p1 = p and pn = q, where each pi+1 is directly reachable from pi. Note that this implies that the initial point and all points on the path must be core points, with the possible exception of q.
- All points not reachable from any other point are outliers or noise points.
<br>

Now if p is a core point, then it forms a cluster together with all points (core or non-core) that are reachable from it. Each cluster contains at least one core point; non-core points can be part of a cluster, but they form its "edge", since they cannot be used to reach more points.
<br><img src='https://miro.medium.com/proxy/1*tc8UF-h0nQqUfLC8-0uInQ.gif' style='width:30%'><br>
Reachability is not a symmetric relation: by definition, only core points can reach non-core points. The opposite is not true, so a non-core point may be reachable, but nothing can be reached from it. Therefore, a further notion of connectedness is needed to formally define the extent of the clusters found by DBSCAN. Two points p and q are density-connected if there is a point o such that both p and q are reachable from o. Density-connectedness is symmetric.
<br>
A cluster then satisfies two properties:
1. All points within the cluster are mutually density-connected.
2. If a point is density-reachable from some point of the cluster, it is part of the cluster as well.
<br><br>

## **Algorithm behind DBSCAN**
```
DBSCAN(DB, distFunc, eps, minPts) {
    C := 0                                                  /* Cluster counter */
    for each point P in database DB {
        if label(P) ≠ undefined then continue               /* Previously processed in inner loop */
        Neighbors N := RangeQuery(DB, distFunc, P, eps)     /* Find neighbors */
        if |N| < minPts then {                              /* Density check */
            label(P) := Noise                               /* Label as Noise */
            continue
        }
        C := C + 1                                          /* next cluster label */
        label(P) := C                                       /* Label initial point */
        SeedSet S := N \ {P}                                /* Neighbors to expand */
        for each point Q in S {                             /* Process every seed point Q */
            if label(Q) = Noise then label(Q) := C          /* Change Noise to border point */
            if label(Q) ≠ undefined then continue           /* Previously processed (e.g., border point) */
            label(Q) := C                                   /* Label neighbor */
            Neighbors N := RangeQuery(DB, distFunc, Q, eps) /* Find neighbors */
            if |N| ≥ minPts then {                          /* Density check (if Q is a core point) */
                S := S ∪ N                                  /* Add new neighbors to seed set */
            }
        }
    }
}

RangeQuery(DB, distFunc, Q, eps) {
    Neighbors N := empty list
    for each point P in database DB {                      /* Scan all points in the database */
        if distFunc(Q, P) ≤ eps then {                     /* Compute distance and check epsilon */
            N := N ∪ {P}                                   /* Add to result */
        }
    }
    return N
}
```
The DBSCAN algorithm can be understood in following steps:
1. Find the points in the ε (eps) neighborhood of every point, and identify the core points with more than minPts neighbors.
2. Find the connected components of core points on the neighbor graph, ignoring all non-core points.
3. Assign each non-core point to a nearby cluster if the cluster is an ε (eps) neighbor, otherwise assign it to noise.
<br><br>

## **Complexity**
- Overall average runtime complexity : ```O(n log n)```
- Memory (Matrix Based implementation of DBSCAN) : ```O(n²)```
- Memory (Non-matrix based implementation of DBSCAN) : ```O(n)```
<br><br>

## **Python Implementation of DBSCAN and comparison with other Clustering Algorithms**
We are creating a dataset with data points in form of concentric circles with a a bit of noise represented as:
<br><img src='https://i.ibb.co/V9WN3w1/image.png' style='width:20%'><br>

**DBSCAN**
We are importing DBSCAN from sklearn.cluster and then directly without specifying any parameters we plot the clusters
```python
from sklearn.cluster import DBSCAN
dbscan=DBSCAN()
dbscan.fit(df[[0,1]])
df['DBSCAN_labels']=dbscan.labels_ 
# Plotting resulting clusters
```
<img src='https://i.ibb.co/wdDP5DW/image.png' style='width:20%'><br>
Here we can see that the clustering is not done properly because of incorrect epsilon.<br>To find the perfect epsilon value for our dataset we plot the K Distance graph
```python
from sklearn.neighbors import NearestNeighbors
neigh = NearestNeighbors(n_neighbors=2)
nbrs = neigh.fit(df[[0,1]])
distances, indices = nbrs.kneighbors(df[[0,1]])
# The distance variable contains an array of distances between a data point and its nearest data point for all data points in the dataset.
# Plotting K-distance Graph
distances = np.sort(distances, axis=0)
distances = distances[:,1]
# plotting the K Distance graph
```
<img src='https://i.ibb.co/s9tvQ5K/image.png' style='width:30%'><br>
The optimum value of epsilon is at the point of maximum curvature in the K-Distance Graph, hence now we are setting epsilon value to 30 and min_samples to 6
```python
from sklearn.cluster import DBSCAN
# setting epsilon value to 30 and min_samples to 6
dbscan_opt=DBSCAN(eps=30,min_samples=6)   
dbscan_opt.fit(df[[0,1]])
```
<img src='https://i.ibb.co/jrs3ZY7/image.png' style='width:20%'><br>

Now plottinng K-Means and Hierarchical Clustering to compare with DBSCAN<br>
**K-Means**
```python
from sklearn.cluster import KMeans
k_means=KMeans(n_clusters=4,random_state=42)
k_means.fit(df[[0,1]])
```
**Hierarchical Clustering**
```python
from sklearn.cluster import AgglomerativeClustering
model = AgglomerativeClustering(n_clusters=4, affinity='euclidean')
model.fit(df[[0,1]])
```
Now compring all the 3 Density-Based clustering Algorithms, K-Means and Hierarchical failed to cluster the data points. Also, they were not able to properly detect the noise present in the dataset. Whereas DBSCAN is not just able to cluster the data points correctly, but it also perfectly detects noise in the dataset
<img src='https://i.ibb.co/w6cvq8r/image.png' style='width:60%'>

### ***View the complete [ipynb](https://colab.research.google.com/drive/1tjGgHcaNEzpeot6aoSAGfjs2GIK-_XZi?authuser=1) file***
<br>

## **Advantages of DBSCAN**
1. DBSCAN does not require one to specify the number of clusters in the data a priori, as opposed to k-means.
2. DBSCAN can find arbitrarily-shaped clusters. It can even find a cluster completely surrounded by (but not connected to) a different cluster. Due to the MinPts parameter, the so-called single-link effect (different clusters being connected by a thin line of points) is reduced.
3. DBSCAN has a notion of noise, and is robust to outliers.
4. DBSCAN requires just two parameters and is mostly insensitive to the ordering of the points in the database.
<br><br>

## **Disadvantages of DBSCAN**
1. DBSCAN is not entirely deterministic: border points that are reachable from more than one cluster can be part of either cluster, depending on the order the data are processed. DBSCAN is a variation that treats border points as noise, and this way achieves a fully deterministic result as well as a more consistent statistical interpretation of density-connected components.
2. The quality of DBSCAN depends on the distance measure used in the function regionQuery(P,ε). The most common distance metric used is Euclidean distance. Especially for high-dimensional data, this metric can be rendered almost useless due to the so-called "Curse of dimensionality", making it difficult to find an appropriate value for ε. This effect, however, is also present in any other algorithm based on Euclidean distance.
3. DBSCAN cannot cluster data sets well with large differences in densities, since the minPts-ε combination cannot then be chosen appropriately for all clusters.
4. If the data and scale are not well understood, choosing a meaningful distance threshold ε can be difficult.
<br><br>

## **Conclusion**
Density-based clustering algorithms can learn clusters of arbitrary shape, and with the Level Set Tree algorithm, one can learn clusters in datasets that exhibit wide differences in density.
<br><br>

## **References**
- https://en.wikipedia.org/wiki/DBSCAN
- https://www.kdnuggets.com/2020/04/dbscan-clustering-algorithm-machine-learning.html
- https://towardsdatascience.com/dbscan-clustering-explained-97556a2ad556




