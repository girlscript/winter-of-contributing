# Data Science with Python : Elbow Method In KMeans Clustering 


##### Format : Documentation



  
### 🔗 IMPORTANT LINKS 
#### Documentation: [![Documentation](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Elbow%20Method%20using%20KMeans%20Clustering/elbow_method.ipynb)



  
## INFORMATION ABOUT DATASET

To share my understanding of the concept and techniques I know, I’ll have created the dataset which will help to make you understand the concept of Elbow Method used in KMeans Clustering

* The dataset consist of two features(x1 and x2)

## DESCRIPTION
The dataset consist of unlabeled data to develop a model we need to used Unsupervised Machine Learning Algorithm technique.

## AIM
In this documentation, we understand the concept of Elbow Method with the help of an example dataset. We will look how to choose optimal number of clusters for K-means Algorithm

#### Platform used for dataset: Google Colab
#### Imported Libraries: 
- Matplotlib
- Numpy
- Pandas


## Elbow Method
* K-means algorithm is used in unsupervised learning where model have to work on its own to discover information.

* K-means algorithm uses clustering in this method of identifying similar groups of data in a data set is called clustering.Its basically allows you to automatically split the data into groups according to similarities.

* Clusters can be decided randomly or we can use Elbow Method which can provide optimal number of clusters.

* This is the most optimal method to make our model more close to accuracy.

* The graph plotted looks like an elbow of human which is why it is known as Elbow method.



##  DATA EXPLORATION
Before applying ,the first step is data exploration which helps in data analysis. We visualize the data and try to understand it.

### Printing the first five rows of dataset

head() method is used to display first five rows


```
# To display first five rows of the dataset
df.head()

```



<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Elbow%20Method%20using%20KMeans%20Clustering/Images/head.PNG'>


---

### Printing the last five rows of dataset

tail() method is used to display last five rows 
```
# To display last five rows of the dataset
df.tail()
```

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Elbow%20Method%20using%20KMeans%20Clustering/Images/tail.PNG'>


---

### info()

info() display concise summary of the dataset

```
# Printing concise summary of a DataFrame
df.info()
```



<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Elbow%20Method%20using%20KMeans%20Clustering/Images/info.PNG'>

---



### describe()


```
# Printing some basic statistical details like percentile, mean, std etc
df.describe()
```

describe() is used to view some basic statistical details like percentile, mean, std etc. of a data frame or a series of numeric values
<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Elbow%20Method%20using%20KMeans%20Clustering/Images/describe.PNG'>

---





# Elbow method
Elbow method allows to choose optimal number of clusters for K-means Algorithm.The way to evaluate the choice of K is made using a parameter known as WCSS. WCSS stands for Within Cluster Sum of Squares.The Elbow Method is then used to choose the best K value. In the depiction below we can see that after 3 there's no significant decrease in WCSS so 3 is the best here.
So the value of k is 3 which is the optimal number of clusters.

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Elbow%20Method%20using%20KMeans%20Clustering/Images/em1.PNG'>

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Elbow%20Method%20using%20KMeans%20Clustering/Images/em2.PNG'>

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Elbow%20Method%20using%20KMeans%20Clustering/Images/em3.PNG'>

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Elbow%20Method%20using%20KMeans%20Clustering/Images/em4.PNG'>

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Elbow%20Method%20using%20KMeans%20Clustering/Images/em5.PNG'>


---

# Visualization Of Clusters
<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Elbow%20Method%20using%20KMeans%20Clustering/Images/plot.PNG'>



---

# End Note 
KMeans is one of the most popular algorithm in the world of unsupervised learning. Hope this documentation helps you to understand the concept of elbow method in Kmeans and how to choose the optimal number of clusters by reading the plot.

---

## Contributor
- ID : 253
- DSWP BATCH : 8
- [@Ayushi Jindal](https://github.com/ayushijindal)

