## LightGBM Algorithm
## [Click here to listen the audio](https://drive.google.com/file/d/1Fxd-3MYiBW-m4q8XBD29Yghpm6LrGw_f/view?usp=sharing)

- LightGBM is a gradient boosting framework based on decision trees to increases the efficiency of the model and reduces memory usage. 
- It uses two novel techniques: Gradient-based One Side Sampling and Exclusive Feature Bundling (EFB) which fulfills the limitations of histogram-based algorithm that is primarily used in all GBDT (Gradient Boosting Decision Tree) frameworks. 
- The two techniques of GOSS and EFB described below form the characteristics of LightGBM Algorithm. They comprise together to make the model work efficiently and provide it a cutting edge over other GBDT frameworks 

Gradient-based One Side Sampling Technique for LightGBM: 
- Different data instances have varied roles in the computation of information gain. 
- The instances with larger gradients(i.e., under-trained instances) will contribute more to the information gain. 
- GOSS keeps those instances with large gradients (e.g., larger than a predefined threshold, or among the top percentiles), and only randomly drop those instances with small gradients  to retain the accuracy of information gain estimation. 
- This  treatment can lead to a more accurate gain estimation than uniformly random sampling, with the same target sampling rate, especially when the value of information gain has a large range. 

![image](https://user-images.githubusercontent.com/79050917/143837338-704f5e87-efc6-42b0-b6d2-e6cdb4ea821e.png)

**When to use LightGBM:**
- LightGBM is not for a small volume of datasets. It can easily overfit small data due to its sensitivity. 
- It can be used for data having more than 10,000+ rows. 
- There is no fixed threshold that helps in deciding the usage of LightGBM. 
- It can be used for large volumes of data especially when one needs to achieve a high accuracy.

![image](https://user-images.githubusercontent.com/79050917/143837593-bc230d53-4f62-4b79-8ce2-eb68c3ebd7e7.png)

**Advantages** 
- Faster training speed and higher efficiency
- Lower memory usage
- Better accuracy than any other boosting algorithm
- Compatibility with Large Datasets

![image](https://user-images.githubusercontent.com/79050917/143837662-614c56f8-1e45-451e-a4d6-507b658b9553.png)

**Disadvantages** 
- Overfitting
- Compatibility with Datasets

**Conclusion:**
- LightGBM is considered to be a really fast algorithm and the most used algorithm in machine learning when it comes to getting fast and high accuracy results. 
- There are more than 100+ number of parameters given in the LightGBM documentation.
