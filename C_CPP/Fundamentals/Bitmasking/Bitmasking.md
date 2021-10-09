## What is Bitmask?
   We use bitmask operations to turn a bit on from off or vice-versa, check if a bit is on or off and for clearing a bit.
   
   There are various types of bitwise **operator** in C++ i.e. 
   1. Bitwise And (`&&`) 
   2. Bitwise Or  (`||`) 
   3. Bitwise Not (`~`) 
   4. Bitwise XOR (`^`)

``Note``: **Time complexity** *of bitwise operators is* `O(n)` *and* **space complexity** *is* `O(1)`*which means it allows to work in linear time without using any extra spaces*.

**Note** : The numbering of bits is done from *`right  to left` starting from index 0,1,2 and so on*. 

----

## Where Bitmasking is used?
### The uses are-

1. ``To get the I th bit``

      We will use left shift operator (`<<`) so
   basically in simple way its way of writing is x<<y.
   
   **Remember**- In Left shift operator for example 5<<1 so as binary 5 is 0101 so always take 0's from behind and put in front here put 1 one zero in front i.e the mask would become 1010.

   `Example 5<<2 so here take two  0's from behind and
 put it in front now mask would become 10100` .

   `Getting the I th bit` 
   

    Input the number and  position we want to get the bit 
   ```
    cin>>n>>i; // Here i refers to positon and n to number
   ```
    make a mask of 1<<position 
    ```
    int mask= 1<<i;
    ```
     after that do and(&) operation with mask and the number if result > 0 then bit is 1 else it is 0.
     ```
     return (n & mask) > 0 ? 1 : 0;
     ```

 2. `To clear the I th bit` 

    Input the number and positon of bit where to be cleared 
    ``` 
    cin>>n>>i; /* n= number and i = position of bit to clear */
    ```
    make a mask by *negating(~)* of 1<< position 
    ```
    int mask= ~(1<<i);
    ```
    then perform and(&) operation with number and mask 
    ```
    n=(n & mask);
    ```
    then finally return the number or we can pass number by refernce in function so both approaches will work.

3. `To set the I th bit`
   
   Make a mask of same as above 1<<position 
   ```
   int mask= (1<<i);
   ```
   and here we do or operation ( | )  of number and mask
   ```
   n=(n|mask);
   ```
    finally return the changed number.

4. `To update the I th bit`

     Here also we input the number , position of bit same as above code snippet 
     value to be updated and here we apply `mixture` of two concepts `set bit and clear bit` as discussed above.
     Here is code snippet to look -:
     ```
    //CLEAR I TH BIT
    int mask= ~(1<<i); 
    n=(n & mask);            
    return n;  
   
   //SETS THE BIT
    int mask=(v<<i); 
    n=n|mask;//   
     ```
   finally return the number.
     ## Resources
     ---
    Learn Bitmasking - [click here](https://www.codespeedy.com/bit-masking-in-cpp/)
   