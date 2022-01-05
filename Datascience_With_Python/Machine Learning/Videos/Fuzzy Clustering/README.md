# Fuzzy Clustering

## Video link: [Fuzzy Clustering](https://drive.google.com/file/d/1j04hTDl244KcQhsjStFCraAw7IOjCNmX/view?usp=sharing)

## What is clustering?

Clustering is an unsupervised machine learning technique which divides the given data into different clusters based on their distances (similarity) from each other.

The unsupervised k-means clustering algorithm gives the values of any point lying in some particular cluster to be either as 0 or 1 i.e., either true or false. **But the fuzzy logic gives the fuzzy values of any particular data point to be lying in either of the clusters.** Here, in fuzzy c-means clustering, we find out the centroid of the data points and then calculate the distance of each data point from the given centroids until the clusters formed becomes constant.

## The steps to perform algorithm are:

- Step 1: Initialize the data points into desired number of clusters randomly.

- Step 2: Find out the centroid.

![image](https://user-images.githubusercontent.com/63282184/141604116-5eb7f763-9a3c-4be3-9947-74a494ee8fb6.png)

      Where, µ is fuzzy membership value of the data point, m is the fuzziness parameter (generally taken as 2), and xk is the data point.

- Step 3: Find out the distance of each point from centroid.

- Step 4: Updating membership values.

![image](https://user-images.githubusercontent.com/63282184/141604141-182554ee-6428-485d-851c-a16e81b992cd.png)

- Step 5: Repeat the steps(2-4) until the constant values are obtained for the membership values or the difference is less than the tolerance value (a small value up to which the difference in values of two consequent updations is accepted).

- Step 6: Defuzzify the obtained membership values.


## Advantage and Disadvantage

### Advantages:

- Gives best result for overlapped data set and comparatively better than k-means algorithm.
- Unlike k-means where data point must exclusively belong to one cluster center here data point is assigned membership to each cluster center as a result of which data point may belong to more than one cluster center.

### Disadvantages:

- Apriori specification of the number of clusters.
- With lower value of β we get the better result but at the expense of more number of iteration.
- Euclidean distance measures can unequally weight underlying factors.


## Applications
Clustering problems have applications in surface science, biology, medicine, psychology, economics, and many other disciplines.

## Conclusion:

Fuzzy c-means clustering has can be considered a better algorithm compared to the k-Means algorithm. Unlike the k-Means algorithm where the data points exclusively belong to one cluster, in the case of the fuzzy c-means algorithm, the data point can belong to more than one cluster with a likelihood. Fuzzy c-means clustering gives comparatively better results for overlapped data sets.
