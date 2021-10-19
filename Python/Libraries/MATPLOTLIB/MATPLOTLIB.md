# MATPLOTLIB IN PYTHON

### Defination:-
**Matplotlib** is a low level graph plotting library that give us the facility of plotting in Python Programming langiuage. This library was first discovered by John D Hunter. 

Matplotlib is a open source library and we can use it freely in any IDE.

### Download process:-

To install Matplotlib in python, we've to open terminal and just to type--

```bash
pip install matplotlib
```
After waiting some times, the matplotlib library will be installed and we can use that by simply importing--

```bash
import matplotlib
```

### Checking Matplotlib Version:-

To check the version of Matplotlib, we've to run the code below--

```bash
import matplotlib

print(matplotlib.__version__)
```

## Pyplot

### Importing Pyplot:-

To import pyplot, just follow this code--
```bash
import matplotlib.pyplot as plt
```

### Example

***Draw a line in a diagram from position (0,0) to position (6,250):***

```bash
import matplotlib.pyplot as plt
import numpy as np

xpoints = np.array([0, 6])
ypoints = np.array([0, 250])

plt.plot(xpoints, ypoints)
plt.show()

```

***Output***


![App Screenshot](https://www.w3schools.com/python/img_matplotlib_pyplot.png)

  
  ## Plotting

### Plotting x and y points

The ***plot()*** function is used to draw points in a diagram. Basically The function takes parameters for specifying points in the diagram. **Parameter 1** is an array containing the points on the **x-axis** and **Parameter 2** is an array containing the points on the **y-axis**.

For Example, If we need to plot a line from (1, 3) to (8, 10), we have to pass two arrays [1, 8] and [3, 10] to the plot function.

### Plotting without line

To plot a graph without line, we've to use shortcut string parameter notation **"o"**, which means **rings**

## Markers

We can use the argument **marker** to mark the points with specific markers.

### Marker Reference

Marker |	Description
--------|---------
'o'|	Circle	
'*'	|Star	
'.'|	Point	
','|	Pixel	
'x'|	X	
'X'|	X (filled)	
'+'|	Plus	
'P'|	Plus (filled)	
's'|	Square	
'D'|	Diamond	
'd'|	Diamond (thin)	
'p'|	Pentagon	
'H'|	Hexagon		
'_'|	Hline

## Format Strings *fmt*

We can also usr the shortcut string noattion parameter to specify the marker. This function is called **fmt** and is written with the syntax ```marker|line|color```.

### Line Reference
Line Syntax |	Description
------------|----------
'-'	|Solid line	
':'	|Dotted line	
'--'|	Dashed line	
'-.'|	Dashed/dotted line

### Color Reference
Color Syntax |	Description
-------------|------------
'r'|	Red	
'g'|	Green	
'b'|	Blue	
'c'|	Cyan	
'm'|	Magenta	
'y'|	Yellow	
'k'|	Black	
'w'|	White

## Line

### Line style

We can use the argument **linestyle** or in short **ls** to change the style of the line.

### Line width

We can use the argument **linewidth** or in short **lw** to change the width of the line.

### Multiple lines

We can plot as many lines as we can by using **plt.plot** function.

## Labels and Title

With pyplot, we can use **xlabel()** and **ylabel()** to set a label for x and y axis.

We can also set a title using **title()** argument.

## Subplots

With the **subplots()** argument we can draw multiple plots in one figure.