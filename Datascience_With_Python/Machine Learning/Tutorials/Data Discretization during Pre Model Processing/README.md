# Data Discretization during Pre Model Processing

## Introduction 

Data discretization is defined as a process of converting continuous data attribute values into a finite set of intervals with minimal loss of information. It is a form of data reduction technique as the raw data are replaced by a smaller number of interval or concept labels.

For example the raw values of a numeric attribute (e.g., age) are replaced by
interval labels (e.g., 0–10, 11–20, etc.) or conceptual labels (e.g., youth, adult, senior). The labels, in turn, can be recursively organized into higher-level concepts, resulting in a concept hierarchy for the numeric attribute. Figure below shows a concept hierarchy for the attribute price. Note that for the same attribute, one can make more than one concept hierarchy to accommodate the needs of various users.

![](https://github.com/pushpit-J19/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Data%20Discretization%20during%20Pre%20Model%20Processing/Images/discretization_and_concept_heirarchy.PNG)

### Categories of Data discretization

Discretization can be categorised depending upon how it is performed, 

1. depending upon if it uses class information or not :
 - **Supervised discretization** : If the discretization process uses class information, then it is called supervised discretization. Examples of this is discretization by Decision trees, discretization by correlation etc.
 - **Unsupervised discretization** : If the discretization process does not use class information, then it is called unsupervised discretization. Examples of this is discretization by binning, discretization by histogram analysis, discretization by clustering etc.

2. depending upon the direction of discretization : 
 - **Top-down discretization or Splitting** : If the process starts by first finding one or a few points (called split points or cut points) to split the entire attribute range, and then repeats this recursively on the resulting intervals. Examples of this is discretization by Decision trees, discretization by binning etc. 

 - **Bottom-up discretization or Merging** : which starts by considering all of the continuous values as potential split-points, removes some by merging neighborhood values to form intervals, and then recursively applies this process to the resulting intervals. Examples of this is discretization by correlation.


### Why is Discretization important?

Discretization is important for many reasons, some of which are discussed here :

- Many real-world data mining tasks involve continuous attributes but many existing ML systems cannot handle such attributes, even if it can, its performance can be significantly improved by replacing a continuous attribute with its discretized values. 

- Improvement in quality and efficiency : Discretization significantly improves the quality of discovered knowledge and also reduces the running time of various data mining tasks such as association rule discovery, classification, and prediction. 

- Understanding feature data : Often, it is easier to understand continuous data (such as weight) when divided and stored into meaningful categories or groups as age was stored in the classes of youth, adult and seniors.

- Ease of intrepreting the feature relationship : Discretization can help interprets features more easily as continuous features have a smaller chance of correlating with the target variable due to infinite degrees of freedom and may have a complex non-linear relationship which makes it harder to interpret.

- Incompatible with models/methods : Certain models may be incompatible with continuous data, for example, alternative decision-tree models such as a Random-Forest model is not suitable for continuous features. Feature engineering methods like any entropy-based methods may not work with continuous data, thus we would discretize variables.

- Signal-to-Noise Ratio : When we discretize a model, we are fitting it to bins and reducing the impact of small fluctuation in the data (noise).


## Some Data discretization techniques

### Discretization by Binning

Binning is a top-down (splitting) technique based on a specified number of bins which does not use class information (thus is an unsupervised discretization technique).  
This technique smoothes and discretizes sorted data by considering elements around it i.e. consulting the neighbourhood and distributing the sorted values into a number of “buckets,” or bins.  
For example, attribute values can be discretized by applying equal-width or equal-frequency binning, and then replacing each bin value by the bin mean or median, as explained ahead. These techniques can be applied recursively to the resulting partitions to generate concept hierarchies.  
However, this technique is sensitive to the user-specified number of bins.


#### Some binning techniques are :-  
> Note : Here we are using equal-width binning where all buckets have same no of elements.   
So if we have data values : 4, 8, 15, 21, 21, 24, 25, 28, 34  
and we partition them into bins of size 3 (that is each element has 3 elements then we, will have bins as :  
bin 1 : 4, 8, 15  
bin 2 : 21, 21, 24  
bin 3 : 25, 28, 34

1. Binning by bin mean : here each value in a bin is replaced by the mean value of the bin. Eg : If we have bin = (4, 8, 12, 16) then each value becomes = 4+8+12+16/4 = 10, so bin becomes (10, 10, 10, 10). Similarly if we apply this on the above example we get bins as   
bin 1 : 9, 9, 9  
bin 2 : 22, 22, 22  
bin 3 : 29, 29, 29

2. Binning by bin median : here each value in a bin is replaced by the median value of the bin. Eg : If we have bin = (4, 8, 12) then each value becomes = median(4,8,12) = 8, so bin becomes (8, 8, 8). Similarly if we apply this on the above example we get bins as   
bin 1 : 8, 8, 8
bin 2 : 21, 21, 21  
bin 3 : 28, 28, 28

3. Binning by boundaries : here each value in a bin is replaced by the closest boundary value where boundaries are the minimum and maximum values in that bin. Eg : If we have bin = (4, 6, 12) then middle value becomes = 4, so bin becomes (4, 4, 12). Similarly if we apply this on the above example we get bins as   
bin 1 : 4, 4, 15
bin 2 : 21, 21, 24  
bin 3 : 25, 25, 34

### Discretization by Histogram Analysis

Histogram analysis is also an unsupervised discretization technique because it
does not use class information. A histogram partitions the values of an attribute into disjoint ranges called buckets or bins.

#### Partitioning rules 
Partitioning rules tell how are the buckets determined and the attribute values partitioned into the buckets. There are several such rules, most famous of which are discussed here :  
- **Equal-width** : The width of each bucket range is uniform that is all the values are separated into N buckets having same width or having equal no of elements. This method can handle outliers to some extent but doesn't improve the value spread. The width of the bins can formulated as Width = (maximum value - minimum value) / N ; where N is the number of bins or intervals.

- **Equal-Frequency** or equal-depth : The buckets roughly have the same frequency i.e., each bucket contains roughly the same number of contiguous data samples or roughly same amount of observations. 

![](https://github.com/pushpit-J19/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Data%20Discretization%20during%20Pre%20Model%20Processing/Images/partitioning.PNG)

The histogram analysis algorithm can be applied recursively to each partition in order to automatically generate a multilevel concept hierarchy, with the procedure terminating once a prespecified number of concept levels has been reached. A minimum interval size can also be used per level to control the
recursive procedure. This specifies the minimum width of a partition, or the minimum number of values for each partition at each level.

### Discretization by Clustering

A clustering algorithm like the K-means algorithm can be applied to discretize a numeric attribute, A, by partitioning the values of A into clusters (groups). It is a unsupervised discretization method as it doesnt take class labels into considerations. Since clustering takes the distribution of A into consideration, as well as the closeness of data points, therefore it is able to produce high-quality discretization results and is a popular method for discretization. It doesn’t improve the value spread and can handle outliers, however a centroid bias may exist.

### Discretization by Decision Trees

The way we create Decision tree classifiers, the same way we can apply them for discretization of data following a supervised, top-down splitting approach. For example, we may have a data set of patient symptoms (the attributes) where each patient has an associated diagnosis class label. Class distribution information is used in the calculation and determination of split-points. The main idea is to select split-points so that a given resulting partition contains as many tuples of the same class as possible. To discretize a numeric attribute, A, the method selects the value of A that has the minimum entropy as a split-point, and recursively partitions the resulting intervals to arrive at a hierarchical discretization.

### Discretization by Correlation

Measures of correlation can be used for discretization. ChiMerge is a χ
2 based discretization method which employs a bottom-up and supervised approach by finding the best neighboring intervals and then merging them to form larger intervals, recursively. The basic notion is that for accurate discretization, the relative class frequencies should be fairly consistent within an interval. Therefore, if two adjacent intervals have a very similar distribution of classes, then the intervals can be merged. Otherwise, they should remain separate. ChiMerge proceeds as follows. Initially, each distinct value of a numeric attribute A is considered to be one interval. χ2 tests are performed for every pair of adjacent intervals. Adjacent intervals with the least χ2 values are merged together, because low χ2 values for a pair indicate similar class distributions. This merging process proceeds recursively until a predefined stopping criterion is met.


### Conclusion

Data Discretization is converting of continuous data to intervals or classes as a preprocessing step performed to increase efficiency and performance of modals and other advantages attained from it using various different discretization techniques.


### References 
- https://www.saedsayad.com/unsupervised_binning.htm
- https://towardsdatascience.com/an-introduction-to-discretization-in-data-science-55ef8c9775a2
- https://www.researchgate.net/publication/4324220_Data_Discretization_Unification
- https://www.javatpoint.com/discretization-in-data-mining
- https://www.saedsayad.com/unsupervised_binning.htm
- https://machinelearningmastery.com/discretization-transforms-for-machine-learning/
- https://scikit-learn.org/stable/modules/generated/sklearn.preprocessing.KBinsDiscretizer.html
- Book-Data Mining. Concepts and Techniques, 3rd Edition by Jiawei Han, Micheline Kamber, Jian Pei (z-lib.org)
