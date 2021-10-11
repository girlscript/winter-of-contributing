import pandas as pd
import numpy as np
days = pd.Series([ 1, 2, 'Yamini'])
print(days)

#creating series with numpy array

days_list = np.array(['Monday', 'Tuesday', 'Wednesday'])
print(days_list)
numpy_days = pd.Series(days_list)
print(numpy_days)
#using strings as index
days = pd.Series(['Monday', 'Tuesday', 'Wednesday'], index=['a', 'b', 'c'])
print(days)
#create series from a dictionary
days1 = pd.Series({'a': 'Yamini', 'b': 'Tuesday', 'c': 'Wednesday', 'd':'Thrusday', 'e':'Friday'})
print(days1)
#days and days1 prints this
print(days[2])
print(days1[0])
print(days[1:])
print(days1[0:4])
print(days['c'])

#Dataframes

#prints an empty dataframe
print(pd.DataFrame())

#create a dataframe from a dictionary
dict = {'Country': ['New york', 'Mumbai', 'Seoul', 'Seattle', 'Washington'],
           'Capital': ['America', 'Spain', 'Europe', 'Russia', 'Japan'],
           'Population': [10000, 8500, 35000, 12000, 50000],
           'Age': [60, 70, 80, 65, 75]}
df = pd.DataFrame( dict, index=[1, 2, 3, 4, 5])
print(df)

list = [['New york', 'America', 10000, 60],
        ['Mumbai', 'Spain', 8500, 70]]
df1 = pd.DataFrame(list, columns=['Country', 'Capital', 'Population', 'Age'], index=[1, 2])
print(df1)

#select the row in the at index 3

print(df.iloc[3])
print(df.loc[4])
print(df['Capital'])
print(df.at[3, 'Country'])
print(df.iat[2, 0])
print(df['Population'].sum())
print(df.mean())
print(df.describe())
df_dict2 = {'Name': ['James', 'Yemen', 'Caro', np.nan],
             'Profession': ['Researcher', 'Artist', 'Doctor', 'Writer'],
             'Experience': [12, np.nan, 10, 8],
            'Height': [np.nan, 175, 84, 55]}
print(df_dict2)
new_df = pd.DataFrame(df_dict2, index=[1, 2, 3, 4])
print(new_df)

#check for cells with missing values as True
print(new_df.isnull())
print(new_df.notnull())
print(new_df.dropna())









