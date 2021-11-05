# **ROOTS OF DATA SCIENCE WITH <img src="https://www.r-project.org/Rlogo.png" width="80" height="60"/>**
---


The field of data science has swept the globe. As people increasingly see the importance of the massive amounts of data being generated, every sector of research and industry has been influenced. However, in order to extract value from those data, one must be skilled in data science abilities. The R programming language has supplanted Python as the de facto data science programming language. Because of its versatility, power, sophistication, and expressiveness, it has become a valuable tool for data scientists all around the world.

## 1. **R -  HISTORY AND OVERVIEW**

<b>R</b> is an open-source programming language that is likely to be at the heart of data scientists' and executives' strong analytics, statistics, and visualisations. Data scientists all throughout the world use the open-source R statistical programming language for anything from online trend mapping to building financial and climate models that help drive our economies and communities.<br /><br />

**R** was implemented in the early 1990's by **ROBERT GENTLEMEN** & **ROSS IHAKA** at university of *Auckland*, *NEW ZEALND*.The R programming language was based on the S Language for Statistical Computing, which was developed at Bell Labs in the mid-1970s by **John Chambers**, **Rick Becker**, **Trevor Hastie**, **Allan Wilks**, and others and made public in the early 1980s. R was founded as an open source project by Robert and Ross in 1995. The R Core Group has overseen the R project since its inception in 1997. The initial version of R was released in February 2000. Ross Ihaka's description of how R came to be, illustrates some of the R-S relationships.

**S-PLUS** was the nick name given to insightful implementation of the S language, which included a lot of fancy features (primarily GUIs) on top of it. *TIBCO* purchased Insightful for $25 million in 2008. As of this writing, *TIBCO* is the sole developer and proprietor of the S programming language.

### **_1.1 BASIC FEATURES OF R_**

One of R's early advantages was that its syntax is quite similar to S, making it simple for S-PLUS users to transition. While the syntax of R is essentially identical to that of S, the semantics of R are significantly different. In reality, when it comes to how R operates under the hood, it is considerably closer to the Scheme language than it is to the original S language.

R now runs on nearly every common computing platform and operating system. Because of its open source nature, anyone can adapt the software to any platform they want. R has been claimed to run on current tablets, phones, PDAs, and video gaming consoles.

R, like many other prominent open source projects, has a habit of releasing new versions on a regular basis. These days, there is a big annual release, usually in October, that incorporates and releases substantial new features to the public. Smaller-scale bugfix releases will be produced as needed throughout the year. Frequent releases and a consistent release cycle show active software development and ensure that defects are addressed promptly. While the core developers maintain control of the major source tree for R, many others from all around the world contribute new features, problem fixes, or both.

Finally, one of the benefits of R is the active and lively user community. A language is successful in many ways because it provides a platform for many people to build new things. R is that platform, and thousands of people from all over the world have banded together to contribute to it, develop packages, and assist one another in using it for a variety of purposes. For almost a decade, the R-help and R-devel mailing lists have been very active, and there is also a lot of activity on sites like Stack Overflow.

### **_1.2 LIMITATIONS OF R_**
There is no such thing as a flawless programming language or statistical analysis system. There are a lot of disadvantages to using R. For starters, R is built on technology that dates back almost 50 years, to the original S system developed at Bell Labs. There was minimal built-in support for dynamic or 3-D graphics at first (but things have substantially improved since the "old days").

Another widely stated R limitation is that objects must be stored in physical memory in most cases. This is partly due to the language's scoping requirements, although R in general uses more memory than other statistical tools. However, a number of improvements have been made to address this, both in the R core and in a number of contributor-developed packages. Furthermore, computational power and capacity have increased over time, and the amount of physical memory that can be loaded on even a low-cost laptop is significant.

> Roger D. Peng: I don’t think anyone actually believes that R is designed to make everyone happy. For me, R does about 99% of the things I need to do, but sadly, when I need to order a pizza, I still have to pick up the telephone.

> Douglas Bates: There are several chains of pizzerias in the U.S. that provide for Internet-based ordering (e.g. www.papajohnsonline.com) so, with the Internet modules in R, it’s only a matter of time before you will have a pizza-ordering function available.

> Brian D. Ripley: Indeed, the GraphApp toolkit (used for the RGui interface under R for Windows, but Guido forgot to include it) provides one (for use in Sydney, Australia, we presume as that is where the GraphApp author hails from). Alternatively, a Padovian has no need of ordering pizzas with both home and neighbourhood restaurants ….

## **2. GETTING STARTED WITH R**
### **_2.1 INSTALLATION_**
The first step in getting started with R is to download and install it on your computer. R runs on almost any platform, including the widely used Windows, Mac OS X, and Linux operating systems.

RStudio has also created an integrated development environment for R. This IDE appeals to me because it includes a decent editor with syntax highlighting, a R object viewer, and a lot of other useful features.

### **_2.2 USING THE R INTERFACE FOR THE FIRST TIME_**
R must be launched after installation before you can begin creating R code. Before we get into the details of how to build R code, it's a good idea to gain a sense of how the system works.

## **3. R TOOLS**
### **_3.1 R - INPUT_**
We type expressions at the R prompt. The assignment operator is represented by the `<-` symbol.

```
> x <- 1

> print(x)

[1] 1

> x

[1] 1

msg <- "hello"

```

### **_3.2 ASSESSMENT_**
When you input a complete phrase at the prompt, it is evaluated, and the result of the evaluation is returned. It's possible that the result will be printed automatically.

```> x <- 5
> x    

[1] 5

> print(x)
 
[1] 5
```

The [1] indicates that x is a vector with 5 as its first element in the output.

Typically, we do not manually print objects with the print function in interactive work; it is much faster to simply auto-print them by typing the object's name and pressing return/enter. However, because auto-printing does not operate in those situations, it is occasionally necessary to explicitly print objects while constructing scripts, functions, or lengthier programmes.

When you print a R vector, you'll see that an index for the vector is written on the side in square brackets []. Take, for example, this 20-number integer sequence.

### **_3.3 R - OBJECTS_**
R has five basic or "atomic" object classes:

* character

* number (real numbers)

* integer

* complex

* (True/False) logic

A vector is the most fundamental sort of R object. The vector() function can be used to construct empty vectors. In R, there is only one rule regarding vectors: a vector can only include objects of the same class.

But, like with any good rule, there is an exception, and that exception is a list, which we shall discuss later. A list is represented as a vector, although it might include objects of various kinds. That is, in most cases, why we employ them.

There's also a class for "raw" objects, but they're rarely used in data analysis, so I won't go into them here.

### **_3.4 R - NUMBERS_**
In R, numbers are usually regarded as numeric objects (i.e. double precision real numbers). This means that even if you encounter numbers like "1" or "2" in R, which you would conceive of as integers, they're most likely numeric objects (thus "1.00" or "2.00"). Most of the time, this isn't significant...except when it is.


You must use the L suffix if you explicitly desire an integer. When you type 1 in R, you get a numeric object; when you type `1L`, you get an integer object.



In addition, there is a special number `Inf` that represents infinity. We can now represent entities like `1 / 0` in this way.In this form, Inf can be utilised in everyday calculations; for example, `1 / Inf` equals 0.

The value `NaN` denotes an undefined value ("not a number"); for example, `0 / 0`; NaN can also be considered a missing value

### **_3.5 R - ATTRIBUTES_**
Attributes, which are similar to metadata for R objects, can be added to them. These metadata can be quite helpful in describing an object. Column names on a data frame, for example, can help us figure out what data is in each column. The following are some instances of R object attributes:

* dimnames, names

* proportions (e.g. matrices, arrays)

* group (e.g. integer, numeric)

* length

* any attributes/metadata defined by other user

The attributes() function can be used to obtain an object's (if any) attributes. The attributes() function returns NULL if a R object does not have any attributes.

### **_3.6 OBJECT COMBINATION_**
There are times when different R object classes are merged together.

```
> y <- c(1.7, "a")

> y <- c(TRUE, 2)  

> y <- c("a", TRUE)
```

In each of the examples above, we're using a vector to combine items from two separate classes. However, keep in mind that the only rule about vectors states that this is not permitted. When distinct objects are merged in a vector, coercion occurs, resulting in all of the vector's elements being of the same class.

The effect of implicit coercion can be seen in the case above. R tries to figure out how to represent all of the objects in the vector in a logical way. This sometimes does precisely what you want, and other times it doesn't. Because numbers can usually be represented as strings, combining a numeric object with a character object will result in a character vector.

### **_3.6 R - LIST_**
Lists are a form of vector that can hold elements from several classes. Lists are a crucial data type in R, and you should learn them thoroughly. Lists are a strong combo when combined with the different "apply" functions explained later.

The list() method, which takes an arbitrary number of arguments, can be used to generate lists explicitly.

### **_3.7 R - FACTORS_**
Factors can be sorted or unordered and are used to describe categorical data. A factor can be thought of as an integer vector with labels for each integer. Factors are crucial in statistical modelling, and modelling procedures like lm() and glm() treat them differently ().

Because factors are self-describing, using factors with labels is preferable than using integers. A variable with the values "Male" and "Female" is preferable to one with the values 1 and 2.

The factor() function can be used to construct factor objects.


### **_3.8 R - MISSING VALUES_**
For q undefined mathematical operations, missing values are denoted by NA or NaN.

`is.na()` is used to determine whether or not an object is NA.

The function `is.nan()` is used to check for `NaN` values.

There are different classes for NA values, such as integer `NA`, character `NA`, and so on.

A `NaN` value is also NA, but not the other way around.

### **_3.9 R - DATA FRAMES_**
In R, data frames are used to hold tabular data. They're a crucial form of object in R, and they're utilised in a wide range of statistical modelling applications. The dplyr package by Hadley Wickham has an optimised set of utilities for working with data frames.

Data frames are expressed as a special form of list in which each entry must be the same length. The length of each member of the list is the number of rows, and each element of the list can be thought of as a column.

Data frames, unlike matrices, can hold different types of objects in each column. Every element in a matrix must be of the same class (e.g. all integers or all numeric).
Data frames feature a specific characteristic called row.names that indicates information about each row of the data frame in addition to column names, which give the names of the variables or predictors.

Typically, data frames are constructed by reading in a dataset with the read.table() or read.csv() functions (). Data frames, on the other hand, can be generated manually with the data.frame() function or coerced from other sorts of objects such as lists.

Data frames can be transformed to matrices by using the data.matrix function (). While it may appear that the as.matrix() function should be used to convert a data frame to a matrix, the return of data.matrix() is nearly always what you want ().

### **_3.10 R - MATRICES_**
Vectors with a dimension property are called matrices. The dimension attribute is a two-dimensional integer vector (number of rows, number of columns).

```
> m <- matrix(nrow = 2, ncol = 3)

> m

[,1] [,2] [,3]

[1,]   NA   NA   NA

[2,]   NA   NA   NA

> dim(m)

[1] 2 3

> attributes(m)

> $dim

[1] 2 3
```

### **_3.11 R - SUMMARY_**
In R, there are a variety of built-in data types. We've gone through the following topics in this chapter:

* Numeric, logical, character, integer, and complex atomic classes

* lists, vectors

* factors

* values that are missing

* matrices and data frames

## 4. **IMPORTING AND EXPORTING DATA WITH R**

### **_4.1 DATA READING AND WRITING_**
Reading data into `R` is made up of a few main functions.

* For reading tabular data, use `read.table` and `read.csv`.
* `readLines` is used to read lines from a text file source and to read R code files (inverse of dump)
* `dget` is a tool for reading R code files (inverse of dput)
* `load`, for reading in workspaces that have been saved
* For reading single R objects in binary form, use `unserialize`.

### **_4.2 USING READ.TABLE TO READ DATA FILES ()_**

One of the most widely used functions for reading data is the `read.table()` function. The `read.table()` help file is worth reading in its full, if only because the method is frequently used (in R, type?read.table). Everyone always recommends to read the help file, but this one is truly worth it.
There are a few key arguments to the read.table() function:

* `file`, a file's name, or a connection header, a logical indicator of whether or not the file has a header line
* `sep` is a string that indicates how the columns are divided.
* `nrows`, the number of rows in the dataset. colClasses, a character vector representing the class of each column in the dataset. * `Read.table()` reads the entire file by default.
* `comment.char` is a string of characters that represents the comment character. This is equivalent to "#." It's worth setting this to the empty string "" if your file has no commented lines.
the number of lines to skip starting at the beginning.
A few key arguments are passed to the read.table() function:
* `stringsAsFactors`: This defaults to TRUE

### **_4.3 USING READ.TABLE TO READ LARGER DATASETS_**
There are a few things you can do with much larger datasets to make your life simpler and avoid R from choking.

* Read the read.table help page, which includes a wealth of information.

* Make an approximate estimate of how much memory you'll need to keep your data (see the next section for an example of how to do this). You can probably end right here if the dataset is larger than the amount of RAM on your PC.

* Make a comment.

* char = "" if your file has no commented lines.

* The colClasses argument is used. Instead of using the default, using this option can make'read. table's run at a much faster rate, frequently twice as quickly.

### **_4.4 CALCULATING MEMORY REQUIREMENTS FOR R OBJECTS_**
Because R keeps all of its objects in physical memory, it's crucial to keep track of how much memory each data item in your workspace is consuming. When reading in a new dataset into R, it's very crucial to understand memory needs. Fortunately, calculating how much RAM a new dataset will require is a simple back-of-the-envelope computation.


`1,500,000 × 120 × 8 bytes/numeric | = 1,440,000,000 bytes |
| = 1,440,000,000 / 220 bytes/MB
| = 1,373.29 MB
| = 1.34 GB
So the dataset would require about 1.34 GB of RAM.`

As a result, the dataset would take approximately 1.34 GB of RAM.

## **5 HOW TO USE THE READR PACKAGE**
Hadley Wickham recently created the readr package to cope with fast reading big flat files. The package includes replacements for `read.table()` and `read.csv()` `routines ()`. `read table()` and read csv() are readr's equivalent functions (). These functions are frequently much faster than their R counterparts, and they come with a few extra features like progress metres.

For the most part, read table() and read csv() can be used almost anyplace `read.table()` and `read.csv()` can be used (). Furthermore, if non-fatal errors occur while reading in the data, you will receive a warning, and the returned data frame will include information about which rows/observations caused the warning. This can be quite useful for “debugging” data problems before you get too far into data analysis.

From a historical standpoint, the value of the read csv function is arguably more appreciated.

## **6 DATA STORAGE IN TEXTUAL AND BINARY FORMATS**

Data can be saved in a variety of formats, including structured text files like CSV or tab-delimited files, as well as more complicated binary formats. However, there is a textual intermediate format that is not as straightforward as CSV. Because of its textual character, the format is natural to R and reasonably readable.

The `dput()` and `dump()` functions can be used to provide a more descriptive representation of a R object. The `dump()` and `dput()` routines are handy because the output textual format is editable and perhaps recoverable in the event of corruption.
Version control methods like subversion or git, which can only track changes in text files, function significantly better with textual formats. Furthermore, textual formats can last longer; if a file is corrupted, it may be easier to remedy the problem by simply opening the file in an editor and inspecting it (though this should only be done in the worst-case scenario!). Finally, if it means anything to you, textual forms follow the Unix ideology.

### **_6.1 USING THE DPUT() AND DUMP() FUNCTIONS ()_**
Deparsing the R object with `dput()` and reading it back in (parsing it) with `dget()` is one technique to pass data around ().



```
> y <- data.frame(a = 1, b = "a")

> dput(y)                      
 
> structure(list(a = 1, b = "a"), class = "data.frame", row.names = c(NA,-1L))
```

It's worth noting that the `dput()` output is in R code and includes metadata such as the object's class, row names, and column names.

`Dput`(output )'s can also be saved to a file directly.

### **_6.2 BINARY FORMATS_**

The binary format is a complement to the textual format, and it's occasionally necessary to use it for efficiency or because there's no other method to represent data in a textual format. Also, when translating numeric data to and from a textual format, precision can be lost, thus it's best to remain with a binary format.

The `save()`, `save.image()`, and `serialise` procedures are essential for converting R objects to binary format (). The `save()` function can be used to save individual R objects to a file.

```
> a <- data.frame(x = rnorm(100), y = runif(100))

> b <- c(3, 4.4, 1 / 3)

> save(a, b, file = "mydata.rda")

> load("mydata.rda")   
```
If you have a large number of objects to save to a file, you can use the `save.image()` function to save all objects in your workspace.

```
> save.image(file = "mydata.RData")   

> load("mydata.RData")   
```

When using `save()`, I used the.rda extension, and when using `save.image`, I used `the.RData` extension (). This is just my personal taste; you are free to choose any file extension. The save() and `save.image()` routines are unconcerned about this. However, the extensions `.rda` and `.RData` are pretty common, and you may wish to use them since other software recognises them.

Individual R objects are converted to a binary format that may be sent across any network using the serialise() function. This could be saved to a file or transmitted across a network or other medium.      

## **7. THE OUTSIDE WORLD'S INTERFACES**

Connection interfaces are used to read data. Connections can be created to files (which are the most frequent) or to more unusual objects.

* file, opens a file connection `gzfile`, opens a file connection.
* compressed with `gzip`
* `bzfile`, opens a file connection compressed with `bzip2`
* `url`, opens a webpage connection.

Connections, in general, are useful tools for navigating files and other external objects. Connections can be viewed as a translator that allows you to communicate with items outside of R. A data base, a simple text file, or a web service API are all examples of external objects. R functions can communicate with all of these distinct external objects through connections, so you don't have to develop special code for each one.

### **_7.1 FILE CONNECTIONS_**
The `file()` function can be used to connect to text files.

```
> str(file)

> function (description = "", open = "", blocking = TRUE, encoding = getOption("encoding"),raw = FALSE, method = getOption("url.method", "default"))
```
    
Because the file() function contains several arguments that are shared by many other connection functions, it's worth going over them in depth.

open is a code that indicates what mode the file should be opened in. description is the file's name.
  The possibilities available with the open argument are as follows:

* `r` is a command that opens a file in read-only mode.
* `w` creates a new file for writing (and initialising a new file)
* `a` appends to a file `rb`, `wb`, `ab` reads, writes, or appends in binary mode (Windows).


### **_7.2 READING A TEXT FILE'S LINES_**

The readLines() function can read text files line by line. This function is useful for reading unstructured text files that contain non-standard data.

```
> con <- gzfile("words.gz")   

> x <- readLines(con, 10)

> x

[1] "1080"     "10-point" "10th"     "11-point" "12-point" "16-point" [7] "18-point" "1st"      "2"        "20-point"

```
 
Other functions such as `read.csv()` and `read.table()` can be used to read more organised text data such as CSV or tab-delimited files ().

The `gzfile()` method was used in the last example to make a connection to files compressed using the gzip algorithm. This method is advantageous because it allows you to read from a file without first having to uncompress it, which would be a waste of space and effort.

A companion function, `writeLines()`, takes a character vector and writes each element of the vector to a text file one line at a time.

### **_7.3 USING A URL CONNECTION TO READ_**
For reading in lines of webpages, the `readLines()` function can be beneficial. Because web pages are essentially text files kept on a remote server, there isn't much of a distinction between a web page and a local text file from a conceptual standpoint. R, on the other hand, is required to negotiate communication between your computer and the web server. By creating a url connection to a web server, the `url()` function can help you with this.

## **8 R OBJECTS SUBSTITUTING**
To extract subsets of R objects, you can use one of three operations.

The `[`operator always returns the same class of object as the original. It can be used to select several objects' elements.

The `[[` operator is used to extract list or data frame elements. It can only extract a single element, and the resulting object's class does not have to be a list or a data frame.

The `$` operator is used to extract literal names from a list or data frame. It has semantics that are comparable to `[[`.

### **_8.1 SUBSETTING A VECTOR_**
In `R`, vectors are fundamental objects that may be **subsetted** with the [ operator.

```
> x <- c("a", "b", "c", "c", "d", "a")  

> x[1]

[1] "a"

x[2]    [1] "b"
```


### **_8.2 SUBSETTING A MATRIX_**

Matrices can be subsetted using (i,j) type indices in the normal way. Using the matrix function, we can generate a simple 2 3 matrix.

```
> x <- matrix(1:6, 2, 3)

> x

 [,1] [,2] [,3]

 [1,]    1    3    5

 [2,]    2    4    6
 ```

Using the relevant indices, we may access either the `( 1, 2 )` or `( 2, 1 )` member of this matrix.

### **_8.3LISTS OF SUBSETS_**
All three of the operations stated above can be used to subsette lists in R, and each is employed for a different purpose.

```
> x <- list(foo = 1:4, bar = 0.6)

> x

> $foo

[1] 1 2 3 4

> $bar

[1] 0.6
```

Single elements from a list can be extracted using the `[[` operator. The first element of the list is extracted here.

```
> x[[1]]

[1] 1 2 3 4
```

### **_8.4 SUBSETTING A LIST'S NESTED ELEMENTS_**

If you want to extract a nested element of a list, the `[[` operator can take an integer sequence.

```
> x <- list(a = list(10, 12, 14), b = c(3.14, 2.81))

> x[[c(1, 3)]]  

[1] 14
 
 
> x[[1]][[3]]   

[1] 14

> x[[c(2, 1)]]  

[1] 3.14
 ```

### **_8.5 EXTRACTING MULTIPLE LIST ELEMENTS_**
Multiple elements from a list can be extracted using the `[`operator. If you wanted to extract the first and third members of a list, for example, you would perform the following.

```
> x <- list(foo = 1:4, bar = 0.6, baz = "hello")

> x[c(1, 3)]

> $foo

[1] 1 2 3 4

> $baz

[1] "hello"
```

Note that `x[c(1, 3)]` and `x[[c(1, 3)]` are not the same thing.

Always keep in mind that the `[`operator returns an object of the same class as the original. The `[operator]` returns a list because the initial object was a list. We got a list with two elements from the code above (the first and the third).

### **_8.6 MATCHING IN PARTS_**

With `[[`and `$`, partial name matching is possible. If the object you're dealing with has really long element names, this is typically incredibly handy during interactive work. Simply abbreviate their names, and R will figure out which element you're talking about.


### **_8.7 GETTING RID OF NA VALUES_**
The removal of missing values is a common task in data analysis (NAs).
```
> x <- c(1, 2, NA, 4, NA, 5)

> bad <- is.na(x)

> print(bad)

[1] FALSE FALSE  TRUE FALSE  TRUE FALSE

> x[!bad]

[1] 1 2 4 5
```
## 9. **OPERATIONS THAT ARE VECTORIZED**

Many R operations are vectorized, which means they happen in parallel in particular R objects. This makes it possible to produce code that is more efficient, concise, and easier to comprehend than code written in non-vectorized languages.

The most basic example is when two vectors are added together.
```
> x <- 1:4

> y <- 6:9

> z <- x + y

> z

[1]  7  9 11 13
```
### **_9.1 VECTORIZED MATRIX OPERATIONS_**  
Matrix operations are vectorized as well, resulting in a very succinct notation. We can now perform element-by-element actions on matrices without having to loop through all of them.
```
> x <- matrix(1:4, 2, 2)

> y <- matrix(rep(10, 4), 2, 2)
 
> x * y       

[,1] [,2]

[1,]   10   30
[2,]   20   40

> x / y       

[,1] [,2]

[1,]  0.1  0.3

[2,]  0.2  0.4

> x %*% y     

[,1] [,2]

[1,]   40   40

[2,]   60   60

```


## **10. TIMES AND DATES**

For dates and times, R has devised a unique representation. The Date class represents dates, while the `POSIXct` and `POSIXlt` classes represent times. Internally, dates are recorded as the number of days from January 1, 1970, and times are stored as the number of seconds since January 1, 1970.

To utilise dates and times in R, you don't need to understand their internal representation. I just thought those were interesting information.



### **_10.1 R - DATES_**

The Date class represents dates, which can be coerced from a character string using the as method. Date() is a function that returns a date. In R, this is a typical approach to get a Date object.
```
> x <- as.Date("1970-01-01")   

> x

[1] "1970-01-01"
```
### **_10.2 R - TIMES_**
The `POSIXct` or `POSIXlt` classes are used to represent times. Under the hood, `POSIXct` is essentially a very huge integer. When you wish to store times in something like a data frame, you can use this class. `POSIXlt` is a list that holds a variety of other important information such as the weekday, yearday, month, and day of the month. When you need that kind of information, this is helpful.


To help you extract bits of dates and/or times, there are a variety of general functions that work with dates and times.



* Weekdays: state which day of the week it is.

* months: write the month's name in the box.

* Give the quarter number ("Q1," "Q2," "Q3," or "Q4").

The `as.POSIXlt` or `as.POSIXct` functions can be used to convert times from a character string.

### **_10.3 DATES AND TIMES OPERATIONS_**

On dates and times, you can do mathematical calculations. Actually, it's just `+ `and `-`. You can also make comparisons (e.g. ==, ==).
```
> x <- as.Date("2012-01-01")

> y <- strptime("9 Jan 2011 11:34:21", "%d %b %Y %H:%M:%S")

> x-y

> x <- as.POSIXlt(x)

> x-y

Time difference of 356.3095 days

```

## **11. USING THE DPLYR PACKAGE TO MANAGE DATA FRAMES**

### **_11.1 DATA FRAMES_**

In statistics and R, the data frame is an important data structure. A data frame's basic structure is that each row represents one observation, and each column represents a variable, a measure, a feature, or a characteristic of that observation. R contains an internal implementation of data frames that you'll probably use the most. However, there are packages on CRAN that implement data frames using relational databases, allowing you to work with really big data sets (although we won't go into them here).

Given the importance of data frames, it's critical that we have effective tools to manage them. We've previously covered various techniques for extracting subsets of data frames in previous chapters, such as the subset() function and the use of the [and $ operators. Other procedures, such as filtering, reordering, and collapsing, might, nevertheless, be time-consuming in R due to its cryptic syntax. The `dplyr` package is intended to address many of these issues by providing a highly optimised set of methods for working with data frames.

### **_11.2 DPLYR PACKAGE_**
**Hadley Wickham** of RStudio created the `dplyr` package, which is an optimised and distilled version of his `plyr` tool. The` dplyr` package does not provide any "new" capability to R in the sense that everything it does can be done with basic R, but it considerably simplifies existing R capabilities.

The `dplyr` package makes a significant addition by providing a "grammar" (specifically, verbs) for data manipulation and data frame operations. With this syntax, you can describe what you're doing to a data frame in a way that others can comprehend (assuming they also know the grammar). This is useful because it gives a previously unavailable abstraction for data manipulation. The `dplyr` functions are also highly fast, thanks to the fact that many critical operations are written in C++.


### **_11.3 DPLYR GRAMMAR_**
The `dplyr` package includes a number of useful "verbs".

* `select`: returns a subset of a data frame's columns using a flexible notation.

* `filter`: depending on logical conditions, extract a subset of rows from a data frame.

* `reorder` the rows in a data frame

* `rename`: a data frame's variables can be renamed.

* `mutate`: Add new variables/columns or alter current variables by mutating them.

* `summarise / summarize`:create summary statistics for different variables in the data frame, maybe within strata

* `%>%`: The pipe operator is used to join numerous verb actions into a pipeline.


### **_11.4 DPLYR PACKAGE INSTALLATION_**
The `devtools` package and the install **github()** function can be used to install the `dplyr` package from **CRAN** or **GitHub**. The GitHub repository will usually have the most recent package and development version updates.

Simply execute the following command to install from CRAN.
```
> install.packages("dplyr")
```
You can execute the following command to install from GitHub.
```
> install_github("hadley/dplyr")
```

It's critical to use the `library()` method to load the package into your R session after it's been installed.
```
> library(dplyr)
```


### **_11.5  SELECT()_**
After unzipping the archive, use the `readRDS()` method to load the data into R.
```
> chicago <- readRDS("chicago.rds")
```

The `choose()` function can be used to focus on one or more columns in a data frame. You may have a big data frame with "all" of the data, but each analysis may only use a subset of variables or observations. You can use the `select()` function to get the few columns you require.

### **_11.6 FILTER()_**

A data frame's `filter()` method is used to extract subsets of rows. This function is comparable to R's existing `subset()` function, but in my experience, it is much faster.

If we wanted to remove the rows of the Chicago data set where PM2.5 readings are greater than 30 (a reasonable level), we could do so.
```
> chic.f <- filter(chicago, pm25tmean2 > 30)

> str(chic.f)

data.frame:	194 obs. of  8 variables:
$ city      : chr  "chic" "chic" "chic" "chic" ...
$ tmpd      : num  23 28 55 59 57 57 75 61 73 78 ...
$ dptp      : num  21.9 25.8 51.3 53.7 52 56 65.8 59 60.3 67.1 ...
$ date      : Date, format: "1998-01-17" "1998-01-23" ...
$ pm25tmean2: num  38.1 34 39.4 35.4 33.3 ...
$ pm10tmean2: num  32.5 38.7 34 28.5 35 ...
$ o3tmean2  : num  3.18 1.75 10.79 14.3 20.66 ...
$ no2tmean2 : num  25.3 29.4 25.3 31.4 26.8 ...
```
 
### **_11.7 ARRANGE()_**
The arrange() function rearranges rows in a data frame based on one of the variables/columns. In R, reordering rows of a data frame (while maintaining the order of other columns) is usually a hassle. The arrange() method greatly simplifies the procedure.

The data frame's rows can be sorted by date, with the first row representing the oldest (oldest) observation and the last row representing the most recent (most recent) observation.
```
> chicago <- arrange(chicago, date)
 ```
 
### **_11.8 RENAME()_**
 ```
> head(chicago[, 1:5], 3)

> city tmpd dptp       date pm25tmean2

1 chic   35 30.1 2005-12-31   15.00000
2 chic   36 31.0 2005-12-30   15.05714
3 chic   35 29.4 2005-12-29    7.45000
```
The dew point temperature is expected to be represented by the `dptp` column, whereas the PM2.5 data is provided by the pm25tmean2 column. These names, however, are either obscure or awkward, and should be altered to something more appropriate.

### **_11.9 MUTATE()_**

The `mutate()` method is used to compute variable modifications in a data frame. You'll frequently need to create new variables that are derived from existing variables, and `mutate()` gives a simple way to do so.

When dealing with data on air pollution, for example, we frequently want to detrend the data by subtracting the mean. That manner, we can see if the level of air pollution on a certain day is more or lower than typical (as opposed to looking at its absolute level).

The pm25detrend variable is created by subtracting the mean from the pm25 variable.


### **_11.10 GROUP_BY()_**
The `group by()` function is used to create summary statistics from a data frame that has been divided into strata by a variable. For example, you could be interested in knowing the average annual level of PM2.5 in this air pollution dataset. So the stratum is the year, which we can figure out from the date variable. We frequently utilise the `summary()` method (or summarise() in other parts of the world) in conjunction with the `group by()` function.

Splitting a data frame into discrete chunks defined by a variable or group of variables (group by()) and then applying a summary function across those subsets (summarise()) is the main procedure here.

### **_11.11 %>%_**
For connecting together many dplyr functions in a sequence of actions, the pipeline operator percent > percent comes in handy. Notice how whenever we tried to apply many functions, the sequence gets buried in a nested function call sequence that is difficult to read, i.e.
```
> third(second(first(x)))
```
This isn't a natural way of thinking about a series of operations. The percent > percent operator enables you to string operations from left to right, i.e.
```
> first(x) %>% second %>% third
```
Consider the example from the previous section, where we computed the mean of o3 and no2 within PM25 quintiles. We had to do something there.

* make a new variable called pm25.

* that new variable is used to partition the data frame

* calculate the average of o3 and no2 in the subgroups indicated by pm25.

## **12. STRUCTURES OF CONTROL**

Control structures in R allow you to direct how a series of R expressions are executed. Control structures, in essence, allow you to add "logic" to your R code rather than merely executing the same R code over and over. Control structures allow you to respond to user inputs or data features by executing distinct R expressions.

The following are some of the most commonly used control structures:

* `if and else`: determining a condition and taking action in response to it

* `for`: run a loop a certain amount of times

* `while`: while a condition is true, run a loop.

* `repeat`: run a never-ending cycle (must break out of it to stop)

* `break`: stop a loop from running.

* `next`: skip a loop's intermission

### **_12.1 IF-ELSE_**
The `if-else` control structure is arguably the most often used in R. (or perhaps any language). This structure enables you to test a condition and take action based on whether it is true or false.

To begin, you can simply use the if statement.
```
> if("condition") {}

> else {}
```
### **_12.2 FOR LOOPS_**

In R, for loops are really the only looping construct you'll need. While different types of loops may be required on occasion, in my experience doing data analysis, I've only come across a few instances where a for loop isn't sufficient.

For loops in R assign successive values from a sequence or vector to an interator variable. For loops are most typically used to iterate over an object's elements (list, vector, etc.)

### **_12.3 NESTED FOR LOOP_**

Loops in for loops can be nested inside loops in for loops in for loops in for loops in for loops in for loop.
```
x <- matrix(1:6, 2, 3)

for(i in seq_len(nrow(x))) {
        for(j in seq_len(ncol(x))) {
                print(x[i, j])
        }   
}
```
### **_12.4 WHILE LOOPS_**

`While` loops begin by determining whether or not a condition exists. If it is true, the loop body is executed. The condition is tested again after the loop body is completed, and so on, until the condition is false, at which point the loop ends.
```
> count <- 0

> while(count < 10) {

> print(count)

> count <- count + 1

> }

[1] 0
[1] 1
[1] 2
[1] 3
[1] 4
[1] 5
[1] 6
[1] 7
[1] 8
[1] 9
```
### **_12.5 REPEAT LOOPS_**

From the beginning, `repeat` starts an unending loop. These aren't typically utilised in statistical or data analysis applications, although they can be useful. Break is the only means to get out of a recurring loop.
```
> x0 <- 1

> tol <- 1e-8

> repeat {

>   x1 <- computeEstimate()
        
>  if(abs(x1 - x0) < tol) {

>   break

>   } else {

>   x0 <- x1

>  }

>}
```
### **_12.6 NEXT, BREAK_**
`next` is used to skip a loop iteration.
```
> for(i in 1:100) {

> if(i <= 20) {

>   next                 

> }

>}
```
`Break` is used to quickly quit a loop, regardless of the loop's iteration.
```
> for(i in 1:100) {

> print(i)

> if(i > 20) {

>  break  

>  }
	
>}
```

## **13.  FUNCTIONS**

An R programmer's primary task is to write functions. It is a crucial step in the progression from a mere "user" to a developer who adds new R capabilities. Functions are frequently used to encapsulate a set of expressions that must be run repeatedly, maybe under slightly varying conditions. When code must be shared with others or the public, functions are frequently used.

A developer can establish an interface to the code by writing a function that is expressly described with a set of parameters. Potential consumers can see the code through this interface, which abstracts it. This abstraction makes life easier for users by removing the need to understand every aspect of how the code works. Furthermore, the construction of an interface allows the developer to explain to the user the most significant or relevant components of the code.

### **_13.1  R - FUNCTIONS_**

R functions are "first class objects," which means they can be used in the same way as any other R object. Importantly,

* Other functions can take parameters from functions. This comes in helpful when using apply routines like `lapply()` and `sapply()`.

* Functions can be nested, allowing you to define one function inside another.

### **_13.2 MATCHING ARGUMENTS_**

There are several ways to call a R function with arguments. This may appear to be perplexing at first, but it's quite useful when working interactively at the command line. Arguments to R functions can be matched by position or by name. R just assigns the first value to the first argument, the second value to the second argument, and so forth. As a result, in the call to `rnorm()` that follows
```
> str(rnorm)

> function (n, mean = 0, sd = 1)  

> mydata <- rnorm(100, 2, 1)  
```
By positional matching, the n argument is assigned 100, the mean argument is assigned 2, and the sd argument is assigned 1.

The calls to the `sd()` function (which computes the empirical standard deviation of a vector of values) that follow are all equivalent. It's worth noting that `sd()` takes two arguments: x denotes a number vector, and `na.rm` denotes whether or not missing values should be deleted.

### **_13.3  LAZY EVALUATION_**

Arguments to functions are evaluated asynchronously, which means they are only evaluated when they are needed in the function's body.

The method f() has two arguments in this example: `a` and `b`.
```
> f <- function(a, b) {

> a^2

> }

> f(2)

[1] 4
```
Because the 2 is positionally matched to a, invoking f(2) will not result in an error because the function never uses the parameter b. This behaviour can be beneficial or harmful. Because R never throws an error, it's common to build a function that doesn't take an argument and go unnoticed.

### **_13.4 `...` ARGUMENT_**
The `...` argument is a special argument in R that indicates a variable number of arguments that are frequently passed on to other functions. When you wish to extend another function but don't want to replicate the original function's whole argument list, you can use the... argument.

A custom plotting function, for example, might want to use the default plot() function and all of its arguments. The code below sets type = "l" as the default value for the type argument (the previous default was type = "p").
```
> myplot <- function(x, y, type = "l", ...) {

> plot(x, y, type = type, ...)        

> }
```
Generic functions use `...` to pass additional arguments to methods.

### **_13.5 ARGUMENTS FOLLOWING THE `...`_**

One caveat with `...` is that any arguments after... on the argument list must be explicitly stated and cannot be partially or positionally matched.

Take a look at the paste() function's arguments.
```
> args(paste)

> function (..., sep = " ", collapse = NULL, recycle0 = FALSE)

NULL
```
If the default values are not to be utilised, the arguments sep and collapse must be named explicitly and in full with the `paste()` method.

I indicate that "a" and "b" should be pasted together and separated by a colon in this case.
```
> paste("a", "b", sep = ":")

[1] "a:b"
```


I don't obtain the intended result if I don't specify the sep argument in full and rely on partial matching.
```
> paste("a", "b", se = ":")

[1] "a b :"
```

## **14. R'S SCOPING RULES**

### **_14.1 A DETOUR FROM THE SUBJECT OF BINDING VALUES TO SYMBOLS_**
How does R know which symbol gets which value? When it is given.
```
> lm <- function(x) { x * x }

> lm

function(x) { x * x }
```

How does R figure out what value to give the symbol lm? Why isn't it giving it the lm value from the stats package?

When R tries to bind a value to a symbol, it looks for the suitable value in a sequence of environments. When you're working on the command line and need to get the value of a R object, the following is generally the order in which things happen.

* Look for a symbol with the same name as the one requested in the global environment (i.e. your workspace).

* Search each of the packages on the search list's namespaces.

```
> search()

[1] ".GlobalEnv"        "package:stats"     "package:graphics"
[4] "package:grDevices" "package:utils"     "package:datasets"
[7] "package:methods"   "Autoloads"         "package:base"   

```
### **_14.2 SCOPING GUIDELINES_**

The key aspect that distinguishes R from the original S language is its scoping rules (in case you care about that). This may appear to be a specialised feature of R, yet it is one of its most intriguing and valuable properties.

A language's scope rules dictate how a value is linked to a free variable in a function. R employs either lexical or static scoping. Dynamic scoping, which is implemented by several languages, is an alternative to lexical scoping. Lexical scoping has proven to be particularly effective for reducing the complexity of statistical calculations.

How R utilises the search list to bind a value to a symbol is related to the scoping rules.

Consider the function below.
```
> f <- function(x, y) {

> x^2 + y / z

> }
```
The formal arguments for this function are x and y. Another symbol, z, appears in the function's body. z is referred to as a free variable in this scenario.

The way values are assigned to free variables is determined by a language's scoping rules. There are no formal arguments or local variables in free variables (assigned insided the function body).

### **_14.3 WHY IS LEXICAL SCOPING IMPORTANT?_**

The values of free variables are typically found in the user's workspace once a function is defined in the global environment. For most people, this conduct is reasonable and usually the "correct thing" to do. However, in R, functions can be declared inside other functions (which is not possible in languages like C). Now things start to get interesting—in this example, the environment in which a function is defined is another function's body!

Here's an example of a function that as its return value returns another function. Remember that functions in R are handled the same as any other object, therefore this is completely legal.
```
> make.power <- function(n) {

> pow <- function(x) {

>  x^n

> }

> pow

> }

The `make.power()` function is a "function Object() { [native code] } function," meaning it can be used to build additional functions.

> cube <- make.power(3)

> square <- make.power(2)

> cube(3)

[1] 27

> square(3)

[1] 9
```

### **_14.4 SCOPING: LEXICAL VS. DYNAMIC_**

To explain the distinction between lexical and dynamic scoping restrictions, consider the following example.
```
> y <- 10

> f <- function(x) {

> y <- 2

> y^2 + g(x)

> }

> g <- function(x) {

> x*y

> }
```

### **_14.5 OPTIMIZATION: APPLICATIONS_**

In R, optimization functions like `optim()`, `nlm()`, and `optimise()` need you to supply a function with a vector of parameters as an argument (e.g. a log-likelihood, or a cost function). An objective function that must be reduced, on the other hand, may be dependent on a variety of other factors in addition to its parameters (like data). When designing optimization software, it's sometimes useful to give the user the option of keeping certain parameters constant. R's scoping rules allow you to abstract away a lot of the complication that comes with these types of challenges.

### **_14.6 CALCULATING THE PROBABILITY_**

Another useful feature is the ability to visualise the negative log-likelihood to check how peaked or flat it is.

When `mu` is fixed, this is the function.
```

> nLL <- make.NegLogLik(normals, c(1, FALSE))  

> x <- seq(1.7, 1.9, len = 100)
 
> y <- sapply(x, nLL)    

> plot(x, exp(-(y - min(y))), type = "l")
```

When sigma is fixed, this is the function.
```

> nLL <- make.NegLogLik(normals, c(FALSE, 2))

> x <- seq(0.5, 1.5, len = 100)

> y <- sapply(x, nLL)     

> plot(x, exp(-(y - min(y))), type = "l")
```

## **15. FUNCTIONS IN LOOPS**

### **_15.1 USING THE COMMAND LINE TO LOOP_**

When programming, for and while loops are useful, but they are difficult to write when working interactively on the command line. When working on the command line, multi-line expressions with curly braces are difficult to sort through. To make your life easier, R offers certain functions that implement looping in a concise manner.

Loop through a list and evaluate a function on each entry with `lapply()`.

* `sapply()`: Same as lapply, but tries to make the result simpler.

* `apply()`: Apply a function to the array's margins.

* `tapply()`: Use this function to apply a function to subsets of a vector.

* `mapply()` is a multivariate variant of the lapply function.

Auxiliary function splits are very handy, especially when using lapply.

### **_15.2 LAPPLY()_**

The simple procedures performed by the lapply() method are as follows:

* It cycles through a list, iterating over each entry.

* It applies a function (that you define) on each element of the list and produces a list (the l stands for "list").

* This function accepts three arguments: (1) a list X; (2) a function (or the name of a function) FUN; and (3) additional arguments via the... argument. If X is not a list, it will be converted to one using the as.list function ().

The `lapply()` function's body can be found here.
```
> lapply

> function (X, FUN, ...)

> {

> FUN <- match.fun(FUN)

> if (!is.vector(X) || is.object(X))

> X <- as.list(X)

> .Internal(lapply(X, FUN))

> }

<bytecode: 0x7ff2f68331c0>
<environment: namespace:base>
```
### **_15.3 SAPPLY()_**
The only actual difference between the `sapply()` and `lapply()` functions is the return value. If possible, `sapply()` will try to simplify the result of `lapply()`. Essentially, sapply() uses its input to call `lapply()`, which then applies the following algorithm:

* If the result is a list with all elements having the same length, a vector is returned.

* A matrix is returned if the result is a list with each entry being a vector of the same length (> 1).

* If it can't sort things out, it returns a list.

Here's what happens when you call `lapply()`.
```

> x <- list(a = 1:4, b = rnorm(10), c = rnorm(20, 1), d = rnorm(100, 5))

> lapply(x, mean)

> $a

[1] 2.5

> $b

[1] -0.251483

> $c

[1] 1.481246

> $d

[1] 4.968715
```

### **_15.4 SPLIT()_**
The `split()` function divides a vector or other object into groups based on a factor or a list of factors.

`split()` accepts the following arguments.
```
> str(split)

> function (x, f, drop = FALSE, ...)  
```

where

* x is a data frame or a vector (or list).

* f is a factor (or a set of factors) or a set of factors.

* drop specifies whether or not empty factor levels should be removed.


### **_15.5 TAPPLY_**
`tapply()` is a function that applies to subsets of a vector. It can be thought of as a vector-only version of `split()` and `sapply()`. The "t" in `tapply()` is supposed to stand for "table,"
```
> str(tapply)

> function (X, INDEX, FUN = NULL, ..., default = NA, simplify = TRUE)
```
The following are the arguments to tapply():

* X denotes a vector.

* INDEX is a term that refers to a factor or a group of factors (or else they are coerced to factors)

* FUN is a function that can be used.

* `...` has more parameters that must be supplied FUN


### **_15.6 APPLY()_**
The `apply()` function evaluates a function (usually an anonymous one) over the array's margins. It's most commonly used to apply a function on a matrix's rows or columns (which is just a 2-dimensional array). It can, however, be used with general arrays, such as to take the average of a set of matrices. `Apply()` isn't necessarily faster than writing a loop, but it does everything in one line and is extremely concise.
```
> str(apply)

> function (X, MARGIN, FUN, ...)  
```
apply(arguments )'s are as follows:

* X is a collection of items.

* The integer vector MARGIN indicates which margins should be "retained."

* *FUN* is a function that can be used.

* `...` is used to pass additional parameters to *FUN*.

### **_15.7 SUMS AND MEANS IN COL/ROW_**

We have several useful shortcuts for the special situation of column/row sums and column/row means of matrices.
```
> rowSums = apply(x, 1, sum)

> rowMeans = apply(x, 1, mean)

> colSums = apply(x, 2, sum)

> colMeans = apply(x, 2, mean)
```
### **_15.8 MAPPLY()_**
The `mapply()` function is a multivariate apply that applies a function to a set of inputs in parallel. Remember that `lapply()` and its friends only iterate over one R object at a time. What if you wish to iterate through several R objects at the same time? This is where `mapply()` comes in handy.
```
> str(mapply)

> function (FUN, ..., MoreArgs = NULL, SIMPLIFY = TRUE, USE.NAMES = TRUE)  
```
`mapply()` accepts the following arguments.

* *FUN* is a function that can be used.

* `...` is a collection of R objects that can be used in a variety of ways.

* `MoreArgs` is a list of additional arguments that can be passed to FUN.

* Whether the result should be simplified is indicated by the word `SIMPLIFY`.

### **_15.9 ADDING A VECTOR TO A FUNCTION_**
The mapply() function can be used to "vectorize" a function automatically. This means that it can be used to build a new function that can take vector parameters from a function that normally only takes single arguments. This is frequently required for plotting functions.

Given some data, a mean parameter, and a standard deviation, here's an example of a function that computes the sum of squares.  
```
> sumsq <- function(mu, sigma, x) {

>sum(((x - mu) / sigma)^2)

> }
```
## **16. REGULAR EXPRESSIONS**

### **_16.1 R'S BASIC FUNCTIONS_**

The following are the most important R functions for working with regular expressions:

* `grep()` and `grepl()` are methods that look for regular expression/pattern matches in a character vector. `grep()` returns the indices in the character vector that contain a match, or the specific strings that match. `grepl()` provides a TRUE/FALSE vector that indicates which elements of the character vector match.

* Search a character vector for regular expression matches and return the indices of the string where the match begins and the length of the match with `regexpr()` and `gregexpr()`.



* `sub()` and  `gsub()` look for regular expression matches in a character vector and replace them with another string.

* `sub()` and `gsub()` look for regular expression matches in a character vector and replace them with another string.

* `Regexec()` looks for a regular expression in a character vector, similar to `regexpr()`, but it also returns the locations of any parenthesized sub-expressions. Demonstration is perhaps the best way to explain it.

### **_16.2 GREP()_**
Let's say we wanted to find all the records for victims of shootings (rather than other reasons). How are we going to do that? We can see from the map that each cause of death is represented by a separate icon/flag on the map. They are, in particular, different colours. The dataset for shooting deaths has an `iconHomicideShooting` label, which you can see. We might be able to identify all of the shootings using this feature of the data.

I use grep() to find the literal `iconHomicideShooting` in the homicides character vector.
```
> g <- grep("iconHomicideShooting", homicides)

> length(g)

[1] 228
```
### **_16.3 GREPL()_**

The function `grepl()` is similar to `grep()` except that it returns a different value. `grepl()` provides a logical vector indicating which character vector element contains the match. Let's say we want to know which states in the United States start with the word *New*.
```
> g <- grepl("^New", state.name)

> g

[1] FALSE FALSE FALSE FALSE FALSE FALSE FALSE FALSE FALSE FALSE FALSE FALSE
[13] FALSE FALSE FALSE FALSE FALSE FALSE FALSE FALSE FALSE FALSE FALSE FALSE
[25] FALSE FALSE FALSE FALSE  TRUE  TRUE  TRUE  TRUE FALSE FALSE FALSE FALSE
[37] FALSE FALSE FALSE FALSE FALSE FALSE FALSE FALSE FALSE FALSE FALSE FALSE
[49] FALSE FALSE

> state.name[g]

[1] "New Hampshire" "New Jersey"    "New Mexico"    "New York"
```
We can see that `grepl()` provides a logical vector, which may be used to subset the original state in this case. vector of a name

### **_16.4 REGEXPR()_**

There are several limits to both the `grep()` and` grepl()` routines. Both functions, in particular, tell you which strings in a character vector match a pattern, but they don't tell you where the match happens or what the match is for a more intricate regular expression.

The `regexpr()` function returns the (a) index into each string where the match begins, as well as the (b) length of that string's match. Only the first match of the string is returned by `regexpr()` (reading left to right). If there are many matches in a given string,`gregexpr()` will return all of them.
```
> regexpr("<dd>[F|f]ound(.*)</dd>", homicides[1:10])

[1] 177 178 188 189 178 182 178 187 182 183

> attr(,"match.length")

[1] 93 86 89 90 89 84 85 84 88 84

> attr(,"index.type")

[1] "chars"

> attr(,"useBytes")

[1] TRUE
```
### **_16.5 SUB() & GSUB()_**
We need to clean up or edit strings from time to time by matching a pattern and replacing it with something else.

```
> x <- substr(homicides[1], 177, 177 + 33 - 1)

> x

[1] "<dd>Found on January 1, 2007</dd>"
```
We want to get rid of everything but the "January 1, 2007" part. We can achieve this by using the | operator to match the text before and after it, then replace it with the empty string.
```
> sub("<dd>[F|f]ound on |</dd>", "", x)

[1] "January 1, 2007</dd>"
```

It's worth noting that the `sub()` method discovered the first match (at the start of the string), replaced it, and then exited. But there was another match at the end of the string that we wanted to change as well. The `gsub()` function is required to obtain both matches.

```
> gsub("<dd>[F|f]ound on |</dd>", "", x)

[1] "January 1, 2007"
```
We don't have to process each string one by one because the `sub()` and `gsub()` procedures can take vector parameters.


### **_16.6 REGEXEC()_**
The `regexec()` function is similar to `regexpr()`, except it provides indices for parenthesized sub-expressions. Take a look at the following expression as an example.
```
> regexec("<dd>[F|f]ound on (.*?)</dd>", homicides[1])

[[1]]

[1] 177 190

> attr(,"match.length")

[1] 33 15

> attr(,"index.type")

[1] "chars"

> attr(,"useBytes")

[1] TRUE
```
### **_16.7 STRINGR PACKAGE_**

The tidyverse collection of packages includes the `stringr` package, which wraps the underlying `stringi` package in a set of convenience functions. The `stringr` functions hide some of the complexities of using the base R regular expression functions. Furthermore, the `stringr` functions give a more logical regular expression interface, with better consistency in the arguments and argument ordering.

`str_subset()` produces a character vector of strings that include a given match, similar to grep(value = TRUE).
```
> library(stringr)

> g <- str_subset(homicides, "iconHomicideShooting")

> length(g)

[1] 228

```
`grepl` and `str_detect()` are nearly identical ().

`str_extract()` extracts matches from the output in the same way as
 `regexpr()` and `regmatches()` do.
 ```
 > str_extract(homicides[1:10], "<dd>[F|f]ound(.*?)</dd>")
 
 [1] "<dd>Found on January 1, 2007</dd>" "<dd>Found on January 2, 2007</dd>"
 [3] "<dd>Found on January 2, 2007</dd>" "<dd>Found on January 3, 2007</dd>"
 [5] "<dd>Found on January 5, 2007</dd>" "<dd>Found on January 5, 2007</dd>"
 [7] "<dd>Found on January 5, 2007</dd>" "<dd>Found on January 7, 2007</dd>"
 [9] "<dd>Found on January 8, 2007</dd>" "<dd>Found on January 8, 2007</dd>"
 ```
 Finally, `str_match()` performs the same function as `regexec()` by returning a matrix with the parenthesized sub-expressions.
 
## **17. DEBUGGING**
 
### **_17.1 SOMETHING ISN'T RIGHT!_**
 
R has a lot of ways to let you know if something isn't quite right. There are many levels of indication available, ranging from simple notification to deadly mistake. When you run a function in R, you might get the following results.

* `message`: The message() function returns a general notification/diagnostic message.

* `warning`: A signal that something is incorrect, but not necessarily fatal; the function is still being executed. The `warning()` function generates warnings.

* `error`: A fatal error has occurred, and the function's execution has been halted.

* `condition`: A general term for denoting the occurrence of something unexpected.

Here's an example of a warning you might get while working with R.
```
> log(-1)

Warning in log(-1): NaNs produced
[1] NaN
```
### **_17.2 WHAT'S WRONG AND HOW TO FIX IT_**

The most important part of troubleshooting any R code is correctly diagnosing the issue. It's critical to first understand what you were expected to happen when diagnosing an issue with your code (or someone else's). Then you must determine what happened and how it differed from your expectations. You should ask the following questions as a starting point:

* What was your point of view? What did you use to name the function?

* What did you expect to happen? What are the outputs, messages, and other outcomes?

* What did you end up with?

* What is the difference between what you get and what you expected?

* Were your expectations reasonable to begin with?

* Are you able to reproduce the issue (exactly)?

### **_17.3 R'S DEBUGGING TOOLS_**

R comes with a number of tools that can assist you in debugging your code. In R, the most important tools for debugging functions are

* When an error occurs, `traceback()` prints out the function call stack; if no error occurs, it does nothing.

* `debug()` marks a function as being in "debug" mode, allowing you to step through the execution of a function one line at a time.

* `browser()`: puts a function in debug mode and suspends its execution wherever it is called.

* `trace()`: allows you to enter debugging code at certain points in a function.

* `recover()` lets you change the error behaviour so you can look across the function call stack.

### **_17.4 TRACEBACK()_**
After an error, the `traceback()` function writes out the function call stack. The function call stack is the list of functions that were executed before to the error.

For instance, you might have a function `a()` that calls function `b()`, which calls `c()`, and then `d()`. If an error occurs, it may not be evident which function the issue occurred in right away. The `traceback()` function displays the number of levels you were on when the fault occurred.
```
> mean(x)

Error in mean(x) : object 'x' not found

> traceback()

1: mean(x)
```
Because the object x does not exist, it is evident that the mistake happened inside the `mean()` function.

When an error occurs, the `traceback()` method must be called right away. The traceback is lost whenever another function is called.


### **_17.5 DEBUG()_**
The `debug()` method starts an interactive debugger for a function (also known as the "browser" in R). You can use the debugger to step through a R function one expression at a time to find out where an error is occurring.

The first argument to the `debug()` function is a function. Here's an example of how to troubleshoot the `lm()` function.
```
> debug(lm)  

> lm(y ~ x)

debugging in: lm(y ~ x)
debug: {
    ret.x <- x
    ret.y <- y
    cl <- match.call()
    ...
    if (!qr)
        z$qr <- NULL
    z
}
Browse[2]>
```
### **_17.6 RECOVER()_**

When an error occurs, the `recover()` method can be used to change R's error behaviour. R will normally produce an error message, exit the function, and return you to your workspace to await additional commands if an error occurs in a function.

When an error occurs, you can tell R to pause execution at the exact location where the issue happened using `recover()`. This gives you the chance to investigate the environment in which the problem occurred. This is handy for determining whether any R objects or data have been corrupted or incorrectly updated.
```
> options(error = recover)    

> read.csv("nosuchfile")     

Error in file(file, "rt") : cannot open the connection
In addition: Warning message:
In file(file, "rt") :
cannot open file ’nosuchfile’: No such file or directory
```
Enter a frame number, or 0 to exit

1: read.csv("nosuchfile")
2: read.table(file = file, header = header, sep = sep, quote = quote, dec =
3: file(file, "rt")

Selection:

When an error occurs, the `recover()` function will first output the function call stack. Then you can investigate the problem by jumping around the call stack. When you select a frame number, you will be taken to the browser (much as the interactive debugger activated by debug()) where you can poke about.

## **18. R CODE PROFILING**
**R** has a profiler that can help you optimise and improve the speed of your code. Generally speaking, focusing on code optimization at the start of development is a bad idea. Rather, focus on turning your thoughts into code and developing code that is both coherent and legible in the beginning. The issue is that extremely optimised code is often opaque and difficult to read, making debugging and revision more difficult. It's preferable to fix all the bugs first, then work on optimization.

Of course, the question is what should you optimise when it comes to code optimization. Obviously, you should optimise the parts of your code that are slow, but how can we know which ones are which?

This is when the profiler comes in handy. Profiling is a method of systematically examining how much time is spent on various aspects of a program.

As a project grows and layers of code are stacked on top of each other, profiling may become important. Quite often, you'll write some code that works perfectly the first time you run it. However, you might later use that identical code in a large loop that runs 1,000 times. The original code, which took one second to run, now takes 1,000 seconds!

It's easy to believe you already know where your code's bottlenecks are. After all, you're the one who wrote it! But believe me when I say that I've been astonished by where my code spends the majority of its time. In actuality, profiling is preferable to guessing. It is preferable to gather data rather than rely solely on hunches. Knowing where the code spends the majority of its time will, in the end, have the greatest impact on code speed. This is impossible to achieve without conducting a thorough performance study or profile.
```
> We should forget about small efficiencies, say about 97% of the time: premature optimization is the root of all evil —Donald Knuth
```
The following are the core principles of code optimization:

* First, design, then optimise.

* Keep in mind that premature optimization is the source of all evil.

* Don't guess; measure (gather data).

* If you want to be a scientist, you must follow the same rules here!


### **_18.1 SYSTEM.TIME()_**

The `system.time()` function takes an arbitrary R expression (wrapped in curly braces) as input and returns the amount of time it took to evaluate it. The `system.time()` function calculates the time (in seconds) required to run an expression and returns the time till the error occurred if there is one. The function returns a proc time object that contains two useful pieces of information:

* Time charged to the CPU(s) for this expression is called `user time`.

* `elapsed time`: sometimes known as "wall clock" time, this is the amount of time that passes while you are seated.

### **_18.2 TIMING LONGER EXPRESSIONS_**
Longer expressions can be timed by enclosing them in curly braces within the call to system `time()`.
```
> system.time({

> n <- 1000

> r <- numeric(n)

> for(i in 1:n) {

> x <- rnorm(n)

> r[i] <- mean(x)

> }

> })

user  system elapsed
0.081   0.004   0.085
```
### **_18.3 R PROFILER_**

You can use `system.time()` to discover if certain methods or code blocks are taking an excessive amount of time. This solution, on the other hand, assumes that you already know where the problem is and can call `system.time()` on it. What if you have no idea where to begin?

The profiler comes in handy in this situation. R's profiler is started with the `Rprof()` function. It's worth noting that R must be built with profiler support (but this is usually the case). We'll utilise the `summaryRprof()` method in conjunction with `Rprof()` to summarise the output (which would otherwise be unreadable). You should not use system.time() and `Rprof()` together since you will be disappointed.


`Rprof()` keeps track of the function call stack and tabulates how much time is spent inside each function at regular intervals. The profiler samples the function call stack every 0.02 seconds by default. This means that the profiler is useless if your code executes very quickly (say, in less than 0.02 seconds). However, if your code runs that quickly, the profiler is definitely unnecessary.

The `Rprof()` method is used to start the profiler.
```
> Rprof()    
```

### **_18.4 SUMMARYRPROF()_**

The `summaryRprof()` function tabulates the output of the R profiler and determines how much time is spent in each function. The data can be normalised using one of two ways.

* *by.total* divides the overall run time by the time spent in each function.

* *by.self*  does the same thing as *by.total*, but subtracts time spent in functions in the call stack above the current function. This output, in my opinion, is far more valuable.

## **19. SIMULATION**

### **_19.1 CREATING A SET OF RANDOM NUMBERS_**

**Simulation** is an essential (and broad) issue in statistics as well as a number of other fields where unpredictability is required. Random number generators can be used to model random inputs when you want to perform a statistical technique that needs random number generation or sampling (e.g., Markov chain Monte Carlo, the bootstrap, random forests, bagging).

R has a variety of pseudo-random number generators for simulating well-known probability distributions such as the Normal, Poisson, and binomial. In R, below are some examples of probability distribution functions.

* **rnorm**: creates random Normal variates with a specified mean and standard deviation.
* **dnorm**: calculate the Normal probability density at a given point (with a particular mean/SD) (or vector of points)
* **pnorm**: calculates a Normal distribution's cumulative distribution function.
* **rpois**: creates random Poisson variates at a specified rate.

There are normally four functions available for each probability distribution that begin with the letters "r", "d", "p", and "q". The "r" function is responsible for simulating randon numbers from the distribution. The other functions have a prefix.

* *d* stands for density.

* *r* is a programming language that is used to generate random numbers.

* The letter *p* stands for cumulative distribution.

* The quantile function is denoted by the letter *q*. (inverse cumulative distribution).

### **_19.2 CHOOSING THE SEED FOR THE RANDOM NUMBER_**

It is critical to set the random number seed when simulating any random numbers. The random number seed is set with `set.seed()` to ensure that the sequence of random integers is repeatable.

For example, using `rnorm`, I can produce 5 normal random integers ().
```
> set.seed(1)

> rnorm(5)

[1] -0.6264538  0.1836433 -0.8356286  1.5952808  0.3295078
```
If we run `rnorm()` again, we'll obtain a new set of 5 random integers.
```
> rnorm(5)

[1] -0.8204684  0.4874291  0.7383247  0.5757814 -0.3053884
```
### **_19.3 LINEAR MODEL - SIMULATED_**

While simulating random numbers is beneficial, there are occasions when we need to simulating values from a certain model. To do so, we must first define the model and then simulate it using the tools listed above.

Assume we want to run a simulation based on the following linear model.
```
> y=β0+β1x+ε
```
where  ε∼N(0,22) . Assume x∼N(0,12) ,  β0=0.5  and  β1=2.
This is how we could accomplish it in R.
```
> set.seed(20)             

> x <- rnorm(100)          

> e <- rnorm(100, 0, 2)    

> y <- 0.5 + 2 * x + e     

> summary(y)

Min. 1st Qu.  Median    Mean 3rd Qu.    Max.
-6.4084 -1.5402  0.6789  0.6893  2.9303  6.5052
```
The model simulation results can be plotted.
```
> plot(x, y)
```

### **_19.4  RANDOM SAMPLING_**

The `sample()` function selects numbers at random from a set of (scalar) objects, allowing you to sample from any number distribution.
```
> set.seed(1)

> sample(1:10, 4)

[1] 9 4 7 1

> sample(1:10, 4)

[1] 2 7 3 6

> sample(letters, 5)    

[1] "r" "s" "a" "u" "w"

> sample(1:10)          

[1] 10  6  9  2  1  5  8  4  3  7
 
> sample(1:10)

[1]  5 10  2  8  6  1  4  3  9  7
 
> sample(1:10, replace = TRUE)  

[1]  3  6 10 10  6  4  4 10  9  7
 ```
 You can sample the indices into an object rather than the parts of the object itself to sample more intricate objects, such as rows from a data frame or a list.
 
## **20. COMPUTING IN PARALLEL**
The use of parallel computation in R can speed up a lot of things. Parallel computation is the execution of various elements of a bigger computation at the same time across multiple computer processors or cores. The underlying premise is that if a task can be completed in `X` seconds on a single processor, it should be possible to do it in `X / n` seconds on n processors. Due to overhead and numerous hurdles to splitting up a problem into n pieces, such a speed-increase is rarely attainable, but it is typically possible in simple situations.

Parallel computation used to be strictly associated with "high-performance computing," in which pricey machines were linked together via high-speed networking to construct massive computer clusters. It was critical under these situations to have sophisticated software to manage data transfer across the cluster's many computers. Parallel computing in that environment was a finely tuned, custom-tailored activity, not something you could just walk into.

Almost all computers nowadays, however, have many processors or cores. Even Apple's iPhone 6S has a dual-core CPU built into its A9 system-on-chip. Getting access to a "cluster" of CPUs, which are all built into the same computer in this scenario, is considerably easier than it used to be, and this has made parallel computing more accessible to a wider range of individuals.

### **_20.1 PARALLELISM - HIDING_**

You might not even realise you're parallel computing! Many computing libraries now include parallelism built-in that can be used in the background. This type of "hidden parallelism" usually has no impact on you and actually improves your processing efficiency. However, knowing it's going on (even in the background) is usually a good idea because it could effect other work you're doing on the system. Furthermore, certain shared computing environments may have restrictions on how many cores/CPUs you may utilise, and if a function runs numerous parallel processes, it may present an issue for others who are sharing the machine with you.

### **_20.2 PARALLELISM IS EMBARRASSING_**

Many issues in statistics and data science can be solved in a *embarrassingly parallel* manner, in which numerous independent portions of a problem are solved at the same time because the pieces of the problem never have to communicate with one another (except perhaps at the end when all the results are assembled). Despite the moniker, there's nothing "embarrassing" about exploiting the problem's structure and employing it to speed up your processing. In reality, in statistics and data science, embarrassingly parallel computation is a common paradigm.

> In general, using the functions described in this chapter with graphical user interfaces (GUIs) is not a good idea because, as summarised in the mclapply() help page, terrible things can happen. However, the parallel package's functions appear to work OK in RStudio.

The `lapply()` function, which we looked at in a previous chapter, shows the basic mode of an embarrassingly parallel process. Remember that there are two arguments to the `lapply()` function:

* A list, or an item that can be made into one.

* A function that will be applied to each list item.

Finally, keep in mind that `lapply()` always produces a list with the same length as the input list.

### **_20.3 PACKAGES THAT RUN IN PARALLEL_**

Parallel is a package included with your R installation. It combines two ancient programs, multicore and snow, and the functions in parallel have names that are similar to those of the older packages. It's not necessary to know anything about the multicore or snow packages for our needs, but long-time R users may recall them from back in the day.

Calls to lapply are parallelized using the `mclapply()` method. The first two arguments to `mclapply()` are identical to those of `lapply()` (). However, `mclapply()` has additional (named) options, the most important of which is the mc.cores argument, which allows you to select the number of processors/cores to split the computation among. If your system has four cores, for example, you could use mc.cores = 4 to split your action across four cores.

On Unix-style operating systems, the fork mechanism is used by the `mclapply()` function (and related mc* functions). In a nutshell, your R session is the main process, and using a function like `mclapply()` forks a sequence of sub-processes that run independently of the main process (although they share a few low-level features). These sub-processes, presumably on distinct cores of your CPU, then run your function on their subsets of the data. Each sub-process provides its results once the calculation is completed, and then the sub-process is destroyed. The parallel package handles the practicalities of forking and handling the sub-processes once they've completed.

The first thing you should check with the parallel package is whether or not your computer has many cores that you may use.
```
> library(parallel)

> detectCores()

[1] 16
```
#### *20.3.1 MCLAPPLY()*
The `mclapply()` method, which splits what would otherwise be a call to `lapply()` across several cores, is the simplest application of the parallel package. I'll run some code that spreads a workload across 10 cores and then sleeps for 10 seconds to demonstrate how the function works.
```
> r <- mclapply(1:10, function(i) {

> Sys.sleep(10)  

>}, mc.cores = 10)      
```
#### *20.3.2 HANDLING ERRORS*

When either `mclapply()` or `mcmapply()` is invoked, the specified functions are performed in a sub-process while being essentially wrapped in a call to attempt. This allows one of the sub-processes to fail without causing the entire call to `mclapply()` to fail, perhaps leading you to lose a lot of data. If one sub-process fails, the others may continue to function normally and deliver satisfactory results.

This error-handling behaviour differs significantly from the standard call to `lapply()`. If the supplied function fails on one of the list's components, the entire function call to `lapply()` fails, and you only get an error.

When a sub-process fails using `mclapply()`, the return value for that sub-process is a R object that inherits from the class "try-error," which you can test with the `inherits()` function. Each child process is conceptually executed with the `attempt()` method wrapped around it. The code below creates an error in the list's third member on purpose.
```
> r <- mclapply(1:5, function(i) {

> if(i == 3L)

> stop("error in this process!")

> else

> return("success!")

> }, mc.cores = 5)

Warning in mclapply(1:5, function(i) {: scheduled core 3 encountered error in
user code, all values of the job will be affected
```
### **_20.4 PUTTING TOGETHER A SOCKET CLUSTER_**

Using your computer's forking mechanism is one approach to run parallel computations, but it's not the only one provided by the parallel package. Sockets are another technique to use your computer's numerous cores to create a "cluster." A socket is a communication device that allows numerous processes or apps on your computer (or multiple computers) to connect with one another. Data and results must be transferred back and forth between the parent and child processes in parallel processing, and sockets can be utilised for this.

The `makeCluster()` function in R makes creating a socket cluster a breeze.
```
> cl <- makeCluster(4)
```
The `parLapply()` method may be used to do a `lapply()` operation over a socket cluster. For example, to execute the median bootstrap example stated above, we may use `parLapply()`.
```
> med.boot <- parLapply(cl, 1:5000, function(i) {

> xnew <- sample(sulf, replace = TRUE)

> median(xnew)

> })

Error in checkForRemoteErrors(val): 4 nodes produced errors; first error: object 'sulf' not found
```
Unfortunately, you'll find that there is an issue while running this code. The reason for this is that while we have imported the sulfate data into our R session, the data is not available to the makeCluster() function's independent child processes. The data, as well as any other information that the child process will require to run your code, must be exported from the parent process to the child process using the clusterExport() method. The necessity to export data is a fundamental distinction between the “multicore” and “socket” approaches in terms of behaviour.
```
> clusterExport(cl, "sulf")
```
ClusterExport() takes a character vector as its second argument, allowing you to send an arbitrary number of R objects to the child processes. Because each R object will be reproduced in each of the child processes, and so take up memory on your computer, you should be selective about what you export.

We may execute our bootstrap function after the data has been exported to the child processes.
```
> med.boot <- parLapply(cl, 1:5000, function(i) {

> xnew <- sample(sulf, replace = TRUE)

> median(xnew)

> })

> med.boot <- unlist(med.boot)
 
> quantile(med.boot, c(0.025, 0.975))

 2.5% 97.5%
 2.70  3.47
 ```
 It's a good idea to clean up and terminate the cluster child processes once you've finished working with your cluster (quitting R will also stop all of the child processes).
```
> stopCluster(cl)
```

---
[Source 1](https://blog.paperspace.com/intro-to-datascience/)<br/>
[Source 2](https://bookdown.org/rdpeng/rprogdatascience/)










 
