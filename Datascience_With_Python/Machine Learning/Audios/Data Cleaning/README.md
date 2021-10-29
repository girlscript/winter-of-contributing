## Data Cleaning

## [Click here to listen the audio](https://drive.google.com/file/d/1AU-dJbzxF-lw9LUtLevEOpFcTQXrzXXN/view?usp=sharing)

Data Cleaning is one of the most important steps in data science and this steps require the most time in a project. It is an important step in any project.
Data cleaning is the process of fixing or removing incorrect, corrupted, incorrectly formatted, duplicate, or incomplete data within a dataset. When combining multiple data sources, there are many opportunities for data to be duplicated or mislabeled. If data is incorrect, outcomes and algorithms are unreliable, even though they may look correct. There is no one absolute way to prescribe the exact steps in the data cleaning process because the processes will vary from dataset to dataset. But it is crucial to establish a template for your data cleaning process so you know you are doing it the right way every time.

![Capture_1](https://user-images.githubusercontent.com/79050917/135221733-22e7bc76-fd19-4a5e-89eb-845dbf0cd053.PNG)


**Data cleaning involves the following steps:**

i. Typecasting

ii. Handling Duplicates

iii. Outlier Analysis / Treatment

iv. Zero & Near Zero Variance Features

v. Missing Values

vi. Discretization / Binning / Grouping

vii. Dummy Variable Creation

viii. Normalization / Standardization

ix. Transformation

x. String Manipulations (Unstructured Textual Data)

**Typecasting:**

- Conversation of one datatype variable to other.
- Typecasting is important as it helps in coverting the datatypes of one variable to other.
- Example, in deep learning the weights are assigned are float in nature. Hence, it is necessary to chnage the datatype of the input variables to float.

**Handling Duplicates:**

- Duplicated values or repeated values need to be removed from the dataset.
- May impact the model as the values perfoms or contributes the same  for the model, that might impact the model performance.

**Outlier Analysis / Treatment:**

- Extreme values in each column.
- Outlier is a data object that deviates significantly from the rest of the data objects and behaves in a different  manner.
- Impact on accuracy is more when we dont treat outliers, hence convertion or removing is necessary as it helps in better performance of the model.

- *Steps to treat the outliers:*

- Winsorization : Converting the extreme values to the nearest values.
- Trimming: Cuttimg-off the extreme values.

**Zero & Near Zero Variance Features:**

- Values in the columns having variance zero or near zero.
- Columns having zero or near zero variance are usally avoid because applying mathematical operations on these columns may not impact much on models as they are having zero or near zero variance.

**Missing Values:**

- Rows in the columns when are nan values or empty known as missing values.

- Imputation methods are used to deal with missing values.
- Typically, they ignore the missing values, or exclude any records containing missing values, or replace missing values with the mean, or infer missing values from existing values.

![Capture_4](https://user-images.githubusercontent.com/79050917/135221869-0acacd9d-a905-482c-94be-6e35a6e215ba.PNG)


**Discretization / Binning / Grouping:**
- Conversation of continuous values to discrete values.

**Dummy Variable Creation:**
- Conversation of categorical data to numeric data.
- Many of the model in data mining treats ot computes the dataset when all the datatype is in numeric.
- *Methods that are used to convert:*
- Label encoder: Label Encoding refers to converting the labels into a numeric form so as to convert them into the machine-readable form.
- One- hot encoding: A one hot encoding is a representation of categorical variables as binary vectors. This first requires that the categorical values be mapped to integer values.

![Capture_5](https://user-images.githubusercontent.com/79050917/135221929-7abdfa2f-eace-477a-8b56-cf828a0ead63.PNG)


**Normalization / Standardization:**
- Converting all the values in the data to the same distribution.
- It helps in converting data to unitless or scalefree.
- It also helps in incresing the model performance and accuracy.

**Advantages:**
- It helps to increase the model training.
- Increases efficiency.
- Reduces the complexity of the dataset.
- Reduces the training time.
- The model performs better than before.

![Capture_3](https://user-images.githubusercontent.com/79050917/135221829-4134efd2-fe86-4bcf-87a8-33305e01ea34.PNG)


**Disadvantages:**
- Losses the original values in the dataset.
- Limited to numeric data.

**Conclusion:**

The use of data mining in enrollment management is a fairly new development. Current data mining is done primarily on simple numeric and categorical data.
