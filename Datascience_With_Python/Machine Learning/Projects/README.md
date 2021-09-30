<h1>IRIS Dataset Classification using Different Approaches</h1>
<h2>Importing Libraries</h2>
    <ul>
        <li><a href="https://numpy.org/doc/" target="_blank">NumPy</a> - Used for performing complex Mathematical Calculations on Arrays.</li>
        <li><a href="https://pandas.pydata.org/docs/" target="_blank">Pandas</a> - One of the Most extensively used Library for EDA-Exploratory Data Analysis.</li>
        <li><a href="https://matplotlib.org/stable/contents.html" target="_blank">Matplotlib</a> - Data Visualization Library built on NumPy arrays and could be integrated with SciPy.</li>
        <li><a href="https://seaborn.pydata.org/" target="_blank">Seaborn</a> - Data Visualization Library built on top-of Matplotlib Library making it easier to work with Dataframes.</li>
        <li><a href="https://scikit-learn.org/stable/" target="_blank">Scikit-Learn</a> - Another Extensively used Library in Data Science and ML having robust functions.</li>
    </ul>
<h2>Import Dataset</h2>
    <ul>
        <li>From <a href="https://archive.ics.uci.edu/ml/index.php" target="_blank">UCI</a> Repository - <a href="http://archive.ics.uci.edu/ml/datasets/Iris" target="_blank">Link</a></li>
        <li>sklearn.datasets import load_iris()</li>
    </ul>
<h2>Data Preprocessing</h2>
    <ul>
        <li>Checking Null Values (0 Null Values in IRIS Dataset)</li>
        <li>Dropping the Column<b>Unnamed: 0</b> (present in this dataset)</li>
        <li>About Data</li>
        <li>Encoding</li>

> Setosa : 1

![iris_setosa](https://upload.wikimedia.org/wikipedia/commons/5/56/Kosaciec_szczecinkowaty_Iris_setosa.jpg)

> Versicolor : 2

![iris_versicolor](https://upload.wikimedia.org/wikipedia/commons/2/27/Blue_Flag%2C_Ottawa.jpg)

> Virginica : 3

![iris_virginica](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f8/Iris_virginica_2.jpg/1200px-Iris_virginica_2.jpg)
    </ul>

<ol>
    <li><a href="https://upload.wikimedia.org/wikipedia/commons/5/56/Kosaciec_szczecinkowaty_Iris_setosa.jpg">Iris Setosa Image Link</a></li>
    <li><a href="https://upload.wikimedia.org/wikipedia/commons/2/27/Blue_Flag%2C_Ottawa.jpg">Iris Versicolor Image Link</a></li>
    <li><a href="https://upload.wikimedia.org/wikipedia/commons/thumb/f/f8/Iris_virginica_2.jpg/1200px-Iris_virginica_2.jpg">Iris Virginica Image Link</a></li>
</ol>
<hr>
<h2>Data Visualisation - Helps to Understand the Data Pictorially</h2>
    <ul>
        <li>Count Plot - Counts the Number of Species in the Dataset i.e. 50 Species each.</li>
        <li>Scatter Plot (Facet Grid) - Plot between Sepal Length and Petal Length for different Species.</li>
        <li>Pair Plot (similar to Subplot) - Plots graph between various Numerical Attributes in the Dataset.</li>
    </ul>
<h2>Model Building - Important Step in entire Life Cycle.</h2>
    <ul>
        <li>Fixing Independent and Dependent Variables</li>
        <li>Splitting Training and Testing Dataset - Used a 75% [train - 112 rows] and 25% [test - 38 rows] Split.</li>
        <li>Using Different Approaches</li>

> Logistic Regression -  Predicts dependency by analyzing the relationship between one or more existing independent variables.

> K-Nearest Neighbours - A simple, supervised ML Algorithm that solves both Classification and Regression Problems
<ol>
    <li>Classification Report</li>
    <li>Confusion Matrix - Build a text report highlighting the main Classification Metrics</li>

**Displays: F1-Score, Recall, Precision, and Support as well as other Relevant Details.**
</ol>

> Decision Tree - Tree based Model based on Statistical and Probability Analysis.
<ol>
    <li>Tree Features - Details about the tree developed to produce the most optimal results.</li>
    <li>Tree Visualisation - Pictorial view of the developed Decision Tree Model.</li>
</ol>
    </ul>
<h2>Conclusion - Interpreting the derived Results.</h2>
<table>
    <tr>
        <th><u>Model Name</u></th>
        <th><u>Accuracy Score</u></th>
    </tr>
    <tr>
        <th>Logistic Regression</th>
        <th>97.36842105263158</th>
    </tr>
    <tr>
        <th>K-Nearest Neighbours</th>
        <th>97.36842105263158</th>
    </tr>
    <tr>
        <th>Decision Tree</th>
        <th>98. 18181818181819</th>
    </tr>
</table>

<br>
<hr>

> **Note - 1:** *Results may vary if random state or hyperparameter or some other changes occur.*

> **Note  - 2:** *Logistic Regreesion and KNN Model Perform with the same Accuracy.*

```Preffered: Decision Tree Classifier (Accuracy: 98.18%)```
