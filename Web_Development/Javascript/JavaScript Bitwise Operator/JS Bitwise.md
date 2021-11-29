# Bitwise in Javascript
Bitwise operators are used to  manipulate individual bits of a number. Javascript performs bitwise operations on 32 bit binary numbers. Before any bitwise operation is performed javascript converts numbers to a 32 bits signed integer. After the operation the result is converted back to 64 bits numbers. Javascript supports the following bitwise operations:

- And ( & )
- OR ( | )
- NOT ( ~ )
- XOR ( ^ )
- Left Shift ( << )
- Right Shift ( >> )

## 1. AND
Bitwise AND is binary operator and returns 1 if both pair of bits are 1.
| operation | Result |
| --------- | ------ |
| 0&0       |  0     |
| 0&1       |  0     |
| 1&0       |  0     |
| 1&1       |  1     |
### Example
```javascript
let a=5;            // bit representation: 00000000000000000000000000000101
let b=1;            // bit representation: 00000000000000000000000000000001
console.log(a&b);   // output 00000000000000000000000000000001 (that is 1)
```
## 2. OR
Bitwise OR is also a binary operator, it takes two operand and perform bitwise OR operation on each pair. It returns 1 if any one of the bits is 1.
| operation | Result |
| --------- | ------ |
| 0 | 0       |  0     |
| 0 | 1       |  1     |
| 1 | 0       |  1     |
| 1 | 1       |  1     |
### Example
```javascript
let a=5;           //bit representation: 00000000000000000000000000000101
let b=1;           //bit representation: 00000000000000000000000000000001
console.log(a|b);  //output 00000000000000000000000000000101 (that is 5)
```
## 3. NOT
Bitwise NOT is a unary operator, it simply inverts every bit of the number. Important thing to note here is that a 32bit signed integer uses the leftmost bit as the minus sign.

| operation | Result |
| --------- | ------ |
| ~0        |  1     |
| ~1        |  0     |
### Example
```javascript
let a=5;         //bit representation: 00000000000000000000000000000101
console.log(~5); //output 11111111111111111111111111111010 (that is -6)
```
## 4. XOR
Bitwise XOR is a binary operator, it returns 1 if both the bits are different.
| operation   | Result |
| ----------- | ------ |
| 0 ^ 0       |  0     |
| 0 ^ 1       |  1     |
| 1 ^ 0       |  1     |
| 1 ^ 1       |  0     |
### Example
```javascript
let a=5;           //bit representation: 00000000000000000000000000000101
let b=1;          //bit representation: 00000000000000000000000000000001
console.log(a^b); //output 00000000000000000000000000000100 (that is 4)
```
## 5. Left Shift
Left shift operator shifts the bits of the first operand to the left, and second operand describes the positions to be shifted.
### Example
```javascript
let a=5;            //bit representation: 00000000000000000000000000000101
let b=1;           //bit representation: 00000000000000000000000000000001
console.log(a<<b); //output 00000000000000000000000000001010 (that is 10)
``` 
## 6. Right Shift
Right shift operator shifts the bits of the first operand to the right, as specified by the second operand.
### Example
```javascript
let a=5;            //bit representation: 00000000000000000000000000000101
let b=1;            //bit representation: 00000000000000000000000000000001
console.log(a>>b);  //output 00000000000000000000000000000010 (that is 2)
```


