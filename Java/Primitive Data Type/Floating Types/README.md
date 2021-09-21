# **Floating Types**
Floating-point numbers, often known as real numbers, are numbers with fractional parts (usually expressed with a decimal point). We use such numbers when we have to define calculations such as square root, sine and cosine or a real number like pi.

Java has two primitive types for floating-point numbers:-
* [float](#float)
* [double](#double)

>## **float**
The type float denotes a single-precision value that is stored in 4 bytes (32 bits). It can contain up to 7 decimal digits and ranges from 1.40239846 x 10<sup>-45</sup> to 3.40282347 x 10<sup>38</sup> (positive or negative). In terms of Java variables, we can use float when initializing or declaring any variable that may expect a fractional result but does not require a high degree of precision. We use float when representing Rupees and Paise, temperature, height etc.
```
Eg. float price, tempInCelsius;
```
## **Float Class**
The Float class is a wrapper class for the primitive type float which has numerous methods for dealing with float values, such as converting them to string representations and vice versa. A float value can be stored in a Float class object.

### **<ins>Fields</ins>**
1. **MAX_VALUE**: A constant holding the largest positive finite value of type float.
2. **MIN_VALUE**: A constant holding the smallest positive nonzero value of type float.
3. **MIN_NORMAL**: A constant holding the smallest positive normal value of type float.
4. **MAX_EXPONENT**: Maximum exponent a finite float variable may have.
5. **MIN_EXPONENT**: Minumum exponent a normalized float variable may have.
6. **BYTES**: The number of bytes used to represent a float value.
7. **SIZE**: The number of bits used to represent a float value.
8. **TYPE**: The Class instance representing the primitive type float.
9. **NaN**: A constant holding a Not-a-Number (NaN) value of type float.
10. **POSITIVE_INFINITY**: A constant holding the negative infinity of type float. 
11. **NEGATIVE_INFINITY**: A constant holding the negative infinity of type float. 

### **<ins>Constructor</ins>**
1. **Float(float value)**: Constructs a newly allocated Float object that represents the primitive float argument.
2. **Float(double value)**: Constructs a newly allocated Float object that represents the argument converted to type float.
3. **Float(String s)**: Constructs a newly allocated Float object that represents the floating-point value of type float represented by the string.

### **<ins>Methods</ins>**
  1. **byteValue()**: Returns the value of Float as a byte.
  2. **shortValue()**: Returns the value of Float as a short
  3. **intValue()**: Returns the value of Float as a int.
  4. **longValue()**: Returns the value of Float as a long.
  5. **doubleValue()**: Returns the value of Float as a double.
  6. **floatValue()**: Returns the value of Float as a float.
  7. **hashCode()**: Returns the value of Float as a hashcode.
  8. **isFinite()**: Returns true if the Float value is a finite floating-point value.
  9. **isInfinite()**: Returns true if the Float value is not a finite floating-point value.
  10. **isNan()**: Returns true if the Float value is a Not-a-Number (NaN).
  11. **toString()**: Returns the string corresponding to the float value. 
  12. **parseFloat()**: Returns a new float initialized to the value represented by the specified String.
  13. **valueOf()**: Returns the Float object initialized with the float value provided.
  14. **toHexString()**: Returns the hexadecimal representation corresponding to the float value.
  15. **floatToIntBits()**: Returns a representation of the specified floating-point value according to the IEEE 754 floating-point "single format" bit layout.
  16. **floatToRawIntBits()**: Returns a representation of the specified floating-point value according to the IEEE 754 floating-point "single format" bit layout, preserving Not-a-Number (NaN) values.
  17. **intBitsToFloat()**: Returns the float value corresponding to a given int bit representation.
  18. **equals()**: Compares the Float object against another Float object.
  19. **compare()**: Compares the two specified float values.
  20. **compareTo()**: Compares two Float objects numerically.
  21. **min()**: Returns the minimuim of the two float values entered.
  22. **max()**: Returns the maximum of the two float values entered.
  23. **sum()**: Adds two float values together as per the + operator.

<br>

>## **double**
The type double denotes a double-precision value that is stored in 8 bytes (64 bits). It can contain up to 16 decimal digits and ranges from 4.9406564584124654 x 10<sup>-324</sup> to 1.7976931348623157 x 10<sup>308</sup> (positive or negative). Double-precision is actually faster than single-precision on some modern processors that have been optimized for high-speed mathematical calculations. We use double when representing area, sine, cosine, etc.
```
Eg. double area, pi;
```
## **Double Class**
The Double class is a wrapper class for the primitive type double which has numerous methods for dealing with double values, such as converting them to string representations and vice versa. A double value can be stored in a Double class object.

### **<ins>Fields</ins>**
1. **MAX_VALUE**: A constant holding the largest positive finite value of type double.
2. **MIN_VALUE**: A constant holding the smallest positive nonzero value of type double.
3. **MIN_NORMAL**: A constant holding the smallest positive normal value of type double.
4. **MAX_EXPONENT**: Maximum exponent a finite double variable may have.
5. **MIN_EXPONENT**: Minumum exponent a normalized double variable may have.
6. **BYTES**: The number of bytes used to represent a double value.
7. **SIZE**: The number of bits used to represent a double value.
8. **TYPE**: The Class instance representing the primitive type double.
9. **NaN**: A constant holding a Not-a-Number (NaN) value of type double.
10. **POSITIVE_INFINITY**: A constant holding the negative infinity of type double. 
11. **NEGATIVE_INFINITY**: A constant holding the negative infinity of type double. 

### **<ins>Constructor</ins>**
1. **Double(double value)**: Constructs a newly allocated Double object that represents the argument converted to type double.
2. **Double(String s)**: Constructs a newly allocated Double object that represents the floating-point value of type double represented by the string.

### **<ins>Methods</ins>**
  1. **byteValue()**: Returns the value of Double as a byte.
  2. **shortValue()**: Returns the value of Double as a short
  3. **intValue()**: Returns the value of Double as a int.
  4. **longValue()**: Returns the value of Double as a long.
  5. **doubleValue()**: Returns the value of Double as a double.
  6. **floatValue()**: Returns the value of Double as a float.
  7. **hashCode()**: Returns the value of Double as a hashcode.
  8. **isFinite()**: Returns true if the Double value is a finite floating-point value.
  9. **isInfinite()**: Returns true if the Double value is not a finite floating-point value.
  10. **isNan()**: Returns true if the Double value is a Not-a-Number (NaN).
  11. **toString()**: Returns the string corresponding to the double value. 
  12. **parseDouble()**: Returns a new double initialized to the value represented by the specified String.
  13. **valueOf()**: Returns the Double object initialized with the double value provided.
  14. **toHexString()**: Returns the hexadecimal representation corresponding to the double value.
  15. **doubleToLongBits()**: Returns a representation of the specified floating-point value according to the IEEE 754 floating-point "double format" bit layout.
  16. **doubleToRawLongBits()**: Returns a representation of the specified floating-point value according to the IEEE 754 floating-point "double format" bit layout, preserving Not-a-Number (NaN) values.
  17. **LongBitsToDouble()**: Returns the double value corresponding to a given long bit representation.
  18. **equals()**: Compares the Double object against another Double object.
  19. **compare()**: Compares the two specified double values.
  20. **compareTo()**: Compares two Double objects numerically.
  21. **min()**: Returns the minimuim of the two double values entered.
  22. **max()**: Returns the maximum of the two double values entered.
  23. **sum()**: Adds two double values together as per the + operator.

[Back to top](#floating-types)
