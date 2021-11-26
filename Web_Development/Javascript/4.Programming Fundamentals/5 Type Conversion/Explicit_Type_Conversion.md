# Explicit Type Conversion

Type conversion is the process of converting data of one type to another.

There are two types of type conversion in javascript:-
1. Implicit conversion 
2. Explicit conversion

## Javascript Explicit Conversion

- **String to Numbers**

The number () function is used to convert strings to numbers.

parseInt() is used to return an integer by parsing strings.

parseFloat() is used to returns a floating-point number.

Number() function convert Empty strings to zero and strings containing numbers to numbers.
Else converts to a NOT a NUMBER(NaN).

The unary operator can be used to convert a variable to a number.

- **Number to Strings**

String() pr toString() function is used to convert numbers to strings for any expressions.

toPrecision() is used to return a string of numbers having a specific length.

- **Dates to Numbers**

The number () function can be used to convert to numbers from date.

- **Booleans to Numbers/Strings**

The number () function is used for this conversion of booleans to numbers.
- For false it will return 0
- For true it will return 1

Similarly, the String() function is used to convert booleans into strings.
- For false it will return false
- For true it will return true

### Javascript Type Conversion Table

| Value | Convert to string | Convert to number | Convert to boolean |
|-----------|-------------------|-------------------|--------------------|
| false | "false" | 0 | false |
| true | "true" | 1 | true |
| 0 | "0" | 0 | false |
| 1 | "1" | 1 | true |
| "1" | "1" | 1 | true |
| "0" | "0" | 0 | true |
| null | "null" | 0 | false |
| undefined | "undefined" | NaN | false |
| "ten" | "ten" | NaN | true |

#### Javascript Implicit 

In implicit form, it will automatically convert the value's type as needed.

### Example illustrating the javascript Explicit type Conversion

```
<!DOCTYPE html>
<html>
<body>

<h2>JavaScript Explicit Type Conversions</h2>

<p>Converting null to other types:</p>

<p id="demo" style="font-family:Times New Roman"></p>

<script>
let x = null;
document.getElementById("demo").innerHTML =
"Number : " + Number(x) + "<br>" +
"String : " + String(x) + "<br>" +
"Boolean: " + Boolean(x);
</script>

</body>
</html>
```

Output:-
```
JavaScript Explicit Type Conversions
Converting null to other types:
Number : 0
String: null
Boolean: false
 ```

Reference: [W3Schools](https://www.w3schools.com/js/js_type_conversion.asp)
