# **AUTOREGRESSIVE INTEGRATED MOVING AVERAGE (ARIMA)**

# **INTRODUCTION**

* An autoregressive integrated moving average, or ARIMA, is a statistical analysis model that uses time series data to either better understand the data set or to predict future trends. 

* A statistical model is autoregressive if it predicts future values based on past values. 

* For example, an ARIMA model might seek to predict a stock's future prices based on its past performance or forecast a company's earnings based on past periods.

## **Key Takeaways**

* Autoregressive integrated moving average (ARIMA) models predict future values based on past values.

* ARIMA makes use of lagged moving averages to smooth time series data.

* They are widely used in technical analysis to forecast future security prices.

* Autoregressive models implicitly assume that the future will resemble the past.

* Therefore, they can prove inaccurate under certain market conditions, such as financial crises or periods of rapid technological change.

# **Understanding the ARIMA Model**

The following descriptive acronym explains the meaning of each of the key components of the ARIMA model:

* The **“AR”** in ARIMA stands for autoregression, indicating that the model uses the dependent relationship between current data and its past values. In other words, it shows that the data is regressed on its past values.

* The **“I”** stands for integrated, which means that the data is stationary. Stationary data refers to time-series data that’s been made “stationary” by subtracting the observations from the previous values.

* The **“MA”** stands for moving average model, indicating that the forecast or outcome of the model depends linearly on the past values. Also, it means that the errors in forecasting are linear functions of past errors. Note that the moving average models are different from statistical moving averages.

# **ARIMA Parameters**

Each of the AR, I, and MA components are included in the model as a parameter. The parameters are assigned specific integer values that indicate the type of ARIMA model. A common notation for the ARIMA parameters is shown and explained below:

### **ARIMA (p, d, q)**

* The parameter **p** is the **number of autoregressive terms or the number of “lag observations.”** It is also called the “lag order,” and it determines the outcome of the model by providing lagged data points.

* The parameter **d** is known as the **degree of differencing**. It indicates the number of times the lagged indicators have been subtracted to make the data stationary.

* The parameter **q** is the **number of forecast errors*** in the model and is also referred to as the size of the moving average window.
 

The parameters take the value of integers and must be defined for the model to work. They can also take a value of 0, implying that they will not be used in the model.

In such a way, the ARIMA model can be turned into:

* **ARMA model (no stationary data, d = 0)**

* **AR model (no moving averages or stationary data, just an autoregression on past values, d = 0, q = 0)**

* **MA model (a moving average model with no autoregression or stationary data, p = 0, d = 0)**
 

Therefore, ARIMA models may be defined as:

* **ARIMA(1, 0, 0) – known as the first-order autoregressive model.**

* **ARIMA(0, 1, 0) – known as the random walk model.**

* **ARIMA(1, 1, 0) – known as the differenced first-order autoregressive model, and so on.**

## **Differences between Autoregressive and Moving average models**

* ARIMA combines autoregressive features with those of moving averages.

* An AR(1) autoregressive process, for instance, is one in which the current value is based on the immediately preceding value, while an AR(2) process is one in which the current value is based on the previous two values.

* A moving average is a calculation used to analyze data points by creating a series of averages of different subsets of the full data set in order to smooth out the influence of outliers.

* As a result of this combination of techniques, ARIMA models can take into account trends, cycles, seasonality, and other non-static types of data when making forecasts
 
* Once the parameters (p, d, q) have been defined, the ARIMA model aims to estimate the coefficients α and θ, which is the result of using previous data points to forecast values.

# **Applications of the ARIMA Model**

 In business and finance, the ARIMA model can be used to forecast future quantities (or even prices) based on historical data. 

Therefore, for the model to be reliable, the data must be reliable and must show a relatively long time span over which it’s been collected. Some of the applications of the ARIMA model in business are listed below:

* Forecasting the quantity of a good needed for the next time period based on historical data.

* Forecasting sales and interpreting seasonal changes in sales.

* Estimating the impact of marketing events, new product launches, and so on.
 
* ARIMA models can be created in data analytics and data science software like R and Python.


# **Limitations of the ARIMA Model**

* Although ARIMA models can be highly accurate and reliable under the appropriate conditions and data availability, one of the key limitations of the model is that the parameters (p, d, q) need to be manually defined; therefore, finding the most accurate fit can be a long trial-and-error process.

* Similarly, the model depends highly on the reliability of historical data and the differencing of the data.

* It is important to ensure that data was collected accurately and over a long period of time so that the model provides accurate results and forecasts.

# **Summary**

* The ARIMA model uses statistical analyses in combination with accurately collected historical data points to predict future trends and business needs. 

* For businesses, it can be used to predict seasonal changes in sales, forecast the inventory needed for the next sales cycle, and estimate the impact of events and new product launches.

* The ARIMA model is typically denoted with the parameters (p, d, q), which can be assigned different values to modify the model and apply it in different ways. 

* Some of the limitations of the model are its dependency on data collection and the manual trial-and-error process required to determine parameter values that fit best.

 


