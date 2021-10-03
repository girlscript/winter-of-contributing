# **<ins>Support Vector Machines</ins>** 
Support vector machines (SVMs) are a set of supervised learning methods used for classification, regression and outliers detection.<br>
The support vector machines in scikit-learn support both dense (numpy.ndarray and convertible to that by numpy.asarray) and sparse (any scipy.sparse) sample vectors as input. However, to use an SVM to make predictions for sparse data, it must have been fit on such data. For optimal performance, use C-ordered numpy.ndarray (dense) or scipy.sparse.csr_matrix (sparse) with dtype=float64.<br>
They analyze the large amount of data to identify patterns from them.<br>
SVMs are based on the idea of finding a hyperplane that best divides a dataset into two classes.
<br><img src="https://miro.medium.com/max/600/0*0o8xIA4k3gXUDCFU.png" style="width:25%">
<br><br>

## **<ins>What are Hyperplanes and Support Vectors?</ins>**
<br>

### **Hyperplane**
- There can be multiple lines/decision boundaries to segregate the classes in n-dimensional space, but we need to find out the best decision boundary that helps to classify the data points. This best boundary is known as the hyperplane of SVM. 
- The dimensions of the hyperplane depend on the features present in the dataset. We always create a hyperplane that has a maximum margin, which means the maximum distance between the data points.<br>
<img src="https://miro.medium.com/max/1400/1*ZpkLQf2FNfzfH4HXeMw4MQ.png" style="width:50%">

### **Support Vectors**
- The data points or vectors that are the closest to the hyperplane and which affect the position of the hyperplane are termed as Support Vector. Since these vectors support the hyperplane, hence called a Support vector.Support vectors are the data points that lie closest to the decision surface
- Support vectors are the data points that lie closest to the decision surface, they are the data points most difficult to classify
- Support vectors are the data points nearest to the line, the points of a data set that, if removed, would alter the position of the dividing line. Because of this, they can be considered the critical elements of a data set.
<br><img src="https://miro.medium.com/max/875/0*ecA4Ls8kBYSM5nza.jpg" style="width:50%">
<br><br>

## **<ins>Types of SVM</ins>**
<br>

**SVM can be of two types:**<br>
- **Linear SVM:** Linear SVM is used for linearly separable data, which means if a dataset can be classified into two classes by using a single straight line, then such data is termed as linearly separable data, and classifier is used called as Linear SVM classifier.
- **Non-linear SVM:** Non-Linear SVM is used for non-linearly separated data, which means if a dataset cannot be classified by using a straight line, then such data is termed as non-linear data and classifier used is called as Non-linear SVM classifier.
<br><br>

## **<ins>Working of SVM</ins>**
<br>

### **Linear SVM**
The working of Linear Support Vector Machine can be easily understood by taking an example.<br>So, let us consider we have a dataset with 2 classes of output (green and red), the dataset has 2 features x1 and x2 (x and y axis of plot).<br>Now we want to classify a pair of coordinates or features (x1, x2) in either green or red class
<br><img src="https://i.ibb.co/b2kFKGf/Screenshot-2021-09-18-005018.png" style="width:25%"><br>
From the above image in 2-D space we can easily seprate those 2 classes via stright line, but there are multiple lines that can seperate these classes
<br><img src="https://i.ibb.co/YcRxNLW/Screenshot-2021-09-18-004522.png" style="width:25%"><br>
All lines in plot are parameterized by a slope b1 and a constant b0<br>
The equasion can be expressed as : **y = b1*x + b0**<br>
Our aim is to find such a line that correctly classify our data<br>
Hence, the SVM algorithm helps to find the best line or decision boundary; this best boundary or region is called as a hyperplane. SVM algorithm finds the closest point of the lines from both the classes. These points are called support vectors. The distance between the vectors and the hyperplane is called as margin. And the goal of SVM is to maximize this margin. The hyperplane with maximum margin is called the optimal hyperplane.
<br><img src="https://i.ibb.co/jRH5ggQ/imageedit-5-7685740827.png" style="width:25%"><br>
<br>

### **Non-Linear SVM**
If data is linearly arranged, then we can separate it by using a straight line, but for non-linear data, we cannot draw a single straight line. Consider the below image:
<br><img src="https://i.ibb.co/MsHLBgQ/image.png" style="width:25%"><br>
Linear SVM does not work if samples are difficult to separate mapping data to a higher-dimensional space is possible. Consider the below image:
<img src="https://i.ibb.co/fSYygQf/image.png" style="width:25%"><br>
So to separate these data points, we need to add one more dimension. For linear data, we have used two dimensions x and y, so for non-linear data, we will add a third dimension z. It can be calculated as:
```
z=x2 +y2
```
By adding the third dimension. So now, SVM will divide the datasets into classes in the following way. Consider the below image:
<br><img src="https://i.ibb.co/zZ4zGxG/image.png" style="width:25%"><br>
<br><br>

## **<ins>SVM Kernels</ins>**
The SVM algorithm is implemented in practice using a kernel. A kernel transforms an input data space into the required form. SVM uses a technique called the kernel trick. Here, the kernel takes a low-dimensional input space and transforms it into a higher dimensional space. In other words, you can say that it converts nonseparable problem to separable problems by adding more dimension to it. It is most useful in non-linear separation problem. Kernel trick helps you to build a more accurate classifier.
<br><br>

### **Linear Kernel**
A linear kernel can be used as normal dot product any two given observations. The product between two vectors is the sum of the multiplication of each pair of input values.
```
K(x, xi) = sum(x * xi)
```
<br>

### ***Polynomial Kernel***
A polynomial kernel is a more generalized form of the linear kernel. The polynomial kernel can distinguish curved or nonlinear input space.
```
K(x,xi) = 1 + sum(x * xi)^d
```
Where d is the degree of the polynomial. d=1 is similar to the linear transformation. The degree needs to be manually specified in the learning algorithm.
<br><br>

### **Radial Basis Function Kernel**
The Radial basis function kernel is a popular kernel function commonly used in support vector machine classification. RBF can map an input space in infinite dimensional space.
```
K(x,xi) = exp(-gamma * sum((x – xi^2))
```
Here gamma is a parameter, which ranges from 0 to 1. A higher value of gamma will perfectly fit the training dataset, which causes over-fitting. Gamma=0.1 is considered to be a good default value. The value of gamma needs to be manually specified in the learning algorithm.
<br><br>

## **<ins>Python Implementation</ins>**
<br>

```python
# loading brest cancer risk prediction dataset
data = pd.read_csv('/content/breast-cancer-risk-prediction-dataset.csv', index_col=False)
data.drop('Unnamed: 0',axis=1, inplace=True)
# viewing the dataset
# data.head()

# Assign predictors to a variable of ndarray (matrix) type
array = data.values
X = array[:,1:31] # features
y = array[:,0] # labels

# transform the class labels from their original string representation (M and B) into integers using encoder
le = LabelEncoder()
y = le.fit_transform(y)

# Normalize the  data (center around 0 and scale to remove the variance).
scaler =StandardScaler()
Xs = scaler.fit_transform(X)

# Divide records in training and testing sets.
X_train, X_test, y_train, y_test = train_test_split(Xs, y, test_size=0.3, random_state=2, stratify=y)
```

### **Important Parameters**
The important parameters in kernel SVMs are the
- Regularization parameter C,
- The choice of the kernel,(linear, radial basis function(RBF) or polynomial)
- Kernel-specific parameters.
- Gamma and C both control the complexity of the model, with large values in either resulting in a more complex model. Therefore, good settings for the two parameters are usually strongly correlated, and C and gamma should be adjusted together.
```python
# Create an SVM classifier and train it on 70% of the data set.
clf = SVC(probability=True)
clf.fit(X_train, y_train)

# Analyze accuracy of predictions on 30% of the holdout test sample.
classifier_score = clf.score(X_test, y_test)
print('\nThe classifier accuracy score is {:03.2f}\n'.format(classifier_score))
```
```
The classifier accuracy score is 0.95
```

## **<ins>Observation</ins>**

There are two possible predicted classes: "1" and "0". Malignant = 1 (indicates prescence of cancer cells) and Benign = 0 (indicates abscence).

- The classifier made a total of 174 predictions (i.e 174 patients were being tested for the presence breast cancer).
- Out of those 174 cases, the classifier predicted "yes" 58 times, and "no" 113 times.
- In reality, 64 patients in the sample have the disease, and 107 patients do not.

```python
# displaying confustion matrix with the classification report
y_pred = clf.fit(X_train, y_train).predict(X_test)
cm = metrics.confusion_matrix(y_test, y_pred)
fig, ax = plt.subplots(figsize=(5, 5))
ax.matshow(cm, cmap=plt.cm.Reds, alpha=0.3)
for i in range(cm.shape[0]):
     for j in range(cm.shape[1]):
         ax.text(x=j, y=i,
                s=cm[i, j], 
                va='center', ha='center')
plt.xlabel('Predicted Values', )
plt.ylabel('Actual Values')
plt.show()
print(classification_report(y_test, y_pred ))
```
<img src="https://i.ibb.co/HTX9RsJ/image.png" style="width:25%">
<br><br>

### **Rates as computed from the confusion matrix**
<br>

1. **Accuracy:** Overall, how often is the classifier correct?
    - (TP+TN)/total = (57+106)/171 = 0.95

2. **Misclassification Rate:** Overall, how often is it wrong?
    - (FP+FN)/total = (1+7)/171 = 0.05 equivalent to 1 minus Accuracy also known as "Error Rate"

3. **True Positive Rate:** When it's actually yes, how often does it predict 1?
    - TP/actual yes = 57/64 = 0.89 also known as "Sensitivity" or "Recall"

4. **False Positive Rate:** When it's actually 0, how often does it predict 1?
    - FP/actual no = 1/107 = 0.01

6. **Specificity:** When it's actually 0, how often does it predict 0? also know as true positive rate
    - TN/actual no = 106/107 = 0.99 equivalent to 1 minus False Positive Rate

7. **Precision:** When it predicts 1, how often is it correct?
    - TP/predicted yes = 57/58 = 0.98

8. **Prevalence:** How often does the yes condition actually occur in our sample?
    - actual yes/total = 64/171 = 0.34
<br><br>

## **<ins>Importance of optimizing a classifier</ins>**
We can tune two key parameters of the SVM algorithm:

- the value of C (how much to relax the margin)
- And the type of kernel.
<br>

The default for SVM (the SVC class) is to use the Radial Basis Function (RBF) kernel with a C value set to 1.0. Like with KNN, we will perform a grid search using 10-fold cross validation with a standardized copy of the training dataset. We will try a number of simpler kernel types and C values with less bias and more bias (less than and more than 1.0 respectively).

Python scikit-learn provides two simple methods for algorithm parameter tuning:

- Grid Search Parameter Tuning.
- Random Search Parameter Tuning.
``` python
from sklearn.model_selection import GridSearchCV

# Train classifiers.
kernel_values = [ 'linear' ,  'poly' ,  'rbf' ,  'sigmoid' ]
param_grid = {'C': np.logspace(-3, 2, 6), 'gamma': np.logspace(-3, 2, 6),'kernel': kernel_values}

grid = GridSearchCV(SVC(), param_grid=param_grid, cv=5)
grid.fit(X_train, y_train)
print("The best parameters are %s with a score of %0.2f"% (grid.best_params_, grid.best_score_))
grid.best_estimator_.probability = True
clf = grid.best_estimator_

# plotting confustion matrix for optimized classifier
y_pred = clf.fit(X_train, y_train).predict(X_test)
cm = metrics.confusion_matrix(y_test, y_pred)
#print(cm)
print(classification_report(y_test, y_pred ))

fig, ax = plt.subplots(figsize=(5, 5))
ax.matshow(cm, cmap=plt.cm.Reds, alpha=0.3)
for i in range(cm.shape[0]):
     for j in range(cm.shape[1]):
         ax.text(x=j, y=i,
                s=cm[i, j], 
                va='center', ha='center')
plt.xlabel('Predicted Values', )
plt.ylabel('Actual Values')
plt.show()
```
<img src="https://i.ibb.co/WtHpcYz/image.png" style="width:25%">
<br><br>

## **<ins>Decision boundaries of different classifiers</ins>**
Let's see the decision boundaries produced by the linear, Gaussian and polynomial classifiers.
<br><img><br>
This work demonstrates the modelling of breast cancer as classification task using Support Vector Machine

The SVM performs better when the dataset is standardized so that all attributes have a mean value of zero and a standard deviation of one. We can calculate this from the entire training dataset and apply the same transform to the input attributes from the validation dataset.
```python
Xtrain = X_train[:, :2] # we only take the first two features.
C = 1.0  # SVM regularization parameter
svm = SVC(kernel='linear', random_state=0, gamma=0.1, C=C).fit(Xtrain, y_train)
rbf_svc = SVC(kernel='rbf', gamma=0.7, C=C).fit(Xtrain, y_train)
poly_svc = SVC(kernel='poly', degree=3, C=C).fit(Xtrain, y_train)


plt.rcParams['figure.figsize'] = (15, 9) 
plt.rcParams['axes.titlesize'] = 'large'
    
# create a mesh to plot in
x_min, x_max = Xtrain[:, 0].min() - 1, Xtrain[:, 0].max() + 1
y_min, y_max = Xtrain[:, 1].min() - 1, Xtrain[:, 1].max() + 1
xx, yy = np.meshgrid(np.arange(x_min, x_max, 0.1), np.arange(y_min, y_max, 0.1))

# title for the plots
titles = ['SVC with linear kernel',
          'SVC with RBF kernel',
          'SVC with polynomial (degree 3) kernel']


for i, clf in enumerate((svm, rbf_svc, poly_svc)):
    # Plot the decision boundary. For that, we will assign a color to each
    # point in the mesh [x_min, x_max]x[y_min, y_max].
    plt.subplot(2, 2, i + 1)
    plt.subplots_adjust(wspace=0.4, hspace=0.4)

    Z = clf.predict(np.c_[xx.ravel(), yy.ravel()])

    # Put the result into a color plot
    Z = Z.reshape(xx.shape)
    plt.contourf(xx, yy, Z, cmap=plt.cm.coolwarm, alpha=0.8)

    # Plot also the training points
    plt.scatter(Xtrain[:, 0], Xtrain[:, 1], c=y_train, cmap=plt.cm.coolwarm)
    plt.xlabel('radius_mean')
    plt.ylabel('texture_mean')
    plt.xlim(xx.min(), xx.max())
    plt.ylim(yy.min(), yy.max())
    plt.xticks(())
    plt.yticks(())
    plt.title(titles[i])

plt.show()
```
<img src="https://i.ibb.co/GsHL5xT/image.png" style="width:50%"><br><br>

## **<ins>Conclusion</ins>**
This work demonstrates the modelling of breast cancer as classification task using Support Vector Machine

The SVM performs better when the dataset is standardized so that all attributes have a mean value of zero and a standard deviation of one. We can calculate this from the entire training dataset and apply the same transform to the input attributes from the validation dataset.

SVM is a supervised learning algorithm which separates the data into different classes through the use of a hyperplane. The chosen hyperplane is one with the greatest margin between the hyperplane and all points, this yields the greatest likelihood of accurate classification. It’s a very versatile, memory efficient algorithm, however it’s prone to overfitting, can be computationally expensive depending on the size of the data and fails to provide a probabilistic explanation of the results.

## **View the complete [ipynb](support_vector_machines.ipynb) file**

### ***Contribution by : Abhinav Mathur***





