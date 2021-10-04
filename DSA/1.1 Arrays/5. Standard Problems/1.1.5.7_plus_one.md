# Problem Statement

You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

## Example 1
### Input
```
digits = [1,2,3]
```
### Output
```
[1,2,4]
```
### Explanation
```
The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
```
## Example 2
### Input
```
digits = [9]
```
### Output
```
[1,0]
```
### Explanation
```
The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
```

## Algorithm
1. Check if the last element of given array equals to 9.
2. If the last element is not 9,simply increment it by 1 and return the updated array.
3. Otherwise,update the last element to 0 and run a while loop from second last element to first element and initialize flag=false.
4. Simply increment the digit,if its not equal to 9 and set flag = true for each iteration.
5. In case of 9,update the current element to 0.
6. At end if flag=false i.e. The first element is 9 then simply insert 1 at start.


## Code

```C++
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1]==9)   //Last digit is 9
        {
            bool flag=false;
            digits[digits.size()-1]=0;  //Update last digit to 0
            int i=digits.size()-2;
            while(i>=0)
            {
                if(digits[i]!=9)
                {
                    digits[i]++;
                    flag=true;
                    break;
                }
                digits[i]=0;
                i--;
                
            }
            if(!flag)
                digits.insert(digits.begin(),1);
                
            
        }
        else    //Last digit is not 9
        {
            digits[digits.size()-1]++;
        }
      return digits;
       
        
    }
};
```
