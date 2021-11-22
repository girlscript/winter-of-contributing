# Integer To Roman 

## Task
Given a integer, convert it to a roman numeral.

## Approach
Just like Roman to Integer, this problem is most easily solved using a lookup table for the conversion between digit and numeral. In this case, we can easily deal with the values in descending order and insert the appropriate numeral as many times as we can while reducing the our target number (N) by the same amount. Once N runs out, we can return ans.

![romanToInt](https://user-images.githubusercontent.com/73405757/140963448-360c6a7f-f391-4396-8fbd-68ab3c365c52.png)  
Source: [LeetCode](https://leetcode.com/problems/integer-to-roman/)
        
## Code of converting Integer to roman numerals in C++  
```c++
#include <bits/stdc++.h>
using namespace std;

// Function to convert decimal to Roman Numerals
string intToRoman(int N) {
    int val[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string rom[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string ans = "";
    for (int i = 0; N; i++){
        while (N >= val[i]){
            ans += rom[i];
            N -= val[i];
        }
    }
    return ans;
}

//Main Function
int main(){
     int number;
    //Take string from the user
    cout << "Enter Number: ";
    cin >> number;
    cout << "Roman Numeral is: " << intToRoman(number);
    return 0;
}
```  
## Input/Output Examples

#### Example 1:
```
Input: number = 3  
Output: "III"
```
#### Example 2:
```
Input: number = 1994  
Output: "MCMXCIV"  
```
