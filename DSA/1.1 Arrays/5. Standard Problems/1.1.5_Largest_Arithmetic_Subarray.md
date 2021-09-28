## Problem Statement
A has an array of N non-negative integers. A wants to calculate maximum length of contiguous arithmetic subarray.
Arithmetic Subarray is an array that contains at least two integers and the difference between consecutive integers are equal. For example [9,10] , [3,3,3] and [9,7,5,3] arithmetic arrays.

Input: No. of test cases T
integer no N
array A[]


# LONGEST ARITHMETIC SUBARRAY:-- 

> sample test case 1: <br/>
  10 7 4 6 8 10 11 <br/>
  7  - 10 = -3 <br/>
  4  - 7  = -3 <br/>
  **6  - 4  =  2 <br/>
  8  - 6  =  2 <br/>
  10 - 8  =  2**   
  11 - 10 =  1 <br/>
 
  OUTPUT: 4

> Constraints Analysis: 1sec = 10^8 operations



> Intution: We need to loop over the array and fins Answer<br/><br/>
**STEP 1:** 
While iterating in the array we need to maintain the following variables,
  *   ***PREVIOUS COMMON DIFFERENCE*** : To compare it with current common difference(array[i]-array[i-1])
  *   ***CURRENT ARITHMETIC SUBARRAY*** : It denotes the arithmetic subarray length.
  *   ***MAXIMUM ARITHMETIC SUBARRAY LENGTH (ANSWER)*** : It deontes the maximum arithmetic subarray length till array[i] <br/><br/>

> **STEP 2 :** 
While iterating there will be two cases:
*   previous common difference == array[i]-array[i-1]
 1.   increase current arithmetic subarray length (CURR) by 1
 2.   ANSWER = max(ANS,CURR)<br/><br/>
*   previous common difference != array[i]-array[i-1]
 1.   previous common difference = array[i]-array[i-1]
 2.   current arithmetic subarray length(CURR) = 2

> **STEP 3 :** 
After the loop ends output the answer.


**CODE in C++:**

```
#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    int arr[number];
    for(int i=0;i<number;i++){
        cin >> arr[i];
    }
    int ans=2;
    int difference=arr[1]-arr[0];
    int j=2,currArithmeticSubLen=2;
    
    while(j<number){
        if(arr[j]-arr[j-1]==difference){
            currArithmeticSubLen++;
        }
        else{
            difference=arr[j]-arr[j-1];
            currArithmeticSubLen=2;
        }
        ans=max(ans,currArithmeticSubLen);
        j++;
    }
    cout << ans << endl;
    return 0;
}
```
**Output:**

> number= 7

> 10 7 4 6 8 10 11

> Answer = 4

**Time Complexity :**  O(N) for the first for loop to take input and another O(N) for the while loop so total O(2N) or we can simply say it O(N)

**Space Complexity :** There is no such extra space is need to calculate the answer so space complexity will be O(1) [constant]

<br/>


Approach is similar in java, c or other languages...

Happy Coding!!!

<br/><br/>
contributor: Priyanka Kothari
DSA: Batch 1