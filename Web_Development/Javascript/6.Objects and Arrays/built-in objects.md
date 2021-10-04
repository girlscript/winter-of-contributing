
# Built-in functions
JavaScript has five functions built in to the language. They are eval, parseInt, parseFloat, escape, and unescape.

### eval
Evaluates a string and returns a value.

### eval(Expression)
Expression is evaluated, and if the result is not a string, the result is returned.

### parseInt
Parses a string argument and returns an integer. Syntax:<br>
`parseInt(string)`<br>
`parseInt(string, radix)`

### parseFloat
Parses a string argument and returns a floating point number.<br>
`parseFloat(string)`

### escape
Returns the hexadecimal encoding of an argument. Syntax:<br>
`escape("string")`

The value returned by the escape function is one of the following:
For alphanumeric characters, the same character.
For the space character, a + sign.
For non-alphanumeric characters other than space, a string of the form "%xx,".

### unescape
Returns the ASCII string for the specified value. Syntax:<br>
`unescape("string")`

## Array Object
JavaScript arrays are a special kind of object, and are created dynamically. An array object contains a number of variables.

### Constructors
To create an Array object:<br>
ArrayConstructor:<br>
          `new Array()`<br>
          `new Array(arrayLength)`<br>
         ` new Array(componentList)`

componentList:<br>
          `componentValue, componentList`<br>
          `componentValue`

componentValue:<br>
         `Identifier`<br>
          `Literal`

### Properties
An Array object has one property, length.<br>
`arrayObject.length`

### Methods

### join
`arrayName.join(separator)`

### reverse
`arrayName.reverse()`

### sort
`arrayName.sort(compareFunction)` <br>
`arrayName.sort()`

## Boolean Object
The Boolean object represents a primitive boolean value.

### Constructors
BooleanConstructor:<br>
          `new Boolean(BooleanLiteral)`<br>
          `new Boolean()`
          
### Properties
The Boolean object has no properties.


### Methods
The Boolean object has toString and valueOf methods.


## Date Object
The Date object provides a system-independent abstraction of dates and times.

### Constructors
There are five forms:


DateConstructor:<br>
          `new Date()`<br>
          `new Date(StringDate)`<br>
          `new Date(year, month, day)`<br>
          `new Date(year, month, day, hours, minutes, seconds)`<br>
          `new Date(year, month, day, hours, minutes)`<br>
          `new Date(year, month, day, hours)`<br>
          `new Date(IntegerLiteral)`<br>

StringDate is a string representing a date in one of the following forms:


- month day, year
- month day, year, hours:minutes:seconds
- month day, year, hours:minutes
- month day, year, hours
- day month, year
- day month, year hours:minutes:seconds
- day month, year hours:minutes
- day month, year hours
- month/day/year

`today = new Date()`<br>
`birthday = new Date("December 17, 1995 03:24:00")`<br>
`birthday = new Date(95,12,17)`<br>
`birthday = new Date(95,12,17,3,24,0)`<br>

### Properties
The Date object has no pre-defined properties.


### Methods
The Date object has two kinds of methods: static methods and dynamic methods.<br>

`Date.UTC(parameters)`<br>
`Date.parse(parameters)`<br>
The syntax for dynamic Date methods:<br>
`dateObjectName.methodName(parameters)`

### parse
`Date.parse(dateString)`

### setDate
`dateObjectName.setDate(dayValue)`

### setHours
`dateObjectName.setHours(hoursValue)`

### setMinutes
`dateObjectName.setMinutes(minutesValue)`

### setMonth
`dateObjectName.setMonth(monthValue)`

### setSeconds
Sets the seconds for a specified date.

`dateObjectName.setSeconds(secondsValue)`

### setTime
`dateObjectName.setTime(timevalue)`

### setYear
`dateObjectName.setYear(yearValue)`

### toGMTString
`dateObjectName.toGMTString()`

### toLocaleString
`dateObjectName.toLocaleString()`

## Math Object
The built-in Math object has properties and methods for mathematical constants and functions, respectively.


### Constructors
The Math object does not have any constructors.

### Properties
- Math.E
- Math.LN2
- Math.LN10
- Math.LOG2E
- Math.LOG10E
- Math.PI
- Math.SQRT1_2
- Math.SQRT2

### Methods

- Math.sin(1.56)
- Math.abs(number)
- Math.ceil(number)
- Math.cos(number)
- Math.exp(number)
- Math.log(number)
- Math.max(number1, number2)
- Math.min(number1, number2)
- Math.pow(base, exponent)
- Math.random()
- Math.round(number)
- Math.sin(number)
- Math.sqrt(number)
- Math.tan(number)

## Number Object
The Boolean object corresponds to the number primitive type.


### Constructors

NumberConstructor:<br>
          `new Number(IntegerLiteral`<br>
          `new Number(FloatingPointLiteral)`<br>
          `new Number()`


### Properties
The properties of the Number object are constants.

- MAX_VALUE
- MIN_VALUE
- NaN


## String Object
A String is an object representing a series of characters.

### Constructors
`identifierName = new String(stringValue)`

### Properties

- stringObject.length
- stringName.methodName(parameters)
- stringName.indexOf(searchValue)
- stringName.lastIndexOf(searchValue,)
- stringName.substring(indexA, indexB)
- stringName.charAt(index)
- stringName.toLowerCase()
- var upperText="ALPHABET"
- stringName.toUpperCase()
- stringName.split(separator)
