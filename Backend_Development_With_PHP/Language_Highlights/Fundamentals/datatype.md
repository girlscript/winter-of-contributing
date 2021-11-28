# Data Types In PHP
- A variable can store data of various types, and various data types can do different things.
- In PHP, we have the following type of data.

| No            | Topics    |  
| ------------- |:-------------| 
| 1             | [String](#string) |
| 2             | [Integer](#integer) |
| 3             | [Float](#float) |
| 4             | [Boolean](#boolean) |
| 5             | [Array](#array) |
| 6             | [Object](#object) |
| 7             | [NULL](#null) |
---
### String
- A string is a sequence of characters.
- E.g. `Girlscript Winter Of Code`.
- We can put a string inside a double or single quote.
##### Code Snippet :
```php
<?php
$example = "Girlscript Winter Of Code";

echo $example;
echo "<br>";
echo "Hello Folks !"
?>
```
---
### Integer
- An int is a number of the set ` ℤ = {..., -2, -1, 0, 1, 2, ...}`.
- It can be denoted in decimal (base 10), hexadecimal (base 16), octal (base 8), or binary (base 2) notation. The negation operator can be used to denote a negative number.
- Range : `-2,147,483,648 and 2,147,483,647.`
#### Code Snippet :
```php
<?php
$x = 1234; // decimal number
$y = 0123; // octal number (equivalent to 83 decimal)
$z = 0x1A; // hexadecimal number (equivalent to 26 decimal)
$w = 0b11111111; // binary number (equivalent to 255 decimal)

?>
```
---
### Float
- A float is a number with a decimal point or we can say that is a number in exponential form.
#### Code Snippet :
```php
<?php
$a = 10.365;
var_dump($a);
?>
```
---
### Boolean
- This is the simplest data type.
- It has two values : `true` & `false`.
#### Code Snippet :
```php
<?php
$x = True; // assign the value TRUE to x
?>
```
---
### Array
- In PHP, an array is an ordered map.
- A map is a type that associates values to keys.
- We can say that An array stores multiple values in one single variable.
#### Code Snippet :
```php
<?php
$fruits = array("apple","banana","papaya");
var_dump($fruits);
?>
```
---
### Object
- Object is a main aspect of object-oriented programming.
- Object is an instance of class.
- We use `new` for creating an object.
#### Code Snippet :
```php
?php
class test
{
    function test_fun()
    {
        echo "test execution"; 
    }
}

$x = new test;
$x->test_fun();
?>
```
---
### Null
- It represents no value.
- `null` is only possible value of this type.
- A variable of data type `null` is a variable that has no value assigned to it.
- We can also set `null` as a value of a Variable.
#### Code Snippet :
```php
<?php
$a = "Hello GWOC'21";
$a = null;
var_dump($a);
?>
```
---
