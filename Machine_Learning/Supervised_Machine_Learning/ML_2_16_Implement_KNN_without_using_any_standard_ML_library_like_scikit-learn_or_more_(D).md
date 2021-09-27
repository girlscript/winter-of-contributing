## Implement KNN without using any standard ML library like scikit-learn or more.


**KNN**

- KNN is also known as K-Nearest Neighbour.
- It is a supervised machine learning model.
- It is used when output is discrete or continues in nature.
 
![Capture_1](https://user-images.githubusercontent.com/79050917/134852065-c89148c0-f9e0-43d1-9a81-687f303d1e34.PNG)


**What is KNN?**


KNN algorithm assumes that similar data points lie near each other. So when new a data point is introduced it characterized the data point based on distance generally through Euclidean distance, and then it assigns the category which has the least distance.


**Choosing of k-value in KNN:**

- Choosing of k-value is critical because it is used to solve the problem of the bias-variance trade-off.
- Low k-value is influenced by outliers.
- High k-value might introduce data points from other category data points.

![Capture_3](https://user-images.githubusercontent.com/79050917/134852017-cdfa67dc-9ec1-49bc-88e5-eef0ea3651c6.PNG)


**How to choose k-value?**

- Generally, we assign k-value randomly and check the accuracy.
- Low error rate and high accuracy are good.
- Derive a plot between error rate and k-value denoting values in a defined range And then choose the k-value which has a min error rate.
- Sqrt(n) for optimal k-value.

**Advantages:**

- No training period (lazy learner).
- New data can be added seamlessly.
- Easy to implement.

**Disadvantages:**

- Does not work well on large datasets.
- Does not work well with high- dimensions.
- Sensitive to noisy data, missing values, and outliers.

**Implement KNN without using any standard ML library like scikit-learn or more:**

*Basic steps to follow:*

- Split the dataset into train and test datasets and then follow the below steps.
- Calculate the distance between the new data point and other chosen data points.
- Arrange the distance which has the least distance.
- Assign the category of the nearest data point to the new data point.
- Finally, a cluster is created.

**Code:**

class KNN:

   def __init__(self, k):
   
       self.k = k
      
   def fit(self, X, y):
   
       self.X_train = X
       
       self.y_train = y
       
      
   def distance(self, X1, X2):
   
       distance = scipy.spatial.distance.euclidean(X1, X2)
  
   def predict(self, X_test):
   
       final_output = []
       
       for i in range(len(X_test)):
       
           d = []
           
           votes = []
           
           for j in range(len(X_train)):
           
              dist=scipy.spatial.distance.euclidean(X_train[j] , X_test[i])
              
               d.append([dist, j])
               
           d.sort()
           
           d = d[0:self.k]
           
           for d, j in d:
           
               votes.append(y_train[j])
               
           ans = Counter(votes).most_common(1)[0][0]
           
           final_output.append(ans)
          
       return final_output
  
   *The above code is a detailed explanation of how the KNN algorithm works.*



![Capture_2](https://user-images.githubusercontent.com/79050917/134852100-df73b6c2-e1f5-4654-b378-9caa0d3f9a28.PNG)



