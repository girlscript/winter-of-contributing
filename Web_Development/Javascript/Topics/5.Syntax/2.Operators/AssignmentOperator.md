# Assignment Operator
#### 1. Values Assignment (=)
```js
let count = 5;
```
In this example we use (=) assignment operator to assign the value 5 (Right Operand) to the counter variable (Left Operand).


#### 2. Addition (+=)
Addition Assignment (+=) adds the value of the right operand to the left operand and assigns the result to that variable.
```js
let count += x;
```
Or,
```js
let count = count + x;
```

#### 3. Subtraction (-=)
Addition Assignment (-=) subtract the value of the right operand from the left operand and assigns the result to that variable.
```js
let count -= x;
```
Or,
```js
let count = count - x;
```

#### 4. Multiplication (*=)
Multiplication Assignment (*=) multiplies the value of right operand to left operand and assigns the results to that variable.
```js
let count *= x;
```
Or,
```js
let count = count * x;
```

#### 5. Division (/=)
Division Assignment (/=) multiplies the value of left operand by right operand and assigns the results to that left operand.
```js
let count /= x;
```
Or,
```js
let count = count / x;
```

#### 6. Remainder (%=)
Remainder Assignment (%=) divides the variable by right operand and assigns the remainder value to that variable.
```js
let count %= x;
```
Or,
```js
let count = count % x;
```
#### 6. Exponentiation (**=)
Exponentiation Assignment (**=) assigns the result to the variable after getting the value of the variable to the power right operand.
```js
let count **= x;
```
Or,
```js
let count = count ** x;
```

Example
```js
let count = 5;
count **= 2; // 5 to the power 2
console.log(count); // 25
```

#### 7. Left Shift Assignment (<<=)
Left shift assignment moved the specified amounts of bit to the left side and assigns its value to left operand.
```js
let a = 3; // 00000000000000000000000000000011
a <<=2; //    00000000000000000000000000001100
// or a = a << 2;

console.log(a); // Output: 12
```

#### 7. Right Shift Assignment (>>=)
Right shift assignment moved the specified amounts of bit to the right side and assigns its value to left operand.
```js
let a = 3; // 00000000000000000000000000000011
a >>=2; //    00000000000000000000000000000000
// or a = a >> 2;

console.log(a); // Output: 0
```

#### 8. Bitwise AND (&=)
Bitwise AND assignment assigns the result of bitwise AND operation to the left operand.

```js
let a = 4; // 00000000000000000000000000000100  
a &= 2; //    00000000000000000000000000000010

console.log(a); // Output: 2
```

#### 9. Bitwise OR (|=)
Bitwise OR assignment assigns the result of bitwise OR operation to the left operand.

```js
let a = 4; // 00000000000000000000000000000100
a |= 2; //    00000000000000000000000000000110
//or a = a | 2;

console.log(a); // Output: 6
```

#### 10. Bitwise XOR (^=)
Bitwise XOR assignment assigns the result of bitwise XOR operation to the left operand.

```js
let a = 4; // 00000000000000000000000000000100
a ^= 2; //    00000000000000000000000000000110
//or a = a ^ 2;

console.log(a); // Output: 6
```