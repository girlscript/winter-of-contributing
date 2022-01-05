## What are categorical columns ?

The columns in a data set which have non numeric values are known as categorical columns.

This columns are converted into numerical columns for performing some machine learning model algorithms.

## Dealing with Categorical columns: [VIDEO LINK](https://drive.google.com/file/d/1p4bPYE_dNoW72AtvZig_kUzT05rgYqCe/view?usp=sharing)

## Understanding Categorical Data

- Let’s get an idea about categorical data representations before diving into feature engineering strategies. 
- Typically, any data attribute which is categorical in nature represents discrete values which belong to a specific finite set of categories or classes. 
- These are also often known as classes or labels in the context of attributes or variables which are to be predicted by a model (popularly known as response variables). 
- These discrete values can be text or numeric in nature (or even unstructured data like images!). 
- There are two major classes of categorical data, nominal and ordinal.

- In any nominal categorical data attribute, there is no concept of ordering amongst the values of that attribute. 
- Consider a simple example of weather categories, as depicted in the following figure. 
- We can see that we have six major classes or categories in this particular scenario without any concept or notion of order (windy doesn’t always occur before sunny nor is it smaller or bigger than sunny).

![image](https://user-images.githubusercontent.com/63282184/134946290-0bd45d62-97fb-4b98-a6dd-a38a4db39b79.png)


## There are three common approaches for converting ordinal and categorical variables to numerical values. They are:

- Ordinal Encoding
- One-Hot Encoding
- Dummy Variable Encoding

## 1. Ordinal Encoding

In ordinal encoding, each unique category value is assigned an integer value.

For example, “red” is 1, “green” is 2, and “blue” is 3.

This is called an ordinal encoding or an integer encoding and is easily reversible. Often, integer values starting at zero are used.

## 2. One-Hot Encoding

For categorical variables where no ordinal relationship exists, the integer encoding may not be enough, at best, or misleading to the model at worst.

**Example**

![image](https://user-images.githubusercontent.com/63282184/134809871-80b62928-f507-4c23-aac8-31d524d9c139.png)

## 3. Dummy Variable Encoding

The one-hot encoding creates one binary variable for each category.


**Example**

![image](https://user-images.githubusercontent.com/63282184/134809902-75c102e1-223e-43c7-a458-54b2258ee209.png)


## When to use a Label Encoding vs. One Hot Encoding

We apply One-Hot Encoding when:
1. The categorical feature is not ordinal (like the countries above)
2. The number of categorical features is less so one-hot encoding can be effectively applied

We apply Label Encoding when:
1. The categorical feature is ordinal (like Jr. kg, Sr. kg, Primary school, high school)
2. The number of categories is quite large as one-hot encoding can lead to high memory consumption


## Purpose of dealing with Categorical Columns:

- In the above we have seen there are three various ways to deal with categorical data, but the main aim of this is when we create a machine learning algorithm and we have some columns as categorical and some as numerical then we need to change the categorical data to the numerical format to maintain the same data type.
- We all might be thinking why to maintain same data type, the answer would be because we all know that when we perform the machine learning algorithms then we need to have all the columns in the integer format and not strings . so we convert them to integer values.
- Choosing which method to change data from categorical to integer format will be depending upon the the problem statement.
