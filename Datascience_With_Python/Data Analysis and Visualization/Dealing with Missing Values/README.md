# Dealing with Missing Values in Data

Dealing with Missing Values is a part of the Data Cleaning process which is done before doin anything on the data.It as a whole is part of the whole process called as Data Preprocessing.

## Data Cleaning 
The Data which we get in the real world tends to be incomplete , noisy or inconsistent to remove these fromt the data we use Data Cleaning. Data cleaning (or data cleansing) routines attempt to fill in missing values, smooth out noise while identifying outliers, and correct inconsistencies in the data.An important part tends to be dealing with incomplete data i.e. dealing with missing values.


## Understanding Why data is Missing
<ul>
  <li>Missing at Random (MAR) : MAR means that the data was missing in comparison to the actual observed data.The data in this case is not missing across all observations but only in limited samples of data not the complete data as a whole.The missing  values within the data can be predicted based on the leftover data we have.
  <li>Missing Completely at Random (MCAR) : In MCAR the data is missing across all the observations irrespective of the expected value or any  other  particular variables. We can compare two sets of data, one with having incomplete or missing observations and one without having any missing observations. We can use  a t-test, if there is no difference between the two data sets, the data can be  characterized as data whose values are missing completely at random.This data may be missing due to test designor  failure in the  recording and updating the observations.MCAR data is safe to remover as the results will be unbiased , howeber the test may not be as powerful, but the results which  will come would be reliable.
  <li>Missing Not at Random (MNAR) : The MNAR is applicable when the missing data in our dataset has a given structure to it. We can say there appears to be some factors that state why  the data is missing. For Eg . In a survey, perhaps a specific group of people – say teenagers – did not answer a question. So how in  MAR, the data cannot be determined by the lookin at the  observed data,as the missing information is unknown and unrelated to each other. We should also  model the missing data in a way  to develop an unbiased estimate. If we simply remove observations with missing data our estimated result could result in a model with bias.
</ul>

## Reasons for Missing Values
<ul>
  <li>Information is not properl collected E.g., People a lot of times decline to give their age , gender,weight etc. This can not be a compulsion , however still this leads to incomplete values</li>
  <li>The Attributes may not be applicable to all the cases .For e.g., Annual income is not applicable to children , which will thus lead to incomplete data</li>
</ul>

## Deletion of Missing Values
<ul>
  <li>Listwise : In listwise method, all data for a particular observation that has one or more missing values in a list are deleted.This is analysed only on observations that have a complete set of data in the given. If our dataset is small, it will be effective to eliminate that data which comes from our analysis.Deleting the instances with missing observations can result in biased parameters and estimates and reduce the statistical power of the analysis. 
<li>Pairwise : In Pairwise deletion  we assume that  data is  missing completely at random (MCAR), but in all the cases with data,and while analysing even those with missing data are used in the analysis. Pairwise deletion allows us to use more of the data. However, the resulting statistics may vary as it is based on different data sets. Sometimes , its even impossible to duplicate with a complete set of data. 
<li>Dropping Variables: Indropping Variable , if more than 60% of the observations have data missing from them ,then it is better to discard the data if the variable in consideration is insignificant.
</ul>

## Imputation of Missing Values
<ul>
  <li>Fill in the missing value manually: In general, this approach is time consuming and may not be feasible given a large data set with many missing values</li>
  <li>Use a global constant to fill in the missing value: Replace all missing attribute values by the same constant such as a label like “Unknown” or −∞. If missing values are
replaced by, say, “Unknown,” then the mining program may mistakenly think that they form an interesting concept, since they all have a value in common—that of “Unknown.” Hence, although this method is simple, it is not foolproof.</li>
  <li>Use a measure of central tendency for the attribute (e.g., the mean or median) to fill in the missing value: For normal (symmetric) data distributions, the mean can be used, while skewed data distribution should employ the median .For example, suppose that the data distribution regarding the income of a Brand's customers is symmetric and that the mean income is $56,000. Use this value to replace the missing value for income.</li>
  <li>Use the attribute mean or median for all samples belonging to the same class as the given tuple: For example, if classifying customers according to credit risk, we
may replace the missing value with the mean income value for customers in the same credit risk category as that of the given tuple. If the data distribution for a given class
is skewed, the median value is a better choice.</li>
  <li>Use the most probable value to fill in the missing value: This may be determined with regression, inference-based tools using a Bayesian formalism, or decision tree induction. For example, using the other customer attributes in your data set, you may construct a decision tree to predict the missing values for income. </li>
</ul>

It is important to note that, in some cases, a missing value may not imply an error in the data! For example, when applying for a credit card, candidates may be asked to
supply their driver’s license number. Candidates who do not have a driver’s license may naturally leave this field blank. Forms should allow respondents to specify values such
as “not applicable.” Software routines may also be used to uncover other null values (e.g., “don’t know,” “?” or “none”). Ideally, each attribute should have one or more rules
regarding the null condition. The rules may specify whether or not nulls are allowed and/or how such values should be handled or transformed. Fields may also be intentionally left blank if they are to be provided in a later step of the business process.

## Methods of Filling Missing Values
<ul>
  <li>Mean, Median and Mode : This is one of the most common methods of imputing values when dealing with missing data. In cases where there are a small number of missing observations, we can calculate the mean or median of the existing observations. However, when there are many missing variables, mean or median results can result in a loss of variation in the data. This method does not use time-series characteristics or depend on the relationship between the variables.</li>
  <li>Time-Series Specific Methods : Another option is to use time-series specific methods when appropriate to impute data. There are four types of time-series data:
<ul><li>No trend or seasonality.
  <li>Trend, but no seasonality.
    <li>Seasonality, but no trend.
      <li>Both trend and seasonality.
        </ul>
The time series methods of imputation assume the adjacent observations will be like the missing data. These methods work well when that assumption is valid. However, these methods won’t always produce reasonable results, particularly in the case of strong seasonality.</li>
  <li>Last Observation Carried Forward (LOCF) & Next Observation Carried Backward (NOCB) : These options are used to analyze longitudinal repeated measures data, in which follow-up observations may be missing. In this method, every missing value is replaced with the last observed value. Longitudinal data track the same instance at different points along a timeline. This method is easy to understand and implement. However, this method may introduce bias when data has a visible trend. It assumes the value is unchanged by the missing data. </li>
  <li>Linear Interpolation
Linear interpolation is often used to approximate a value of some function by using two known values of that function at other points. This formula can also be understood as a weighted average. The weights are inversely related to the distance from the end points to the unknown point. The closer point has more influence than the farther point. 
When dealing with missing data, you should use this method in a time series that exhibits a trend line, but it’s not appropriate for seasonal data.</li>
</ul>

## Conclusion
Although we can try our best to clean the data after it is seized, good database and data entry procedure design should help minimize the number of missing values or errors in
the first place.However , it's a mandatory thing which every data scientist should do is to clean the data with missing values , so that the model prediction is accurate.

## References 
<ul>
  <li>The Morgan Kauffman Series in Data Mining
    <li>mastersindatascience.org
      </ul>
