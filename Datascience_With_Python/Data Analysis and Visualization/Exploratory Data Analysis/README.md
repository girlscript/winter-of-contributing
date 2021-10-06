# Exploratory Data Analysis using Python #348


##### Format : Documentation



  
### 🔗 IMPORTANT LINKS 
#### Documentation: [![Documentation](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Data%20Analysis%20and%20Visualization/Exploratory%20Data%20Analysis%20using%20Python%20%23348/Exploratory_Data_Analysis_using_Python_348_.ipynb)
#### Dataset: [![Dataset](https://img.shields.io/badge/Kaggle-20BEFF?style=for-the-badge&logo=Kaggle&logoColor=white)](https://github.com/ayushijindal/winter-of-contributing/tree/Datascience_With_Python/Datascience_With_Python/DS%20Datasets/Exploratory%20Data%20Analysis%20using%20Python)



  
## INFORMATION ABOUT DATASET

To share my understanding of the concept and techniques I know,I’ll take an example of Haberman Cancer Survival  dataset which is available on kaggle(link provided in important link section) and try to catch hold of as many insights from the dataset using EDA.

## DESCRIPTION

The data set contains cases from a study that was conducted between 1958 and 1970 at the University of Chicago's Billings Hospital on the survival of patients who had undergone surgery for breast cancer.

## AIM
In this documentation, we understood the meaning of Exploratory Data Analysis (EDA) with the help of an example dataset. We looked at how we can analyze the dataset, draw conclusions from the same, and form a hypothesis based on that.

#### Platform used for dataset: Google Colab
#### Imported Libraries: 
- Matplotlib
- Seaborn
- Numpy
- Pandas

## Exploratory Data Analysis(EDA)

* Exploratory Data Analysis(EDA) is the method to get overview of dataset. It is the method of exploring the data and summarizing their main characterstic.

* This step is very important especially when we arrive at modeling the data in order to apply Machine learning.

* EDA helps determine how best to manipulate data sources to get the answers you need, making it easier for data scientists to discover patterns, spot anomalies, test a hypothesis, or check assumptions.

* There is no one method or common methods in order to perform EDA, whereas in this documentation you can understand some common methods and plots that would be used in the EDA process.





##  DATA EXPLORATION
Data exploration is the first step towards data analysis. We visualize the data and try to understand it.

### Printing the first five rows of dataset
head() method is used to display first five rows

```
# To display first five rows of the dataset
df.head()

```



<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Data%20Analysis%20and%20Visualization/Exploratory%20Data%20Analysis/Images/head.PNG'>


### Printing the last five rows of dataset

tail() method is used to display last five rows 
```
# To display last five rows of the dataset
df.tail()
```

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Data%20Analysis%20and%20Visualization/Exploratory%20Data%20Analysis/Images/tail.PNG'>

### info()

info() display concise summary of the dataset

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Data%20Analysis%20and%20Visualization/Exploratory%20Data%20Analysis/Images/info.PNG'>
---

#### Observation:
Rows: 288
Columns: 4

Column Name: AGE, YEAR, NODES, STATUS

The dataset is imabalanced

STATUS 1 has 225(LIVED MORE THAN 5 YEARS)

STATUS 2 has 81(LIVED LESS THAN 5 YEARS)

---

### heatmap()

 Display the relation between the data means how much one variable (column) is influencing the other variable in the data.

```
features=df.drop('status', axis=1)
sns.heatmap(features.corr(),annot=True)
```

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Data%20Analysis%20and%20Visualization/Exploratory%20Data%20Analysis/Images/heatmap.PNG'>


### describe()
describe() is used to view some basic statistical details like percentile, mean, std etc. of a data frame or a series of numeric values
<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Data%20Analysis%20and%20Visualization/Exploratory%20Data%20Analysis/Images/describe.PNG'>

---

#### Observation:

Average age of patients : 52 years

Average year of operation : 1962

Average no. of nodes found in patient:4

RANGE OF COLUMNS :

AGE(MIN:30, MAX:78)

YEAR(MIN:1958, MAX:1969)

NODES(MIN:0, MAX:52)


---

##  DATA VISUALIZATION

### BIVARIATE ANALYSIS

Analysis of two variable is known as bivariate analysis. We can plot 2D scatter plots for plotting graph between two variables.

2-D Scatter Plot - provides visual image of the relationship between two variables.


```

 # Using Seaborn

 # Between AGE and year 

 # hue on status (for different colors)


sns.scatterplot(data=df, x="age", y="year",hue='status',palette='muted')
plt.show()

```

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Data%20Analysis%20and%20Visualization/Exploratory%20Data%20Analysis/Images/plot1.PNG'>

```

#Between Age and Nodes

sns.set_style("whitegrid");

#scatterplot between age and nodes
sns.scatterplot(data=df, x="age", y="nodes",hue='status',palette='muted')
plt.show()

```

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Data%20Analysis%20and%20Visualization/Exploratory%20Data%20Analysis/Images/plot2.PNG'>


```

#Between Year and Nodes

sns.set_style("whitegrid");

#scatterplot between year and nodes
sns.scatterplot(data=df, x="year", y="nodes",hue='status',palette='muted')
plt.show()

```



<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Data%20Analysis%20and%20Visualization/Exploratory%20Data%20Analysis/Images/plot3.PNG'>

---

#### Observation:

1. Most of the patients have nodes number less than 5.

2. Patients with age less than 40 have higher chances of survival and comparatively have less number of nodes.

3. People with nodes more than 10 and above age 50 have less chances of survival.

4. There are more no. of patients between age 40-65.


---


### PAIRPLOT ANALYSIS

Plot pairwise relationship in a dataset. It is also possible to show a subset of variables or plot different variables on the rows and columns. Instead of plotting each and every pair seperately, we can use pair plots.

```
sns.set_style("whitegrid");
sns.pairplot(df, hue="status", palette="muted");
plt.show()

```

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Data%20Analysis%20and%20Visualization/Exploratory%20Data%20Analysis/Images/pairplot.PNG'>


---

#### Observation:

1. There is sharp decrease in people between number of nodes from 0-4. Most people have nodes near to zero.

2. People with less number of nodes have more chance of survival and vice-versa.

3. People above 5 nodes have survived almost half as compared to deaths.

---


### BOXPLOT ANALYSIS

A Box Plot is a convenient way of visually displaying the data distribution through their quartiles.


```
sns.boxplot(x='status',y='year', data=df)
plt.show()

```

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Data%20Analysis%20and%20Visualization/Exploratory%20Data%20Analysis/Images/boxplot1.PNG'>

```
sns.boxplot(x='status',y='nodes', data=df)
plt.show()

```


<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Data%20Analysis%20and%20Visualization/Exploratory%20Data%20Analysis/Images/boxplot2.PNG'>



---

#### Observation:

1. Lower age slighltly indicates high rate of survival.
2. As year of operation is increasing, there are comparatively little high rate of success.
3. There are few patients with number of nodes more than 10.
4. Less the no. of nodes, higher the survival chance.

---


### VIOLIN PLOT


```
# Between  status and age
sns.violinplot(x="status", y="age", data=df, size=8)

plt.show()

```

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Data%20Analysis%20and%20Visualization/Exploratory%20Data%20Analysis/Images/voilinplot1.PNG'>



```
# Between status and year
sns.violinplot(x="status", y="year", data=df, size=8)

plt.show()

```

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Data%20Analysis%20and%20Visualization/Exploratory%20Data%20Analysis/Images/voilinplot2.PNG'>



---
### Observation
1. There are maximum number of people in the age group of 40-60
2.  Less the no. of nodes, higher the survival chance.
3. More deaths is seen in age group 40-50 as compared to survival rate.
4.  No. of operations were more unsucessful in the year 1965.
---


---
## FINAL CONCLUSION

* Higher number of nodes indiactes less chances of survival. But there are few people who survied with higher number of nodes and also there are people who died with almost no nodes. Hence, number of nodes alone cannot be strictly deciding factor.

* If you discover the nodes at early age and get operated on, more is the chances of survival.


---

## Contributor
- ID : 253
- DSWP BATCH : 8
- [@Ayushi Jindal](https://github.com/ayushijindal)
