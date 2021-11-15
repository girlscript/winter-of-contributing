## Support Vector Machine(SVM)

## [Click here to see the video](https://drive.google.com/file/d/1dpOEgyVbuaFOqjjPmiVN2qHQf_-XmJNh/view?usp=sharing)

- Support Vector Machine is a Supervised Machine Learning model which is used for both classification and regression problems.
- The goal of SVM is to create a best line that can segregate the n dimensional space into classes, so that when new data is put in space, it can identify the correct class.
- The best line is known as hyperplane.
- When the data is linear, hyperplane is known as straight line and when data is non linear hyperplane is a plane.
- SVM chooses vectors that help in creating the hyperplane and these vectors are known as support vectors



**SVM can be of two types:**
***Linear SVM:***

- Linear SVM is used for linearly separable data, which means if a dataset can be classified into two classes by using a single straight line.

***Non-linear SVM:***

- Non-Linear SVM is used for non-linearly separated data, which means if a dataset cannot be classified by using a straight line.

**How does SVM works?**

***Linear  SVM:***
- It chooses best fit hyperplane with the help of support vectors and performs the algorithm on 2D dimensional plane.

***Non-linear SVM:***
- It chooses the best fit hyperplane with the help of support vectors by visualizing the data points on 3D plane.


![1](https://user-images.githubusercontent.com/79050917/136983636-2f8e7455-4396-4ad0-80e6-3caad9abc430.PNG)
![2](https://user-images.githubusercontent.com/79050917/136983645-2c525e02-406b-422c-b22e-d949c39e3d98.PNG)
![3](https://user-images.githubusercontent.com/79050917/136983658-9faffa0d-41bf-4ed8-8ce3-c33811e8a657.PNG)

**Advantages:**

- SVM works relatively well when there is a clear margin of separation between classes.

- SVM is more effective in high dimensional spaces.

- SVM is effective in cases where the number of dimensions is greater than the number of samples.

- SVM is relatively memory efficient

**Disadvantages:**

- SVM algorithm is not suitable for large data sets.

- SVM does not perform very well when the data set has more noise i.e. target classes are overlapping.

- In cases where the number of features for each data point exceeds the number of training data samples, the SVM will underperform.

- As the support vector classifier works by putting data points, above and below the classifying hyperplane there is no probabilistic explanation for the classification.

