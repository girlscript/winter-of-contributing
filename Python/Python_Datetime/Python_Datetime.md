# Python datetime module

# Introduction:-
Python Datetime module provides classes to work with date and time. These classes provide a number of functions to work with dates, times and time intervals. Date and datetime are an object in Python, so when you manipulate them, you are actually manipulating objects and not string or timestamps. 

Python Datetime module comes built into Python, so there is no need to install it externally so, we can simply import this to work with the date as well as time.

We can simply import datetime module like this - 
import datetime 
To get all the classes or functions without mentioning the datetime module in our code we can import datetime as - 
from datetime import *
# **What is inside in datetime module?**

We can use dir() function to get a list of all attributes containing in this module.
import datetime

print(dir(datetime))
**Get Current Date And Time:-**
import datetime

datetime_obj = datetime.datetime.now()
print(datetime_obj)
One of the classes defined in the datetime module is datetime class. We then used now() method to create a datetime object containing our current local date and time.
Most Commonly used classes in the datetime module are - 



1.   date class
2.   time class 
3.   datetime class
4.   timedelta class




# 1. **Date Class:-**
We can use date objects from the date class. A date object represents a date (year, month and day).

**Syntax:-**
class datetime.date(year, month, day)
Remember that – If the argument is not an integer it will raise a TypeError and if it is outside the range a ValueError will be raised. 
**Example 1:**

***Creating Date Objects to represent the date:-***


To create a date, we can use the date class of the datetime module.

The date() constructor of data class requires three parameters to create a date: year, month, day.
from datetime import date

d=date(2021, 11, 1)
print("The date is: ", d)
But if we use any of the argument as string we will get typeerror as shown below.
from datetime import date

d=date('2021', 11, '1')
print("The date is: ", d)
Example 2:

***Get the current date***

To get the current local date today() function of date class is used. today() function comes with attributes such as - year, month and day.  
from datetime import date
 
# calling the today
# function of date class
today_date = date.today()
 
print("The Current date is", today_date)
Example 3:

***Get date from timestamp***

We can also create date objects from a timestamp. A  timestamp is the number of seconds between a particular date and January 1, 1970 at UTC. We can convert a timestamp to date using fromtimestamp() method.
from datetime import datetime

# Getting Datetime from timestamp
date_time = datetime.fromtimestamp(1987558667)
print("Getting Datetime from timestamp:", date_time)

**Example 4:**

***Get today's year, month and date***

We can get the year, month, and date attributes from the date object using the year, month and date attribute of the date class. 
from datetime import date

# date object of today's date
today_dateobj = date.today() 

print("Current year:", today_dateobj.year)
print("Current month:", today_dateobj.month)
print("Current day:", today_dateobj.day)


# 2. **Time Class:-**

The time class creates the time object which represents local time.

**Syntax:-**


class datetime.time(hour, minute, second, microsecond)
**Example 1:**

***Time object to represent time***

To get time, we can use the time class of the datetime module.
from datetime import time

# time(hour = 0, minute = 0, second = 0) 
# if no arguments are passed then it takes 0 as default value of argument
first = time()
print("Get time without argument =", first)

# time(hour, minute and second)
second = time(12, 20, 43)
print("Get time with three argument =", second)

# time(hour, minute and second) 
# declaring the arguments with variables explicitly
third = time(hour = 12, minute = 20, second = 43)
print("Get time with three argument using variables =", third)

# time(hour, minute, second, microsecond)
fourth = time(12, 20, 43, 154564)
print("Get time with four argument =", fourth)
**Example 2:**

***Get hours, minutes, seconds, and microseconds***

After creating a time object, it's attributes can also be printed separately. 
from datetime import time

Time = time(12, 20, 43)

print("hour =", Time.hour)
print("minute =", Time.minute)
print("second =", Time.second)
print("microsecond =", Time.microsecond)

Note that - we haven't passed microsecond argument. Hence, it's default value 0 is printed.

# 3. **Datetime Class:-**

The datetime module has a class named dateclass that can contain information from both date and time objects.

**Syntax:-**

class datetime.datetime(year, month, day, hour, minute, second, microsecond)

**Example 1:**

***Datetime object to represent datetime***

To get date and time, we can use the datetime class of the datetime module.
from datetime import datetime

#datetime(year, month, day)
first = datetime(2021, 11, 1)
print("Date time with three parameters: ", first)

# datetime(year, month, day, hour, minute, second, microsecond)
second = datetime(2021, 11, 1, 11, 30, 35, 243561)
print("Date time with seven parameters: ", second)
**Example 2:**

***Get year, month, day, hours, minutes, seconds and microseconds***

After creating a datetime object, it's attributes can also be printed separately.
from datetime import datetime

obj = datetime(2021, 11, 1, 11, 30, 35, 243561)

print("year =", obj.year)
print("month =", obj.month)
print("day =", obj.day)
print("hour =", obj.hour)
print("minute =", obj.minute)
print("second =", obj.second)
print("microsecond =", obj.microsecond)
**Example 3:**

***Get Current date and time***

We can print the current date and time using the Datetime.now() function. now() function returns the current local date and time. 
from datetime import datetime

# Calling now() function
today = datetime.now()

print("Current date and time is", today)


# 4. **Timedelta Class:-**

A timedelta object represents the difference between two dates or times used for performing date manipulations in Python.

**Syntax:-**

class datetime.timedelta(days, seconds, microseconds, milliseconds, minutes, hours, weeks)
**Example 1:**

***Difference between two timedelta objects***
Difference between two date and time can found using this class.
from datetime import timedelta

time1 = timedelta(days=6, seconds=30, microseconds=234567, minutes=45, hours=12, weeks=5)
time2 = timedelta(days=5, seconds=20, microseconds=125638, minutes=20, hours=6, weeks=4)
time3 = time1 - time2

print("Difference is = ", time3)
**Example 2:**

***Time duration in seconds***

We can get the total number of seconds in a timedelta object using total_seconds() method.
from datetime import timedelta

t_seconds = timedelta(days = 3, hours = 12, seconds = 30, microseconds = 243561)
print("Total seconds =", t_seconds.total_seconds())
# Python format datetime:-

Formatting Datetime can be very necessary as the date representation may differe from place to place.

To format Python Datetime **strptime** and **strftime** functions can be used.

strftime method converts the given date, time or datetime object to the a string representation of the given format.

strptime method creates a datetime object from the given string representation.
# References:-

For more details, visit the websites below,
  - [Programiz](https://www.programiz.com/python-programming/datetime)
  - [W3 schools](https://www.w3schools.com/python/python_datetime.asp)
  - [Geeks for Geeks](https://www.geeksforgeeks.org/python-datetime-module)
