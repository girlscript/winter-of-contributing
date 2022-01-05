# LightGBM Algorithm

## video link: [LightGBM Algorithm](https://drive.google.com/file/d/1HH-r8qlXX0Ksj15Nh9I9Q-8Dv8aHxxZ_/view?usp=sharing)

- LightGBM is a gradient boosting framework based on decision trees to increases the efficiency of the model and reduces memory usage. 

**It uses two novel techniques: Gradient-based One Side Sampling and Exclusive Feature Bundling (EFB) which fulfills the limitations of histogram-based algorithm that is primarily used in all GBDT (Gradient Boosting Decision Tree) frameworks**

The two techniques of GOSS and EFB described below form the characteristics of LightGBM Algorithm. They comprise together to make the model work efficiently and provide it a cutting edge over other GBDT frameworks 

## Gradient-based One Side Sampling Technique for LightGBM: 
- Different data instances have varied roles in the computation of information gain. The instances with larger gradients(i.e., under-trained instances) will contribute more to the information gain. 
- GOSS keeps those instances with large gradients (e.g., larger than a predefined threshold, or among the top percentiles), and only randomly drop those instances with small gradients  to retain the accuracy of information gain estimation. 
- This  treatment can lead to a more accurate gain estimation than uniformly random sampling, with the same target sampling rate, especially when the value of information gain has a large range. 

### Algorithm for GOSS: 

```
Input: I: training data, d: iterations
Input: a: sampling ratio of large gradient data
Input: b: sampling ratio of small gradient data
Input: loss: loss function, L: weak learner
models ? {}, fact ? (1-a)/b
topN ? a × len(I), randN ? b × len(I)
for i = 1 to d do
    preds ? models.predict(I) g ? loss(I, preds), w ? {1, 1, ...}
    sorted ? GetSortedIndices(abs(g))
    topSet ? sorted[1:topN]
    randSet ? RandomPick(sorted[topN:len(I)],
    randN)
    usedSet ? topSet + randSet
    w[randSet] × = fact . Assign weight f act to the
    small gradient data.
    newModel ? L(I[usedSet], g[usedSet],
    w[usedSet])
    models.append(newModel)
    
```
## Mathematical Analysis for GOSS Technique (Calculation of Variance Gain at splitting feature j) 
- For a training set with n instances {x1, · · ·, xn}, where each xi is a vector with dimension s in space Xs. In each iteration of gradient boosting, the negative gradients of the loss function with respect to the output of the model are denoted as {g1, · · ·, gn}. 
- In this GOSS method, the training instances are ranked according to their absolute values of their gradients in the descending order. Then, the top-a × 100% instances with the larger gradients are kept and we get an instance subset A.
-  Then,  for the remaining set Ac consisting (1- a) × 100% instances with smaller gradients., we further randomly sample a subset B with size b × |Ac|. Finally, we split the instances according to the estimated variance gain at vector Vj (d) over the subset A ? B. 

![image](https://user-images.githubusercontent.com/63282184/143668815-8fba8fd0-1cb5-436c-8939-fca19eb93c0f.png)

where Al = {xi ? A : xij ? d}, Ar = {xi ? A : xij > d}, Bl = {xi ? B : xij ? d}, Br = {xi ? B : xij > d}, and the coefficient (1-a)/b is used to normalize the sum of the gradients over B back to the size of Ac. 

## Exclusive Feature Bundling Technique for LightGBM: 
- High-dimensional data are usually very sparse which provides us a possibility of designing a nearly lossless approach to reduce the number of features. Specifically, in a sparse feature space, many features are mutually exclusive, i.e., they never take nonzero values simultaneously.
-  The exclusive features can be safely bundled into a single feature (called an Exclusive Feature Bundle).  Hence, the complexity of histogram building changes from O(#data × #feature) to O(#data × #bundle), while #bundle<<#feature . Hence, the speed for training framework is improved without hurting accuracy. 

## Algorithm for Exclusive Feature Bundling Technique: 

```
Input: numData: number of data
Input: F: One bundle of exclusive features
binRanges ? {0}, totalBin ? 0
for f in F do
    totalBin += f.numBin
    binRanges.append(totalBin)
newBin ? new Bin(numData)
for i = 1 to numData do
    newBin[i] ? 0
    for j = 1 to len(F) do

        if F[j].bin[i] != 0 then
            newBin[i] ? F[j].bin[i] + binRanges[j]
Output: newBin, binRanges
```
 
## Example code for LightGBM

```
# installing LightGBM (Required in Jupyter Notebook and
# few other compilers once)
pip install lightgbm

# Importing Required Library
import pandas as pd
import lightgbm as lgb

# Similarly LGBMRegressor can also be imported for a regression model.
from lightgbm import LGBMClassifier

# Reading the train and test dataset
data = pd.read_csv("cancer_prediction.csv)

# Removing Columns not Required
data = data.drop(columns = ['Unnamed: 32'], axis = 1)
data = data.drop(columns = ['id'], axis = 1)

# Skipping Data Exploration
# Dummification of Diagnosis Column (1-Benign, 0-Malignant Cancer)
data['diagnosis']= pd.get_dummies(data['diagnosis'])

# Spliiting Dataset in two parts
train = data[0:400]
test = data[400:568]

# Separating the independent and target variable on both data set
x_train = train.drop(columns =['diagnosis'], axis = 1)
y_train = train_data['diagnosis']
x_test = test_data.drop(columns =['diagnosis'], axis = 1)
y_test = test_data['diagnosis']

# Creating an object for model and fitting it on training data set
model = LGBMClassifier()
model.fit(x_train, y_train)

# Predicting the Target variable
pred = model.predict(x_test)
print(pred)
accuracy = model.score(x_test, y_test)
print(accuracy)

```

## Parameter Tuning 
Few important parameters and their usage is listed below : 
 

- max_depth : It sets a limit on the depth of tree. The default value is 20. It is effective in controlling over fitting.
- categorical_feature : It specifies the categorical feature used for training model.
- bagging_fraction : It specifies the fraction of data to be considered for each iteration.
- num_iterations : It specifies the number of iterations to be performed. The default value is 100.
- num_leaves : It specifies the number of leaves in a tree. It should be smaller than the square of max_depth.
- max_bin : It specifies the maximum number of bins to bucket the feature values.
- min_data_in_bin : It specifies minimum amount of data in one bin.
- task : It specifies the task we wish to perform which is either train or prediction. The default entry is train. Another possible value for this parameter is prediction.
- feature_fraction : It specifies the fraction of features to be considered in each iteration. The default value is one.

## Advantages of Light GBM
- Faster training speed and higher efficiency: Light GBM use histogram based algorithm i.e it buckets continuous feature values into discrete bins which fasten the training procedure. 
- Lower memory usage: Replaces continuous values to discrete bins which result in lower memory usage.
- Better accuracy than any other boosting algorithm: It produces much more complex trees by following leaf wise split approach rather than a level-wise approach which is the main factor in achieving higher accuracy. However, it can sometimes lead to overfitting which can be avoided by setting the max_depth parameter.
- Compatibility with Large Datasets: It is capable of performing equally good with large datasets with a significant reduction in training time as compared to XGBOOST.
- Parallel learning supported.
