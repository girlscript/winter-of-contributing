# K Medoid Algorithm

It is a representative Object-Based Technique.So , in this we use actual objects in the clusters to represent the clusters , using one representative object per cluster.Each remaining object is assigned to the cluster of which the representative object is the most similar. The partitioning method is then performed based on the principle of minimizing the sum of the dissimilarities between each object p and its corresponding representative object.

## K Medoids Method
We use the absoluter error criteria in case of K Medoids Algorithm.It is defined as  :
![image](https://user-images.githubusercontent.com/74582422/135851769-2854e082-054d-49c3-9d49-ca9802da2285.png)<br>
where E is the sum of the absolute error for all objects p in the data set, and oi
is the representative object of Ci.This is the basis for the k-medoids method, which groups n
objects into k clusters by minimizing the absolute error.When k = 1, we can find the exact median in O(n^2) time.However, when k is a general positive number, the k-medoid problem is NP-hard.


## Partitioning Around Medoids (PAM)
The Partitioning Around Medoids (PAM) algorithm (see Figure 10.5 later) is a popular realization of k-medoids clustering. It tackles the problem in an iterative, greedy way. Like the k-means algorithm, the initial representative objects (called seeds) are chosen arbitrarily. We consider whether replacing a representative object by a nonrepresentative object would improve the clustering quality. All the possible replacements are tried out. The iterative process of replacing representative objects by other objects continues until the quality of the resulting clustering cannot be improved by any replacement. This quality is measured by a cost function of the average dissimilarity between an object and the representative object of its cluster.<br>
PAM starts from an initial set of medoids and iteratively replaces one of the medoids by one of the non-medoids if it improves the total distance of the resulting clustering.<br>
PAM works effectively for small data sets, but does not scale well for large data sets (due to the computational complexity)

## Working of K Medoid
Here, let's consider K =2<br>
![image](https://user-images.githubusercontent.com/74582422/135852472-edf0a106-2177-456c-94e2-2e95dda7ff60.png)<br>
Arbitrary choose k object as initial medoids<br>
![image](https://user-images.githubusercontent.com/74582422/135852664-0c8a34b5-bd2d-4f15-82c2-8f2141d09175.png)<br>
Assign each remaining object to nearest medoids<br>
![image](https://user-images.githubusercontent.com/74582422/135853154-aeff0f06-791c-415e-ad7a-53a2980aa2e9.png)<br>
Randomly select a nonmedoid object,O<sub>random</sub><br>
![image](https://user-images.githubusercontent.com/74582422/135853462-dbf46fd9-08f3-4ebe-b0bd-477bfb4f5a01.png)<br>
Compute total cost of swapping<br>
![image](https://user-images.githubusercontent.com/74582422/135853584-d524070e-05b8-44c9-b1c6-99689d47aeb5.png)<br>
Swapping O and O<sub>random</sub> If quality is improved.<br>
Do loop Until no change.

## Cost in K Medoid
The cost in K-Medoids algorithm is given as –
The dissimilarity of the medoid(Ci) and object(Pi) is calculated by using 
E = |Pi - Ci|

## K Medoid Clustering Process
<ol>
  <li>Initialize: select k random points out of the n data points as the medoids.</li>
  <li>Associate each data point to the closest medoid by using any common distance metric methods.</li>
  <li>While the cost decreases:<br>
        For each medoid m, for each data o point which is not a medoid:
    <ol>
      <li>Swap m and o, associate each data point to the closest medoid, recompute the cost.</li>
      <li>If the total cost is more than that in the previous step, undo the swap.</li>
    </ol>
  </li>
</ol>  



## Advantages
<ul>
  <li>It outputs the final clusters of objects in a fixed number of iterations</li>
 <li>It is simple to understand and easy to implement.</li>
  <li>K-Medoid Algorithm is fast and converges in a fixed number of steps.</li>
  <li>PAM is less sensitive to outliers than other partitioning algorithms.</li>
</ul>  

## Disadvantages
<ul>
  <li>The main disadvantage of K-Medoid algorithms is that it is not suitable for clustering non-spherical (arbitrary shaped) groups of objects. This is because it relies on minimizing the distances between the non-medoid objects and the medoid (the cluster center) – briefly, it uses compactness as clustering criteria instead of connectivity.</li>
  <li>It may obtain different results for different runs on the same dataset because the first k medoids are chosen randomly.</li>
</ul> 

## Complexity
The time complexity of the algorithm is O(k * (n-k)2) , where k is th enumber of clusters.

## Comparison with K Means
The k-medoids method is more robust than k-means in the presence of noise and outliers because a medoid is less influenced by outliers or other extreme values than a mean. However, the complexity
of each iteration in the k-medoids algorithm is O(k(n − k)<sup>2</sup>). For large values of n
and k, such computation becomes very costly, and much more costly than the k-means
method.Both methods require the user to specify k, the number of clusters.

## Scaling up K Medoid
A typical k-medoids partitioning algorithm like PAM works effectively for small data sets, but does not scale well for large data sets. To deal with larger data sets, a sampling-based method called CLARA(Clustering LARge Applications) can be used. Instead of taking the whole data set into
consideration, CLARA uses a random sample of the data set. The PAM algorithm is then
applied to compute the best medoids from the sample. Ideally, the sample should closely
represent the original data set. In many cases, a large sample works well if it is created so
that each object has equal probability of being selected into the sample. The representative objects (medoids) chosen will likely be similar to those that would have been chosen
from the whole data set. CLARA builds clusterings from multiple random samples and
returns the best clustering as the output. The complexity of computing the medoids on
a random sample is O(ks<sup>2</sup> + k(n − k)), where s is the size of the sample, k is the number
of clusters, and n is the total number of objects. CLARA can deal with larger data sets
than PAM.The effectiveness of CLARA depends on the sample size.PAM searches for the best k-medoids among a given data set, whereas CLARA searches for the best k-medoids among the selected sample of the data set. CLARA cannot find a good clustering if any of the best sampled medoids is far from the best k-medoids.

## Applications
K-Medoids algorithm is found useful for practical applications such as face recognition. The medoid can correspond to the typical photo of the individual whose face is to be recognized.

## Conclusion
Overall K Medoids is an easy to understand algorithm plus more efficent than k means clustering as well.We can find it's pre built package for python in the Scikit Learn Library.Also , it has reecent advancements as well which include CLARA and CLARANS which make it a good clustering algorithm to use for clustering our data.

