

# String Methods in Javascript

Pre-defined string methods are very useful while working with Strings in Javascript.

Here are the details of most useful Javascript String Methods.

##  String Length
The Length property of a string returns the length or size of the string.

```javascript
    let x="Girlscript"
    x.length
```

##  Slice() Method

The Slice Method of a string will extract and return the any part of a string.

Takes the starting and ending index of the desired part as input parameter.

```javascript
    let x="Girlscript"
    x.slice(4,9)
```
If the input parameter is negative, position is counted from ending of the string.

```javascript
    let x="Girlscript"
    x.slice(-10,-6)
```
If the 2nd parameter is not given, then it will slice till the end.

```javascript
    let x="Girlscript"
    x.slice(4)
```

##  SubString() Method
The SubString Method of a string works similar to Slice Method but it doesn't except negative parameters.

Takes the starting and ending index of the desired part as input parameter.

```javascript
    let x="Girlscript"
    x.slice(4,9)
```

##  substr() Method
The substr Method of a string works similar to Slice Method.

The second parameter specifies the length of the desired string.

```javascript
    let x="Girlscript"
    x.slice(4,6)
```

If the first input parameter is negative, position is counted from ending of the string.

```javascript
    let x="Girlscript"
    x.slice(-10,4)
```
If the 2nd parameter is not given, then it will slice till the end.

```javascript
    let x="Girlscript"
    x.slice(4)
```

##  replace() Method

The replace Method of a string will replace any value of a string with another specified value.

The input parameter are the value of substring to be replaced and the specified value.

Replace method doesn't change the original string but returns a new string.

```javascript
    let x="Girlscripted Winter of Contributing"
    let y=x.replace("Girlscripted","Girlscript")
```
By default, Replace method will change the first match only.

```javascript
    let x="Girlscripted Winter of GirlScripted"
    let y=x.replace("Girlscripted","Girlscript")
```
To replace all matches,we use a regilar expression with /g flag.

```javascript
    let x="Girlscripted Winter of GirlScripted"
    let y=x.replace("/Girlscripted/g","Girlscript")
```

By default, Replace method is very case-sensitive. 

Writing ` "GIRLSCRIPTED"` will not work (all-uppercase).

```javascript
    let x="Girlscripted Winter of Contributing"
    let y=x.replace("GIRLSCRIPTED","Girlscript")
```
To replace case-insensitive values ,we use a regular expression with /i flag.

```javascript
    let x="Girlscripted Winter of Contributing"
    let y=x.replace("/GIRLSCRIPTED/i","Girlscript")
```
##  toUpperCase() Method
The toUpperCase() Method of a String will return a string will all character in Uppercase.

```javascript
    let x="Girlscript"
    let y=x.toUpperCase()
```

##  toLowerCase() Method
The toLowerCase() Method of a String will return a string will all character in Lowercase.

```javascript
    let x="Girlscript"
    let y=x.toLowerCase()
```

##  concat() Method
The concat() Method of a String will return a string joining two strings together.

The input parameters are the strings that are required to be joined.

```javascript
    let x="Girlscript"
    let y="Winter of Contributing"
    let y=x.concat("",y)
```

##  trim() Method
The trim() Method will remove whitespace from both sides of the string.

```javascript
    let x="         Girlscript          "
    x.trim()
```

##  charAt() Method
The charAt() Method will return the character at any specified index.

Takes the index of desired character as input.

```javascript
    let x="Girlscript"
    x.charAt(0)
```

##  charCodeAt() Method
The charCodeAt() Method will return the unicode of the character at any specified index.

Takes the index of desired character's unicode as input.

```javascript
    let x="Girlscript"
    x.charCodeAt(0)
```

##  split() Method
The split() Method will return an array by spliting the string on the basis of given separator.

Takes the separatror as input.

```javascript
    let x="Girlscript Winter of Contributing"
    let y=x.split(" ")
```
If the separator is not present, an array is returned with the entire string on 0th index.

```javascript
    let x="Girlscript Winter of Contributing"
    let y=x.split(",")
```