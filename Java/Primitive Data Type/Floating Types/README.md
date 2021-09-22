# **Floating Types**
Floating-point numbers, often known as real numbers, are numbers with fractional parts (usually expressed with a decimal point). We use such numbers when we have to define calculations such as square root, sine and cosine or a real number like pi.

Java has two types for floating-point numbers:-
* [float](#float)
* [double](#double)

>## **float**
The type float denotes a single-precision value that is stored in 4 bytes (32 bits). It can contain up to 7 decimal digits and ranges from 1.40239846 x 10<sup>-45</sup> to 3.40282347 x 10<sup>38</sup> (positive or negative). In terms of Java variables, we can use float when initializing or declaring any variable that may expect a fractional result but does not require a high degree of precision. We use float when representing Rupees and Paise, temperature, height etc.
```
Eg. float price, tempInCelsius;
```
## **Float Class**
The Float class is a wrapper for the type float, and it contains several fields, constructors, and methods for working with float values. A float value can be stored in a Float class object.

### **<ins>Fields</ins>**
1. **MAX VALUE**: Assigns the largest positive finite float value.
2. **MIN VALUE**: Assigns the smallest positive nonzero float value.
3. **MIN NORMAL**: Assigns the smallest positive normal float value.
4. **MAX_EXPONENT**: Assigns the maximum exponent a finite float variable can have.
5. **MIN_EXPONENT**: Assigns the minumum exponent a normalized float variable can have.
6. **BYTES**: Gives the number of bytes used to represent a float.
7. **SIZE**: Gives the number of bits used to represent a float.
8. **TYPE**: Gives the Class instance representing the primitive type float.
9. **NaN**: Assigns a Not-a-Number (NaN) value of type float.
10. **POSITIVE_INFINITY**: A constant that represents the positive infinity of type float.
11. **NEGATIVE_INFINITY**: A constant that represents the negative infinity of type float.

### **<ins>Constructor</ins>**
1. **Float(float value)**: Constructs a Float object that takes a float argument.
2. **Float(double value)**: Constructs a Float object that takes a double argument which gets converted to the type float.
3. **Float(String s)**: Constructs a Float object that takes a String representing the float value.

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
  11. **toString()**: Returns the float value converted to a String.
  12. **parseFloat()**: Returns a new float with the value represented by the specified String as its initial value.
  13. **valueOf()**: Returns the float value representing the Float object.
  14. **toHexString()**: Returns the hexadecimal representation corresponding to the float value.
  15. **floatToIntBits()**: Returns the IEEE 754 floating-point "single format" bit layout representation of the float value.
  16. **floatToRawIntBits()**: Returns the IEEE 754 floating-point "single format" bit layout representation of the float value while preserving Not-a-Number (NaN) values.
  17. **intBitsToFloat()**: Returns the float value of the given int bit representation.
  18. **equals()**: Compares the Float object against another Float object.
  19. **compare()**: Compares the two specified float values.
  20. **compareTo()**: Compares two Float objects.
  21. **min()**: Returns the minimuim of the two float values entered.
  22. **max()**: Returns the maximum of the two float values entered.
  23. **sum()**: Adds two float values.

<br>

>## **double**
The type double denotes a double-precision value that is stored in 8 bytes (64 bits). It can contain up to 16 decimal digits and ranges from 4.9406564584124654 x 10<sup>-324</sup> to 1.7976931348623157 x 10<sup>308</sup> (positive or negative). On some modern processors, double-precision is actually faster than single-precision. We use double when representing area, sine, cosine, etc.
```
Eg. double area, pi;
```
## **Double Class**
The Double class is a wrapper for the type double, and it contains several fields, constructors, and methods for working with double values. A double value can be stored in a Double class object.

### **<ins>Fields</ins>**
1. **MAX_VALUE**: Assigns the largest positive finite double value.
2. **MIN VALUE**: Assigns the smallest positive nonzero double value.
3. **MIN NORMAL**: Assigns the smallest positive normal double value.
4. **MAX_EXPONENT**: Assigns the maximum exponent a finite double variable can have.
5. **MIN_EXPONENT**: Assigns the minumum exponent a normalized double variable can have.
6. **BYTES**: Gives the number of bytes used to represent a double.
7. **SIZE**: Gives the number of bits used to represent a double.
8. **TYPE**: Gives the Class instance representing the primitive type double.
9. **NaN**: Assigns a Not-a-Number (NaN) value of type double.
10. **POSITIVE_INFINITY**: A constant that represents the positive infinity of type double.
11. **NEGATIVE_INFINITY**: A constant that represents the negative infinity of type double. 

### **<ins>Constructor</ins>**
1. **Double(double value)**: Constructs a Double object that takes a double argument.
2. **Double(String s)**: Constructs a Double object that takes a String representing the double value.

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
  11. **toString()**: Returns the double value converted to a String.
  12. **parseDouble()**: Returns a new double with the value represented by the specified String as its initial value.
  13. **valueOf()**: Returns the double value representing the Double object.
  14. **toHexString()**: Returns the hexadecimal representation corresponding to the double value.
  15. **doubleToLongBits()**: Returns the IEEE 754 floating-point "double format" bit layout representation of the double value.
  16. **doubleToRawLongBits()**: Returns the IEEE 754 floating-point "double format" bit layout representation of the double value while preserving Not-a-Number (NaN) values.
  17. **longBitsToDouble()**: Returns the double value of the given long bit representation.
  18. **equals()**: Compares the Double object against another Double object.
  19. **compare()**: Compares the two specified double values.
  20. **compareTo()**: Compares two Double objects.
  21. **min()**: Returns the minimuim of the two double values entered.
  22. **max()**: Returns the maximum of the two double values entered.
  23. **sum()**: Adds two double values.

[Back to top](#floating-types)

