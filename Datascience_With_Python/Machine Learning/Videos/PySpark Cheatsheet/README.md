# PySpark Cheatsheet

## Video Link : [PySpark Cheatsheet](https://drive.google.com/file/d/1sMWqzbSa3-D7xeiVZM8Swvhvzo8VbUgm/view?usp=sharing)

PySpark is an interface for Apache Spark in Python. It not only allows you to write Spark applications using Python APIs, but also provides the PySpark shell for interactively analyzing your data in a distributed environment.


## Configuration & Initialization

Before you get into what lines of code you have to write to get your PySpark notebook/application up and running, you should know a little bit about SparkContext, SparkSession and SQLContext.
- SparkContext — provides connection to Spark with the ability to create RDDs
- SQLContext — provides connection to Spark with the ability to run SQL queries on data
- SparkSession — all-encompassing context which includes coverage for SparkContext, SQLContext and HiveContext.


```
import pyspark
from pyspark import SparkContext
from pyspark.sql import SparkSession
from pyspark.sql import SQLContext

# create a SparkSession instance with the name moviedb with Hive support enabled
# https://spark.apache.org/docs/latest/sql-data-sources-hive-tables.html
spark = SparkSession.builder.appName("moviedb").enableHiveSupport().getOrCreate()

# create a SparkContext instance which allows the Spark Application to access 
# Spark Cluster with the help of a resource manager which is usually YARN or Mesos
sc = SparkContext.getOrCreate()

# create a SQLContext instance to access the SQL query engine built on top of Spark
sqlContext = SQLContext(spark)
```

## Reading Data
Spark supports reading from various data sources like CSV, Text, Parquet, Avro, JSON. It also supports reading from Hive and any database that has a JDBC channel available. Here’s how you read a CSV in Spark

```
# set the file_path variable in the beginning of the file
# or if your Spark application interacts with other applications, parameterize it
file_path = '/Users/kovid-r/datasets/moviedb/movies_metadata.csv'

# method 1 for reading a CSV file
df = spark.read.csv(file_path, header=True)

# method 2 for reading a CSV file
df = spark.read.format(csv_plugin).options(header='true', inferSchema='true').load(file_path)
```

Throughout your Spark journey, you’ll find that there are many ways of writing the same line of code to achieve the same result. Many functions have aliases (e.g., dropDuplicates and drop_duplicates). 

```
# Reading a csv file - all of these methods work the same for all the different formats
df = spark.read.csv(csv_file_path)
df = spark.read.format('csv').options(header=True,inferSchema=True).load(csv_file_path)
df = spark.read.format('csv').options(header='True',inferSchema='True').load(csv_file_path)
df = spark.read.format('CSV').options(header='true',inferSchema='true').load(csv_file_path)
df = spark.read.csv(file_path, header=True)
df = spark.read.csv(file_path, header='true')

# Reading a json file
df = spark.read.json(json_file_path)

# Reading a text file
df = spark.read.text(text_file_path)

# Reading a parquet file
df = spark.read.load(parquet_file_path) # or
df = spark.read.parquet(parquet_file_path)

# Reading a delta lake file
df = spark.read.format("delta").load(delta_lake_file_path)
```

## Writing Data
Once you’re done transforming your data, you’d want to write it on some kind of persistent storage.

```
# Write file to disk in parquet format partitioned by year - overwrite any existing file
df.write.partitionBy('year').format('parquet').mode('overwrite').save(parquet_file_path)

# Write file to disk in parquet format partitioned by year - append to an existing file
df.write.partitionBy('year').format('parquet').mode('append').save(parquet_file_path)

# Write data frame as a Hive table
df.write.bucketBy(10, "year").sortBy("avg_ratings").saveAsTable("films_bucketed")
```

## Creating DataFrames
Apart from the direct method df = spark.read.csv(csv_file_path) you saw in the Reading Data section above, there’s one other way to create DataFrames and that is using the Row construct of SparkSQL.

```
from pyspark.sql import Row

# populate two rows with random values
f1 = Row(original_title='Eroica', budget='13393950', year=1992)
f2 = Row(original_title='Night World', budget='1255930', year=1998)

# store the two rows in an array and pass it to Spark
films = [f1, f2]
df = spark.createDataFrame(films)

df.show()
```

There’s one more option where you can either use the .paralellize or .textFile feature of Spark to represent a file as a RDD. To convert it into a DataFrame, you’d obviously need to specify a schema. That’s where pyspark.sql.types come into picture.

```
rdd = spark.textFile(csv_file_path)

from pyspark.sql.types import StringType, StructField, StructType, IntegerType
schema = StructType([
        StructField("first_name", StringType(), True),
        StructField("last_name", StringType(), True),
        StructField("age", IntegerType(), True)
    ])
   
df = spark.createDataFrame(rdd, schema)
```

## Modifying DataFrames
DataFrames abstract away RDDs. Datasets do the same but Datasets don’t come with a tabular, relational database table like representation of the RDDs. DataFrames do. For that reason, DataFrames support operations similar to what you’d usually perform on a database table, i.e., changing the table structure by adding, removing, modifying columns. Spark provides all the functionality in the DataFrames API.

```
# Create a column with the default value = 'xyz'
df = df.withColumn('new_column', F.lit('xyz'))

# Create a column with default value as null
df = df.withColumn('new_column', F.lit(None).cast(StringType()))

# Create a column using an existing column
df = df.withColumn('new_column', 1.4 * F.col('existing_column'))

# Another example using the MovieLens database
df = df.withColumn('test_col3', F.when(F.col('avg_ratings') < 7, 'OK')\
                                 .when(F.col('avg_ratings') < 8, 'Good')\
                                 .otherwise('Great')).show()

# Create a column using a UDF

def categorize(val):
  if val < 150: 
    return 'bucket_1'
  else:
    return 'bucket_2'
    
my_udf = F.udf(categorize, StringType())

df = df.withColumn('new_column', categorize('existing_column'))
```

## Joins
The whole idea behind using a SQL like interface for Spark is that there’s a lot of data that can be represented as in a loose relational model, i.e., a model with tables without ACID, integrity checks , etc. Given that, we can expect a lot of joins to happen. Spark provides full support to join two or more datasets. 
```
# Joining two DataFrames
df1.join(df2, 'title', 'full')

# Another way to join DataFrames
df1.join(df2, 'title', how='left') 

# Cross join when you don't specify a key
df1.join(df2)

# Another way to join
df1.join(df2, df1.title == df2.title, how='left')

# PySpark supports lesser known join types such as semi left and anti left
df1.join(df2, on=['title'], how='left_anti')
df1.join(df2, on=['title'], how='left_semi')

```

## Filters
Filters are just WHERE clauses just like in SQL. In fact, you can use filter and where exchangeably in Spark. Here’s an example of filtering movies rated between 7.5 and 8.2 in the MovieLens databases movie metadata file.

```
# Filter movies with avg_ratings > 7.5 and < 8.2
df.filter((F.col('avg_ratings') > 7.5) & (F.col('avg_ratings') < 8.2)).show()

# Another way to do this
df.filter(df.avg_ratings.between(7.5,8.2)).show()
```

## Aggregates
Aggregations are at the centre of the massive effort of processing large scale data as it all usually comes down to BI Dashboards and ML, both of which require aggregation of one sort or the other. Using the SparkSQL library, you can achieve mostly everything what you can in a traditional relational database or a data warehouse query engine. 

```
# Year wise summary of a selected portion of the dataset
df.groupBy('year')\
          .agg(F.min('budget').alias('min_budget'),\
               F.max('budget').alias('max_budget'),\
               F.sum('revenue').alias('total_revenue'),\
               F.avg('revenue').alias('avg_revenue'),\
               F.mean('revenue').alias('mean_revenue'),\
              )\
          .sort(F.col('year').desc())\
          .show()

# Pivot to convert Year as Column name and Revenue as the value
df.groupBy().pivot('year').agg(F.max('revenue')).show()
```
## Window Functions & Sorting
As with most analysis engines, window functions have become quite the standard with rank, dense_rank , etc., being heavily used. Spark utilizes the traditional SQL based window function syntax of rank() over (partition by something order by something_else desc).

```
from pyspark.sql import Window

# Rank all the films by revenue in the default ascending order
df.select("title", "year", F.rank().over(Window.orderBy("revenue")).alias("revenue_rank")).show()

# Rank year-wise films by revenue in the descending order
df.select("title", "year", F.rank().over(Window.partitionBy("year").orderBy("revenue").desc()).alias("revenue_rank")).show()
```

## Advantages and conclusion 
- Simple to write
-  Framework handles errors
-  Algorithms
-  Libraries
-  Good Local Tools
-  Learning Curve
-  Ease of use
