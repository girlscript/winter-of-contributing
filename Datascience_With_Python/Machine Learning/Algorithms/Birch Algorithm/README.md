<h1> Birch Algorithm </h1>

Balanced Iterative Reducing and Clustering using Hierarchies (BIRCH) is designed for clustering a large amount of numeric data by integrating hierarchical clustering (at the
initial microclustering stage) and other clustering methods such as iterative partitioning (at the later macroclustering stage).It assumes that there may be a limited amount
of main memory and achieves a linear 1/0 time requiring only one database scan

## Properties of Birch Algorithm
<ul>
  <li>Only one scan of Data is necessary</li>
  <li>Designed for very Large Datasets</li>
  <li>Scalable Clustering Method</li>
  <li>Only deals with Metric Attributes(A metric attribute is one whose values can be represented by explicit coordinates in an Euclidean space (no categorical variables))</li>
  <li>It is based on notation of a Clustering Feature (CF) of a CF Tree</li>
</ul>

## Clustering Feature
The clustering feature (CF) of the cluster is a 3-D vector summarizing information about clusters of objects. It is defined as CF = (n,LS,SS) where LS is the linear sum of the n points), and SS is the square sum of the data points.It is essentially a summary of the statistics for the given cluster.Using a clustering feature, we can easily derive many useful statistics of a cluster.


## CF Tree
A CF tree is a height-balanced tree that stores the clustering features for a hierarchical clustering.
<ul>
  <li>A nonleaf node in a tree has descendants or “children”</li>
  <li>The nonleaf nodes store sums of the CFs of their children</li>
</ul>  
A CF Tree also has 2 parameters :
<ol>
  <li>Branching factor : It tells the  max no of children a node may have.</li>
  <li>Threshold: max diameter of sub-clusters stored at the leaf nodes</li>
</ol>  

A CF Tree strucutre is given as below

![image](https://user-images.githubusercontent.com/74582422/135149734-5ee98ee8-69e0-4666-9659-3b3471a6582f.png)

<ul>
  <li>Each non-leaf node has at most B entries.”</li>
  <li>Each leaf node has at most B CF entries which satisfy threshold L, a maximum diameter of radius</li>
  <li>P(page size in bytes) is the maximum size of a node</li>
  <li>Compact: each leaf node is a subcluster, not a data point</li>
</ul>  

## Process in Birch Algorithm
The Primary phases are :
<ul>
  <li>Phase 1: BIRCH scans the database to build an initial in-memory CF-tree, which can be viewed as a multilevel compression of the data that tries to preserve the data’s
inherent clustering structure.</li>
  <li>Phase 2: BIRCH applies a (selected) clustering algorithm to cluster the leaf nodes of the CF-tree, which removes sparse clusters as outliers and groups dense clusters into
larger ones.</li>
</ul>  

For Phase 1, the CF-tree is built dynamically as objects are inserted. Thus, the method is incremental. An object is inserted into the closest leaf entry (subcluster). If the diameter of the subcluster stored in the leaf node after insertion is larger than the threshold value, then the leaf node and possibly other nodes are split. After the insertion of the new object, information about the object is passed toward the root of the tree. The size of the CF-tree can be changed by modifying the threshold. If the size of the memory that is needed for storing the CF-tree is larger than the size of the main memory, then a larger threshold value can be specified and the CF-tree is rebuilt.
<br><br>
The rebuild process is performed by building a new tree from the leaf nodes of the old tree. Thus, the process of rebuilding the tree is done without the necessity of rereading
all the objects or points. This is similar to the insertion and node split in the construction of B+-trees. Therefore, for building the tree, data has to be read just once. Some
heuristics and methods have been introduced to deal with outliers and improve the quality of CF-trees by additional scans of the data. Once the CF-tree is built, any clustering
algorithm, such as a typical partitioning algorithm, can be used with the CF-tree in Phase 2.

## Algorithm 
Input : D = {t1, t2, ... , tn} //Set of elements
T  //Threshold for CF tree construction
<br>
Output : K //Set of clusters
<br>
Algo: 
<br>
**for each** t(i) ε D **do**
determine correct leaf node for t(i) insertion ;<br>
**if** threshold condition is not violated , **then**
add t(i) to cluster and update CF triples ;<br>
**else**<br>
**if** room to insert ti , **then**
insert t(i) as s ingle c luster and update CF triples ;<br>
**else**
split leaf node and redist ribute CF feature s ;

<br><br>
  The first step creates the CF tree in memory. The threshold value can be modified if necessary to ensure that the tree fits into the available memory space. Insertion into the CF tree requires scanning the tree from the root down, choosing the node closest to the new point at each level. The distance here is calculated by looking at the distance between the new point and the centroid of the cluster. This can be easily calculated with most distance measures (e.g., Euclidean or Manhattan) using the CF triple. When the new item is inserted, the CF triple is appropriately updated, as is each triple on the path from the root down to the leaf. It is then added to the closest leaf node found by adjusting the CF value for that node. When an item is inserted into a cluster at the leaf node of the tree, the cluster must satisfy the threshold value. If it does, then the
CF entry for that cluster is modified. If it does not, then that item is added to that node as a single-item cluster.

## Example 
Consider the points : (1,2)(2,3)(4,6)(3,7)(2,9)(1,6)
<br><br>
Now , according to the formula we know , CF = (n, LS,SS) <br>we get n = 6<br>
LS (i.e. Linear Sum ) will be (1+2+4+3+2+1,2+3+6+7+9+6) = (13,33)<br>
SS (i.e. Squared Sum) will be (1^2+2^2+4^2+3^2+2^2+1^2,2^2+3^2+6^2+7^2+9^2+6^2) = (35,215)<br>
So , the final function is generated as CF(6,(11,33),(35,215))


## Advantages
<ul>
 <li>It is local in that each clustering decision is made without scanning all data points or all currently existing clusters. It uses neasnrements that reflect the natural closeness of points, and at the same time, can be incrementally maintained during the clustering process.</li>
  <li>It exploits the observation that the data space is usually not uniformly occupied, and hence not every data point is equally important for clustering purposes. A dense region of points is treated collectively as a single cluster. Points in sparse regions are treated as outlters and removed optionally.</li>
  <li>It makes full use of available memory to derive the finest possible subclusters while minimizing I/0 costs (to ensure efficiency). The clustering and reducing process is organized and characterized by the use of an in-memory, heightbalanced and highly-occupied tree structure. Due to these features, its running time is linearly scalable.</li>
</ul>  

## Disadvantages
<ul>
  <li>It handles only numeric data</li>
  <li>It is also sensitive to the order of the data record.</li>
  <li>Clusters tend to be spherical given the radius and diameter measures</li>
  <li>Since we fix the size of leaf nodes, so clusters may not be so natural</li>
</ul> 

## Complexity
The time complexity of the algorithm is O(n), where n is the number of objects to be clustered. 

## Applications
<ul>
  <li>Pixel classification in images</li>
  <li>Image blending</li>
  <li>Audio data classification</li>
</ul> 

## Conclusion
Experiments have shown the linear scalability of the algorithm with respect to the number of objects, and good quality of clustering of the data. However, since each node in a CF-tree can hold only a limited number of entries due to its size, a CF-tree node does not always correspond to what a user may consider a natural cluster. Moreover, if the clusters are not spherical in shape, BIRCH does not perform well because it uses the notion of radius or diameter to control the boundary of a cluster.The ideas of clustering features and CF-trees have been applied beyond BIRCH. The ideas have been borrowed by many others to tackle problems of clustering streaming
and dynamic data.

