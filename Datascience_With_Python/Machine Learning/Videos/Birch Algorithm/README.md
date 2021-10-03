# BIRCH Algorithm #
# [Here is the link to video explanation](https://drive.google.com/file/d/1JqQavnqEu9jHGdwOilL0QqcbwTI5w50H/view?usp=sharing) #
### Content ###
1. Introduction and use
2. Approach
3. Important terms
4. Parameters
5. Limitations

### Introduction and use ###
Birch is a clustering algorithm which works best on large dataset which is why it is majorly used as a stepping stone for other clustering algorithms to get a smaller and better cluster to work on. BIRCH stands for (Balanced Iterative Reducing and Clustering Hierarchies) which testifies the fact that this algorithm reduces data into reduced cluster based on balanced iterations.

### Approach ###
 - As dicussed ealier BIRCH is often used with other clustering algorithms. After making a summary, they can further be clustered again using some different algorithms.<br>
 - It converts the data into a tree data structure. The centroids made with every iterartion can either be *final cluster centroids* or *input for a next clustering algo*. 

### Importatnt terms ###
<b> Clustering Feature (CF) node <br></b>
The most important feature of BIRCH is that it only scans the dataset once and never looks back it again. The reason behind this is beacuse after reading it once, it forms cluster and stores every information about that cluster in the form of a "CF node".
This CF node contains information of data points in terms of<br>
1. N – no. of items in that cluster
2. LS- sum of their data points
3. SS – sum of squared data points <br>
![image1](https://miro.medium.com/max/528/1*SpuaWx6n5Ql2-qXEU6poeA.png)

<b>Clustering Feature (CF) tree</b>
It compresses data into sets of CF nodes.
The nodes that have sub-clustors (non-leaf nodes) are called CF sub-clustors
The leaf node contains specified amount (called threshold value) of CF nodes and that is where the tree stops.
![image2](https://i.imgur.com/mkSo8wI.png)

### Implementation parameters ###
• <b>Threshold</b> - The maximum number of data samples to be considered in a subcluster of 
the leaf node in a CF tree.<br>
• <b>Branching_factor</b> - It is the factor that is used to specify the number of CF sub-clusters 
that can be made in a node.<br>
• <b>n_clusters</b> - number of clusters after the final clustering step(If set to None, final 
clustering step is not performed)<br>

### Limitations ###
BIRCH has one major drawback – it can only process metric attributes. A metric attribute is any attribute whose values can be represented in Euclidean space i.e., no categorical attributes should be present.
  
