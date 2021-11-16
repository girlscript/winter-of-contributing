# Programs to convert from decimal to any other base in Python.
## Number System :- 
- Number system are necessary to represent computer data. Number system are differentiate by their base.
- where BASE is total digits or symbols available in that Number system.
- Detail on different [Types of Number System](../num_sys.md)
## Decimal To Binary 
*In decimal to binary conversion decimal number is divided by 2 and reminder will be consider as digit of equivalent binary number.These reminders are arranged in bottom to top order.*
```python
# Function to convert decimal number
# to binary using recursion
def DecimalToBinary(num):
     
    if num >= 1:
        DecimalToBinary(num // 2)
    print(num % 2, end = '')
 
# Driver Code
if __name__ == '__main__':
     
    # decimal value
    dec_val = int(input())
     
    # Calling function
    DecimalToBinary(dec_val)
```
## INPUT
24 <br>
## OUTPUT  
011000

## Decimal To Octal
*Here the decimal number is divided by 8 and remainder will be the digit of equivalent octal number. these remainders are arranged in reverse (bottom to top) order.*
### Algorithm:  
1. Store the remainder when the number is divided by 8 in an array.
2. Divide the number by 8 now
3. Repeat the above two steps until the number is not equal to 0.
4. Print the array in reverse order now.

For Example: 
If the given decimal number is 16. 

Step 1: Remainder when 16 is divided by 8 is 0. Therefore, arr[0] = 0. <br>
Step 2: Divide 16 by 8. New number is 16/8 = 2. <br>
Step 3: Remainder, when 2 is divided by 8, is 2. Therefore, arr[1] = 2. <br> 
Step 4: Divide 2 by 8. New number is 2/8 = 0. <br>
Step 5: Since number becomes = 0. <br>

Stop repeating steps and print the array in reverse order. Therefore, the equivalent octal number is 20.
```python
# function to convert
# decimal to octal
 
 
def decToOctal(n):
 
    # array to store
    # octal number
    octalNum = [0] * 100
 
    # counter for octal
    # number array
    i = 0
    while (n != 0):
 
        # storing remainder
        # in octal array
        octalNum[i] = n % 8
        n = int(n / 8)
        i += 1
 
    # printing octal number
    # array in reverse order
    for j in range(i - 1, -1, -1):
        print(octalNum[j], end="")
 
 
# Driver Code
n = int(input())
 
# Function Call
decToOctal(n)
```
## INPUT  
16 <br>
## OUTPUT
20

<!-- ## Time Complexity: O(log N)  -->

## Decimal To HexaDecimal
*In this conversion the decimal number is divided by 16 and remainder will be the digit of equivalent hexadecimal number. these remainders are arranged in reverse (bottom to top) order.*
*(Note:- if remainder is 10, 11, 12, 13, 14, 15 then in hexadecimal it will be A,B,C,D,E,F respectively.)*

## Algorithm:

1. Store the remainder when the number is divided by 16 in a temporary variable temp. If temp is less than 10, insert (48 + temp) in a character array otherwise if temp is greater than or equals to 10, insert (55 + temp) in the character array.
2. Divide the number by 16 now
3. Repeat the above two steps until the number is not equal to 0.
4. Print the array in reverse order now.

For Example <br>
If the given decimal number is 2545. 

Step 1: Calculate remainder when 2545 is divided by 16 is 1. Therefore, temp = 1. As temp is less than 10. So, arr[0] = 48 + 1 = 49 = ‘1’. <br>
Step 2: Divide 2545 by 16. New number is 2545/16 = 159. <br>
Step 3: Calculate remainder when 159 is divided by 16 is 15. Therefore, temp = 15. As temp is greater than 10. So, arr[1] = 55 + 15 = 70 = ‘F’. <br> 
Step 4: Divide 159 by 16. New number is 159/16 = 9. <br>
Step 5: Calculate remainder when 9 is divided by 16 is 9. Therefore, temp = 9. As temp is less than 10. So, arr[2] = 48 + 9 = 57 = ‘9’. <br>
Step 6: Divide 9 by 16. New number is 9/16 = 0. <br>
Step 7: Since number becomes = 0. Stop repeating steps and print the array in reverse order. Therefore, the equivalent hexadecimal number is 9F1. <br>
```python
# function to convert
# decimal to hexadecimal
 
def decToHexa(n):
 
    # char array to store
    # hexadecimal number
    hexaDeciNum = ['0'] * 100
 
    # counter for hexadecimal
    # number array
    i = 0
    while(n != 0):
 
        # temporary variable
        # to store remainder
        temp = 0
 
        # storing remainder
        # in temp variable.
        temp = n % 16
 
        # check if temp < 10
        if(temp < 10):
            hexaDeciNum[i] = chr(temp + 48)
            i = i + 1
        else:
            hexaDeciNum[i] = chr(temp + 55)
            i = i + 1
        n = int(n / 16)
 
    # printing hexadecimal number
    # array in reverse order
    j = i - 1
    while(j >= 0):
        print((hexaDeciNum[j]), end="")
        j = j - 1
 
 
# Driver Code
n = int(input())
decToHexa(n)
 
```
## INPUT  
2545 <br>
## OUTPUT
9F1
