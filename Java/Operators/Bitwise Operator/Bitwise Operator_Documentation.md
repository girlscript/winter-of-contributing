# Bitwise Operators in Java
  Bitwise operators perform the operation on individual bits of a number. It can be applied to any integer type (such as int, long, short, etc). Bitwise operators are computationally faster. The operand(input decimal value) is converted into its respective binary value and then the operation is performed bit-by-bit.


  Following are the types of Bitwise operators:


- ### **Bitwise AND** (denoted by **'&'**) :

  AND is a binary operator, i.e, at a time it takes two operands and manipulates them bit-by-bit by performing AND between them to return a new value.

  If and only if both the bits across the two operands are 1, it will return the value as 1, else it will return 0.

  **Truth Table** 
   | A | B | C |  
   |---|---|---|   
   | 0 | 0 | 0 |   
   | 0 | 1 | 0 |    
   | 1 | 0 | 0 |           
   | 1 | 1 | 1 |

  
  Example:- AND operation between 8 and 9.
  ```
  8 ->    1000 (In binary representation)
  9 ->  & 1001 (In binary representation)
  _____________
  8   <-  1000
  ```
 
  Code  for implementing AND -

  >```Java
  >public class And{
  >  public static void main(String args[]){
  >      int n1 = 8;
  >      int n2 = 9;
  >      int ans = n1&n2;
  >  System.out.println("AND between n1 and n2 is " + ans);
  >  }
  >}
  >```
  Output -
  ```
  AND between n1 and n2 is 8
  ```
 


- ### **Bitwise OR** (denoted by **'|'**) :

  OR is  a binary operator, i.e, at a time it takes two operands and manipulates them bit-by-bit by performing OR between them to return a new value.

  If either of the bits across the two operands is 1, it will return the value as 1, else it will return 0.

  **Truth Table** 
   | A | B | C |  
   |---|---|---|   
   | 0 | 0 | 0 |   
   | 0 | 1 | 1 |    
   | 1 | 0 | 1 |           
   | 1 | 1 | 1 |

  
  Example:- OR operation between 8 and 9.
  ```
  8 ->    1000 (In binary representation)
  9 ->  | 1001 (In binary representation)
  _____________
  9   <-  1001
  ```
 
  Code for implementing OR -

  >```Java
  >public class OR{
  >  public static void main(String args[]){
  >      int n1 = 8;
  >      int n2 = 9;
  >      int ans = n1|n2;
  >  System.out.println("OR between n1 and n2 is " + ans);
  >  }
  >}
  >```
  Output -
  ```
  OR between n1 and n2 is 9
  ```



- ### **Bitwise XOR** (denoted by **'^'**) :

  XOR is also called 'Bitwise Exclusive OR'. 
  It is a binary operator, i.e, at a time it takes two operands and manipulates them bit-by-bit by performing XOR between them to return a new value.

  If both the bits across the two operands are different, it will return the value as 1, else it will return 0.

  **Truth Table** 
   | A | B | C |  
   |---|---|---|   
   | 0 | 0 | 0 |   
   | 0 | 1 | 1 |    
   | 1 | 0 | 1 |           
   | 1 | 1 | 0 |

  
  Example:- XOR operation between 8 and 9.
  ```
  8 ->    1000 (In binary representation)
  9 ->  ^ 1001 (In binary representation)
  _____________
  1   <-  0001
  ```
 
  Code  for implementing XOR -

  >```Java
  > public class Xor{
  >  public static void main(String args[]){
  >     int n1 = 8;
  >     int n2 = 9;
  >     int ans = n1^n2;
  >System.out.println("XOR between n1 and n2 is " + ans);
  >  }
  >}
  >```
  Output -
  ```
  XOR between n1 and n2 is 1
  ```
 
- ### **Bitwise Complement** (denoted by **'~'**) :

  It is a urinary operator, i.e, it requires a single operand. It inverts every bit of the input value to return a new value(one's complement of input value).

  If the bit is set to 1, it will return 0 and if the bit is set to 0, it will return 1.

  **Truth Table** 
   | A |~A |   
   |---|---|  
   | 0 | 1 |        
   | 1 | 0 |            
    
  Example:- Complement of 8.
  ```
  8 ->  ~ 1000 (In binary representation)
  _____________
  7   <-  0111
  ```
 
  Code  for implementing Complement -

  >```Java
  > public class Complement{
  >  public static void main(String args[]){
  >     int n1 = 8;
  >     int ans = ~n1;
  >System.out.println("Complement of n1 is " + ans);
  >  }
  >}
  >```
  Output -
  ```
  Complement of n1 is -9
  ```
  **Note**:-As a output, compiler gives 2's complement of that number which is obtained as a result after inverting the bits, i.e, 2's     
           complement of 7 is -9.
 

- ### **Bitwise Right Shift Operator** (denoted by **'>>'**) : 

  It is also called 'Signed Right Shift Operator'.This operator shifts the bits of the input value to the right by a specified number(bits).
  
  
  Format  : *input value__shift operator(>>)__specified bit*.
  

  When we right shift any input value, the rightmost bits(also known as 'Least Significant Bits') gets discarded and the leftmost bits
  (also known as 'Most Significant Bits') gets replaced with sign bit, i.e, 1 for negative and 0 for positive.

  Example:- Right Shift of 5 by 2.
  ```
     5 >> 2    0101 (5 in binary representation)
  0101 >> 2 -> 0001 (1 in decimal) 

  Here 5 is positive therefore its leftmost bits are filled with 0.

  In case of Right Shift of -5 by 2.

          5 >> 2  0101(5 in binary)
  1's complement  1010
  2's complement  1011 (Signed bit is 1)

  Now, Right shift by 2 
     1011 >> 2 -> 0010(2 in decimal) 

  But here signed bit obtained is 1, therefore leftmost bits will get replaced by 1.
  
  Hence, it will then become 1110 which is equivalent to -2.

  ```

  Code  for implementing Right Shift Operator -

  >```Java
  > public class Complement{
  >  public static void main(String args[]){
  >     int n1 = 5;
  >     int n2 = -5;
  >     int ans1 = n1 >> 2;
  >     int ans2 = n2 >> 2;
  >System.out.println("Value of 5 is " + ans1 + " and Value of -5 is " + ans2);
  >  }
  >}
  >```
  Output -
  ```
  Value of 5 is 1 and Value of -5 is -2
  ```



- ### **Unsigned Right Shift Operator** (denoted by **'>>>'**) : 

  This operator shifts the bits to the right of the input value by the specified number(bits) .

  When Signed Right Shift Operator (>>) operator is used the leftmost bit(MSB) is replaced with sign bit, But in case of Unsigned Right Shift Operator (>>>) the leftmost bit gets filled with 0, i.e, sign bit is not preserved.

  ```
  Example 1 :- Right Shift of 5 by 2.
  
     5 >> 2    0101 (5 in binary representation)
  0101 >> 2 -> 0001 (1 in decimal) 

  
  Example 2 :- Right Shift of -5 by 2.

    -5 >> 2 -> 1073741822 

  ```

  Code  for implementing Right Shift Operator -

  >```Java
  > public class Complement{
  >  public static void main(String args[]){
  >     int n1 = 5;
  >     int n2 = -5;
  >     int ans1 = n1 >>> 2;
  >     int ans2 = n2 >>> 2;
  >System.out.println("value of 5 is " + ans1 + " and Value of -5 is " + ans2);
  >  }
  >}
  >```
  Output -
  ```
  Value of 5 is 1 and Value of -5 is 1073741822
  ```

- ### **Bitwise Left Shift Operator** (denoted by **'<<'**) :  

  This operator shifts the bits of the input value to the left by a specified number(bits).

  Format : *input value__shift operator(<<)__specified bit*.

  On shifting, the leftmost bit is discarded while a void is created at rightmost bit which is then filled with 0.
  
 
  ```
  Example 1:- Left Shift of 8 by 2. 

     8 -> 0000 1000 (In binary representation)
  8<<2 -> 0010 0000 (32 in decimal)
 
  ``` 
  Code  for implementing Left Shift Operator -

  >```Java
  > public class Complement{
  >  public static void main(String args[]){
  >     int n1 = 8;
  >     int ans = n1<<2;
  >System.out.println("Value of n1 is " + ans);
  >  }
  >}
  >```
  Output -
  ```
  Value of n1 is 32
  ```
  