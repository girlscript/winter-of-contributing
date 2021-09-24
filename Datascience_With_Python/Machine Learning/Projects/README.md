<h1>IRIS Dataset Classification using Different Approaches</h1>
<h2>Importing Libraries</h2>
    <ul>
        <li>NumPy</li>
        <li>Pandas</li>
        <li>Matplotlib</li>
        <li>Seaborn</li>
        <li>ScikitLearn</li>
    </ul>
<h2>Import Dataset</h2>
    <ul>
        <li><a href="http://archive.ics.uci.edu/ml/datasets/Iris" target="_blank">Link</a></li>
        <li>sklearn.datasets import load_iris()</li>
    </ul>
<h2>Data Preprocessing</h2>
    <ul>
        <li>Checking Null Values (is not present in IRIS Dataset)</li>
        <li>Dropping **Unnamed: 0** (present in this datasets)</li>
        <li>About Data</li>
        <li>Encoding</li>

> Setosa : 1

> Versicolor : 2

> Virginica : 3
    </ul>
<h2>Data Visualisation</h2>
    <ul>
        <li>Count Plot</li>
        <li>Scatter Plot (Face Grid)</li>
        <li>Pair Plot (similar to subplots)</li>
    </ul>
<h2>Model Building</h2>
    <ul>
        <li>Fixing Independent and Dependent Variables</li>
        <li>Splitting Training and Testing Dataset</li>
        <li>Using Different Approaches</li>

> Logistic Regression
            
> K-Nearest Neighbours
<ol>
    <li>Classification Report</li>
    <li>Confusion Matrix</li>
</ol>

> Decision Tree
<ol>
    <li>Tree Features</li>
    <li>Tree Visualisation</li>
</ol>
    </ul>
<h2>Conclusion</h2>
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
<br>
> **Note  - 2:** *Logistic Regreesion and KNN Model Perform with the same Accuracy.*

```Preffered: Decision Tree Classifier (Accuracy: 98.18%)```