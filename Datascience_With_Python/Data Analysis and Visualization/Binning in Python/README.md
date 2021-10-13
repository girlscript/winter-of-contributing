Real-world data tend to be noisy. Noisy data is data with a large amount of additional meaningless information in it called noise. Data cleaning routines attempt to smooth out noise while identifying outliers in the data.

There are three data smoothing techniques as follows –

1. Binning : Binning methods smooth a sorted data value by consulting its “neighborhood”, that is, the values around it.
2. Regression : It conforms data values to a function. Linear regression involves finding the “best” line to fit two attributes (or variables) so that one attribute can be used to predict the other.
3. Outlier analysis : Outliers may be detected by clustering, for example, where similar values are organized into groups, or “clusters”. Intuitively, values that fall outside of the set of clusters may be considered as outliers.

# **Binning**

In this method the data is first sorted and then the sorted values are distributed into a number of buckets or bins. As binning methods consult the neighborhood of values, they perform local smoothing.

![](https://i.ytimg.com/vi/wJgto87zEEs/maxresdefault.jpg)

There are basically two types of binning approaches –

- **Equal width (or distance) binning**: The simplest binning approach is to partition the range of the variable into k equal-width intervals. The interval width is simply the range [A, B] of the variable divided by k,

  ``` w = (B-A) / k ```
  
  Thus, ith interval range will be ```[A + (i-1)w, A + iw]``` where ```i = 1, 2, 3…..k```. Skewed data cannot be handled well by this method.

- **Equal depth (or frequency) binning**: In equal-frequency binning we divide the range [A, B] of the variable into intervals that contain (approximately) equal number of points; equal frequency may not be possible due to repeated values.

There are three approaches to perform smoothing:

- **Smoothing by bin means:** In smoothing by bin means, each value in a bin is replaced by the mean value of the bin.
- **Smoothing by bin median:** In this method each bin value is replaced by its bin median value.
- **Smoothing by bin boundary:** In smoothing by bin boundaries, the minimum and maximum values in a given bin are identified as the bin boundaries. Each bin value is then replaced by the closest boundary value.

### **Steps**

1. Sort the array of given data set.
2. Divides the range into N intervals, using equal depth or equal width partitioning.
3. Smooth data by finding either the mean, median or boundaries of each bin.

### Applications

1. Binning can be used when there are more possible data points than observed data points. An example is to bin the body heights of people into intervals or categories. Let us assume, we take the heights of 30 people. The length values can be between 1.30 metres to 2.50 metres. Theoretically, there are 120 different cm values possible, but we can have at most 30 different values from our sample group. One way to group them could be to put the measured values into bins ranging from 1.30 - 1.50 metres, 1.50 - 1.70 metres, 1.70 - 1.90 metres and so on. This means that the original data values, will be assigned to a bin into which they fit according to their size. The original values will be replaced by values representing the corresponding intervals. Binning is a form of quantization.

2. Bins do not necessarily have to be numerical, they can be categorical values of any kind, like "dogs", "cats", "hamsters", and so on.

3. Binning is also used in image processing, binning. It can be used to reduce the amount of data, by combining neighboring pixel into single pixels. kxk binning reduces areas of k x k pixels into single pixel.

#### References

1. https://www.geeksforgeeks.org/ml-binning-or-discretization/
2. https://www.python-course.eu/pandas_python_binning.php
3. https://www.geeksforgeeks.org/ml-k-medoids-clustering-with-example/
