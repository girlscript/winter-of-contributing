# # This app is for educational purpose only. Insights gained is not financial advice. Use at your own risk!
import streamlit as st
from PIL import Image
import pandas as pd
import requests
import json
#---------------------------------#
# New feature (make sure to upgrade your streamlit library)
# pip install --upgrade streamlit

#---------------------------------#
# Title

image = Image.open('logo.png')

st.image(image, width = 390)

st.title('Currency Converter App')
st.markdown("""
This app interconverts the value of foreign currencies!

""")

#---------------------------------#
# Sidebar + Main panel
st.sidebar.header('Input Options')

## Sidebar - Currency price unit
currency_list = ['AUD', 'BGN', 'BRL', 'CAD', 'CHF', 'CNY', 'CZK', 'DKK', 'GBP', 'HKD', 'HRK', 'HUF', 'IDR', 'ILS', 'INR', 'ISK', 'JPY', 'KRW', 'MXN', 'MYR', 'NOK', 'NZD', 'PHP', 'PLN', 'RON', 'RUB', 'SEK', 'SGD', 'THB', 'TRY', 'USD', 'ZAR']
base_price_unit = st.sidebar.selectbox('Select base currency for conversion', currency_list)
symbols_price_unit = st.sidebar.selectbox('Select target currency to convert to', currency_list)

# Retrieving currency data from ratesapi.io
# https://api.ratesapi.io/api/latest?base=AUD&symbols=AUD
@st.cache
def load_data():
    url = ''.join(['https://api.ratesapi.io/api/latest?base=', base_price_unit, '&symbols=', symbols_price_unit])
    response = requests.get(url)
    data = response.json()
    base_currency = pd.Series( data['base'], name='base_currency')
    rates_df = pd.DataFrame.from_dict( data['rates'].items() )
    rates_df.columns = ['converted_currency', 'price']
    conversion_date = pd.Series( data['date'], name='date' )
    df = pd.concat( [base_currency, rates_df, conversion_date], axis=1 )
    return df

df = load_data()

st.header('Currency conversion')

st.write(df)

#st.write( df.transpose() )


#---------------------------------#
# About
expander_bar = st.beta_expander("About")
expander_bar.markdown("""
* **Python libraries:** streamlit, pandas, pillow, requests, json
* **Data source:** [ratesapi.io](https://ratesapi.io/) which is based on data published by [European Central Bank](https://www.ecb.europa.eu/stats/policy_and_exchange_rates/euro_reference_exchange_rates/html/index.en.html)
* **Credit:** App built by [Aman Raj](http://twitter.com/) 
""")
