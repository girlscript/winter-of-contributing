## What is Bitmask?
  
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

1. **To get the I th bit**

      We will use left shift operator (`<<`) so
   basically in simple way its way of writing is x<<y.
   
   **Remember**- In Left shift operator for example 5<<1 so as binary 5 is 0101 so always take 0's from behind and put in front here put 1 one zero in front i.e the mask would become 1010.

   `Example 5<<2 so here take two  0's from behind and
 put it in front now mask would become 10100` .

   `Getting the I th bit` - Input the number and  position we want to get the bit and make a mask of 1<<position and after that do and(&) operation with mask and the number if result > 0 then bit is 1 else it is 0.

2. `To clear the I th bit` 

    Input the number and positon of bit where to be cleared and make a mask by *negating(~)* of 1<< position and then perform and(&) operation with number and mask then finally return the number or we can pass number by refernce in function so both approaches will work.

3. `To set the I th bit`

   Make a mask of same as above 1<<position and here we do or operation ( | )  of number and mask and finally return the changed number.

4. `To update the I th bit`

     Here also we input the number , position of bit and value to be updated and here we apply `mixture` of two concepts `set bit and clear bit` as discussed above.
     
     ---
   
    Learn Bitmasking - [click here](https://www.codespeedy.com/bit-masking-in-cpp/)
   