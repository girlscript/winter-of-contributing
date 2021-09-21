In our day to day life we are using numbers which comprises of 10 different symbols with the help of which we can represent any number.
<br>such system of numbers which uses 10 different symbols is called  "Decimal Number System" .
# Types of number system
<br>There can be many systems but some which are in use are:-
 1. Binary nuber system
 2. Octal number system
 3. Decimal number system
 4. Hexadecimal number system

 <br>Binary number system uses 2 symbols (0 and 1) to represents all numbers. similarly octal uses 8 symbols(0 to 7),decimal uses 10 symbols(0 to 9) and hexadecimal number system uses 16 symbols(0 to 9 and A to F).

 ## 1. Binary number system
  This system is a base 2 system which uses 0 and 1 to represent all numbers ex:- (010101)<sub>2</sub>. 
  We can convert any number from binary number system to decimal number system and vice versa.<br> 
  - To convert **binary to decimal** we simply have to multiply the each digit with the powers of 2 of their respective weights. For example:- <br>
  (1010.01)2 <br>
  1x2<sup>3</sup> + 0x2<sup>2</sup> + 1x2<sup>1</sup>+ 0x2<sup>0</sup> + 0x2<sup>-1</sup> + 1x2<sup>-2</sup> = 8+0+2+0+0+0.25 = 10.25 <br>
  (1010.01)<sub>2</sub> = (10.25)<sub>10</sub> <br> 
 - To convert **decimal to binary** we have to repeteadly divide the number by 2 and print the remainder in reverse order . For example:- <br>
   click the [link](https://media.geeksforgeeks.org/wp-content/uploads/2-47.png)
 ## 2. Octal number system
  This system is a base 8 system which uses symbols from 0 to 7 to represents any number.<br>
  - To convert from **octal to decimal** we simply have to multiply the each digit with the powers of 8 of their respective weights. For example:-<br>
 (1756.21)<sub>8</sub> <br>
  1x8<sup>3</sup> + 7x8<sup>2</sup> + 5x8<sup>1</sup>+ 6x8<sup>0</sup> + 2x8<sup>-1</sup> + 1x8<sup>-2</sup> =512 + 448 + 40 + 6 +0.765625 = 1006.765625 <br>
  (1756.21)<sub>8</sub> = (1006.765625)<sub>10</sub> <br>
  - To convert **decimal to octal** we have to repetedly divide the number by 8 and print the remainder in reverse order .for example:-<br>
  click the [link](https://media.geeksforgeeks.org/wp-content/uploads/decToOctal.png)
 ## 3. Decimal number system
  This system of numbers we use in our daily life calculation . in this system we can represents any number with the help of 10 symbols from 0 to 9
 ## 4. Hexadecimal number system
This system is a base 16 system which uses symbols from 0 to 9  and A to F in which 'A' has positional weight 10, 'B' has positional weight 11 and so on till 16 for 'F'.<br>
 - To convert from **hexadecimal to decimal** we have to multiply each digit with  the powers of 16 of their respective positional weight. For example:-<br>
 (20A.2C)<sub>8</sub> <br>
   2x16<sup>2</sup> + 0x16<sup>1</sup>+ 10x16<sup>0</sup> + 2x16<sup>-1</sup> + 12x16<sup>-2</sup> =512 + 0 + 10 + 0.171878= 522.171878 <br>
  (20A.2C)<sub>16</sub> = (522.171878)<sub>10</sub> <br>
  -To convert **decimal to hexadecimal** we have to repetedly divide the number by 16 and print the remainder in reverse order .for example:-<br>
  click the [link](https://circuitglobe.com/wp-content/uploads/2016/09/deciaml-to-hexadecimal-conversion-6.jpg).
  <br><br>
  Here is a program in c++ langunge which can be used to convert any integer decimal number to any base.<br>
  `code`<br>
  ```cpp 
  #include<bits/stdc++.h>
using namespace std;
int main()
{ int num,rem,base;
  string a;
  cout<<"Enter the number(in decimal number system)\t";
  cin>>num;
  cout<<"Enter the base in which you want to do conversion\t";
  cin>>base;
  int i=0;
  while(num>0)
  {  rem=num%base;
     if(rem>9)
       a[i]=55+rem; 
     else 
       a[i]=48+rem;
     i++;
     
     num=num/base;
  }
 
  for(int j=i-1 ; j>=0 ; j--)
     cout<<a[j];
   return 0;
}
```

