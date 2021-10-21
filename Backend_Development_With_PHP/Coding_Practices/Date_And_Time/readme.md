### GETTING STARTED

php has its own date and time funtions.

function 1:
date_default_timezone_set(tx)

this function is used to establish the default time zone.

this function takes the parameter 'tz' which is timezone like 'America/New_York or Pacific/Auckland'.

function 2:
checkdate()

->It takes month,day,year as parameter and return a boolean value whether the date exists or not.
->It also considers the leap year and it is used to ensure that user has supplied a valid date.


code:

if(checkdata(month,day,year)){
  echo "valid date";
}else{
   echo "date is invalid";
}

function 3:
date(format,[timestamp])

->most frequently used function in date and time.
->format:specifies the format of timestamp
->It take two arguments 'format' and 'timestamp'
->timestamp is an optional argument representing the number of second.
->This function allow to o get information, like the day of the week, for a particular date.
-> If a timestamp is not specified, PHP will just use the current time on the server.

example:-

echo date("Y/m/d");
//output 2021/10/21
echo date('H:i')
//output 23:12
echo date('D')
//output:Fri


Character Meaning Example
Y    Year as 4 digits 2017
y    Year as 2 digits 11
L    Is it a leap year? 1 (for yes)
n    Month as 1 or 2 digits 2
m    Month as 2 digits 02
F    Month February
M    Month as 3 letters Feb
j    Day of the month as 1 or 2 digits 8
d    Day of the month as 2 digits 08
l    (lower- case L) Day of the week Monday
D    Day of the week as 3 letters Mon
w    Day of the week as a single digit 0 (Sunday)
z    Day of the year: 0 to 365 189
t    Number of days in the month 31
S    English ordinal suffix for a day, as 2 characters rd
(606)
g    Hour; 12-hour format as 1 or 2 digits 6
G    Hour; 24-hour format as 1 or 2 digits 18
h    Hour; 12-hour format as 2 digits 06
H    Hour; 24-hour format as 2 digits 18
i    Minutes 45
s    Seconds 18
u    Microseconds 1234
a    am or pm am
A    AM or PM PM
U    Seconds since the epoch 1499550481
e    Timezone UTC
I    (capital i) Is it daylight savings? 1 (for yes)
O    Difference from GMT +0600



function:
we can find the timestamp for a particular date using the mktime() function:
$stamp = mktime(hour, minute,second, month, day, year);

If called with no arguments, mktime() returns the current timestamp, which is the same as
calling the time() function.

function:
getdate()

This function is used to return array of values for date and time.

example:
$today = getdate();
echo $today['month']; // October

The getdate() Array
