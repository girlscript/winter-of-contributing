# **<ins>Data Normalization</ins>**

## **<ins>What is meant by Normalization ?</ins>**
Normalization refers to rescaling real-valued numeric attributes into a 00 to 11 range.

It's a technique often applied as part of data preparation for machine learning. The goal of normalization is to change the values of numeric columns in the dataset to a common scale, without distorting differences in the ranges of values. For machine learning, every dataset does not require normalization. It is required only when features have different ranges.
<br><br>

## **<ins>Is normalization helpful ?</ins>**
Normalization gives equal weights/importance to each variable so that no single variable steers model performance in one direction just because they are bigger numbers.
For example, clustering algorithms use distance measures to determine if an observation should belong to a certain cluster. “Euclidean distance” is often used to measure those distances. If a variable has significantly higher values, it can dominate distance measures, suppressing other variables with small values.
Hence it dramatically improves model accuracy
<br><br>

## **<ins>Importance of Data Normalization</ins>**
A properly designed and well-functioning database should undergo data normalization in order to be used successfully. Data normalization gets rid of a number of anomalies that can make analysis of the data more complicated. Some of those anomalies can crop up from deleting data, inserting more information, or updating existing information. Once those errors are worked out and removed from the system, further benefits can be gained through other uses of the data and data analytics.
<br><br>

## **<ins>Data Normalization in Machine Learning</ins>**
Data normalization is used in machine learning to make model training less sensitive to the scale of features. This allows our model to converge to better weights and, in turn, leads to a more accurate model.

Normalization makes the features more consistent with each other, which allows the model to predict outputs more accurately.

Several methods are applied for normalization, like:

- **Rescaling:** It's also known as “min-max normalization”, it is the simplest of all methods and calculated as:
<br><img src='https://miro.medium.com/max/341/1*HFpeFyqGUwYW8sKIF0Ckpg.png' style='width:15%'><br>

- **Mean normalization:** This method uses the mean of the observations in the transformation process:
<br><img src='https://miro.medium.com/max/369/1*YowZdhWKSYsjGr81zkz_Kw.png' style='width:15%'><br>

- **Z-score normalization:** It's also known as standardization, this technic uses Z-score or “standard score”. It is widely used in machine learning algorithms such as SVM and logistic regression:
<br><img src='https://miro.medium.com/max/170/1*uANJsFWEqyQ0Gh8_Rs1-KA.png' style='width:15%'><br><br>

### **<ins>Example :</ins>**
We are imporing [Iris dataset]() and we are going to use 2 features "petal_length" and "sepal_length" for clustering of datapoints.<br>
We are going to implement KMeans Clustering algorithm :<br><br>

1. **Without Normalization**
```python
# inputs (NOT normalized)
X_not_norm = df.values
# instantiate model
model = KMeans(n_clusters = 3)
# fit predict
y_model = model.fit_predict(X_not_norm)
# counts per cluster
print("Value Counts")
print(pd.value_counts(y_model))
# visualizing clusters
plt.scatter(X_not_norm[:,0], X_not_norm[:,1], c=model.labels_, cmap='viridis')
```
<img src='https://i.ibb.co/w7vhYtn/image.png' style='width:25%'><br><br>

2. **With Normalization**
```python
# normalizing inputs
X_norm = preprocessing.scale(df)
# instantiate model
model = KMeans(n_clusters = 3)
# fit predict
y_model = model.fit_predict(X_norm)
# counts per cluster
print("Value Counts")
print(pd.value_counts(y_model))
# visualize clusters
plt.scatter(X_norm[:,0], X_norm[:,1], c=model.labels_, cmap='viridis')
```
<img src='https://i.ibb.co/Vwd38cT/image.png' style='width:25%'><br><br>

### **<ins>Conclusion :</ins>**
In the following are the outputs before and after the normalization of data. First, if you compare the value counts there are some changes.<br>
If you closely examine the data points in the left and the right figures you might be able to see which data points shifted from pre-normalized to post-normalized model. These changes are often at the boundaries rather than at either end of the spectrum in the distribution
<br><br>

### **<ins>Usage/Purpose od Data Normalization</ins>**
Normalization helps to reduce redundancy and complexity by examining new data types used in the table. It is helpful to divide the large database table into smaller tables and link them using relationship. It avoids duplicate data or no repeating groups into a table.

**Goals of Normalization**
- Eliminating insertion, update and delete anomalies.
- Establishing functional dependencies.
- Removing transitive dependencies.
- Reducing non-key data redundancy.
<br><br>

### **<ins>Benefits of Data Normalization</ins>**
- Greater overall database organization
- Reduction of redundant data
- Data consistency within the database
- A much more flexible database design
- A better handle on database security
- It improves the numerical stability of our model
- It may speed up the training process
<br><br>

### **<ins>Disadvantages of Normalization</ins>**
Normalization compresses data within a certain range, reduces the variance and applies equal weights to all features. We lose a lot of important information in the process.<br>
One example is what happens to outliers — normalization lease absolutely no traces of outliers. We perceive outliers as bad guys and we need to get rid of them ASAP. But remember, outliers are real data points, once we lose that just to get a better model, we lose information.<br>
In the process of normalization, the variables lose their units of measurements too. So at the end of modeling, we can’t really tell what are the key differences between the variables.
<br><br>

## ***View the complete [ipynb](Data_Normalization.ipynb) file***

### ***Contribution by : Abhinav Mathur***