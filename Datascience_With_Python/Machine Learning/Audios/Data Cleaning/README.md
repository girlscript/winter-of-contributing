## Data Cleaning

## [Click here to listen the audio](https://drive.google.com/file/d/1AU-dJbzxF-lw9LUtLevEOpFcTQXrzXXN/view?usp=sharing)

Data Cleaning is one of the most important steps in data science and this steps require the most time in a project. It is an important step in any project.

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

**Handling Duplicates:**

- Duplicated values or repeated values need to be removed from the dataset.

**Outlier Analysis / Treatment:**

- Extreme values in each column.

- *Steps to treat the outliers:*

- Winsorization 
- Trimming

**Zero & Near Zero Variance Features:**

- Values in the columns having variance zero or near zero.

**Missing Values:**

- Rows in the columns when are nan values or empty known as missing values.

- Imputation methods are used to deal with missing values.

![Capture_4](https://user-images.githubusercontent.com/79050917/135221869-0acacd9d-a905-482c-94be-6e35a6e215ba.PNG)


**Discretization / Binning / Grouping:**
- Conversation of continuous values to discrete values.

**Dummy Variable Creation:**
- Conversation of categorical data to numeric data.
- *Methods that are used to convert:*
- Label encoder
- One- hot encoding

![Capture_5](https://user-images.githubusercontent.com/79050917/135221929-7abdfa2f-eace-477a-8b56-cf828a0ead63.PNG)


**Normalization / Standardization:**
- Converting all the values in the data to the same distribution.
- It helps in converting data to unitless or scalefree.

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
