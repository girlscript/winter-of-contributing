Created as part of The Girscript Winter of Contributing'21

Domain: Data Science with Python

Issue Title: Data Visualizations using Matplotlib

Issue Number: 445

Type: Documentation

Created by: [@KhushiKV](https://github.com/KhushiKV/) (Khushi Verma)

---

## MATPLOTLIB INTRODUCTION

Matplotlib is considered the "grandfather" libraray of data visualisation with Python. Matplotlib is a low level graph plotting library in python that serves as a visualization utility. It was created by John D. Hunter.

## Installation and Importing

At first we need to install it using either

`conda install matplotlib`

or

 `pip install matplotlib`
 
 Next to import it inside our working space, use:

`import matplotlib.pyplot as plt`

Most of the Matplotlib utilities lies under the pyplot submodule. We use plt as a shorthand-name for the library.

We can also use the following command to see plots in the notebook itself:

`%matplotlib inline`

---

### Basic Example

Let's see a basic example of using Matlplotlib for visualisation by passing two numpy arrays.

```
import matplotlib.pyplot as plt
%matplotlib inline
import numpy as np

x = np.array([4,6])
y = np.array([300,500])

plt.plot(x,y)
```
![image](https://user-images.githubusercontent.com/78869960/134853594-ee02b176-fda6-4ab4-9f46-a694f9075efd.png)

# Common Commands used in Matplotlib:

We can specify the labels for x-axis and y-axis, the title of our plot as follows:

```
x = np.array([4,6,8])
y = np.array([300,500,800])

plt.plot(x,y, 'o')
plt.xlabel('X Axis Title Here')
plt.ylabel('Y Axis Title Here')
plt.title('Plot Title Here')
```
![image](https://user-images.githubusercontent.com/78869960/134853739-28324cea-99ce-4de3-8cac-478f82c332dd.png)

---

# Markers

## Marker Styles

Instead of always having a line through all the points, we can have the points marked by various kinds of markers. 

## Marker Size

We can use the keyword argument markersize or the shorter version, ms to set the size of the markers.

```
x = np.array([4,6,8])
y = np.array([300,500,800])

plt.plot(x,y, marker = 'o', ms = 20)
```

![image](https://user-images.githubusercontent.com/78869960/134853868-5de3348a-4af3-4454-970a-94e615a3c4d9.png)


## Line Color

We use the keyword argument color or the shorter c to set the color of the line:

```
x = np.array([4,6,8])
y = np.array([300,500,800])

plt.plot(x,y, c = 'r')
```
![image](https://user-images.githubusercontent.com/78869960/134853996-0a4d872f-637e-4031-864f-6bb0a4ae75f8.png)

# Multiple Lines on the Same Plot

If we want to have many plot lines on the same graph, we can simply add more of plt.plot() statements accordingly.

```
x = np.array([4,6,8])
y1 = np.array([300,500,800])
y2 = np.array([60,366,349])

plt.plot(x,y1, c='orange')
plt.plot(x,y2, c='g')
```
![image](https://user-images.githubusercontent.com/78869960/134854059-f0468cf9-4e05-4046-913f-11ec6b47f686.png)

---

# Subplots

At times, we wish to draw multiple plots on the same canvas using subplots.
```
x1 = np.array([4,6,8])
x2 = np.array([20,30,50])
y1 = np.array([300,500,800])
y2 = np.array([60,366,349])

plt.subplot(1, 2, 1)
plt.plot(x1, y1, 'r')
plt.title('plot1')

plt.subplot(1,2,2)
plt.plot(x2, y2, 'g')
plt.title('plot2')

plt.suptitle('Canvas')
```
![image](https://user-images.githubusercontent.com/78869960/134854166-a856d211-39e0-4057-83c4-bb2f55ab033e.png)

## Example with Alternative way

Creating subplots in another way using axes.
```
x1 = np.array([4,6,8])
x2 = np.array([20,30,50])
y1 = np.array([300,500,800])
y2 = np.array([400,900,2500])

fig = plt.figure(figsize=(10,10))

axes1 = fig.add_axes([0.1, 0.1, 0.8, 0.8]) # main axes
axes2 = fig.add_axes([0.2, 0.5, 0.4, 0.3]) # inset axes

# Larger Figure Axes 1
axes1.plot(x1, y1, 'b')
axes1.set_xlabel('X_label_axes2')
axes1.set_ylabel('Y_label_axes2')
axes1.set_title('Axes 2 Title')

# Insert Figure Axes 2
axes2.plot(x2, y2, 'r')
axes2.set_xlabel('X_label_axes2')
axes2.set_ylabel('Y_label_axes2')
axes2.set_title('Axes 2 Title');
```
![image](https://user-images.githubusercontent.com/78869960/134854241-37e45f4e-cc9e-4590-8c6b-e04866dfd288.png)

---

## Scatter Plot

With Pyplot, you can use the **scatter()** function to draw a scatter plot.

The scatter() function plots one dot for each observation. It needs two arrays of the same length, one for the values of the x-axis, and one for values on the y-axis:

```
x = np.array([4,645,32,435,324,32,433,332])
y = np.array([434,454,322,543,544,433,343,443])

plt.scatter(x, y, color = 'red')
```
![image](https://user-images.githubusercontent.com/78869960/134854288-e9b1f0b3-7600-424c-9899-5646b3af3e71.png)

---

## Bar Plot

With Pyplot, you can use the **bar()** function to draw bar graphs. The bar() function takes arguments that describes the layout of the bars.

The categories and their values represented by the first and second argument as arrays.
```
x = ["A", "B", "C", "D"]
y = [3,5,2,6]

plt.bar(x,y)
```
![image](https://user-images.githubusercontent.com/78869960/134854326-79e6748a-61f5-4abf-87bd-9fac4ae09f4a.png)

---
## Histogram

In Matplotlib, we use the **hist()** function to create histograms.

The hist() function will use an array of numbers to create a histogram, the array is sent into the function as an argument. A histogram is a graph showing frequency distributions. It is a graph showing the number of observations within each given interval.
```
from random import sample
data = sample(range(1,1000),100)
plt.hist(data)
```
![image](https://user-images.githubusercontent.com/78869960/134854380-3fab29a3-1c0c-48a1-8388-ea6d86488a80.png)

---

## Box Plot

We use **plt.boxplot()** to draw out a box plot for the data.

In descriptive statistics, a box plot or boxplot is a method for graphically depicting groups of numerical data through their quartiles. Box plots may also have lines extending from the boxes indicating variability outside the upper and lower quartiles, hence the terms box-and-whisker plot and box-and-whisker diagram.
```
data = [np.random.normal(0, std, 100) for std in range(1, 4)]

plt.boxplot(data, vert=True, patch_artist=True)
```
![image](https://user-images.githubusercontent.com/78869960/134854437-e58d8f05-6a6a-49c8-b2e2-17e89e95d636.png)
---

## Pie Charts

With Pyplot, you can use the **pie()** function to draw pie charts. 

The pie chart draws one piece (called a wedge) for each value in the array. By default the plotting of the first wedge starts from the x-axis and move counterclockwise. 

We also write down the labels for each segment using **labels** keyword.

```
plt.figure(figsize=(20,8))

y = np.array([40,25,5,30])
mylabels = ["Singing", "Dancing", "Gardening", "Reading"]

plt.pie(y, labels = mylabels)
```
![image](https://user-images.githubusercontent.com/78869960/134854484-de2a0079-5120-497e-a32f-2ea26dce4fc9.png)




We can change the value of the Start Angle for pie chart using **startangle** keyword.

Also, if we want to explode a particular segment out, we can do that with the use of **explode** keyword. The values in this array represent how far from the centre, each segment of the pie chart would be.

```
plt.figure(figsize=(20,8))

y = np.array([40,25,5,30])
mylabels = ["Singing", "Dancing", "Gardening", "Reading"]
array = [0,0,0,0.2]

plt.pie(y, labels = mylabels, startangle = 90, explode = array)
```
![image](https://user-images.githubusercontent.com/78869960/134854521-137609f9-df78-43ac-af28-5cfa9decd746.png)

We can further customize it by adding shadow effects or personalizing the colors according to ourselves, using **shadow** and **colors** keywords.

```
plt.figure(figsize=(20,8))

y = np.array([40,25,5,30])
mylabels = ["Singing", "Dancing", "Gardening", "Reading"]
array = [0,0,0,0.2]
mycolors = ['black','green','yellow','red']

plt.pie(y, labels = mylabels, startangle = 90, explode = array, shadow = True, colors = mycolors)
```
![image](https://user-images.githubusercontent.com/78869960/134854570-153eacdb-5fae-41c8-8c06-ce49dd491ef7.png)

We can further go on to add a legend for the labels in our pie chart, along with a label header, using **legend** and **title** keywords.

```
plt.figure(figsize=(20,8))

y = np.array([40,25,5,30])
mylabels = ["Singing", "Dancing", "Gardening", "Reading"]

plt.pie(y, labels = mylabels)

plt.legend( title = "Hobbies:")
```
![image](https://user-images.githubusercontent.com/78869960/134854608-433bc85b-0599-4066-af58-096160b098fa.png)

---

# Conclusion

We learn that Matplotlib is an extrememly rich and extensive library for data visualisations. It is easy to use and user-friendly, without any hassles of remembering tiny nuances that might cause bugs if tweaked a little. 

Everything ranging from a simple line plot to elaborate Pie charts can be easily visualised and customised according to the needs of the user.


---





