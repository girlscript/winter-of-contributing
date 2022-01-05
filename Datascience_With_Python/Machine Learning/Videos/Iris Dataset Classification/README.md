# Iris Dataset Classification using Different Approaches   


##### Format : Video



  
### 🔗 IMPORTANT LINKS 
#### Video link: [Click Me](https://drive.google.com/file/d/1y8YvLWDrLyDir1w9Gmue760Q_4imIB3R/view?usp=sharing)



  
## INFORMATION ABOUT DATASET

* To share my understanding of the concept and techniques I know, I have used Iris dataset which will help to make you understand the concept of different Machine Learning algorithm using different approaches.

* The dataset consist four independent variables and one dependent variable:

   * Features: sepal_length, sepal_width, petal_length, petal_width

   * Labels: Species

## DESCRIPTION
The dataset consist of labeled data to develop a model we need to used supervised and unsupervised Machine Learning Algorithm technique.

## AIM
In this documentation, we understand the concept of machine learning algorithm with the help of an example of iris dataset. 

#### Platform used for dataset: Google Colab
#### Imported Libraries: 
- Matplotlib
- Numpy
- Pandas
- Sklearn



##  DATA EXPLORATION
Before applying ,the first step is data exploration which helps in data analysis. We visualize the data and try to understand it.

### Printing the first five rows of dataset

head() method is used to display first five rows


```
# To display first five rows of the dataset
df.head()

```



<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Videos/Iris%20Dataset%20Classification/Images/head.PNG'>


### Printing the last five rows of dataset

tail() method is used to display last five rows 
```
# To display last five rows of the dataset
df.tail()
```

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Videos/Iris%20Dataset%20Classification/Images/tail.PNG'>


### info()

info() display concise summary of the dataset

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Videos/Iris%20Dataset%20Classification/Images/info.PNG'>

---



### describe()
describe() is used to view some basic statistical details like percentile, mean, std etc. of a data frame or a series of numeric values
<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Videos/Iris%20Dataset%20Classification/Images/describe.PNG'>

---


# Data Visualization
### Scatterplot

A scatter plot (aka scatter chart, scatter graph) uses dots to represent values for two different numeric variables. The position of each dot on the horizontal and vertical axis indicates values for an individual data point. Scatter plots are used to observe relationships between variables.

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Videos/Iris%20Dataset%20Classification/Images/scatter_plot.PNG'>



### Pairplot

Plot pairwise relationships in a dataset. It is also possible to show a subset of variables or plot different variables on the rows and columns.

The pairplot plot is shown in the image below. Its using the (famous) iris flower data set. The data set has 4 measurements: sepal width, sepal length, petal_length and petal_width. The data contains measurements of different flowers.

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Videos/Iris%20Dataset%20Classification/Images/pair_plot.PNG'>



### Heatmap
A heat map (or heatmap) is a data visualization technique that shows magnitude of a phenomenon as color in two dimensions. It defines relationship of dependency between different features present in the dataset.

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Videos/Iris%20Dataset%20Classification/Images/heatmap.PNG'>


---



# Name of different approaches used to classify Iris dataset:
Fixing independent and dependent variables, splitting training and testing dataset


### Logistic Regression
Logistic regression is one of the most commonly used machine learning algorithms. A logistic regression model predicts a dependent data variable by analyzing the relationship between one or more existing independent variables. The purpose of logistic regression is to estimate the probabilities of events, including determining a relationship between features and the probabilities of particular outcomes.


### Kmeans Clustering
K-means clustering is one of the simplest and popular unsupervised machine learning algorithms. A cluster refers to a collection of data points aggregated together because of certain similarities. The K-means algorithm identifies k number of centroids, and then allocates every data point to the nearest cluster, while keeping the centroids as small as possible.


<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Videos/Iris%20Dataset%20Classification/Images/clusters.png'>






### Decision Tree
Decision Tree is a Supervised learning technique that can be used for both classification and Regression problems, but mostly it is preferred for solving Classification problems. A decision tree is a specific type of flow chart used to visualize the decision-making process by mapping out different courses of action, as well as their potential outcomes.

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Videos/Iris%20Dataset%20Classification/Images/decision_tree.PNG'>

---


## Contributed By: 
Ayushi Jindal

