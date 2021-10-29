# INTRODUCTION TO UNSUPERVISED LEARNING

Unsupervised learning is the training of a machine using information that is neither classified nor labeled and allowing the algorithm to act on that information without guidance. Here the task of the machine is to group unsorted information according to similarities, patterns, and differences without any prior training of data.     










Unlike supervised learning, no teacher is provided that means no training will be given to the machine. Therefore the machine is restricted to find the hidden structure in unlabeled data by itself. 


# Example of Unsupervised Machine Learning

For instance, suppose a image having both dogs and cats which it has never seen.

Thus the machine has no idea about the features of dogs and cats so we can’t categorize it as ‘dogs and cats ‘. But it can categorize them according to their similarities, patterns, and differences, i.e., we can easily categorize the picture into two parts. The first may contain all pics having dogs in it and the second part may contain all pics having cats in it. Here you didn’t learn anything before, which means no training data or examples. 

It allows the model to work on its own to discover patterns and information that was previously undetected. It mainly deals with unlabelled data.

# Why Unsupervised Learning?

Here, are prime reasons for using Unsupervised Learning in Machine Learning:

>Unsupervised machine learning finds all kind of unknown patterns in data.



>Unsupervised methods help you to find features which can be useful for categorization.


 >It is taken place in real time, so all the input data to be analyzed and labeled in the presence of learners.



>It is easier to get unlabeled data from a computer than labeled data, which needs manual intervention.

# Unsupervised Learning Algorithms



Unsupervised Learning Algorithms allow users to perform more complex processing tasks compared to supervised learning. Although, unsupervised learning can be more unpredictable compared with other natural learning methods. Unsupervised learning algorithms include clustering, anomaly detection, neural networks, etc.

# Unsupervised learning is classified into two categories of algorithms: 
 

>Clustering: A clustering problem is where you want to discover the inherent groupings in the data, such as grouping customers by purchasing behavior.


>Association: An association rule learning problem is where you want to discover rules that describe large portions of your data, such as people that buy X also tend to buy Y.


# a)Clustering


Clustering is an important concept when it comes to unsupervised learning.

 It mainly deals with finding a structure or pattern in a collection of uncategorized data. 
 
 Unsupervised Learning Clustering algorithms will process your data and find natural clusters(groups) if they exist in the data.
 
  You can also modify how many clusters your algorithms should identify. It allows you to adjust the granularity of these groups.

# There are different types of clustering you can utilize:

# 1.Exclusive (partitioning)

In this clustering method, Data are grouped in such a way that one data can belong to one cluster only.

Example: K-means

# 2.Agglomerative

In this clustering technique, every data is a cluster. The iterative unions between the two nearest clusters reduce the number of clusters.

Example: Hierarchical clustering

# 3.Overlapping
In this technique, fuzzy sets is used to cluster data. Each point may belong to two or more clusters with separate degrees of membership.

Here, data will be associated with an appropriate membership value.

 Example: Fuzzy C-Means

# 4.Probabilistic
This technique uses probability distribution to create the clusters

Example: Following keywords

“man’s shoe.”

“women’s shoe.”

“women’s glove.”

“man’s glove.”

can be clustered into two categories “shoe” and “glove” or “man” and “women.”

# Clustering Types
Following are the clustering types of Machine Learning:

Hierarchical clustering

K-means clustering

K-NN (k nearest neighbors)

Principal Component Analysis

Singular value decomposition

Independent Component Analysis





# 1.Hierarchical Clustering
>Hierarchical clustering is an algorithm which builds a hierarchy of clusters. It begins with all the data which is assigned to a cluster of their own. Here, two close cluster are going to be in the same cluster. This algorithm ends when there is only one cluster left.

# 2.K-means Clustering
>K-means it is an iterative clustering algorithm which helps you to find the highest value for every iteration. Initially, the desired number of clusters are selected. In this clustering method, you need to cluster the data points into k groups. A larger k means smaller groups with more granularity in the same way. A lower k means larger groups with less granularity.

>The output of the algorithm is a group of “labels.” It assigns data point to one of the k groups. In k-means clustering, each group is defined by creating a centroid for each group. The centroids are like the heart of the cluster, which captures the points closest to them and adds them to the cluster.

K-mean clustering further defines two subgroups:

Agglomerative clustering

Dendrogram


# Agglomerative clustering

>This type of K-means clustering starts with a fixed number of clusters. It allocates all data into the exact number of clusters. This clustering method does not require the number of clusters K as an input. Agglomeration process starts by forming each data as a single cluster.

>This method uses some distance measure, reduces the number of clusters (one in each iteration) by merging process. Lastly, we have one big cluster that contains all the objects.

# Dendrogram
>In the Dendrogram clustering method, each level will represent a possible cluster. The height of dendrogram shows the level of similarity between two join clusters. The closer to the bottom of the process they are more similar cluster which is finding of the group from dendrogram which is not natural and mostly subjective.

# 3.K- Nearest neighbors

>K- nearest neighbour is the simplest of all machine learning classifiers. It differs from other machine learning techniques, in that it doesn’t produce a model. It is a simple algorithm which stores all available cases and classifies new instances based on a similarity measure.

It works very well when there is a distance between examples. The learning speed is slow when the training set is large, and the distance calculation is nontrivial.

# 4.Principal Components Analysis
>In case you want a higher-dimensional space. You need to select a basis for that space and only the 200 most important scores of that basis. This base is known as a principal component. The subset you select constitute is a new space which is small in size compared to original space. It maintains as much of the complexity of data as possible.

# 5.Singular value decomposition
>The singular value decomposition of a matrix is usually referred to as the SVD.
This is the final and best factorization of a matrix:
A = UΣV^T
where U is orthogonal, Σ is diagonal, and V is orthogonal.
In the decomoposition A = UΣV^T, A can be any matrix. We know that if A
is symmetric positive definite its eigenvectors are orthogonal and we can write
A = QΛQ^T. This is a special case of a SVD, with U = V = Q. For more general
A, the SVD requires two different matrices U and V.
We’ve also learned how to write A = SΛS^−1, where S is the matrix of n
distinct eigenvectors of A. However, S may not be orthogonal; the matrices U
and V in the SVD will be. 


# 6.Independent Component Analysis
>Independent Component Analysis (ICA) is a machine learning technique to separate independent sources from a mixed signal. Unlike principal component analysis which focuses on maximizing the variance of the data points, the independent component analysis focuses on independence, i.e. independent components.

# b)Association
>Association rules allow you to establish associations amongst data objects inside large databases. This unsupervised technique is about discovering interesting relationships between variables in large databases. For example, people that buy a new home most likely to buy new furniture.

>Other Examples:

>A subgroup of cancer patients grouped by their gene expression measurements

>Groups of shopper based on their browsing and purchasing histories

>Movie group by the rating given by movies viewers



 
# Applications of Unsupervised Machine Learning
Some application of Unsupervised Learning Techniques are:

1.Clustering automatically split the dataset into groups base on their similarities


2.Anomaly detection can discover unusual data points in your dataset. It is useful for finding fraudulent transactions


3.Association mining identifies sets of items which often occur together in your dataset


4.Latent variable models are widely used for data preprocessing. Like reducing the number of features in a dataset or decomposing the dataset into multiple components.

# Real-life Applications Of Unsupervised Learning

Machines are not that quick, unlike humans. It takes a lot of resources to train a model based on patterns in data. Below are a few of the wonderful real-life simulations of unsupervised learning.


1.Anomaly detection –The advent of technology and the internet has given birth to enormous anomalies in the past and is still growing. Unsupervised learning has huge scope when it comes to anomaly detection.


2.Segmentation – Unsupervised learning can be used to segment the customers based on certain patterns. Each cluster of customers is different whereas customers within a cluster share common properties. Customer segmentation is a widely opted approach used in devising marketing plans.

# Advantages of unsupervised learning

1.It can see what human minds cannot visualize.

2.It is used to dig hidden patterns which hold utmost importance in the industry and has widespread applications in real-time.

3.The outcome of an unsupervised task can yield an entirely new business vertical or venture.

4.There is lesser complexity compared to the supervised learning task. Here, no one is required to interpret the associated labels and hence it holds lesser complexities.

5.It is reasonably easier to obtain unlabeled data.


# Disadvantages of Unsupervised Learning

1.You cannot get precise information regarding data sorting, and the output as data used in unsupervised learning is labeled and not known.

2.Less accuracy of the results is because the input data is not known and not labeled by people in advance. This means that the machine requires to do this itself.

3.The spectral classes do not always correspond to informational classes.
The user needs to spend time interpreting and label the classes which follow that classification.

4.Spectral properties of classes can also change over time so you can’t have the same class information while moving from one image to another.


# How to use Unsupervised learning to find patterns in data

# CODE:


from sklearn import datasets


import matplotlib.pyplot as plt


 

iris_df = datasets.load_iris()



print(dir(iris_df)

print(iris_df.feature_names)


print(iris_df.target)


print(iris_df.target_names)

label = {0: 'red', 1: 'blue', 2: 'green'}

x_axis = iris_df.data[:, 0]  

y_axis = iris_df.data[:, 2]  

plt.scatter(x_axis, y_axis, c=iris_df.target)

plt.show()

# Explanation:

As the above code shows, we have used the Iris dataset to make predictions.The dataset contains a records under four attributes-petal length, petal width, sepal length, sepal width.And also it contains three iris classes:setosa, virginica and versicolor .We'll feed the four features of our flowers to the unsupervised algorithm and it will predict which class the iris belongs.For that we have used scikit-learn library in python to load the Iris dataset and matplotlib for data visualisation.  


# OUTPUT:

As we can see here the violet colour represents setosa,green colour represents versicolor and yellow
 colour represents virginica.
 
 ![picture](https://github.com/Robinrai2612/winter-of-contributing/blob/Data-Science-With-Python-Introduction-to-Unsupervised-Learning/Datascience_With_Python/Machine%20Learning/Tutorials/Introduction%20to%20Unsupervised%20Learning/Images/download.png)
 
# Conclusion:
In conclusion,the unsupervised learning algorithms allow you to do more commplex processing tasks.Various types of unsupervised learning help in deploying new ideas and innovation in action and create an out of box experience.


 
# Summary
- Unsupervised learning is a machine learning technique, where you do not need to supervise the model.
- Unsupervised machine learning helps you to finds all kind of unknown patterns in data.
- Clustering and Association are two types of Unsupervised learning.
- Four types of clustering methods are 1) Exclusive 2) Agglomerative 3) Overlapping 4) Probabilistic.
- Important clustering types are: 1)Hierarchical clustering 2) K-means clustering 3) K-NN 4) Principal Component Analysis 5) Singular Value Decomposition 6) Independent Component  Analysis.
- Association rules allow you to establish associations amongst data objects inside large databases.
- In Unsupervised learning Algorithms are used against data which is not labelled.
- Anomaly detection can discover important data points in your dataset which is useful for finding fraudulent transactions.
- The biggest drawback of Unsupervised learning is that you cannot get precise information regarding data sorting.

