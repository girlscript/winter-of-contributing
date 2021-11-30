# An Introduction to Time Series Forecasting with Prophet

## Video Link : [An Introduction to Time Series Forecasting with Prophet](https://drive.google.com/file/d/1u_zNJ1jwI12atNt3fDaHyjmAwVbrpwn9/view?usp=sharing)

## Prophet Forecasting Library
Prophet, or “Facebook Prophet,” is an open-source library for univariate (one variable) time series forecasting developed by Facebook.

Prophet implements what they refer to as an additive time series forecasting model, and the implementation supports trends, seasonality, and holidays.

It is designed to be easy and completely automatic, e.g. point it at a time series and get a forecast. As such, it is intended for internal company use, such as forecasting sales, capacity, etc.

The library provides two interfaces, including R and Python. We will focus on the Python interface in this tutorial.

The first step is to install the Prophet library using Pip, as follows:

```
sudo pip install fbprophet

```

Next, we can confirm that the library was installed correctly.

To do this, we can import the library and print the version number in Python. The complete example is listed below.

```
# check prophet version
import fbprophet
# print version number
print('Prophet %s' % fbprophet.__version__)
```

Output:

```
Prophet 0.5
```

## Example : Car Sales Dataset

We will use the monthly car sales dataset.

It is a standard univariate time series dataset that contains both a trend and seasonality. The dataset has 108 months of data and a naive persistence forecast can achieve a mean absolute error of about 3,235 sales, providing a lower error limit.

Link for the data set : https://raw.githubusercontent.com/jbrownlee/Datasets/master/monthly-car-sales.csv

## Load and Summarize Dataset
First, let’s load and summarize the dataset.

Prophet requires data to be in Pandas DataFrames. Therefore, we will load and summarize the data using Pandas.

We can load the data directly from the URL by calling the read_csv() Pandas function, then summarize the shape (number of rows and columns) of the data and view the first few rows of data.

```
# load the car sales dataset
from pandas import read_csv
# load data
path = 'https://raw.githubusercontent.com/jbrownlee/Datasets/master/monthly-car-sales.csv'
df = read_csv(path, header=0)
# summarize shape
print(df.shape)
# show first few rows
print(df.head())
```

Output:

```
(108, 2)
     Month  Sales
0  1960-01   6550
1  1960-02   8728
2  1960-03  12026
3  1960-04  14395
4  1960-05  14587
```

## Load and Plot Dataset
A time-series dataset does not make sense to us until we plot it.

Plotting a time series helps us actually see if there is a trend, a seasonal cycle, outliers, and more. It gives us a feel for the data.

We can plot the data easily in Pandas by calling the plot() function on the DataFrame.

```
# load and plot the car sales dataset
from pandas import read_csv
from matplotlib import pyplot
# load data
path = 'https://raw.githubusercontent.com/jbrownlee/Datasets/master/monthly-car-sales.csv'
df = read_csv(path, header=0)
# plot the time series
df.plot()
pyplot.show()
```

output

![image](https://user-images.githubusercontent.com/63282184/144045525-e38ca7fd-928b-47cc-a526-98b5323137b1.png)


## Fit Prophet Model
To use Prophet for forecasting, first, a Prophet() object is defined and configured, then it is fit on the dataset by calling the fit() function and passing the data.

The Prophet() object takes arguments to configure the type of model you want, such as the type of growth, the type of seasonality, and more. By default, the model will work hard to figure out almost everything automatically.

The fit() function takes a DataFrame of time series data. The DataFrame must have a specific format. The first column must have the name ‘ds‘ and contain the date-times. The second column must have the name ‘y‘ and contain the observations.

```
...
# prepare expected column names
df.columns = ['ds', 'y']
df['ds']= to_datetime(df['ds'])

# fit prophet model on the car sales dataset
from pandas import read_csv
from pandas import to_datetime
from fbprophet import Prophet
# load data
path = 'https://raw.githubusercontent.com/jbrownlee/Datasets/master/monthly-car-sales.csv'
df = read_csv(path, header=0)
# prepare expected column names
df.columns = ['ds', 'y']
df['ds']= to_datetime(df['ds'])
# define the model
model = Prophet()
# fit the model
model.fit(df)
```

output:

```
INFO:fbprophet:Disabling weekly seasonality. Run prophet with weekly_seasonality=True to override this.
INFO:fbprophet:Disabling daily seasonality. Run prophet with daily_seasonality=True to override this.
Initial log joint probability = -4.39613
    Iter      log prob        ||dx||      ||grad||       alpha      alpha0  # evals  Notes
      99       270.121    0.00413718       75.7289           1           1      120
    Iter      log prob        ||dx||      ||grad||       alpha      alpha0  # evals  Notes
     179       270.265    0.00019681       84.1622   2.169e-06       0.001      273  LS failed, Hessian reset
     199       270.283   1.38947e-05       87.8642      0.3402           1      299
    Iter      log prob        ||dx||      ||grad||       alpha      alpha0  # evals  Notes
     240       270.296    1.6343e-05       89.9117   1.953e-07       0.001      381  LS failed, Hessian reset
     299         270.3   4.73573e-08       74.9719      0.3914           1      455
    Iter      log prob        ||dx||      ||grad||       alpha      alpha0  # evals  Notes
     300         270.3   8.25604e-09       74.4478      0.3522      0.3522      456
Optimization terminated normally:
  Convergence detected: absolute parameter change was below tolerance
  
```
### Final Ouput

![image](https://user-images.githubusercontent.com/63282184/144045888-d93e4ded-3a51-4637-aeb8-f155e053cc4b.png)

## Conclusion: 
Prophet is an open-source library developed by Facebook and designed for automatic forecasting of univariate time series data.
