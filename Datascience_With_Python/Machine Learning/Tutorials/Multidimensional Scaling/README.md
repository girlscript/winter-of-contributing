# What is Multidimensional Scaling?
- Multidimensional scaling is a visual representation of distances or dissimilarities between sets of objects. 
- “Objects” can be colors, faces, map coordinates, political persuasion, or any kind of real or conceptual stimuli (Kruskal and Wish, 1978). Objects that are more similar (or have shorter distances) are closer together on the graph than objects that are less similar (or have longer distances). 
- As well as interpreting dissimilarities as distances on a graph, MDS can also serve as a dimension reduction technique for high-dimensional data (Buja et. al, 2007).


- The term scaling comes from psychometrics, where abstract concepts (“objects”) are assigned numbers according to a rule (Trochim, 2006). For example, you may want to quantify a person’s attitude to global warming. You could assign a “1” to “doesn’t believe in global warming”, a 10 to “firmly believes in global warming” and a scale of 2 to 9 for attitudes in between. You can also think of “scaling” as the fact that you’re essentially scaling down the data (i.e. making it simpler by creating lower-dimensional data).
- Data that is scaled down in dimension keeps similar properties. For example, two data points that are close together in high-dimensional space will also be close together in low-dimensional space (Martinez, 2005). The “multidimensional” part is due to the fact that you aren’t limited to two dimensional graphs or data. Three-dimensional, four-dimensional and higher plots are possible.

- MDS is now used over a wide variety of disciplines. 
- It’s use isn’t limited to a specific matrix or set of data; In fact, just about any matrix can be analyzed with the technique as long as the matrix contains some type of relational data (Young, 2013). 
- Examples of relational data include correlations, distances, multiple rating scales or similarities.

## When to Use MDS

- Let’s say you were given a list of city locations, and were asked to create a map that included distances between cities. The procedure would be relatively straightforward, involving nothing more complicated than taking a ruler and measuring the distance between each city. 
- However, what if you were given only the distances between the cities (i.e. their similarities) — and not their locations? You could still create a map — but it would involve a fair amount of geometry, and some logical deductions. Kruskal & Wish (1978) — the authors of one of the first multidimensional scaling books — state that this type of logic problem is ideal for multidimensional scaling. 
- You’re basically given a set of differences, and the goal is to create a map that will also tell you what the original distances where and where they were located.

## Example

Multidimensional scaling uses a square, symmetric matrix for input. The matrix shows relationships between items. For a simple example, let’s say you had a set of cities in Florida and their distances:

![image](https://user-images.githubusercontent.com/63282184/142963683-1709f2ba-a920-433d-8f67-aeaf33689666.png)

The scaling produces a graph like the one below.

![image](https://user-images.githubusercontent.com/63282184/142963709-44d687a5-3229-4edd-a836-bb58674ae65e.png)


The very simple example above shows cities and distances, which are easy to visualize as a map. However, multidimensional scaling can work on “theoretically” mapped data as well. For example, Kruskal and Wish (1978) outlined how the method could be used to uncover the answers to a variety of questions about people’s viewpoints on political candidates. This could be achieved by reducing the data and issues (say, partisanship and ideology) to a two-dimensional map.


## Basic steps:

- Assign a number of points to coordinates in n-dimensional space. N-dimensional space could be 2-dimensional, 3-dimensional, or higher spaces (at least, theoretically, because 4-dimensional spaces and above are difficult to model). The orientation of the coordinate axes is arbitrary and is mostly the researcher’s choice. For maps like the one in the simple example above, axes that represent north/south and east/west make the most sense.
- Calculate Euclidean distances for all pairs of points. The Euclidean distance is the “as the crow flies” straight-line distance between two points x and y in Euclidean space. It’s calculated using the Pythagorean theorem (c2 = a2 + b2), although it becomes somewhat more complicated for n-dimensional space (see “Euclidean Distance in n-dimensional space“). This results in the similarity matrix.
- Compare the similarity matrix with the original input matrix by evaluating the stress function. Stress is a goodness-of-fit measure, based on differences between predicted and actual distances. In his original 1964 MDS paper, Kruskal wrote that fits close to zero are excellent, while anything over .2 should be considered “poor”. More recent authors suggest evaluating stress based on the quality of the distance matrix and how many objects are in that matrix.
- Adjust coordinates, if necessary, to minimize stress.

## Notation

- Although MDS is commonly used as a measure of dissimilarity, MDS can technically measure similarity as well. 
- Dissimilarity between two points r and s is denoted δrs and similarity is denoted srs. Small δrs indicates values that are close together and larger values indicate values that are farther apart (i.e. are more dissimilar). On the other hand, similarity values are the opposite: small srs indicates values that are farther apart; larger values suggest more similarity (i.e. values are closer together). 
- Similarity measures are easily converted from one to another by a monotone decreasing transformation (Buja et. al, 2007). NCSS (n.d.) gives the following formula for the transformation:

![image](https://user-images.githubusercontent.com/63282184/142963945-a1561918-6c55-4d1e-9ad8-94c7117f4bfe.png)


**Where:**

drs = a dissimilarity

srs = a similarity

Other notation you may come across:

i and j = sometimes used in place of s and r to indicate primary and secondary points.

Δ = the matrix (usually n x n) representing the dissimilarities.

drs = the distance between point r and point s (not to be confused with the dissimilarity notation drs in the above conversion equation).

X = the matrix of coordinate values in lower-dimensional space .

## Advantages 

Advantage of multidimensional scaling is that ordinal scale level is sufficient for collecting data i.e. the exact value of the Objects' characteristics need not be known. The rank order is sufficient and this simplifies data collecting considerably.
