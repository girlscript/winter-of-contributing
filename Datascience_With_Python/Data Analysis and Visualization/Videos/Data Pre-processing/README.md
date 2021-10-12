## Data Pre-processing

## [Click here to see the video](https://drive.google.com/file/d/1967a9hoB9leHxkTDf7KE71MqDVss-aBQ/view?usp=sharing)

- Data Pre-processing is one of the most important steps in data science and these steps require the most time in a project. It is an important step in any project.

- Data cleaning is the process of fixing or removing incorrect, corrupted, incorrectly formatted, duplicate, or incomplete data within a dataset. When combining multiple data sources, there are many opportunities for data to be duplicated or mislabeled. If data is incorrect, outcomes and algorithms are unreliable, even though they may look correct.

- There is no one absolute way to prescribe the exact steps in the data cleaning process because the processes will vary from dataset to dataset. But it is crucial to establish a template for your data cleaning process so you know you are doing it the right way every time.

**Data Pre-processing involves the following steps:**
- Typecasting
- Handling Duplicates
- Outlier Analysis / Treatment
- Zero & Near Zero Variance Features
- Missing Values
- Discretization / Binning / Grouping
- Dummy Variable Creation
- Normalization / Standardization
- Transformation
- String Manipulations (Unstructured Textual Data)

**Typecasting:**
- Conversation of one datatype variable to another.
- Typecasting is important as it helps in converting the data types of one variable to another.
- Example, in deep learning the weights are assigned are float in nature. Hence, it is necessary to change the data type of the input variables to float.

![Capture_2](https://user-images.githubusercontent.com/79050917/136823131-b689d300-f243-42d6-af8b-f58099793e27.PNG)

**Handling Duplicates:**
- Duplicated values or repeated values need to be removed from the dataset.
- May impact the model as the values perform or contribute the same for the model, which might impact the model performance.

![3](https://user-images.githubusercontent.com/79050917/136823260-afbedf7e-8b4a-4a2c-8602-7822aaad8d53.PNG)

**Outlier Analysis / Treatment:**
- Extreme values in each column.
- Outlier is a data object that deviates significantly from the rest of the data objects and behaves in a different manner.
- Impact on accuracy is more when we don’t treat outliers, hence conversion or removing is necessary as it helps in better performance of the model.
- Steps to treat the outliers:- Winsorization: Converting the extreme values to the nearest values.
- Trimming: Cutting off the extreme values.

![4](https://user-images.githubusercontent.com/79050917/136823683-8e5e2e19-e6a1-4ba0-8947-2a366aa6154c.PNG)

**Zero & Near Zero Variance Features:**
- Values in the columns having variance zero or near zero.
- Columns having zero or near-zero variance are usually avoided because applying mathematical operations on these columns may not impact much on models as they are having zero or near-zero variance.

**Missing Values:**
- Rows in the columns when are nan values or empty known as missing values.
- Imputation methods are used to deal with missing values.
- Typically, they ignore the missing values, or exclude any records containing missing values, or replace missing values with the mean, or infer missing values from existing values.

![5](https://user-images.githubusercontent.com/79050917/136823787-a0d57a14-2a37-467e-8c5b-b284d937e153.PNG)


**Discretization / Binning / Grouping:**
- Conversation of continuous values to discrete values.

**Dummy Variable Creation:**
- Conversation of categorical data to numeric data.
- Many of the models in data mining treats it computes the dataset when all the data type is numeric.
- Methods that are used to convert:
- Label encoder: Label Encoding refers to converting the labels into a numeric form so as to convert them into the machine-readable form.
- One- hot encoding: A one-hot encoding is a representation of categorical variables as binary vectors. This first requires that the categorical values be mapped to integer values.

![6](https://user-images.githubusercontent.com/79050917/136823849-b505d87d-db90-4a78-a1dd-32de16fb59f0.PNG)

**Normalization / Standardization:**
- Converting all the values in the data to the same distribution.
- It helps in converting data to unit less or scale free.
- It also helps in increasing the model performance and accuracy.

![7](https://user-images.githubusercontent.com/79050917/136823909-7b90fa89-2465-41f3-acb7-4ad0307ef8a6.PNG)

**Advantages:**
- It helps to increase the model training.
- Increases efficiency.
- Reduces the complexity of the dataset.
- Reduces the training time.
- The model performs better than before.

**Disadvantages:**
- Losses the original values in the dataset.
- Limited to numeric data.

**Conclusion:**
- Data Pre-processing is one of the most important steps in data science and these steps require the most time in a project. It is an important step in any project.
















