
# LUX-Python Library for Exploratory Data Analysis

Issue #7752

In this readme file,we will get to know about what exactly is LUX Python Library and what is its exact purpose.
All the important terminologies will be explained in detail and a walkthrough will be given.Kindly refer the documentation for the same.
All other important resources will be also provided for this library.

The readme file consists of the following sections:
* Introduction
* Installation and Configuration
* Setting up LUX-widget
* Working with the dataset
* Intent based Visualization
* On-demand visualizations with help of automatic encoding
* Acknowledgements
# Introduction
LUX is an open-source python library for accelerating and simplifying the procedure of Exploratory Data Analysis.
It recommends interesting visualizations to guide users towards the potential next-steps in their analysis.

![image](https://drive.google.com/uc?id=1IdNZEpel6uljYU1BWxYJZblKOLa2Q1W0)

* LUX is a Jupyter notebook integrated with an interactive widget that automates the generation of data visualizations from inside a notebook.
*This allows data scientists to quickly go through a series of visualizations to get correlations and interesting trends within the dataset.*
* LUX also supports specifying particular intent and then further slice-dice and filter charts to find one that best suits the problems on which a user is working.

There is an apparent gap between how people perceive and think about the data available and what actually needs to be done to retain insights from the datasets.
LUX is a step to address and resolve these possible gaps.

# Installation and Configuration
For installation run the following command in the command prompt or Jupyter notebook.

```pip install lux-api```

## Setting up lux-widget
In order to activate the lux-widget in your Jupyter notebook,execute the following command:

```pip install --py luxwidget```

```pip enable --py luxwidget```

Now, to check whether the lux widget is installed or not execute the following command:

```jupyter nbextension list```

## Working with the dataset
In our tutorial we will import a dataset 'college.csv' and the library will recommend various visualizations on that basis.
* Once we call the dataframe object,Jupyter presents the usual tabular format of data.
Now,we can press the toggle button to view our automated visualizations.
![image](https://drive.google.com/uc?id=1q4swtjHwzUxQfSWBiLKlBblpaK6BNKsx)


*The recommendations in LUX are given in form of three tabs i.e. **Correlation**,**Distribution** and **Occurence.***
![image](https://drive.google.com/uc?id=1FoEs7p8JvtLl_JlDiNSEsuCAwghMYagm)
Let us understand these tabs in detail.
* **Correlation**:The Correlation tab visualizes the relationships between two qualitative attributes.The plots are arranged from the highest to lowest correlated pair of attributes.
![image](https://drive.google.com/uc?id=1BBOc0lnNqWJ192nYcq2DfpevJFLVOdFY)

* **Distribution**: The Distribution tab visualizes the histogram of two computable features and represents how the first feature changes with respect to the second feature.
![image](https://drive.google.com/uc?id=1jCnegrMVxVUPrdwMN4R44f5-jnSB9zIy)
* **Occurence**: The Occurence tab displays a set of bar charts that can be generated from the data set.
   The bar chart consists of different categorical attributes,ranked from most to least uneven plots.
![image](https://drive.google.com/uc?id=1-OhC3VbB4fylznp2TwVb7-MwpP4ezYK1)

## Intent Based Visualization
We can customize these visualizations by specifying the *intent* or simply specifying the attributes in which we are interested in.

We can also perform data visualization on select features;which means we can visualize the pair of features from which we wish to draw insights.
We have to only set the attributes and values in which we are interested in the LUX inbuild function *intent*.

```df.intent=["attribute_name"]```

* LUX now displays visualizations based on our specified intent with a series of graphs that seek to show the correlation of other attributes against the attribute/intent we have specified in the **Enhance** tab.
* If we select more than two attributes,LUX library allows us to *filter* or *generalize* the dataset.
  This eventually leads to further customization of charts.

![image](https://drive.google.com/uc?id=1sE-Bi8IGn9bqEjczNERIa5gcSh9sL-ce)

*On the Left hand side,we are able to see the current visualization with respect to the attributes/intent which we specified.*

*Whereas on the right side,we have **Enhance** tab which shows us what happens when we add an attribute/intent to current selection.*

*We also have the **Filter** tab which adds a filter while fixing the selected variable.*

*The **Generalize** tab completely deletes the additional attributes and filters the plots to display a more generalized from of relationship within the features.*

## Quick,on-demand visualizations with help of automatic encoding

We might be more interested in digging into all these visualizations  a bit more after finding out interesting visualizations using LUX.

Visualizations are represented as ```Vis``` objects in LUX and they can be edited further.

Users can also create their own visualizations by using the similar syntax as specifying the intent.
One of the main motives of LUX is that the users should always be able to visualize anything they want,without having to give more thought about how the visualization will look like.

```from lux.vis.Vis import Vis```

The user can also create their own visualization with the ```Vis``` function.

```RegionIncome = Vis(["Region=Southeast","MedianFamilyIncome"],df)```
![image](https://drive.google.com/uc?id=1od8VlpvI9OXLUTfVQ0gIPWZ53uMyJd6s)

**LUX also makes it easier to export and share the generated visualizations.The visualizations can be exported into static HTML as:**
```df.save_as_html(file_name.html)```

Therefore,we can conclude that the LUX library has features which automate whole visualization process in less time.

LUX is a major tool which bridges the apparent gap between how users think about their data and what insights can be actually gained from the data.
## Acknowledgements

 - [Official github repo of LUX](https://github.com/lux-org/lux)
 - [Session on LUX by Doris Jung-Lin Lee](https://www.youtube.com/watch?v=IDhzRghCDJE)
 - [LUX-Intelligent Visual Discovery](https://www.analyticsvidhya.com/blog/2021/04/lux-intelligence-visual-discovery-of-data-using-python/)
 - [Data Discovery with LUX](https://towardsdatascience.com/intelligent-visual-data-discovery-with-lux-a-python-library-dc36a5742b2f)
