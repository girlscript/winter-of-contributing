## Support Vector Machine(SVM)
## [Click here to see the video](https://drive.google.com/file/d/1TCTAAVl_aWhbIo1kLf4rhecix7wCMDwm/view?usp=sharing)
- Support Vector Machine is a Supervised Machine Learning model which is used for both classification and regression 
Problems.
- The goal of SVM is to create a best line that can segregate the n dimensional space into classes, so that when new data 
is put in space, it can identify the correct class.
- The best line is known as hyperplane.
- When the data is linear, hyperplane is known as straight line and when data is non linear hyperplane is a plane.
- SVM chooses vectors that help in creating the hyperplane and these vectors are known as support vectors

![image](https://user-images.githubusercontent.com/79050917/139553664-55408f1a-5243-4eb0-9dbc-7456d6fbaec3.png)

According to the SVM algorithm, they find the points closest to the line from both the classes. These points are called support vectors. Now, we compute the distance between the line and the support vectors. This distance is called the margin. Our goal is to maximize the margin. The hyperplane for which the margin is maximum is the optimal hyperplane.
Hence, when new data point is introduced the data which is near to which category get assigned.

![image](https://user-images.githubusercontent.com/79050917/139553684-d7506b8e-b6a7-48eb-8b5e-8f142d69b810.png)

**Advantages:**
- It  works well when there is a clear margin of separation between classes.
- It  is more effective in high dimensional spaces.
- It  is effective in cases where the number of dimensions is greater than the number of samples.
- It  is relatively memory efficient.

**Disadvantages:**
- It is not suitable for large data sets.
- It does not perform very well when the data set has more noise.
- In cases where the number of features for each data point exceeds the number of training data samples, the SVM will underperform.






