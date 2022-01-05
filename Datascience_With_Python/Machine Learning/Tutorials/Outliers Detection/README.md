Description:

What are Outliers?
They are data records that differ dramatically from all others, they distinguish themselves in one or more characteristics. In other words, an outlier is a value that escapes normality and can (and probably will) cause anomalies in the results obtained through algorithms and analytical systems. The presence of outliers in a classification or regression dataset can result in a poor fit and lower predictive modeling performance.
Some other names of Outliers are: Aberration, oddity, deviation, anomaly, eccentric, nonconformist, exception, irregularity, dissent, etc.

Different types of Outliers?
Point outliers
Contextual outliers
Collective outliers

Point outliers are single data points that lay far from the rest of the distribution. Contextual outliers can be noise in data, such as punctuation symbols when realizing text analysis or background noise signal when doing speech recognition. Collective outliers can be subsets of novelties in data such as a signal that may indicate the discovery of new phenomena

Common causes of outliers on a data set?
Data entry errors (human errors)
Measurement errors (instrument errors)
Experimental errors (data extraction or experiment planning/executing errors)
Intentional (dummy outliers made to test detection methods)
Data processing errors (data manipulation or data set unintended mutations)
Sampling errors (extracting or mixing data from wrong or various sources)
Natural (not an error, novelties in data)


Outlier Analysis
In the book Outlier Analysis, Author Aggarwal provides a useful taxonomy of outlier detection methods, as follows:

Extreme Value Analysis: Determine the statistical tails of the underlying distribution of the data. For example, statistical methods like the z-scores on univariate data.
Probabilistic and Statistical Models: Determine unlikely instances from a probabilistic model of the data. For example, gaussian mixture models optimized using expectation-maximization.
Linear Models: Projection methods that model the data into lower dimensions using linear correlations. For example, principal component analysis and data with large residual errors may be outliers.
Proximity-based Models: Data instances that are isolated from the mass of the data as determined by cluster, density or nearest neighbor analysis.
Information Theoretic Models: Outliers are detected as data instances that increase the complexity (minimum code length) of the dataset.
High-Dimensional Outlier Detection: Methods that search subspaces for outliers give the breakdown of distance-based measures in higher dimensions (curse of dimensionality).

Application:
Outlier analysis has numerous applications in a wide variety of domains, such as the financial industry, quality control, fault diagnosis, intrusion detection, Web analytics, and medical diagnosis.

Conclusion:
Identification of potential outliers is important for the following reasons.
An outlier may indicate bad data. For example, the data may have been coded incorrectly or an experiment may not have been run correctly. If it can be determined that an outlying point is in fact erroneous, then the outlying value should be deleted from the analysis (or corrected if possible).
In some cases, it may not be possible to determine if an outlying point is bad data. Outliers may be due to random variation or may indicate something scientifically interesting. In any event, we typically do not want to simply delete the outlying observation. However, if the data contains significant outliers, we may need to consider the use of robust statistical techniques.


References:
https://machinelearningmastery.com/model-based-outlier-detection-and-removal-in-python/#:~:text=One%2DClass%20SVM-,Outlier%20Detection%20and%20Removal,t%20fit%20in%20some%20way.&text=In%20this%20case%2C%20simple%20statistical,deviations%20or%20the%20interquartile%20range.
https://towardsdatascience.com/a-brief-overview-of-outlier-detection-techniques-1e0b2c19e561
http://scikit-learn.org/stable/modules/outlier_detection.html
https://www.sciencedirect.com/topics/computer-science/outlier-detection
https://www.kdnuggets.com/2018/12/four-techniques-outlier-detection.html
https://en.wikipedia.org/wiki/Anomaly_detection
