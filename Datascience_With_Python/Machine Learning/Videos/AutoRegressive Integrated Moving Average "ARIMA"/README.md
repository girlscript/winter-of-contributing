# AutoRegressive Integrated Moving Average "ARIMA"

## Video Link : [AutoRegressive Integrated Moving Average "ARIMA"](https://drive.google.com/file/d/1fA3Hsam2Amp9MQypH5lmyjPajkIsUaBy/view?usp=sharing)

## What Is an Autoregressive Integrated Moving Average (ARIMA)?
An autoregressive integrated moving average, or ARIMA, is a statistical analysis model that uses time series data to either better understand the data set or to predict future trends. 

A statistical model is autoregressive if it predicts future values based on past values. For example, an ARIMA model might seek to predict a stock's future prices based on its past performance or forecast a company's earnings based on past periods.

![31588653427](https://user-images.githubusercontent.com/63282184/144043521-731cc60c-f3d7-4331-acd1-d48fbeda4d30.png)


## Understanding Autoregressive Integrated Moving Average (ARIMA)

An autoregressive integrated moving average model is a form of regression analysis that gauges the strength of one dependent variable relative to other changing variables. The model's goal is to predict future securities or financial market moves by examining the differences between values in the series instead of through actual values.


An ARIMA model can be understood by outlining each of its components as follows:

- Autoregression (AR): refers to a model that shows a changing variable that regresses on its own lagged, or prior, values.
- Integrated (I): represents the differencing of raw observations to allow for the time series to become stationary (i.e., data values are replaced by the difference between the data values and the previous values).
- Moving average (MA):  incorporates the dependency between an observation and a residual error from a moving average model applied to lagged observations.


## ARIMA Parameters
Each component in ARIMA functions as a parameter with a standard notation. For ARIMA models, a standard notation would be ARIMA with p, d, and q, where integer values substitute for the parameters to indicate the type of ARIMA model used. The parameters can be defined as:


- p: the number of lag observations in the model; also known as the lag order.
- d: the number of times that the raw observations are differenced; also known as the degree of differencing.
- q: the size of the moving average window; also known as the order of the moving average.


In a linear regression model, for example, the number and type of terms are included. A 0 value, which can be used as a parameter, would mean that particular component should not be used in the model. This way, the ARIMA model can be constructed to perform the function of an ARMA model, or even simple AR, I, or MA models.



## Autoregressive Integrated Moving Average (ARIMA) and Stationarity

- In an autoregressive integrated moving average model, the data are differenced in order to make it stationary. A model that shows stationarity is one that shows there is constancy to the data over time. Most economic and market data show trends, so the purpose of differencing is to remove any trends or seasonal structures. 

- Seasonality, or when data show regular and predictable patterns that repeat over a calendar year, could negatively affect the regression model. If a trend appears and stationarity is not evident, many of the computations throughout the process cannot be made with great efficacy.


## Important points
- ARIMA models are based on the assumption that past values have some residual effect on current or future values. For example, an investor using an ARIMA model to forecast stock prices would assume that new buyers and sellers of that stock are influenced by recent market transactions when deciding how much to offer or accept for the security.

- Although this assumption will hold under many circumstances, this is not always the case. For example, in the years prior to the 2008 Financial Crisis, most investors were not aware of the risks posed by the large portfolios of mortgage-backed securities (MBS) held by many financial firms.

- During those times, an investor using an autoregressive model to predict the performance of U.S. financial stocks would have had good reason to predict an ongoing trend of stable or rising stock prices in that sector. 
-  However, once it became public knowledge that many financial institutions were at risk of imminent collapse, investors suddenly became less concerned with these stocks' recent prices and far more concerned with their underlying risk exposure. 
-  Therefore, the market rapidly revalued financial stocks to a much lower level, a move that would have utterly confounded an autoregressive model.

## How does ARIMA forecasting work?
- ARIMA forecasting is achieved by plugging in time series data for the variable of interest. Statistical software will identify the appropriate number of lags or amount of differencing to be applied to the data and check for stationarity. 
- It will then output the results, which are often interpreted similarly to that of a multiple linear regression model.






## Conclusion

- Autoregressive integrated moving average (ARIMA) models predict future values based on past values.
- ARIMA makes use of lagged moving averages to smooth time series data.
- They are widely used in technical analysis to forecast future security prices.
- Autoregressive models implicitly assume that the future will resemble the past.
- Therefore, they can prove inaccurate under certain market conditions, such as financial crises or periods of rapid technological change.
