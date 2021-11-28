
# Data Visualizations using Plotly

Issue #8562

This readme file summarizes all the terminologies and basic concepts required for Interactive Visualization Python Library,PLOTLY.

All the links to further resources are also provided within the same.

## Introduction
Plotly is an open-source data visualization library which helps us to create interactive and publication-quality charts/graphs.

```plotly.py``` is free and an open source library.

It offers many methods to visualize our data like line plot,scatter plot,area plot,histogram,box plot,bar plot etc.

![image](https://drive.google.com/uc?id=1uZau8pNj6pxsIkkTyOS2JVftwGUbzzmH)


* Plotly suports interactive plotting in commonly used programming languages like Python,R,MATLAB,Javascript etc.
* Plotly uses Javascript behind the scenes and is used to make plots which are interactive.We can zoom in on the graph or add any extra information like data on hover and other things.

**Advantages of PLOTLY**

- It is visually appealing and attractive which can generate interest in a wide range of audiences.
- We can customize our graphs endlessly which can make our plot more meaningful and understandable for others.
- The graphs are stored in JSON data format and can be read by other scripting languages.
- Plotly can be used to create online and offline charts.

## Installation of PLOTLY
* ```!pip install plotly``` : Run the command in Jupyter Notebook.

* ```conda install -c plotly plotly``` : If Anaconda is already installed.

## Modules in PLOTLY
Plotly comes along with some modules which facilitate in visualizing our data.

- ```plotly.express```: It is a high-level interface for creating quick visualizations.This module contains functions that can create entire figure at once.It uses ```graph_objects``` module internally.

    ```import plotly.express as px```

- ```plotly.graph_objects```: A low-level interface to figure,traces and layouts.This module is responsible for creating plots.It is highly customizable.

     ```import plotly.graph_objects as go```

- ```plotly.tools```: This module contains various tools in form of functions that can enhance the Plotly experience.

**Basic Charts covered in tutorial**

- [Box Plot](https://plotly.com/python/box-plots/)
- [Histogram](https://plotly.com/python/histograms/)
- [Bar Charts](https://plotly.com/python/bar-charts/)
- [Pie Charts](https://plotly.com/python/pie-charts/)
- [Scatter Plot](https://plotly.com/python/line-and-scatter/)
- [Line Chart](https://plotly.com/python/line-charts/)
- [Heatmaps](https://plotly.com/python/heatmaps/)
- [Violin Plot](https://plotly.com/python/violin/)

*For more charts and tutorials refer the official documentation of Plotly [here](https://plotly.com/python/).*


## Acknowledgements

 - [Plotly | Create Interactive Visualizations](https://www.analyticsvidhya.com/blog/2021/04/creating-interactive-visualizations-using-plotly-in-python/)
 - [How to use Plotly for Data Visualizations](https://towardsdatascience.com/how-to-use-plotly-for-data-visualization-f3d62bbcfd92)
 - [Kaggle Notebook for Plotly](https://www.kaggle.com/vikashrajluhaniwal/interactive-visualizations-using-plotly)
