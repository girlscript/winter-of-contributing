# Data Visualisation with Matplotlib

**Audio link:** [Data Visualizations with Matplotlib](https://drive.google.com/file/d/1aQRDc9MsRcm08y6xUnNAeO3LlT_Y6Cjp/view?usp=sharing)

Matplotlib is a multi-platform data visualisation package based on NumPy arrays and intended to operate with the SciPy stack as a whole. Matplotlib's ability to work with a wide range of operating systems and graphics backends is one of its most essential characteristics. Matplotlib supports a wide range of backends and output formats, so you can rely on it to operate independent of your operating system or desired output format. One of Matplotlib's greatest virtues has been its cross-platform, everything-to-everyone approach. It has attracted a significant user base, which has resulted in an active developer community, as well as Matplotlib's sophisticated capabilities and widespread use in the scientific Python community.

## Installing Matplotlib
Matplotlib can be installed using pip. The following command is run in the command prompt to install Matplotlib.
```
 pip install matplotlib
```
## Importing Matplotlib
Just as we use the ```np``` shorthand for NumPy and the ```pd``` shorthand for Pandas, we use some standard shorthands for Matplotlib imports:
```
import matplotlib as mpl
import matplotlib.pyplot as plt
 ```
The ```plt``` interface is what we use most often.
The plotting functions are methods of explicit ```Figure``` and ```Axes``` objects.

## Types of plots in Matplotlib
 Matplotlib provides a wide variety of methods and functions to generate different types of graphs.
Let us have a look at a few of them:-
1. Line Plot
2. Subplots
3. Histograms
4. Images
5. Paths
6. Bar Charts
7. Pie Charts
8. Tables
9. Scatter Plots
10. Filled Curves
11. Log Plots
12. Polar Plots
13. Stream Plots

#### Line Plot
 It is the simplest of all graphs. The plot() method is used to plot a line graph.
```
import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5, 6]
y = [1, 5, 3, 5, 7, 8]

plt.plot(x, y)
plt.show()
```
#### Subplots
 The subplot() function is used to create these. It is very useful to compare the two plots.
 ```
 import matplotlib.pyplot as plt
import numpy as np

# Some example data to display
x = np.linspace(0, 2 * np.pi, 400)
y = np.sin(x ** 2)
```
#### Histograms
```
from matplotlib import pyplot as plt
import numpy as np
fig,ax = plt.subplots(1,1)
a = np.array([22,87,5,43,56,73,55,54,11,20,51,5,79,31,27])
ax.hist(a, bins = [0,25,50,75,100])
ax.set_title("histogram of result")
ax.set_xticks([0,25,50,75,100])
ax.set_xlabel('marks')
ax.set_ylabel('no. of students')
plt.show()
```
#### Images
 Matplotlib can also create images with the help of the imshow() function.
````
# Implementation of matplotlib function
import matplotlib.pyplot as plt
import numpy as np
from matplotlib.colors import LogNorm
      
dx, dy = 0.015, 0.05
y, x = np.mgrid[slice(-4, 4 + dy, dy),
                slice(-4, 4 + dx, dx)]
z = (1 - x / 3. + x ** 5 + y ** 5) * np.exp(-x ** 2 - y ** 2)
z = z[:-1, :-1]
z_min, z_max = -np.abs(z).max(), np.abs(z).max()
  
c = plt.imshow(z, cmap ='Greens', vmin = z_min, vmax = z_max,
                 extent =[x.min(), x.max(), y.min(), y.max()],
                    interpolation ='nearest', origin ='lower')
plt.colorbar(c)
  
plt.title('matplotlib.pyplot.imshow() function Example', 
                                     fontweight ="bold")
plt.show()
````
#### Paths
 Arbitrary paths can be added to Matplotlib with the help of the matplotlib.path module
````
import matplotlib.pyplot as plt
from matplotlib.path import Path
import matplotlib.patches as patches

verts = [
   (0., 0.),  # left, bottom
   (0., 1.),  # left, top
   (1., 1.),  # right, top
   (1., 0.),  # right, bottom
   (0., 0.),  # ignored
]

codes = [
    Path.MOVETO,
    Path.LINETO,
    Path.LINETO,
    Path.LINETO,
    Path.CLOSEPOLY,
]

path = Path(verts, codes)

fig, ax = plt.subplots()
patch = patches.PathPatch(path, facecolor='orange', lw=2)
ax.add_patch(patch)
ax.set_xlim(-2, 2)
ax.set_ylim(-2, 2)
plt.show()
````
#### Bar Charts
 The bar() function is used when plotting bar charts. One could further customize the bar charts as horizontal or vertical as per one’s requirement using this method.
````
import numpy as np
import matplotlib.pyplot as plt
 
  
# creating the dataset
data = {'C':20, 'C++':15, 'Java':30,
        'Python':35}
courses = list(data.keys())
values = list(data.values())
  
fig = plt.figure(figsize = (10, 5))
 
# creating the bar plot
plt.bar(courses, values, color ='maroon',
        width = 0.4)
 
plt.xlabel("Courses offered")
plt.ylabel("No. of students enrolled")
plt.title("Students enrolled in different courses")
plt.show()
````
#### Pie Charts
 One should be using the pie() method to generate pie charts. Additional features allow one to use shadow effects on the pie, label the regions, determine the percentage it represents, etc.
````
# Import libraries
from matplotlib import pyplot as plt
import numpy as np
  
  
# Creating dataset
cars = ['AUDI', 'BMW', 'FORD',
        'TESLA', 'JAGUAR', 'MERCEDES']
  
data = [23, 17, 35, 29, 12, 41]
  
# Creating plot
fig = plt.figure(figsize =(10, 7))
plt.pie(data, labels = cars)
  
# show plot
plt.show()
````
#### Scatter Plots
  To generate a scatterplot, the function scatter() is put to use. One could also make use of the optional size and color arguments this function has to provide.
````
import matplotlib.pyplot as plt
 
x =[5, 7, 8, 7, 2, 17, 2, 9, 4, 11, 12, 9, 6] 
y =[99, 86, 87, 88, 100, 86,  103, 87, 94, 78, 77, 85, 86]

plt.scatter(x, y, c ="blue")
  
# To show the plot
plt.show()
````
## Advantages:
Below are some of the advantages explained.
 1. Few advantages of Matplotlib are
 2. Simple and easy to grasp for beginners.
 3. Easier to use for people who have had prior experience with Matlab or other graph plotting tools.
 4. It provides high-quality images and plots in various formats such as png, pdf, pgf, etc.
 5. Provides control to various elements of a figure such as DPI, figure colour, figure size.

## Disadvantages
 Matplotlib is excellent for drumming up charts and graphics but it may not be the best fit for time series data, where ggplot is better for defining parameters. Ggplot API is also considered the best for visualising exploratory data analysis. However, Matplotlib also comes with certain disadvantages —
 1. It wasn’t designed for exploratory data analysis and visualisation, said a practitioner.
 2.  Also, the library is not the best for dealing with time series data since one needs to import all these helper classes for the year, month, week, day formatters, shared a user on a forum.
 3. It is also very unwieldy when dealing with multiple datasets while it is easy to convert dataset into a long format and plot it.
 4.  Another big disadvantage is that the library is very low-level, which means that one needs to write more code to get the visualisation as opposed to Tableau where you can achieve that in a few clicks.

## Alternatives Of Matplotlib
 One can choose from other Python libraries such as Pandas, Seaborn, ggplot, Bokeh and Plotly. The reason why developers are leaning towards Python is because there are a lot of robust tools to choose from. For example, Plotly generates interactive graphs while ggplot is preferred for exploratory data analysis. Meanwhile, Seaborn is finding a lot of traction when it comes to complex data visualisations and generating statistical graphs. Bokeh, which is developed by team Anaconda, is an interactive library which is easy to integrate with Javascript and create highly interactive plots. All in all, Python’s data visualisation libraries are dubbed as top-notch and have surpassed MATLAB’s popularity to a certain level.

## Conclusion
 *Matplotlib, no doubt, will always remain the first choice of those with will to learn about visualization, due to its easy-to-implement synatxing of code and beautifully designed output plots. It serves the purpose, when one needs to look into the insights of data with the help of easy visualizations. To know more about what matplotlib has to offer you can visit [here.](https://matplotlib.org/)*
