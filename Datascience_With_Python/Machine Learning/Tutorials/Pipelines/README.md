## **Pipelines**

- Pipelines in Data Science are used to take the data from all the Data Engineering steps and preparing it for the predictions. 
- It Changes the raw data into an understandable form and which can be further used to train the model.

     ![image](https://user-images.githubusercontent.com/78369337/136997581-e9249cf7-28d7-4984-b3fa-e694e413fa9c.png)
  
## **Why Data Pipelines ?**

- Improve predictive fraud capabilities
- Identify the motivations and inclinations of consumers down to a granular level. By extension, this helps promote brand awareness, reduce financial burdens, and increase revenue margins.
- Predict future customer demand for optimum inventory deployment
- Personalize the customer experience

## **Steps in Pipelines**

- Data Engineering 
  - Data Wrangling : Sourcing the data from one or more datasets and normalising the data so that merged data from different datasets is consistent.
  - Data Cleaning : Datasets can be messy and may contain common issues like missing values, inconsistent records, wrong datatype, etc. These issues need to be taken care for the data to be cleaned before Exploratory Data Analysis and model training.
  - Data Preparation : In this step, feature scaling is being done and categorical features are converted to numerical features.

- Machine Learning 
  - n this step we create a Machine Learning Model, train it on the prepared data and validate it and testing it on the test set. 

- Operations 
  - This is the end goal of the data science pipeline. It is basically the deployment of the model to a production environment where it will make predictions on new data and model visualization.
