# Template Strings

Template Strings allows you to use strings or embedded expressions in the form of a string.

They are also known as __Template Literals__, before ES6 template literals were called as template strings. So, Template literals are the new feature added in ES6, which provides an easy approach to create multiline strings and to perform string interpolation.

Template literals uses back-ticks(``` ` ` ```) instead of quotes (```" "```)

__Syntax:__
```js
var string = `string-value`;
```

__Example:__
```javascript
var string = `Hello, World!`;
document.write(string); // will print Hello, World on Web Page
```

__Output:__
```
Hello, World!
```

# Multiline Strings

In normal strings, we have ```\n``` for the new line, but in Template Literals we don't use ```\n```.

__Example:__
```javascript
// with Template Literal

console.log(`Welcome Everyone
To GWOC`);

// without Template Literal

console.log("Welcome Everyone\nTo GWOC");
```

__Output:__
```
Welcome Everyone 
To GWOC
Welcome Everyone 
To GWOC
```
# String Interpolation
Template Literals support String Interpolation, to embed the variables and expression with string we have to following syntax.

__Syntax:__
```js
${}
```
__Example:__
```javascript
// without template literals

let name = "GWOC";
console.log("Hello "+ name);

// with Template Literals

console.log(`Hello ${name}`);
```

__Output:__
```
Hello GWOC
Hello GWOC
```
__Explanation:__

Before ES6, we have to use ```+``` for string interpolation.

# Tagged Templates

Tagged Templates allows to parse a Template literal with a function.

Before ES6, we use to pass the argument inside```()``` .

__Example:__
```js
function tag(str){
    return str;
}
let res = tag("Hello, GWOC!"); //passing argument inside ()
console.log(res);
```
__Output:__
```
Hello, GWOC!
```
After ES6, there's no need to use ```()```, just use back-ticks with function.

__Example:__
```javascript
const name = 'Glenn';
const hail = true;

function taggedLiteral(str, value) {
    let str1 = str[0]; // Hey
    let str2 = str[1]; // , How are you doing?

    if(hail) {
        return `${str1}${value}${str2}`;
    }
}


const result = tagExample`Hey ${name}, How are you doing?`;

console.log(result);
```

__Output:__
```
Hey Glenn, How are you doing?
```
# Raw Strings
```String.raw()``` is a tag function of Template Literals. 

It allows to print the strings without any interpretation of backslashes, allows to print backslashes. Best example can be printing of any path directory.

__Example:__
```javascript
var text = String.raw`Hello \n World\n`;
var str = String.raw`C:\Program Files\Folder`;
```
__Output:__
```
Hello \n World\n
C:\Program Files\Folder
```
# **JavaScript String Methods**

**String methods** help you to work with strings.

## **String Methods and Properties**

Primitive values, like "John Doe", cannot have properties or methods (because they are not objects).

But with JavaScript, methods and properties are also available to primitive values, because JavaScript treats primitive values as objects when executing methods and properties.

## **String Length**
The ``length`` property returns the length of a string:

**For Example**
```js
let txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
txt.length     // Returns 26
```

## **Extracting String Parts**
There are 3 methods for extracting a part of a string:

* ``slice(start, end)``
* ``substring(start, end)``
* ``substr(start, length)``

## **The ``slice()`` Method**
``slice()`` extracts a part of a string and returns the extracted part in a new string.

The method takes 2 parameters: the start position, and the end position (end not included).

This example slices out a portion of a string from position 7 to position 12 (13-1):

**For Example**
```js
let str = "Apple, Banana, Kiwi";
str.slice(7, 13)     // Returns Banana
```

**Remember:** JavaScript counts positions from zero. First position is 0.

If a parameter is negative, the position is counted from the end of the string.

This example slices out a portion of a string from position -12 to position -6:

**For Example**
```js
let str = "Apple, Banana, Kiwi";
str.slice(-12, -6)    // Returns Banana
If you omit the second parameter, the method will slice out the rest of the string:
```

**For Example**
```js
str.slice(7);    // Returns Banana,Kiwi
or, counting from the end:
```

**For Example**
```js
str.slice(-12)    // Returns Banana,Kiwi
```

## **The substring() Method**
``substring()`` is similar to ``slice()``.

The difference is that ``substring()`` cannot accept negative indexes.

**For Example**
```js
let str = "Apple, Banana, Kiwi";
substring(7, 13)    // Returns Banana
```

If you omit the second parameter, ``substring()`` will slice out the rest of the string.

## **The substr() Method**
``substr()`` is similar to ``slice()``.

The difference is that the second parameter specifies the **length** of the extracted part.

**For Example**
```js
let str = "Apple, Banana, Kiwi";
str.substr(7, 6)    // Returns Banana
```
The result of res will be:
Banana

If you omit the second parameter, ``substr()`` will slice out the rest of the string.

**For Example**
```js
let str = "Apple, Banana, Kiwi";
str.substr(7)    // Returns Banana,Kiwi
```

If the first parameter is negative, the position counts from the end of the string.

**For Example**
```js
let str = "Apple, Banana, Kiwi";
str.substr(-4)    // Returns Kiwi
```

## **Replacing String Content**
The ``replace()`` method replaces a specified value with another value in a string:

**For Example**
```js
let text = "Please visit Microsoft!";
let newText = text.replace("Microsoft", "Google");
```

The ``replace()`` method does not change the string it is called on. It returns a new string.

By default, the ``replace()`` method replaces only the first match:

**For Example**
```js
let text = "Please visit Microsoft and Microsoft!";
let newText = text.replace("Microsoft", "Google");
```

By default, the replace() method is case sensitive. Writing MICROSOFT (with upper-case) will not work:

**For Example**
```js
let text = "Please visit Microsoft!";
let newText = text.replace("MICROSOFT", "Google");
```

To replace case insensitive, use a regular expression with an /i flag (insensitive):

**For Example**
```js
let text = "Please visit Microsoft!";
let newText = text.replace(/MICROSOFT/i, "Google");
```

Note that regular expressions are written without quotes.

To replace all matches, use a regular expression with a /g flag (global match):

**For Example**
```js
let text = "Please visit Microsoft and Microsoft!";
let newText = text.replace(/Microsoft/g, "W3Schools");
```

## **Converting to Upper and Lower Case**
A string is converted to upper case with ``toUpperCase()``:

**For Example**
```js
let text1 = "Hello World!";       // String
let text2 = text1.toUpperCase();  // text2 is text1 converted to upper
```

A string is converted to lower case with ``toLowerCase()``:

**For Example**
```js
let text1 = "Hello World!";       // String
let text2 = text1.toLowerCase();  // text2 is text1 converted to lower
```

## **The concat() Method**
``concat()`` joins two or more strings:

**For Example**
```js
let text1 = "Hello";
let text2 = "World";
let text3 = text1.concat(" ", text2);
```

The ``concat()`` method can be used instead of the plus operator. These two lines do the same:

**For Example**
```js
text = "Hello" + " " + "World!";
text = "Hello".concat(" ", "World!");
```

## **String.trim()**
The ``trim()`` method removes whitespace from both sides of a string:

**For Example**
```js
let text = "       Hello World!        ";
text.trim()    // Returns "Hello World!"
```

## **JavaScript String Padding**
ECMAScript 2017 added two String methods: ``padStart`` and ``padEnd`` to support padding at the beginning and at the end of a string.

**For Example**
```js
let text = "5";
text.padStart(4,0)    // Returns 0005
```

**For Example**
```js
let text = "5";
text.padEnd(4,0)     // Returns 5000
```

# **JavaScript String Search**

JavaScript methods for searching strings:

``String.indexOf()``
``String.lastIndexOf()``
``String.startsWith()``
``String.endsWith()``
``String.indexOf()``
The ``indexOf()`` method returns the index of (the position of) the first occurrence of a specified text in a string:

**For Example**
```js
let str = "Please locate where 'locate' occurs!";
str.indexOf("locate")    // Returns 7
```

JavaScript counts positions from zero.
0 is the first position in a string, 1 is the second, 2 is the third ...

## **String.lastIndexOf()**
The ``lastIndexOf()`` method returns the index of the last occurrence of a specified text in a string:

**For Example**
```js
let str = "Please locate where 'locate' occurs!";
str.lastIndexOf("locate")    // Returns 21
```
Both ``indexOf()``, and ``lastIndexOf()`` return -1 if the text is not found:

**For Example**
```js
let str = "Please locate where 'locate' occurs!";
str.lastIndexOf("John")    // Returns -1
```

Both methods accept a second parameter as the starting position for the search:

**For Example**
```js
let str = "Please locate where 'locate' occurs!";
str.indexOf("locate", 15)    // Returns 21
```

The ``lastIndexOf()`` methods searches backwards (from the end to the beginning), meaning: if the second parameter is 15, the search starts at position 15, and searches to the beginning of the string.

**For Example**
```js
let str = "Please locate where 'locate' occurs!";
str.lastIndexOf("locate", 15)    // Returns 7
```

## **String.search()**
The ``search()`` method searches a string for a specified value and returns the position of the match:

**For Example**
```js
let str = "Please locate where 'locate' occurs!";
str.search("locate")     // Returns 7
```

**Did You Notice?**
* The two methods, ``indexOf()`` and ``search()``, are equal?
* They accept the same arguments (parameters), and return the same value?
  
The two methods are **NOT** equal. These are the differences:

* The ``search()`` method cannot take a second start position argument.
* The ``indexOf()`` method cannot take powerful search values (regular expressions).

## **String.match()**
The ``match()`` method searches a string for a match against a regular expression, and returns the matches, as an Array object.


**For Example**
Search a string for "ain":
```js
let text = "The rain in SPAIN stays mainly in the plain";
text.match(/ain/g)    // Returns an array [ain,ain,ain]
``` 

# Conclusion
Congratulations! You've successfully learnt about Template String(Literals), JavaScript String Methods and JavaScript String Search.

Keep exploring JavaScript :wave:

Contributor : [Abhinandan Adhikari](https://github.com/AbhinandanAdhikari) :heart:
<br> Contributor : [Damini Mehra](https://github.com/daminimehra) :heart: