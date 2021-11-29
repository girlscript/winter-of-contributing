## Fuzzy Clustering
## [Click here to listen the audio](https://drive.google.com/file/d/1jy8I4XFG8mVXSzaS4lAm01MU8WM2syap/view?usp=sharing)

- Clustering is an unsupervised machine learning technique which divides the given data into different clusters based on their distances (similarity) from each other.
- The unsupervised k-means clustering algorithm gives the values of any point lying in some particular cluster to be either as 0 or 1 i.e., either true or false. 
- But the fuzzy logic gives the fuzzy values of any particular data point to be lying in either of the clusters. 
- Here, in fuzzy c-means clustering, we find out the centroid of the data points and then calculate the distance of each data point from the given centroids until the clusters formed becomes constant.

![image](https://user-images.githubusercontent.com/79050917/143816401-34f69319-b659-4aa5-9117-ab82385583c4.png)

**Algorithm:**
- Choose a number of clusters.
- Assign coefficients randomly to each data point for being in the clusters.
- Repeat until the algorithm has converged (that is, the coefficients' change between two iterations is no more than the given :
  - Compute the centroid for each cluster (shown below).
  - For each data point, compute its coefficients of being in the clusters.

![image](https://user-images.githubusercontent.com/79050917/143816421-2659dc44-b9e4-4bd6-a61b-b27f71ee951c.png)

**Advantages:**
- Gives best result for overlapped data set and comparatively better than k-means algorithm.
- Unlike k-means where data point must exclusively belong to one cluster center here data point is assigned membership to each cluster center as a result of which data point may belong to more than one cluster center.

**Disadvantages:**
- Apriori specification of the number of clusters.
- With lower value of β we get the better result but at the expense of more number of iteration.
- Euclidean distance measures can unequally weight underlying factors.

**Applications:**
- Clustering problems have applications in surface science, biology, medicine, psychology, economics, and many other disciplines.
- Bioinformatics
- Image analysis
- Marketing

![image](https://user-images.githubusercontent.com/79050917/143816503-76af1966-75af-4c7f-8260-1548d598338e.png)

**Overview:**
- Fuzzy c-means (FCM) is a method of clustering which allows one piece of data to belong to two or more clusters. 
- This method (developed by Dunn in 1973 and improved by Bezdek in 1981) is frequently used in pattern recognition.
