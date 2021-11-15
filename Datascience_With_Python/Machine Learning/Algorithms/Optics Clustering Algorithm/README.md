<h1> OPTICS Algorithm </h1>

Ordering Points to Identify the Clustering Structure (OPTICS) was designed to overcome the difficulty in using one set of global parameters in clustering analysis.OPTICS does not explicitly produce a data set clustering. Instead, it outputs a cluster ordering. This is a linear list of all objects under analysis and represents the density-based clustering structure of the
data


## Cluster Analysis
Cluster analysis is a primary method for database mining. It is either used as a stand-alone tool to get insight into the distribution of a data set, e.g. to focus further analysis and data processing, or as a preprocessing step for other algorithms operating on the detected clusters. Almost all of the well-known clustering algorithms require input parameters which are hard to determine but have a significant influence on the clustering result.


## Object Requirements in OPTICS
To construct the different clusterings simultaneously, the objects are processed in a
specific order. This order selects an object that is density-reachable with respect to the
lowest value so that clusters with higher density  will be finished first. Based
on this idea, OPTICS needs two important pieces of information per object:
<ul>
  <li>The core-distance of an object p is the smallest value ε such that the ε-neighborhood of p has at least MinPts objects. That is, ε is the minimum distance threshold that makes p a core object. If p is not a core object with respect to ε and MinPts, the core-distance of p is undefined
</li>
  <li>The reachability-distance to object p from q is the minimum radius value that makes p density-reachable from q. According to the definition of density-reachability, q has to be a core object and p must be in the neighborhood of q. Therefore, the reachability-distance from q to p is max{core-distance(q), dist(p, q)}. If q is not a core object with respect to ε and MinPts, the reachability-distance to p from q is undefined</li>
</ul>  
An object p may be directly reachable from multiple core objects. Therefore, p
may have multiple reachability-distances with respect to different core objects. The
smallest reachability-distance of p is of particular interest because it gives the shortest
path for which p is connected to a dense cluster.<br>

![image](https://user-images.githubusercontent.com/74582422/136503573-1cf789fd-09a5-4030-8e67-351156a0e387.png)


## Process in OPTICS Algorithm
OPTICS begins with an arbitrary object from the input database as the current
object, p. It retrieves the ε-neighborhood of p, determines the core-distance, and sets
the reachability-distance to undefined. The current object, p, is then written to output.<br><br>
If p is not a core object, OPTICS simply moves on to the next object in the OrderSeeds
list (or the input database if OrderSeeds is empty). If p is a core object, then for each
object, q, in the ε-neighborhood of p, OPTICS updates its reachability-distance from p
and inserts q into OrderSeeds if q has not yet been processed. The iteration continues
until the input is fully consumed and OrderSeeds is empty


## Algorithm 
function OPTICS(DB, eps, MinPts) is <br>
    for each point p of DB do<br>
        p.reachability-distance = UNDEFINED<br>
    for each unprocessed point p of DB do<br>
        N = getNeighbors(p, eps)<br>
        mark p as processed<br>
        output p to the ordered list<br>
        if core-distance(p, eps, MinPts) != UNDEFINED then<br>
            Seeds = empty priority queue<br>
            update(N, p, Seeds, eps, MinPts)<br>
            for each next q in Seeds do<br>
                N' = getNeighbors(q, eps)<br>
                mark q as processed<br>
                output q to the ordered list<br>
                if core-distance(q, eps, MinPts) != UNDEFINED do<br>
                    update(N', q, Seeds, eps, MinPts)<br>
<br><br>


## Advantages
<ul>
 <li>It uses fewer parameters than other clustering techniques since it does not need to maintain the epsilon parameter </li>
  <li>It ease the job while finding various densities within a given cluster</li>
  <li>It helps in parameter tuning as well since the region seperation is good</li>
</ul>  

## Disadvantages
<ul>
  <li>The OPTICS clustering technique requires more memory as it maintains a priority queue (Min Heap) to determine the next data point which is closest to the point currently being processed in terms of Reachability Distance.</li>
  <li>It also requires more computational power because the nearest neighbour queries are more complicated .</li>
</ul> 

## Complexity
OPTICS processes each point once, and performs one -neighborhood query during this processing. Given a spatial index that grants a neighborhood query in  runtime, an overall runtime of  is obtained. The authors of the original OPTICS paper report an actual constant slowdown factor of 1.6 compared to DBSCAN.

## Applications
<ul>
  <li>Atom Probe Tornography</li>
  <li>Creating outlier detection algorithms</li>
  <li>Maize Precise Fertilization Decision-Making</li>
</ul> 

## PLots of Optics Clustering Algorithm
![image](https://user-images.githubusercontent.com/74582422/136651214-73269ad2-8c0e-42b0-974d-1029fdb55e51.png)
<br><br>
![image](https://user-images.githubusercontent.com/74582422/136651237-6c81b65b-bd36-45db-91a9-2cfbd51ba29e.png)

## Conclusion
OPTICS is a very interesting technique fro clustering.The benefits it inludes like finding varying densities, as well as very little parameter tuning are really helpful.Additionally , it's pre made modules are available on scikit learn in python and there are other as well in R Programming Language.


