# Program to convert from any other base to Decimal in cpp.
## Binary to Decimal 
- *Binary number system :- It has only two symbol 0 & 1. by using these two we can represent any other number.*
- *Decimal number system :- This system has ten specific symbols like 0,1,2,3,4,5,6,7,8,9 which are called digits.*

*In this conversion,the individual digit of given Binary number is multiplied by base 2 to the power of its corresponding position value.*

[For example](../num_sys.md) <br>
Example -: 1011
1. Take modulo of given binary number with 10. 
    (1011 % 10 = 1)
2. Multiply rem with 2 raised to the power
    it's position from right end. 
    (1 * 2^0)
    Note that we start counting position with 0. 
3. Add result with previously generated result.
    decimal = decimal + (1 * 2^0)
4. Update binary number by dividing it by 10.
    (1011 / 10 = 101)
5. Keep repeating upper steps till binary > 0.

Final Conversion -: (1 * 2^3) + (0 * 2^2) +
                 (1 * 2^1) + (1 * 2^0) = 11


```python
# Function calculates the decimal equivalent
# to given binary number
 
def binaryToDecimal(binary):
     
    binary1 = binary
    decimal, i, n = 0, 0, 0
    while(binary != 0):
        dec = binary % 10
        decimal = decimal + dec * pow(2, i)
        binary = binary//10
        i += 1
    print(decimal)   
     
 
# Driver code
if __name__ == '__main__':
    num = int(input())
    binaryToDecimal(num)
```
## INPUT 
100 <br>
## OUTPUT
4

## Octal to Decimal 
- *Octal number system :- This system has only eight specific symbols like 0,1,2,3,4,5,6,7, It is known as base-8 system.*

*In Octal to Decimal conversion,the individual digit of given Octal number is multiplied by base 8 to the power of its corresponding position value.*

For Example: 

If the octal number is 67. 
dec_value = 6*(8^1) + 7*(8^0) = 55

```python
# Function to convert
# octal to decimal
 
 
def octalToDecimal(n):
 
    num = n
    dec_value = 0
 
    # Initializing base value
    # to 1, i.e 8^0
    base = 1
 
    temp = num
    while (temp):
 
        # Extracting last digit
        last_digit = temp % 10
        temp = int(temp / 10)
 
        # Multiplying last digit
        # with appropriate base
        # value and adding it
        # to dec_value
        dec_value += last_digit * base
 
        base = base * 8
 
    return dec_value
 
 
# Driver Code
num = int(input))
print(octalToDecimal(num))
 
```
## INPUT
67 <br>
## OUTPUT
55

## HexaDecimal to Decimal 
- *Hexadecimal number system :- It has 16 specific symbols like 0,1,2,3,4,5,6,7,8,9 & A,B,C,D,E,F. hexadecimal uses A to F which are equivalent to decimal values 10 to 15.*

*In Hexadecimal to Decimal conversion,the individual digit of given Octal number is multiplied by base 8 to the power of its corresponding position value.*
```python
print("Enter the Hexadecimal Number: ")
hexdecnum = input()

chk = 0
decnum = 0
hexdecnumlen = len(hexdecnum)
hexdecnumlen = hexdecnumlen-1
i = 0
while hexdecnumlen>=0:
    rem = hexdecnum[hexdecnumlen]
    if rem>='0' and rem<='9':
        rem = int(rem)
    elif rem>='A' and rem<='F':
        rem = ord(rem)
        rem = rem-55
    elif rem>='a' and rem<='f':
        rem = ord(rem)
        rem = rem-87
    else:
        chk = 1
        break
    decnum = decnum + (rem * (16 ** i))
    hexdecnumlen = hexdecnumlen-1
    i = i+1

if chk == 0:
    print("\nEquivalent Decimal Value: ", decnum)
else:
    print("\nInvalid Input!")
```
## RESULT 
Enter the Hexadecimal Number: <br>
4A7F <br>
Equivalent Decimal Value: <br>
19071
