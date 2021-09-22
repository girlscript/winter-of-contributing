## Data Normalization?
Data normalization is generally considered the development of clean data.Normalization is used to scale the data of an attribute so that it falls in a smaller range, such as -1.0 to 1.0 or 0.0 to 1.0. 
It increases the cohesion of entry types leading to cleansing, lead generation, segmentation, and higher quality data.
Simply put, this process includes eliminating unstructured data and redundancy (duplicates) in order to ensure logical data storage.
When data normalization is done correctly, you will end up with standardized information entry. 
These standardized information fields can then be grouped and read swiftly.

### Need of Normalization –
Normalization is generally required when we are dealing with attributes on a different scale, otherwise, it may lead to a dilution in effectiveness of an important equally important attribute(on lower scale) because of other attribute having values on larger scale.
It is generally useful for classification algorithms.


### Scaling to a range -
scaling means converting floating-point feature values from their natural range (for example, 100 to 900) into a standard range—usually 0 and 1 (or sometimes -1 to +1).

#### Scaling to a range is a good choice when both of the following conditions are met:

1. You know the approximate upper and lower bounds on your data with few or no outliers.
2. Your data is approximately uniformly distributed across that range.
A good example is age. Most age values falls between 0 and 90, and every part of the range has a substantial number of people.


### Feature Clipping -
If your data set contains extreme outliers, you might try feature clipping, which caps all feature values above (or below) a certain value to fixed value.
For example, you could clip all temperature values above 40 to be exactly 40. 


### Log Scaling -
Log scaling computes the log of your values to compress a wide range to a narrow range.
Log scaling is helpful when a handful of your values have many points, while most other values have few points and When the feature conforms to the power law.. 
This data distribution is known as the power law distribution. Movie ratings are a good example.
Log scaling changes the distribution, helping to improve linear model performance.
Log scaling is more symmetric than the perfect case. It will compress the large amount of data to small. It's basically isolating the exponent.
Log scaling isolates the exponent and plots the points, this way the graph looks more clean and symmetric makes it easier to analyse data.

#### **So what is the difference between Normalizing and Scaling?**
Normalization adjusts the values of your numeric data to a common scale without changing the range whereas scaling shrinks or stretches the data to fit within 
a specificrange. Scaling is useful when you want to compare two different variables on equal grounds.

**Min-max normalization:** Guarantees all features will have the exact same scale but does not handle outliers well.


## Standardization
Standardization comes into picture when features of input data set have large differences between their ranges, or simply when they are measured in different measurement units. Z-score is one of the most popular methods to standardize data
### Z-Score -
Z-score is a variation of scaling that represents the number of standard deviations away from the mean. 
You would use z-score to ensure your feature distributions have mean = 0 and std = 1.
It’s useful when there are a few outliers, but not so extreme that you need clipping.
**Z-score normalization:** Handles outliers, but does not produce normalized data with the exact same scale.

#### Will these methods improve data?
It is hard to know whether rescaling your data will improve the performance of your algorithms before you apply them. If often can, but not always.

A good tip is to create rescaled copies of your dataset and race them against each other using your test harness and a handful of algorithms you want to spot check. 
This can quickly highlight the benefits (or lack there of) of rescaling your data with given models, and which rescaling method may be worthy of further investigation.


https://drive.google.com/file/d/1r5DVECjTEzpmpEU3XVb4PXSZzVFUuiq2/view?usp=sharing
