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
url = "https://archive.ics.uci.edu/ml/machine-learning-databases/iris/iris.data"

#Assign colum names to the dataset

names = ['sepal-length', 'sepal-width', 'petal-length', 'petal-width', 'Class']

#Read dataset to pandas dataframe

dataset = pd.read_csv(url, names=names)

![image](https://user-images.githubusercontent.com/71644914/135440102-1511d573-cd69-4e05-ab8d-fec0d553f4db.png)

**Preprocessing:-**
X = dataset.iloc[:, :-1].values

y = dataset.iloc[:, 4].values

**Train Test Split:-**

from sklearn.model_selection import train_test_split

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.20)

**Feature Scaling:-**

from sklearn.preprocessing import StandardScaler

scaler = StandardScaler()

scaler.fit(X_train)

X_train = scaler.transform(X_train)

X_test = scaler.transform(X_test)

**Training and Predictions:-**

from sklearn.neighbors import KNeighborsClassifier

classifier = KNeighborsClassifier(n_neighbors=5)

classifier.fit(X_train, y_train)

y_pred = classifier.predict(X_test)

**Evaluating the Algorithm:-**

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

**Comparing Error Rate with the K Value:-**
error = []

#Calculating error for K values between 1 and 40

for i in range(1, 40):
   
   knn = KNeighborsClassifier(n_neighbors=i)
    
    knn.fit(X_train, y_train)
    
    pred_i = knn.predict(X_test)
    
    error.append(np.mean(pred_i != y_test))

plt.figure(figsize=(12, 6))

plt.plot(range(1, 40), error, color='red', linestyle='dashed', marker='o',
         
         markerfacecolor='blue', markersize=10)

plt.title('Error Rate K Value')

plt.xlabel('K Value')

plt.ylabel('Mean Error')

**The output graph looks like this:**

![image](https://user-images.githubusercontent.com/71644914/135439614-56eb0941-51b7-486a-a29c-4cc7e4515af6.png)


From the output we can see that the mean error is zero when the value of the K is between 5 and 18. I would advise you to play around with the value of K to see how it impacts the accuracy of the predictions.

# Python implementation of the KNN algorithm

Problem for K-NN Algorithm: There is a Car manufacturer company that has manufactured a new SUV car. The company wants to give the ads to the users who are interested in buying that SUV. So for this problem, we have a dataset that contains multiple user's information through the social network. The dataset contains lots of information but the Estimated Salary and Age we will consider for the independent variable and the Purchased variable is for the dependent variable.

**Below is the dataset:**

![image](https://user-images.githubusercontent.com/71644914/135515029-28bf2043-d32d-4eeb-95cc-a2243eefc857.png)

#importing libraries  

import numpy as nm  

import matplotlib.pyplot as mtp  

import pandas as pd  
  
#importing datasets  

data_set= pd.read_csv('user_data.csv')  
  
#Extracting Independent and dependent Variable  

x= data_set.iloc[:, [2,3]].values  

y= data_set.iloc[:, 4].values  
  
#Splitting the dataset into training and test set.  

from sklearn.model_selection import train_test_split  

x_train, x_test, y_train, y_test= train_test_split(x, y, test_size= 0.25, random_state=0)  
  
#feature Scaling  

from sklearn.preprocessing import StandardScaler    

st_x= StandardScaler()    

x_train= st_x.fit_transform(x_train)    

x_test= st_x.transform(x_test)  

![image](https://user-images.githubusercontent.com/71644914/135515225-c2e97cc9-78cc-440d-930b-e9c3ebab684b.png)

#Fitting K-NN classifier to the training set  

from sklearn.neighbors import KNeighborsClassifier  

classifier= KNeighborsClassifier(n_neighbors=5, metric='minkowski', p=2 )  

classifier.fit(x_train, y_train)  

![image](https://user-images.githubusercontent.com/71644914/135515389-15d76f86-7415-4dc6-8655-44651af64bf3.png)

#Predicting the test set result  

y_pred= classifier.predict(x_test)

![image](https://user-images.githubusercontent.com/71644914/135517133-8c9ce452-064e-4e6f-b7c9-0251680800a1.png)

#Creating the Confusion matrix  
    
    from sklearn.metrics import confusion_matrix  
    
    cm= confusion_matrix(y_test, y_pred)
    
    ![image](https://user-images.githubusercontent.com/71644914/135517350-c23d1e45-a9a9-471d-be9f-09579abe19c7.png)
#Visulaizing the trianing set result  
from matplotlib.colors import ListedColormap  
x_set, y_set = x_train, y_train  
x1, x2 = nm.meshgrid(nm.arange(start = x_set[:, 0].min() - 1, stop = x_set[:, 0].max() + 1, step  =0.01),  
nm.arange(start = x_set[:, 1].min() - 1, stop = x_set[:, 1].max() + 1, step = 0.01))  
mtp.contourf(x1, x2, classifier.predict(nm.array([x1.ravel(), x2.ravel()]).T).reshape(x1.shape),  
alpha = 0.75, cmap = ListedColormap(('red','green' )))  
mtp.xlim(x1.min(), x1.max())  
mtp.ylim(x2.min(), x2.max())  
for i, j in enumerate(nm.unique(y_set)):  
    mtp.scatter(x_set[y_set == j, 0], x_set[y_set == j, 1],  
        c = ListedColormap(('red', 'green'))(i), label = j)  
mtp.title('K-NN Algorithm (Training set)')  
mtp.xlabel('Age')  
mtp.ylabel('Estimated Salary')  
mtp.legend()  
mtp.show()  

![image](https://user-images.githubusercontent.com/71644914/135517445-04806890-77d9-4715-875e-b8d1ebf76ee4.png)

#Visualizing the test set result  
from matplotlib.colors import ListedColormap  
x_set, y_set = x_test, y_test  
x1, x2 = nm.meshgrid(nm.arange(start = x_set[:, 0].min() - 1, stop = x_set[:, 0].max() + 1, step  =0.01),  
nm.arange(start = x_set[:, 1].min() - 1, stop = x_set[:, 1].max() + 1, step = 0.01))  
mtp.contourf(x1, x2, classifier.predict(nm.array([x1.ravel(), x2.ravel()]).T).reshape(x1.shape),  
alpha = 0.75, cmap = ListedColormap(('red','green' )))  
mtp.xlim(x1.min(), x1.max())  
mtp.ylim(x2.min(), x2.max())  
for i, j in enumerate(nm.unique(y_set)):  
    mtp.scatter(x_set[y_set == j, 0], x_set[y_set == j, 1],  
        c = ListedColormap(('red', 'green'))(i), label = j)  
mtp.title('K-NN algorithm(Test set)')  
mtp.xlabel('Age')  
mtp.ylabel('Estimated Salary')  
mtp.legend()  
mtp.show()  

![image](https://user-images.githubusercontent.com/71644914/135517546-7ab9344b-7c28-456b-9c64-0fc088a7b18b.png)




**Conclusion:-**
KNN is a simple yet powerful classification algorithm. It requires no training for making predictions, which is typically one of the most difficult parts of a machine learning algorithm. The KNN algorithm have been widely used to find document similarity and pattern recognition. It has also been employed for developing recommender systems and for dimensionality reduction and pre-processing steps for computer vision, particularly face recognition tasks.

