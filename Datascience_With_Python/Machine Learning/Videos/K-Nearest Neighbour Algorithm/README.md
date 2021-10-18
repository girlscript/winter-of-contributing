## K-Nearest Neighbor(KNN) Algorithm for Machine Learning:

## [Click here to see the video](https://drive.google.com/file/d/18q6fXw9FfWAvOvkqC2zhVUUB9dmep98P/view?usp=sharing)
- KNN is a supervised machine learning algorithm.
- It is used when output is discrete or continues in nature.

![1](https://user-images.githubusercontent.com/79050917/137004612-d89deb95-7721-4d68-b829-64b407cf7656.PNG)


**What is KNN?**
KNN algorithm assumes that similar data points lie near each other. So when new 
data point is introduced it characterized the data point on based on distance generally through 
Euclidean distance, and then it assigns the category on the most frequency category or average 
based on k- value.

![2](https://user-images.githubusercontent.com/79050917/137004619-69e65afc-f4fe-4517-87f9-da3af667f44f.PNG)


**Choosing of k-value in KNN:**
- Choosing of k-value is critical because it is used to solve the problem of bias-variance trade-off.
- Low k-value, it is influenced by outliers.
- High k-value, might introduce data points from other category data points.

![3](https://user-images.githubusercontent.com/79050917/137004625-ebb6e6c7-2739-46cd-a128-e9335adb423a.PNG)


**How to choose k-value?**
- Generally, we assign k-value randomly and check the accuracy.
- Low error-rate and high accuracy is good.
- Derive a plot between error rate and k-value denoting values in a defined range
And then choose the k-value which have a min error rate.
- Sqrt(n/2) for optimal k-value.

![4](https://user-images.githubusercontent.com/79050917/137004636-aea175dc-596b-4841-9682-e84eb9c3b812.PNG)


**Advantages:**
- No training period (lazy learner).
- New data can be added seamlessly.
- Easy to implement.

**Disadvantages:**
- Does not work well on large datasets.
- Does not work well with high- dimensions.
- Sensitive to noisy data, missing values and outliers



