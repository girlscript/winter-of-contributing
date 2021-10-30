# Multidimensional Scaling

**Link to the video** **→** [▶](https://youtu.be/ly5HfgqgYHw)

**********************

### Introduction 

********

Multidimensional scaling (MDS) is a means **of visualizing the level of similarity of individual cases of a dataset**. MDS is used to translate "information about the pairwise 'distances' among a set of objects or individuals" into a configuration of points mapped into an abstract Cartesian space.

### PCA 

*******

PCA which stands for Principal Component Analysis is a dimensionality reduction algorithm which considers correlation between the data points in higher dimensions and forms clusters in a 2D space.  
The only difference between the PCA and MDS is that, MDS unlike PCA considers Euclidean distance between the datapoints to form clusters in 2D space.

```
Note: There are tons of other methods to calculate distance between data points which can be utilized according to the given problem.
```
### MDS

*******

MDS which stands for Multidimensional Scaling considers distances among the data points to form clusters.
It is divided into 2 parts,
- **Metric** 
  The first category of Multidimensional Scaling is Metric Multidimensional Scaling, also known as Principal Coordinates Analysis. This method comes down to creating a mapping of your observations, based on distances between them.
- **Non-metric**
 *"The goal of metric and non-metric MDS are exactly the same."*
  The difference lies in the measurement scale of the data. Metric Multidimensional Scaling applies for interval scale data only, whereas you need Non-Metric Multidimensional Scaling for ordinal data. Ordinal data like data from expressing preferences between pairs, or data on 1–7 measurement scales.



![image](https://user-images.githubusercontent.com/30192967/139521838-5a2fc971-8980-4805-93e9-af76c4994afc.png)

```
As you can see above, using MDS(Multidimensional Scaling) we have achieved to scale down the higher dimensional data(3D) to 2 dimensions and form clusters.
```
### References

*******

https://www.youtube.com/watch?v=GEn-_dAyYME
https://towardsdatascience.com/multidimensional-scaling-d84c2a998f72

