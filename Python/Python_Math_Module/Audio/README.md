# PYTHON MATH MODULE
[Click here for the audio](https://drive.google.com/drive/u/0/folders/1UrvMxrI8f22YYyw2j7I5ShDnkwNLhsQT)

## ABOUT
This module provides access to the mathematical functions defined by the C standard.

These functions cannot be used with complex numbers; use the functions of the same name from the cmath module if you require support for complex numbers. The distinction between functions which support complex numbers and those which don’t is made since most users do not want to learn quite as much mathematics as required to understand complex numbers. Receiving an exception instead of a complex result allows earlier detection of the unexpected complex number used as a parameter, so that the programmer can determine how and why it was generated in the first place.
The following functions are provided by this module. Except when explicitly noted otherwise, all return values are floats.

## Number-theoretic and representation functions

- math.ceil(x)

Return the ceiling of x, the smallest integer greater than or equal to x. If x is not a float, delegates to x.__ceil__(), which should return an Integral value.

- math.comb(n, k)

Return the number of ways to choose k items from n items without repetition and without order.

Evaluates to n! / (k! * (n - k)!) when k <= n and evaluates to zero when k > n.

Also called the binomial coefficient because it is equivalent to the coefficient of k-th term in polynomial expansion of the expression (1 + x) ** n.

Raises TypeError if either of the arguments are not integers. Raises ValueError if either of the arguments are negative.

- math.copysign(x, y)

Return a float with the magnitude (absolute value) of x but the sign of y. On platforms that support signed zeros, copysign(1.0, -0.0) returns -1.0.

- math.fabs(x)

Return the absolute value of x.

- math.factorial(x)

Return x factorial as an integer. Raises ValueError if x is not integral or is negative.

Deprecated since version 3.9: Accepting floats with integral values (like 5.0) is deprecated.

- math.floor(x)

Return the floor of x, the largest integer less than or equal to x. If x is not a float, delegates to x.__floor__(), which should return an Integral value.

- math.fmod(x, y)

Return fmod(x, y), as defined by the platform C library. Note that the Python expression x % y may not return the same result. The intent of the C standard is that fmod(x, y) be exactly (mathematically; to infinite precision) equal to x - n*y for some integer n such that the result has the same sign as x and magnitude less than abs(y). Python’s x % y returns a result with the sign of y instead, and may not be exactly computable for float arguments. For example, fmod(-1e-100, 1e100) is -1e-100, but the result of Python’s -1e-100 % 1e100 is 1e100-1e-100, which cannot be represented exactly as a float, and rounds to the surprising 1e100. For this reason, function fmod() is generally preferred when working with floats, while Python’s x % y is preferred when working with integers.

- math.frexp(x)

Return the mantissa and exponent of x as the pair (m, e). m is a float and e is an integer such that x == m * 2**e exactly. If x is zero, returns (0.0, 0), otherwise 0.5 <= abs(m) < 1. This is used to “pick apart” the internal representation of a float in a portable way.

- math.fsum(iterable)

Return an accurate floating point sum of values in the iterable. Avoids loss of precision by tracking multiple intermediate partial sums:

>>>
>>> sum([.1, .1, .1, .1, .1, .1, .1, .1, .1, .1])
0.9999999999999999
>>> fsum([.1, .1, .1, .1, .1, .1, .1, .1, .1, .1])
1.0
The algorithm’s accuracy depends on IEEE-754 arithmetic guarantees and the typical case where the rounding mode is half-even. On some non-Windows builds, the underlying C library uses extended precision addition and may occasionally double-round an intermediate sum causing it to be off in its least significant bit.


- math.gcd(*integers)

Return the greatest common divisor of the specified integer arguments. If any of the arguments is nonzero, then the returned value is the largest positive integer that is a divisor of all arguments. If all arguments are zero, then the returned value is 0. gcd() without arguments returns 0.

- math.isclose(a, b, *, rel_tol=1e-09, abs_tol=0.0)

Return True if the values a and b are close to each other and False otherwise.

Whether or not two values are considered close is determined according to given absolute and relative tolerances.

rel_tol is the relative tolerance – it is the maximum allowed difference between a and b, relative to the larger absolute value of a or b. For example, to set a tolerance of 5%, pass rel_tol=0.05. The default tolerance is 1e-09, which assures that the two values are the same within about 9 decimal digits. rel_tol must be greater than zero.

abs_tol is the minimum absolute tolerance – useful for comparisons near zero. abs_tol must be at least zero.

If no errors occur, the result will be: abs(a-b) <= max(rel_tol * max(abs(a), abs(b)), abs_tol).

The IEEE 754 special values of NaN, inf, and -inf will be handled according to IEEE rules. Specifically, NaN is not considered close to any other value, including NaN. inf and -inf are only considered close to themselves.


## Some other useful functions

| Method           | Description                                                                                                  |   |   |   |
|------------------|--------------------------------------------------------------------------------------------------------------|---|---|---|
| math.acos()      | Returns the arc cosine of a number                                                                           |   |   |   |
| math.acosh()     | Returns the inverse hyperbolic cosine of a number                                                            |   |   |   |
| math.asin()      | Returns the arc sine of a number                                                                             |   |   |   |
| math.asinh()     | Returns the inverse hyperbolic sine of a number                                                              |   |   |   |
| math.atan()      | Returns the arc tangent of a number in radians                                                               |   |   |   |
| math.atan2()     | Returns the arc tangent of y/x in radians                                                                    |   |   |   |
| math.atanh()     | Returns the inverse hyperbolic tangent of a number                                                           |   |   |   |
| math.ceil()      | Rounds a number up to the nearest integer                                                                    |   |   |   |
| math.comb()      | Returns the number of ways to choose k items from n items without repetition and order                       |   |   |   |
| math.copysign()  | Returns a float consisting of the value of the first parameter and the sign of the second parameter          |   |   |   |
| math.cos()       | Returns the cosine of a number                                                                               |   |   |   |
| math.cosh()      | Returns the hyperbolic cosine of a number                                                                    |   |   |   |
| math.degrees()   | Converts an angle from radians to degrees                                                                    |   |   |   |
| math.dist()      | Returns the Euclidean distance between two points (p and q), where p and q are the coordinates of that point |   |   |   |
| math.erf()       | Returns the error function of a number                                                                       |   |   |   |
| math.erfc()      | Returns the complementary error function of a number                                                         |   |   |   |
| math.exp()       | Returns E raised to the power of x                                                                           |   |   |   |
| math.expm1()     | Returns Ex - 1                                                                                               |   |   |   |
| math.fabs()      | Returns the absolute value of a number                                                                       |   |   |   |
| math.factorial() | Returns the factorial of a number                                                                            |   |   |   |
| math.floor()     | Rounds a number down to the nearest integer                                                                  |   |   |   |
| math.fmod()      | Returns the remainder of x/y                                                                                 |   |   |   |

