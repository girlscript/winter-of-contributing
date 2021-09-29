## Data Cleaning 

Data cleaning is one of the important parts of machine learning. It plays a significant part in building a model. 

## Link for the video: [Data Cleaning](https://drive.google.com/file/d/1KrrWVRlgY1CNLdzmwE_h8ytK0R5zqukN/view?usp=sharing)

## when do we perform data cleaning in the data science project?

![image](https://user-images.githubusercontent.com/63282184/135020390-b036d33c-0d75-475a-afad-4a7837f24885.png)


## Steps involved in Data Cleaning

![image](https://user-images.githubusercontent.com/63282184/135020459-0478b1d4-10ee-4dfb-bc10-cf612e5501b6.png)


## Removal of unwanted observations 

This includes deleting duplicate/ redundant or irrelevant values from your dataset. Duplicate observations most frequently arise during data collection and Irrelevant observations are those that don’t actually fit the specific problem that you’re trying to solve. 
Redundant observations alter the efficiency by a great extent as the data repeats and may add towards the correct side or towards the incorrect side, thereby producing unfaithful results.
Irrelevant observations are any type of data that is of no use to us and can be removed directly.

## Fixing Structural errors 

- The errors that arise during measurement, transfer of data, or other similar situations are called structural errors. 
- Structural errors include typos in the name of features, the same attribute with a different name, mislabeled classes, i.e. separate classes that should really be the same, or inconsistent capitalization. 
- For example, the model will treat America and America as different classes or values, though they represent the same value or red, yellow, and red-yellow as different classes or attributes, though one class can be included in the other two classes. 
- So, these are some structural errors that make our model inefficient and give poor quality results. 

## Managing Unwanted outliers 

- Outliers can cause problems with certain types of models. 

- For example, linear regression models are less robust to outliers than decision tree models. Generally, we should not remove outliers until we have a legitimate reason to remove them.

- Sometimes, removing them improves performance, sometimes not. So, one must have a good reason to remove the outlier, such as suspicious measurements that are unlikely to be part of real data.



## Handling missing data 

- Missing data is a deceptively tricky issue in machine learning. We cannot just ignore or remove the missing observation. They must be handled carefully as they can be an indication of something important. The two most common ways to deal with missing data are: 
- Dropping observations with missing values.

The fact that the value was missing may be informative in itself.

- Plus, in the real world, you often need to make predictions on new data even if some of the features are missing!
- Imputing the missing values from past observations.
- Again, “missingness” is almost always informative in itself, and you should tell your algorithm if a value was missing.
- Even if you build a model to impute your values, you’re not adding any real information. You’re just reinforcing the patterns already provided by other features.

## Conclusion: 

So, we have discussed four different steps in data cleaning to make the data more reliable and to produce good results. After properly completing the Data Cleaning steps, we’ll have a robust dataset that avoids many of the most common pitfalls. This step should not be rushed as it proves very beneficial in the further process.


