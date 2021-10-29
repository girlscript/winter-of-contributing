# One Hot Encoding

## Introduction
One hot encoding is one of the way of preprocessing data to prepare it for an algorithm and get improved prediction. With one hot encoding, we convert all the categorical values into new categorical column and assign them binary values(i.e. 0 and 1) to those columns. It is the process of creating dummy variables.

### What are categorical variables?
Categorial values are the labelled values. These values contain label rather than numeric values.They take limited number of possible values.
Some example of categorical variables are "sex", "gender","race",etc.

![Graph](https://user-images.githubusercontent.com/56879294/134984992-c815a52f-1627-4423-8ba7-42bbc148c36f.png)

### Need of handling categorical values
Machine learning algorithms reuires that input and output variables should be numbers. As we know categorical values are non-numeric. Hence, we must need to encode these variables to numbers before we can use it to fit and evaluate the model.

One of such metods to handle categorical variables is one hot encoding.

## Explanation
* **Importing the libraries;** importing all the libraries required for the purpose.

```bash
  import pandas as pd
  from sklearn import preprocessing
```

* **Loading the dataset;** loading the dataset for understanding the purpose

```bash
  df = pd.read_csv("/content/insurance.csv")
  df.head()
```

![dataset](https://user-images.githubusercontent.com/56879294/134984739-8282069e-3049-42b2-a1e1-d0fa39dc76fa.png)

* **Looking into dataset;** understanding the dataset and selecting the categorical variables from all variables.

```bash
  df2 = df.select_dtypes(include=[object])
  df2.head()
```

![Categorical_data](https://user-images.githubusercontent.com/56879294/134984523-f6ea1285-6bef-43a0-9f40-14afa241631c.png)

* **Handling categorical variables;** They are two approaches to one hot encode the categorical data, which are given as follows,

### Approach 1: Using dummies values
The region, sex and smoker columns contain categorical values. We can convert these values in the columns into one-hot encoded vectors using the get_dummies() function:

```bash
  hot_enc = pd.get_dummies(df2, columns = ['region', 'sex','smoker'])
  hot_enc
```
We passed region, sex and smoker as the value for the prefix attribute of the get_dummies() method, hence you can see the strings region, sex and smoker prefixed before the header of each of the one-hot encoded columns in the output.

Running the above code yeilds.

![Approach_1](https://user-images.githubusercontent.com/56879294/134985137-60809310-c40b-41aa-a433-390bec96b31c.png)

### Approach 2: Using sci-kit learn library
Another approach is using Scikit-Learn library. It offers the OneHotEncoder class,which supports multi-column data.
```bash
  hot_enc_2 = preprocessing.OneHotEncoder()
  hot_enc_2.fit(df2)
  onehotlabels = hot_enc_2.transform(df2).toarray()
  onehotlabels
```
Running the above code yeilds.

![Approach_2](https://user-images.githubusercontent.com/56879294/134985238-121c77ed-579b-465a-a9fc-a65b6421df15.png)

## Dataset and Libraries Used

* Dataset : [Insurance.csv](https://www.kaggle.com/mirichoi0218/insurance)

* Tools used : Pandas and Sklearn

## Conclusion 
* It is important to encode categorical variables to make good predictions and extract information.
* Works when well the categorical variable is non-ordinal.
* One issue with one hot encoder is multicollinearity.
* There are two approaches one using Pandas and another using Sklearn.



