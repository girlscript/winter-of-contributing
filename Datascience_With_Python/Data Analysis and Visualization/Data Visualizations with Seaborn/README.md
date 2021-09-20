# Data Visualizations with Seaborn

Data Visualization is a critical though undermined skill required in pursuit of a Data Science career. This is an attempt to help Data Science aspirants gain necessary Data Visualization skills required to progress in their career. It includes all the types of plot offered by Seaborn, applied on random or fabricated datasets. The knowledge gained for inference shall in no way be limited to just Seaborn.


## Installation
Open command line and enter the following command : 

``` 
pip install seaborn
```


## Dependencies
#### Supported Python versions
* Python 3.6 +

#### Required dependencies
If not already present, these libraries will be downloaded when you install seaborn.

* numpy
* scipy
* pandas
* matplotlib

## Usage of Seaborn
We always have a large amount of data, or we may have some applications which deal with the large data, so in order to represent our data in a good way, we may require some library which can be able to represent our data that is begin stored in a table, array, list, and other data structure efficiently. So seaborn is the library which can represent our data stored in an array, list o any other data structure in a graphical form, which helps users and developers to get more clarity of data if we need to handle large data in our application. So in order to visualize our data, we can use the seaborn library from python; it is based on matplotlib only. This can be used for model fitting and data representation etc. This library is data-oriented, but we need to install it before using it. 

## Getting started with Seaborn
To test your first plotting program write this python script and execute it.
```
import seaborn as sns
df = sns.load_dataset("penguins")
sns.pairplot(df, hue="species")
```
## Using Seaborn we can plot wide varieties of plots like:
* Distribution Plots
* Pie Chart & Bar Chart
* Scatter Plots
* Pair Plots
* Heat maps

You can see the elaborated implimentation of the following Seaborn plots in the [notebook given in the repository]()
#### 1. Distribution Plots
We can compare the distribution plot in Seaborn to histograms in Matplotlib. They both offer pretty similar functionalities. Instead of frequency plots in the histogram, here we’ll plot an approximate probability density across the y-axis.
We will be using sns.distplot() in the code to plot distribution graphs.

#### 2. Pie Chart & Bar Chart
Pie Chart is generally used to analyze the data on how a numeric variable changes across different categories.

#### 3. Scatter Plots
Scatter Plot is used when we want to plot the relationship between any two numeric columns from a dataset. These plots are the most powerful visualization tools that are being used in the field of machine learning.
* Regression Plot
Regression plots create a regression line between 2 numerical parameters in the jointplot(scatterplot) and help to visualize their linear relationships.

#### 4. Pair Plots
Pair Plots are used when we want to see the relationship pattern among more than 3 different numeric variables. For example, let’s say we want to see how a company’s sales are affected by three different factors, in that case, pair plots will be very helpful.

#### 5. Heatmaps
The heatmap represents the data in a 2-dimensional form. The ultimate goal of the heatmap is to show the summary of information in a colored graph. It utilizes the concept of using colors and color intensities to visualize a range of values.

## Advantages of using Seaborn


* By using the seaborn library, we can easily represent our data on a plot.
* This library is used to visualize our data; we do not need to take care of the internal details; we just have to pass our data set or data inside the relplot() function, and it will calculate and place the value accordingly.
* Inside this, we can switch to any other representation of data using the ‘kind’ property inside it.
* It creates an interactive and informative plot to representation our data; also, this is easy for the user to understand and visualize the records on the application.
* It uses static aggregation for plot generation in python.
* As it is based on the matplotlib so while installing seaborn, we also have other libraries installed, out of which we have matplotlib, which also provides several features and functions to create more interactive plots in python.

## Conclusion
By we have already discussed that it is basically used for data visualization because, in our application, we have a large amount of data that needs to be represented to the user in some readable and undertakable format, so seaborn helps the user to visualize data in the form of graphics. which makes it attractive and efficient.

*To know more about seaborn [click here](https://seaborn.pydata.org/index.html)*
