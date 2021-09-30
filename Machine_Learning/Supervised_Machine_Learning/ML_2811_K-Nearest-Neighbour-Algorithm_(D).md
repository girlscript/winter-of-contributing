# <div align="center">K-Nearest Neighbour Algorithm</div>

K Nearest Neighbour (KNN) is a very simple, easy to understand, versatile and one of the topmost machine learning algorithms. KNN used in the variety of applications such as finance, healthcare, political science, handwriting detection, image recognition and video recognition. In Credit ratings, financial institutes will predict the credit rating of customers. In loan disbursement, banking institutes will predict whether the loan is safe or risky. In political science, classifying potential voters in two classes will vote or won’t vote. KNN algorithm used for both classification and regression problems. KNN algorithm based on feature similarity approach.
KNN is a non-parametric and lazy learning algorithm. Non-parametric means there is no assumption for underlying data distribution. In other words, the model structure determined from the dataset. This will be very helpful in practice where most of the real world datasets do not follow mathematical theoretical assumptions. Lazy algorithm means it does not need any training data points for model generation. All training data used in the testing phase. This makes training faster and testing phase slower and costlier. Costly testing phase means time and memory. In the worst case, KNN needs more time to scan all data points and scanning all data points will require more memory for storing training data.

**How does the KNN algorithm work?**

In KNN, K is the number of nearest neighbours. The number of neighbours is the core deciding factor. K is generally an odd number if the number of classes is 2. When K=1, then the algorithm is known as the nearest neighbour algorithm. This is the simplest case. Suppose P1 is the point, for which label needs to predict. First, you find the one closest point to P1 and then the label of the nearest point assigned to P1.
![image](https://user-images.githubusercontent.com/71644914/135436797-bc04081b-d845-44ab-8728-639aab394187.png)



Suppose P1 is the point, for which label needs to predict. First, you find the k closest point to P1 and then classify points by majority vote of its k neighbours. Each object votes for their class and the class with the most votes is taken as the prediction. For finding closest similar points, you find the distance between points using distance measures such as Euclidean distance, Hamming distance, Manhattan distance and Minkowski distance. KNN has the following basic steps:
1.	Calculate distance
2.	Find closest neighbours
3.	Vote for labels

![image](https://user-images.githubusercontent.com/71644914/135437123-19be0137-528c-4bda-95ba-247ea9bf6b12.png)


**How do you decide the number of neighbours in KNN?**

Now, you understand the KNN algorithm working mechanism. At this point, the question arises that How to choose the optimal number of neighbours? And what are its effects on the classifier? The number of neighbours(K) in KNN is a hyperparameter that you need choose at the time of model building. You can think of K as a controlling variable for the prediction model.
Research has shown that no optimal number of neighbours suits all kind of data sets. Each dataset has it's own requirements. In the case of a small number of neighbours, the noise will have a higher influence on the result, and a large number of neighbours make it computationally expensive. Research has also shown that a small amount of neighbours are most flexible fit which will have low bias but high variance and a large number of neighbours will have a smoother decision boundary which means lower variance but higher bias.
Generally, Data scientists choose as an odd number if the number of classes is even. You can also check by generating the model on different values of k and check their performance. You can also try Elbow method here.

![image](https://user-images.githubusercontent.com/71644914/135437232-db74a35a-7103-43d0-9df8-9e5a44ba688b.png)


# Implementing KNN Algorithm with Scikit-Learn

**The Dataset:-**
We are going to use the famous iris data set for our KNN example. The dataset consists of four attributes: sepal-width, sepal-length, petal-width and petal-length. These are the attributes of specific types of iris plant. The task is to predict the class to which these plants belong. There are three classes in the dataset: Iris-setosa, Iris-versicolor and Iris-virginica.

**Importing Libraries:-**

import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

**Importing the Dataset:-**

To import the dataset and load it into our pandas dataframe , execute the following code:

url = "https://archive.ics.uci.edu/ml/machine-learning-databases/iris/iris.data"

#Assign colum names to the dataset
names = ['sepal-length', 'sepal-width', 'petal-length', 'petal-width', 'Class']

#Read dataset to pandas dataframe
dataset = pd.read_csv(url, names=names)

To see what the dataset actually looks like, execute the following command:

Executing the above script will display the first five rows of our dataset as shown below:
![image](https://user-images.githubusercontent.com/71644914/135440102-1511d573-cd69-4e05-ab8d-fec0d553f4db.png)

**Preprocessing:-**

The next step is to split our dataset into its attributes and labels. To do so, use the following code:

X = dataset.iloc[:, :-1].values
y = dataset.iloc[:, 4].values

The X variable contains the first four columns of the dataset (i.e. attributes) while y contains the labels.

**Train Test Split:-**

To avoid over-fitting, we will divide our dataset into training and test splits, which gives us a better idea as to how our algorithm performed during the testing phase. This way our algorithm is tested on un-seen data, as it would be in a production application.

To create training and test splits, execute the following script:

from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.20)

The above script splits the dataset into 80% train data and 20% test data. This means that out of total 150 records, the training set will contain 120 records and the test set contains 30 of those records.

**Feature Scaling:-**

The gradient descent algorithm (which is used in neural network training and other machine learning algorithms) also converges faster with normalized features.

The following script performs feature scaling:

from sklearn.preprocessing import StandardScaler
scaler = StandardScaler()
scaler.fit(X_train)

X_train = scaler.transform(X_train)
X_test = scaler.transform(X_test)

**Training and Predictions:-**

It is extremely straight forward to train the KNN algorithm and make predictions with it, especially when using Scikit-Learn.

from sklearn.neighbors import KNeighborsClassifier
classifier = KNeighborsClassifier(n_neighbors=5)
classifier.fit(X_train, y_train)
The first step is to import the KNeighborsClassifier class from the sklearn.neighbors library. In the second line, this class is initialized with one parameter, i.e. n_neigbours. This is basically the value for the K. There is no ideal value for K and it is selected after testing and evaluation, however to start out, 5 seems to be the most commonly used value for KNN algorithm.

The final step is to make predictions on our test data. To do so, execute the following script:

y_pred = classifier.predict(X_test)

**Evaluating the Algorithm:-**

For evaluating an algorithm, confusion matrix, precision, recall and f1 score are the most commonly used metrics. The confusion_matrix and classification_report methods of the sklearn.metrics can be used to calculate these metrics. Take a look at the following script:

from sklearn.metrics import classification_report, confusion_matrix
print(confusion_matrix(y_test, y_pred))
print(classification_report(y_test, y_pred))

**The output of the above script looks like this:**

[[11  0  0]
   0 13  0]
   0  1  6]]
                 precision   recall   f1-score   support

    Iris-setosa       1.00     1.00       1.00        11
Iris-versicolor       1.00     1.00       1.00        13
 Iris-virginica       1.00     1.00       1.00         6

    avg / total       1.00     1.00       1.00        30

The results show that our KNN algorithm was able to classify all the 30 records in the test set with 100% accuracy, which is excellent. Although the algorithm performed very well with this dataset, don't expect the same results with all applications. As noted earlier, KNN doesn't always perform as well with high-dimensionality or categorical features.

**Comparing Error Rate with the K Value:-**

In the training and prediction section we said that there is no way to know beforehand which value of K that yields the best results in the first go. We randomly chose 5 as the K value and it just happen to result in 100% accuracy.

One way to help you find the best value of K is to plot the graph of K value and the corresponding error rate for the dataset.

In this section, we will plot the mean error for the predicted values of test set for all the K values between 1 and 40.

To do so, let's first calculate the mean of error for all the predicted values where K ranges from 1 and 40. Execute the following script:

error = []

#Calculating error for K values between 1 and 40
for i in range(1, 40):
    knn = KNeighborsClassifier(n_neighbors=i)
    knn.fit(X_train, y_train)
    pred_i = knn.predict(X_test)
    error.append(np.mean(pred_i != y_test))

The above script executes a loop from 1 to 40. In each iteration the mean error for predicted values of test set is calculated and the result is appended to the error list.

The next step is to plot the error values against K values. Execute the following script to create the plot:


plt.figure(figsize=(12, 6))
plt.plot(range(1, 40), error, color='red', linestyle='dashed', marker='o',
         markerfacecolor='blue', markersize=10)
plt.title('Error Rate K Value')
plt.xlabel('K Value')
plt.ylabel('Mean Error')

**The output graph looks like this:**

![image](https://user-images.githubusercontent.com/71644914/135439614-56eb0941-51b7-486a-a29c-4cc7e4515af6.png)


From the output we can see that the mean error is zero when the value of the K is between 5 and 18. I would advise you to play around with the value of K to see how it impacts the accuracy of the predictions.

**Conclusion:-**
KNN is a simple yet powerful classification algorithm. It requires no training for making predictions, which is typically one of the most difficult parts of a machine learning algorithm. The KNN algorithm have been widely used to find document similarity and pattern recognition. It has also been employed for developing recommender systems and for dimensionality reduction and pre-processing steps for computer vision, particularly face recognition tasks.

