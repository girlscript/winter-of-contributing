## **Pipelines**

- Pipelines in Data Science are used to take the data from all the Data Engineering steps and preparing it for the predictions. 
- It Changes the raw data into an understandable form and which can be further used to train the model.

     ![image](https://user-images.githubusercontent.com/78369337/136997581-e9249cf7-28d7-4984-b3fa-e694e413fa9c.png)
  

## **Steps in Pipelines**

- **Data Engineering** 
  - Data Wrangling : Sourcing the data from one or more datasets and normalising the data so that merged data from different datasets is consistent.
  - Data Cleaning : Datasets can be messy and may contain common issues like missing values, inconsistent records, wrong datatype, etc. These issues need to be taken care for the data to be cleaned before Exploratory Data Analysis and model training.
    - Examine the data : Understanding every feature , identify errors, missing values, and corrupt records.
    - Clean the data: Throw away, replace, and/or fill missing values/errors.
  - Data Preparation : In this step, feature scaling is being done and categorical features are converted to numerical features as Machine learning algorithms prefer to work with numbers.

- **Machine Learning** 
  - In this step we create a Machine Learning Model, train it on the prepared data and validate it using different accuracy measuring strategies and then fine tuning the model to achieve the best results (least possible error on the validation set and also preventing the model from Overfitting the data).  And, finally testing the final model on the test set.

- **Operations** 
  - This is the end goal of the data science pipeline. 
  - It is basically the deployment of the model to a production environment where it will make predictions on new data and visualize the data.
  
  
  
  
  ![image](https://user-images.githubusercontent.com/78369337/137779925-255ac513-708d-478b-8615-d1b0aa99504a.png)





## **Why Data Pipelines ?**

- Provides a guided way to the data transforming from data to insights,
- Easier access to insights, as raw data is quickly and easily adjusted, analyzed, and modeled based on machine learning algorithms,
- Faster decision-making, as data is extracted and processed in real time, giving you up-to-date information to leverage,
- Reduces code complexity,
- Data transformation steps and the fit & transform operations for all transformations can be inlcuded in a single code block,
- Column pipelines help to deal with both, the numerical features as well as the categorical features simultaneously without separating the categorical features from numercial ones,
- Predict future customer demand for optimum inventory deployment.



## **Best Pipelines Have**
- Continuous, extensible data processing,
- Independent, isolated data processing resources,
- Cloud-enabled elasticity and agility.


![image](https://user-images.githubusercontent.com/78369337/137780869-0a5b5500-a9cb-489a-b201-56d5f767f76d.png)




## **Conclusion**
- Working with pipelines means incorporating the steps of obtaining and cleaning the data, exploring data with visualizations, modeling data with different machine learning algorithms, interpreting data by evaluation, and updating the model. 
- Make sure that pipeline is solid end to end.
- Pipelines with cloud-enabled elasticity & agility are the best ones.

