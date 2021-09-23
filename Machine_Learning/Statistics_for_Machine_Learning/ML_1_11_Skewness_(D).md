Data Science is one of the emerging fields which deals with datasets. While dealing with data we come across many challenges. One of the challenges is the distribution of data. Distribution helps us to understand meaningful insights like the presence of outliers and noise. One of the famous techniques to understand the spread of data is “skewness”.

**Skewness:**

Skewness is an asymmetry measure. It is asymmetrical because it deviated from the symmetrical bell shape curve. When the shape is moved right or left it is said to be skewed.

*Types of skewness:*
- Right skew or positive skewness
- Left skew or negative skewness


![Capture_1](https://user-images.githubusercontent.com/79050917/134521961-0b3fbe53-fd8a-4fdc-b559-a569ffc88972.PNG)

**Right skew or Positive skewness:**

A skewed distribution is said to be right-skew or positively skewed when most of the outliers or noise lie on the right of the distribution. Simply, to say when the tail is on its right side. The value of the right skew is greater than zero.
In right skew mean >median > mode.
![Capture_2](https://user-images.githubusercontent.com/79050917/134522319-bb1aa26c-4248-4872-994c-830542554178.PNG)

**Left skew or Negative skewness:**

A skewed distribution is said to be left-skew or negatively skewed when most of the outliers or noise lie on the left of the distribution. Simply, to say when the tail is on its left side. The value of the left skew is less than zero.
In left skew mean < median < mode.

![Capture_3](https://user-images.githubusercontent.com/79050917/134522582-8c1b48ed-4906-4091-8ce6-4e59cc247c3f.PNG)

**Importance of skewness:**

- Skewness is a measure that helps to understand the distribution of data points. 
- It helps to identify outliers and noise data points.  
- It finds the direction in which outliers or noise occur.
- It also helps to roughly understand the frequencies of each data point.

**Disadvantages of skewness:**
- It is unpredictable.
- It affects the machine learning models as it includes outliers or noise.
- The presence of outliers or noise also has an impact on accuracy and error.

**How can we treat the skewness:**
Since you know how much the skewed data can affect our machine learning model’s predicting capabilities, it is better to transform the skewed data to normally distributed data. Here are some of the ways you can transform your skewed data:
- Power Transformation
- Log Transformation
- Exponential Transformation

**Conclusion:**
- Skewness is a measure of distribution. 
- It has a negative impact on machine learning models as it includes outliers or noise. 
- Treating skewness is important to avoid its effects on the model and accuracy.

