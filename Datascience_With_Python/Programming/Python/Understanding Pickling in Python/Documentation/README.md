# Data Science : Understanding Pickling in Python

## **Outline of Topics covered:**
Elaborated the use and code snippets for Understanding Pickling in Python in this [Python notebook](pickling_in_python.ipynb).

- What is Pickling?
- Types of Data (based on Structure)
- Using Pickle Module
    - serializing data
    - de-serializing data
- Practical Usage

## **Summary of Topics Covered:**
## What is Pickling?
&emsp;**Pickling in Python** or **Data Serialization/De-serialization** is an important tool in a Data Scientist's arsenal!<br><br>
&emsp;Data serialization is the process of converting structured data (objects) into a series of bytes. This allows sharing or storage of the data by fulfulling an intention of minimizing the data’s size which reduces disk space or bandwidth requirements.<br>
&emsp;Python pickle module is useful for serializing and de-serializing a Python object structure.<br><br>

## Types of Data (based on Structure):
- Flat Data<br>
    ```{"Category" : "XYZ", "parameter1": "value1", "parameter2": "value2", "parameter3": "value3" }```
- Nested Data<br>
    ```{"XYZ" : {"parameter1": "value1", "parameter2": "value2", "parameter3": "value3" }}```

&emsp;As it can be seen clearly Flat Data has one level of properties or “key : value” pairs while Nested Data has multiple levels of data, or has sub-objects with in.<br><br>

## Using the Pickle Module:
&emsp;First things first, we import our module -

    import pickle
    
**To serialize data**<br>
&emsp;We take our data and use the ```dump()``` function to serialize it.

    data = {
        'area' : [2600,3000,3200,3600,4000,4100],
        'bedrooms' : [3,4,4,3,5,6],
        'age' : [20,15,18,30,8,8],
        'price' : [550000,565000,610000,595000,760000,810000]
    }

    with open('mydata.pickle', 'wb') as f:
        pickle.dump(data, f, protocol=pickle.HIGHEST_PROTOCOL)

&emsp;In the above code, we've opened ```mydata.pickle``` file in write binary mode to dump our data object in the ```data``` variable with ```pickle.HIGHEST_PROTOCOL``` (which is basically just a value determining the priority, the other choice is ```DEFAULT_PROTOCOL```). If the file is absent in the working directory, it is automatically created.

**To de-serialize data**<br>
&emsp;Let's take our arbitrary data from ```mydata.pickle``` file and "load" it using pickle.

    datafile = open('mydata.pickle', 'rb')     
    unpickled_data = pickle.load(datafile)
    datafile.close()

&emsp;This is how you can easily serialize and de-serialize your data using pickle. There is little warning though as stated by the official Pickle documentation:
> Warning: The pickle module is not secure. Only unpickle data you trust.

&emsp;So incase you're trying to unpickle a file provided by someone, do it with utmost care.

## Practical Usage
&emsp;There can be numerous ways we can use pickling to make our Data Science projects faster. For instance, we can dump our fitted ML model into a pickle file and share it with the team so that they can skip the training part of it!

&emsp;Let's create a simple House Price Prediction Model on `unpickled_data` that we obtained in the previous code from a pickle file and then dump the model into its own pickle file!
    
    import pandas as pd
    df = pd.DataFrame(data=unpickled_data)

Let's train a Linear Regression Model from scikit-learn library using this `df` obtained using data from `mydata.pickle` file.

    from sklearn.linear_model import LinearRegression
    myMLmodel = LinearRegression()
    myMLmodel.fit(df.drop('price',axis='columns'),df['price'])

We've fitted our model using the training data, now we just use the `dump()` method to pickle the model.

    with open('myMLmodel.pickle', 'wb') as f:
        # Pickle the ML model using the highest protocol available.
        pickle.dump(myMLmodel, f, protocol=pickle.HIGHEST_PROTOCOL)

This model can be easily shared and need to not be fitted again. It can be simply used as given below:

    modelfile = open('myMLmodel.pickle', 'rb')     
    unpickled_MLmodel = pickle.load(modelfile)
    modelfile.close()

    myMLmodel.predict([[3000, 3, 40]])


## **Resources refered:**
- [Python - Pickle Official Documentation](https://docs.python.org/3/library/pickle.html)
- [Understanding Python Pickling - GFG](https://www.geeksforgeeks.org/understanding-python-pickling-example/)
