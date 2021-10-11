# Data Analysis using Pandas

Data analysis is a process of inspecting, cleansing, transforming, and modelling data with the goal of discovering useful information, informing conclusions, and supporting decision-making.

## Installation

Open command line and enter the following command :

```
pip install pandas
```

## Dependencies

### Supported Python versions

- Python 3.5 +

### Required dependencies

If not already present, these libraries will be downloaded when you install pandas.

- numpy
- matplotlib

## Application of Pandas

Pandas is a software library written for the Python programming language for data manipulation and analysis. In particular, it offers data structures and operations for manipulating numerical tables and time series. It is free software released under the three-clause BSD license.
Python with Pandas is used in a wide range of fields including academic and commercial domains including finance, economics, Statistics, analytics, etc.

## Key Features of Pandas

- Fast and efficient DataFrame object with default and customized indexing.
- Tools for loading data into in-memory data objects from different file formats.
- Data alignment and integrated handling of missing data.
- Reshaping and pivoting of date sets.
- Label-based slicing, indexing and subsetting of large data sets.
- Columns from a data structure can be deleted or inserted.
- Group by data for aggregation and transformations.
- High performance merging and joining of data.

## 1. Creating Dataframes
Most of the time we work on pre-loaded data sets in out machine learning projects but we should know how to create dataframes in case we need a customized dataset to work on a specific problem. A DataFrame is a table. It contains an array of individual entries, each of which has a certain value. Each entry corresponds to a row (or record) and a column. We are using the pd.DataFrame() constructor to generate these DataFrame objects.

```
df=pd.DataFrame(np.arange(0,20).reshape(5,4),index=['Row1','Row2','Row3','Row4','Row5'],columns=["Column1","Column2","Column3","Column4"])
# Here it creates a pandas dataframe named df which contains numbers from 1 to 20 generated using numpy arange function as an array, it has been reshaped to 5 rows,4 columns
#index is used to give labels to rows
#columns is used to give labels to columns
df.head(n=7) #displays the data upto n rows. default n=5
```
We can also make dataframes using strings, to learn that refer to the documentation.

## 2. Accessing data 
After loading/creating the dataset, we should learn how to access data.

There exists two methods -->index based and native accessors

Index based has two methods - loc and iloc
```
#This is the dataframe we created above - df

	Column1	Column2	Column3	Column4
Row1	0	1	2	3
Row2	4	5	6	7
Row3	8	9	10	11
Row4	12	13	14	15
Row5	16	17	18	19

df.iloc[0:3,0:2] #accessing 0th row to 3rd(not included) row

	Column1	Column2
Row1	0	1
Row2	4	5
Row3	8	9

df.loc[:, ['Column1', 'Column4']] # accessing all rows for columns 1 and 4

	Column1	Column4
Row1	0	3
Row2	4	7
Row3	8	11
Row4	12	15
Row5	16	19

df.Column2 #native accessor

Row1     1
Row2     5
Row3     9
Row4    13
Row5    17
Name: Column2, dtype: int32


```
## 3. Reading data from CSV files
Most of the time in data science we work on already available data set. You can download these data sets from Kaggle,datagov.in, Fivethirtyeight, Buzzfeed,AWS Public Data sets,Google Public Data sets etc
```
wine_reviews = pd.read_csv('winedata.csv') #mention the path of CSV file you want to read
```

## 4.Data Analysis using Pandas
Here we can derive conclusions from the data such as mean,average,standard deviation, median, unique value and run search queries to form a clearer insight about the data.
Some examples are :-
```
wine_reviews.points.describe() #This method generates a high-level summary of the attributes of the given column.
count    150930.000000
mean         87.888418
std          3.2223987.8884184721394
min          80.000000
25%          86.000000
50%          88.000000
75%          90.000000
max         100.000000


wine_reviews.points.mean() #gives us mean of "point" column data
87.8884184721394

wine_reviews.winery.unique()#To see a list of unique values in "winery" column
array(['Heitz', 'Bodega Carmen Rodríguez', 'Macauley', ..., 'Screwed',
       'Red Bucket', 'White Knot'], dtype=object
       

```

## 5. Grouping and Sorting

#### Grouping
Groupby essentially splits the data into different groups depending on a variable of your choice. For example, the expression data.groupby(‘points’)  will split our current DataFrame by points and count the number of times that point occurs quickly. This is used because functions like max(), min(), mean(), first(), last() can be quickly applied to the GroupBy object to obtain summary statistics for each group – an immensely useful function.
```
wine_reviews.groupby('points').points.count() 

points
80       898
81      1502
82      4041
83      6048
84     10708
85     12411
86     15573
87     20747
88     17871
89     12921
90     15973
91     10536
92      9241
93      6017
94      3462
95      1716
96       695
97       365
98       131
99        50
100       24
Name: points, dtype: int64
```
#### Sorting
Finding interesting bits of data in a DataFrame is often easier if you change the rows' order. You can sort the rows by passing a column name to .sort_values().
```
countries_reviewed.sort_values(by=['country', 'len'])
#this sort the columns country and len in ascending order
```

## 6. Handling Missing Values
Missing Data can occur when no information is provided for one or more items or for a whole unit. Missing Data is a very big problem in a real-life scenarios. Missing Data can also refer to as NA(Not Available) values in pandas. In DataFrame sometimes many datasets simply arrive with missing data, either because it exists and was not collected or it never existed. 
To check for missing values:- 
```
wine_reviews[pd.isnull(wine_reviews.country)]#checking and seeing if it has missing values
#This will display a table of dataa where NaN values exist

Unnamed: 0	country	description	designation	points	price	province	region_1	region_2	variety	winery
1133	1133	NaN	Delicate	Askitikos	90	17.0	NaN	NaN	NaN	Assyrtiko	Tsililis
1440	1440	NaN	blend Syrah	Shah	        90	30.0	NaN	NaN	NaN	Red Blend	Büyülübağ
68226	68226	NaN	first sniff    Piedra Feliz	81	15.0	NaN	NaN	NaN	Pinot Noir	Chilcas
```
we have two options either we can drop the NaN values or replace them.
To replace them :-
```
wine_reviews.region_2.fillna("Unknown") #this will replace all missing values in region2 with "Unknown" string
0                      Napa
1                   Unknown
2                    Sonoma
3         Willamette Valley
4                   Unknown
                ...        
150925              Unknown
150926              Unknown
```

To drop the NaN values:-
```
wine_reviews.dropna(axis=0)#searches in columns and deletes all the NaN Values
#this will simply drop i.e delete all the data that is NaN and display the table
```
## Working with CSV,JSON,HTML, URL'S
  #### a. We worked with CSV file above. to create our own csv file we can do the following:-
```
from io import StringIO, BytesIO
data = ('col1,col2,col3\n'
            'x,y,1\n'
            'a,b,2\n'
            'c,d,3)
df=pd.read_csv(StringIO(data)) #reads our data as a CSV

#It generates a csv file that looks like
	col1	col2	col3
0	x	y	1
1	a	b	2
2	c	d	3
```

  #### b. Working with JSON files 
  Big data sets are often stored, or extracted as JSON. JSON is plain text, but has the format of an object, and is well known in the world of programming, including Pandas.
  ```
Data = '{"employee_name": "James", "email": "james@gmail.com", "job_profile": [{"title1":"Team Lead", "title2":"Sr. Developer"}]}' #creating our own json 
pd.read_json(Data)

	employee_name	 email	                 job_profile
0	James	       james@gmail.com {'title1': 'Team Lead', 'title2': 'Sr. Develop...

  ```
  #### c. Working with HTML
  This is widely used in webscraping to extract data from websites
  ```
url = 'https://www.fdic.gov/resources/resolutions/bank-failures/failed-bank-list/index.html'
dfs = pd.read_html(url) #reading tables - webscraping technique
  ```
This saves the HTML extracted in dfs 

 #### d. Reading excel file
```
 df_excel=pd.read_excel('file.xlsx')
 #mention the path of your excel file 
```


## Advantages of using Pandas
1.  Data representation :- Pandas provide extremely streamlined forms of data representation. This helps to analyze and understand data better. 
2.  Less writing and more work done :-  Pandas helps to shorten the procedure of handling data. With the time saved, we can focus more on data analysis algorithms.
3.  An extensive set of features :- They provide you with a huge set of important commands and features which are used to easily analyze your data.
4.  Efficiently handles large data :- Pandas help to save a lot of time by importing large amounts of data very fast.
5.  Makes data flexible and customizable :- Pandas provide a huge feature set to apply on the data you have so that you can customize, edit and pivot it according to your own will and desire.

## Conclusion
Pandas is a very useful library when it comes to Data Analysis. It offers great functionalities to play with data so that you can customize, edit and pivot it according to your own will and desire. It is very efficient in dealing with large datasets and helps us to draw conclusions from the data quickly. 

To learn more about pandas visit https://pandas.pydata.org/

