# Multidimensional Scaling

## Audio Link : [Multidimensional Scaling](https://drive.google.com/file/d/14hLYGCi8tJ6OO3nnMLQw-iczY494qc9q/view?usp=sharing)

- Multidimensional scaling (MDS) is a means of visualizing the level of similarity of individual cases of a dataset. MDS is used to translate "information about the pairwise 'distances' among a set of  objects or individuals" into a configuration of points mapped into an abstract Cartesian space.

- More technically, MDS refers to a set of related ordination techniques used in information visualization, in particular to display the information contained in a distance matrix. It is a form of non-linear dimensionality reduction.

- Given a distance matrix with the distances between each pair of objects in a set, and a chosen number of dimensions, N, an MDS algorithm places each object into N-dimensional space (a lower-dimensional representation) such that the between-object distances are preserved as well as possible. For N = 1, 2, and 3, the resulting points can be visualized on a scatter plot

- Core theoretical contributions to MDS were made by James O. Ramsay of McGill University, who is also regarded as the founder of functional data analysis.

## When to Use MDS
- Let’s say you were given a list of city locations, and were asked to create a map that included distances between cities. The procedure would be relatively straightforward, involving nothing more complicated than taking a ruler and measuring the distance between each city.
-  However, what if you were given only the distances between the cities (i.e. their similarities) — and not their locations? You could still create a map — but it would involve a fair amount of geometry, and some logical deductions. Kruskal & Wish (1978) — the authors of one of the first multidimensional scaling books — state that this type of logic problem is ideal for multidimensional scaling. 
-  You’re basically given a set of differences, and the goal is to create a map that will also tell you what the original distances where and where they were located.

## A Simple Example

Multidimensional scaling uses a square, symmetric matrix for input. The matrix shows relationships between items. For a simple example, let’s say you had a set of cities in Florida and their distances:

![image](https://user-images.githubusercontent.com/63282184/144058956-4f70a95e-8654-473d-b733-539848413421.png)

The scaling produces a graph like the one below.

![image](https://user-images.githubusercontent.com/63282184/144059000-e876a4a0-7193-4e92-b6fd-e24a9dbdcd4e.png)


## Basic steps:

1. Assign a number of points to coordinates in n-dimensional space. N-dimensional space could be 2-dimensional, 3-dimensional, or higher spaces (at least, theoretically, because 4-dimensional spaces and above are difficult to model). The orientation of the coordinate axes is arbitrary and is mostly the researcher’s choice. For maps like the one in the simple example above, axes that represent north/south and east/west make the most sense.

2. Calculate Euclidean distances for all pairs of points. The Euclidean distance is the “as the crow flies” straight-line distance between two points x and y in Euclidean space. It’s calculated using the Pythagorean theorem (c2 = a2 + b2), although it becomes somewhat more complicated for n-dimensional space (see “Euclidean Distance in n-dimensional space“). This results in the similarity matrix.

3. Compare the similarity matrix with the original input matrix by evaluating the stress function. Stress is a goodness-of-fit measure, based on differences between predicted and actual distances. In his original 1964 MDS paper, Kruskal wrote that fits close to zero are excellent, while anything over .2 should be considered “poor”. More recent authors suggest evaluating stress based on the quality of the distance matrix and how many objects are in that matrix.

4. Adjust coordinates, if necessary, to minimize stress.

## Formula : 

![image](https://user-images.githubusercontent.com/63282184/144059154-e9d9dc16-6c59-4dbf-bc04-44b98b44277d.png)


## Advantages and conclusion 

- One further advantage of multidimensional scaling is that ordinal scale level is sufficient for collecting data i.e. the exact value of the Objects' characteristics need not be known. The rank order is sufficient and this simplifies data collecting considerably.

- A multidimensional scale is best used in situations where there's a large amount of data organized in table form.

- The purpose of multidimensional scaling is to map the relative location of objects using data that show how the objects differ.
