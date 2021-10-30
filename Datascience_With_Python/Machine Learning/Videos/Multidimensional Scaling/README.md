# Multidimensional Scaling

**Link to the video** **→** [▶](https://youtu.be/ly5HfgqgYHw)

**********************

### Introduction 

********

Multidimensional scaling (MDS) is a means **of visualizing the level of similarity of individual cases of a dataset**. MDS is used to translate "information about the pairwise 'distances' among a set of objects or individuals" into a configuration of points mapped into an abstract Cartesian space. It is a visual representation of distances or dissimilarities between sets of objects. “Objects” can be colors, faces, map coordinates, political persuasion, or any kind of real or conceptual stimuli (Kruskal and Wish, 1978). Objects that are more similar (or have shorter distances) are closer together on the graph than objects that are less similar (or have longer distances). 

### PCA 

*******

PCA which stands for Principal Component Analysis is a dimensionality reduction algorithm which considers correlation between the data points in higher dimensions and forms clusters in a 2D space.  
The only difference between the PCA and MDS is that, MDS unlike PCA considers Euclidean distance between the datapoints to form clusters in 2D space.

```
Note: There are tons of other methods to calculate distance between data points which can be utilized according to the given problem.
```
### MDS

*******
MDS which stands for Multidimensional Scaling considers distances among the data points to form clusters. Inside Multidimensional Scaling, there are methods for different types of data:
- **Metric** 
  The first category of Multidimensional Scaling is Metric Multidimensional Scaling, also known as Principal Coordinates Analysis. This method comes down to creating a mapping of your observations, based on distances between them.
- **Non-metric**
 *"The goal of metric and non-metric MDS are exactly the same."*
  The difference lies in the measurement scale of the data. Metric Multidimensional Scaling applies for interval scale data only, whereas you need Non-Metric Multidimensional Scaling for ordinal data. Ordinal data like data from expressing preferences between pairs, or data on 1–7 measurement scales.

### When to use MDS?
*****
Let’s say you were given a list of city locations, and were asked to create a map that included distances between cities. 
- The procedure would be relatively straightforward, involving nothing more complicated than taking a ruler and measuring the distance between each city. 
- However, what if you were given only the distances between the cities (i.e. their similarities) and not their locations? You could still create a map but it would involve a fair amount of geometry, and some logical deductions. 
- Kruskal & Wish (1978) the authors of one of the first multidimensional scaling books state that this type of logic problem is ideal for multidimensional scaling. You’re basically given a set of differences, and the goal is to create a map that will also tell you what the original distances where and where they were located.


### A simple example
****
The matrix shows relationships between items. For a simple example, let’s say you had a set of cities in Florida and their distances:
![image](https://user-images.githubusercontent.com/30192967/139530186-040f8eaf-ef9f-4327-ae08-ff6a525760dd.png)

The scaling produces a graph like the one below.

![image](https://user-images.githubusercontent.com/30192967/139530196-bed2e69a-ee9f-481b-a664-519b896232bd.png)

The very simple example above shows cities and distances, which are easy to visualize as a map. However, multidimensional scaling can work on “theoretically” mapped data as well.

### Notation
****
Although MDS is commonly used as a measure of dissimilarity, MDS can technically measure similarity as well. 
- Dissimilarity between two points r and s is denoted δrs and similarity is denoted srs. 
- Small δrs indicates values that are close together and larger values indicate values that are farther apart (i.e. are more dissimilar). 
- On the other hand, similarity values are the opposite: small srs indicates values that are farther apart; larger values suggest more similarity (i.e. values are closer together). 
- Similarity measures are easily converted from one to another by a monotone decreasing transformation (Buja et. al, 2007). NCSS (n.d.) gives the following formula for the transformation:

<img src="https://user-images.githubusercontent.com/30192967/139530416-3934fcfd-4bfb-4a66-a378-4f73e07db77f.png" width="300" align="center" />

Where:

- d<sub>rs</sub> = a dissimilarity
- s<sub>rs</sub> = a similarity

![image](https://user-images.githubusercontent.com/30192967/139521838-5a2fc971-8980-4805-93e9-af76c4994afc.png)

_As you can see above, using MDS(Multidimensional Scaling) we have achieved to scale down the higher dimensional data(3D) to 2 dimensions and form clusters._

### References

*******

- https://www.youtube.com/watch?v=GEn-_dAyYME
- https://towardsdatascience.com/multidimensional-scaling-d84c2a998f72
- https://www.statisticshowto.com/multidimensional-scaling/

