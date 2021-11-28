# PHP : Date and Time

Dates are very important part of everyday life with the help of which we are able to track our work regularly without even thinking. Some of the most used operations in PHP while designing a website or SQL query execution are date and time. PHP provides powerful tools for date arithmetic that makes it easy to manipulate date. Some of the predefined functions in PHP for date and time are discussed below.

## PHP `date()` Function   

The PHP `date()` function is used to convert a timestamp into more readable date and time format. The computer stores dates and times in a format called UNIX Timestamp, which measures time as number of seconds since the beginning of the Unix epoch (midnight Greenwich Mean Time on January 1, 1970 i.e. January 1, 1970 00:00:00 GMT ). Since it is not possible for a human to resd or understand this, PHP converts a timestamp in a format which is more understandable by human. 

PHP date function is an in-built function that simplify working with date data types. The PHP date function is used to format a date or time into a human readable format. It can be used to display the date of article was published, record the last updated a data in a database, etc.

Syntax-    
date( format, [timestamp] )

1. parameter format in the `date()` function specifies the format of returned date and time.
2. Timestamp is an optional parameter, if it is not specified then its value will be equal to current date and time.

Below program explains usage of `date()` function in PHP-

```php

<?php

echo "Today's date is : ";
$curr_date = date("d/m/Y");
echo $curr_date;

?>

```

Output :    
Today's date is : 15/11/2021

**A. There are some formatting options available in `date()` function: The format parameter of the `date()` function is a string that allows us to generate date in different formats including date, day, month and year.**   

d – (01 or 31) : Represents day of the month; two digits with leading zeros.   
D – (Mon to Sun) : Represents day of the week in text as an abbreviation.   
m – (01 or 12) : Represents month in numbers with leading zeros.   
M – (Jan to Dec) : Represents month in text, abbreviated.   
y – (08 or 14) : Represents year in two digits.   
Y – (2008 or 2014) : Represents year in four digits.      

> Note : We can use characters, like hyphens (-), dots (.), slashes (/), or spaces to seperate parts of the date and add additional visual formatting.

Example-1

```php

<?php
echo "Today's date in various formats:" . "\n";

echo date("d/m/Y") . "\n";
echo date("d.m.Y") . "\n";
echo "Date alongwith day : " ; 
$formatted_date =  date("d-M-Y / D");
echo $formatted_date;
?>

```

Output : 
Today's date in various formats:   
15/11/2021      
15.11.2021     
Date alongwith day : 15-Nov-2021 / Mon   

<br>

**B. We can format time string using `date()` function, Below are characters for this operation.** 

h – (01 to 12) : Represents hour in 12-hour format with leading zeros.   
H – (00 to 23) : Represents hour in in 24-hour format with leading zeros.   
i – (00 to 59) : Represents minutes with leading zeros.   
s – (00 to 59) : Represents seconds with leading zeros.   
a – (am or pm) : Represents lowercase ante meridian and post meridian.   
A – (AM or PM) : Represents uppercase ante meridian and post meridian.    

Example-2

```php

<?php
echo "Current Time : ";
echo date("h:i:s") . "\n";

echo "Today's date with current time : ";
echo date("M,d,Y h:i:s A") . "\n";

echo "Current Time with ante/post meridian : ";
echo date("h:i a");
?>

```

Output-

Current Time : 10:50:35   
Today's date with current time : Nov,15,2021 10:50:35 AM   
Current Time with ante/post meridian : 10:50 am

## PHP `time()` Function
PHP `time()` function is used to get all the information about current time and date. It doesn't require any arguments but returns an integer. The integer returned by `time()` represents the number of seconds elapsed since midnight GMT on January 1, 1970. This moment is known as the UNIX epoch, and the number of seconds that have elapsed since then is referred to as a timestamp. The `time()` function gives the current time as a Unix timestamp and the following characters can be used to format the time string:

h – (01 to 12) : Represents hour in 12-hour format with leading zeros.   
H – (00 to 23) : Represents hour in in 24-hour format with leading zeros.   
i – (00 to 59) : Represents minutes with leading zeros.   
s – (00 to 59) : Represents seconds with leading zeros.   
a – (am or pm) : Represents lowercase ante meridian and post meridian.   
A – (AM or PM) : Represents uppercase ante meridian and post meridian.   

The program below explains the usage of `time()` function-

```php

<?php

$timestamp = time();
echo($timestamp);
echo(date("\nM d, Y h:i:s A", $timestamp));

?>

```

Output-

1636973695   
Nov 15, 2021 10:54:55 AM

## PHP `mktime()` Function

The `mktime()` function is used to create the timestamp for a specific date and time. If no date and time is provided, the timestamp for the current date and time is returned. The mktime function returns the timestamp in a Unix format.

Syntax-    
mktime(hour, minute, second, month, day, year, is_dst)

> Note : “is_dst” is optional, it is used to determine the day saving time (DST). 1 is for DST, 0 if it is not and -1 if it is unknown.

The program below explains the usage of `mktime()` function-

```php

<?php
echo mktime(33, 10, 42, 21, 35, 2021);
?>

```

Output-

1665047442

## Application of PHP date and time function

**PHP Tip - Automatic Copyright Year**

Use of `date()` function to update the copyright year automatically on your website :

```php

&copy; 2015-<?php echo date("Y");?>

```

Output-

© 2015-2021

## References
- [Tutorialspoint](https://www.tutorialspoint.com/php/php_date_and_time.htm)
- [Guru99](https://www.guru99.com/php-date-functions.html)
