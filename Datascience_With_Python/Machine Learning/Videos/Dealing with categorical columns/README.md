## What are categorical columns ?

The columns in a data set which have non numeric values are known as categorical columns.

This columns are converted into numerical columns for performing some machine learning model algorithms.

## Dealing with Categorical columns: [VIDEO LINK](https://drive.google.com/file/d/1p4bPYE_dNoW72AtvZig_kUzT05rgYqCe/view?usp=sharing)

There are three common approaches for converting ordinal and categorical variables to numerical values. They are:

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


