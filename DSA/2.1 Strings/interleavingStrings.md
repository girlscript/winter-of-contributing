# Interleaving Strings

This is one of the most popular question.
> *The question is that, we are given three strings say a,b and c. We should check whether third string(c) is formed by interleaving first(a) and second(b) strings.*


- Let's learn in detail what interleaving is.
- If a string is formed by interleaving 2 strings, it means the string has all the characters of first and second strings and also their order is preserved.
- One such example is-
> A = "aab" , B = "bcb" , C = "ababcb". Here, C[0] comes from 1st letter of A, C[1] comes from 1st letter of B; C[2],C[3] comes from 2nd and 3rd letters of A; C[4],C[5] comes from 2nd and 3rd letters of B.

# Naive Solution
One naive way of solving this is through recursion. 
## Intution
- The C string is not formed by interleaving, if length of C is not equal to length of A + length of B.
- A character from must have come from either A or B.
- We can traverse C either from left to right or right to left. Let's consider traversal from right to left.
- We keep checking if C[i] is either equal to A[j] or B[k](for some i,j,k) but not both.
- If C[i] is equal to both A[j] and B[k] ;it implies ith letter could have come from either A or B. In this case, both scenarios must be considered.
- If C[i] is not equal to any of A[j] or B[k] , we could conclude C is not formed by interleaving A and B.

## Algorithm
Let's design an algorithm for interleaving substrings using recursion. 
- I am passing 6 parameters to recursive call(InterleavingString), A,B,C strings; i,j,k represent indices which should be checked.( i is linked to C, j->A, k->B)

1. if len(C) is not equal to len(A)+len(B) ,lets just return false.
2. if i,j,k all are -1. We completed checking all characters, since it didn't terminate till now, C is a interleaved string .Hence, return true.
3. Else, we check if C[i] == A[j] and A[j] != B[k] ,then we make recursive call InterleavingString(A,B,C,i-1,j-1,k).
4. Else, we check if C[i] == B[k] and A[j] != B[k] ,then we call
InterleavingString(A,B,C,i-1,j,k-1).
5. If C[i] == B[k] == A[j] ,then we should consider both scenarios :
- assuming ith character might have come from A, we call InterleavingString(A,B,C,i-1,j-1,k).
- assuming ith character might have come from B, we call InterleavingString(A,B,C,i-1,j,k-1).\
We OR the results obtained in both cases and return that result.

OK! Let's Code it up!!!
```
#include<iostream>
#include<string>
using namespace std;

bool InterleavingString(string A,string B,string C,int i,int j,int k)
{
    if(i != -1 && C.length() != B.length()+A.length())
        return false;
    if(i==-1 && j == -1 && k == -1)
        return true;
    if(C[i] == A[j] && A[j] != B[k])
        return InterleavingString(A,B,C,i-1,j-1,k);
    if(C[i] == B[k] && A[j] != B[k])
        return InterleavingString(A,B,C,i-1,j,k-1);
    if(C[i] == A[j] && A[j] == B[k])
        return InterleavingString(A,B,C,i-1,j-1,k) || InterleavingString(A,B,C,i-1,j,k-1);
    else
        return false;
}

int main()
{
    string A = "aab",B = "bcb",C = "ababcb";
    if(InterleavingString(A,B,C,5,2,2) == 0)
       cout<< "C is not interleaved string";
    else
       cout<<"C is a interleaved string";
    return 0;

}
```

The output of this code is :
```
C is a interleaved string
```

### Time Complexity
- Considering worst case scenario, where we need to make two recursive calls.
    T(m,n) = T(m-1,n)+T(m,n-1)+c 
This time complexity is similar to fibonacci and can be treated as exponential.
- Thus, T(n) = O(2^(m+n))



## Dynamic Programming
Though the recursion works, we can notice that solution to subproblems is repeatedly being computed, it is rather better to store such results in a matrix; and use it when needed without the need for computing it again. 

That being decided, how do we keep track of previous values?
- One solution for it, is to use indices of grid as size being considered. 

In dp, we check the strings froom left to right.

Here, we keep adding one character from A or B, and check if previously obtained interleaved string + the one character being considered forms a valid prefix of C.

To implement this method, we consider a 2D array(dp) of (m+1)*(n+1) size.

In this array dp[j][k] implies if it is possible to obtain a substring of length (j+k+2) which is a prefix of C by some interleaving of prefixes of strings A and B having lengths (j+1) and (k+1) respectively.

For example consider  A="aab", B= "bcb", C="ababcb", we create dp of 4x4 dimensions as shown:

||""(0)|b(1)|c(2)|b(3)|
|:---|:---|:---|:---|:---|
|""(0)|0|0|0|0|
|a(1)|0|0|0|0|
|a(2)|0|0|0|0|
|b(3)|0|0|0|0|

I had created am array and initialised all values to zeroes. I had put the indices in braces. In this array, dp[2][1] indicates whether "bc" , "a" forms a valid prefix of length 3 in C.\
If dp[3][3]=1 C is an interleaving string else it isn't.


### Algorithm

1. First create matrix of (m+1)*(n+1) initialise it with zeroes. Now, mark dp[0][0] as 1, as they denote empty strings. (I am considering j and k as loop variables)
2. We shall fill up 0th row ad 0th column as follows:
   - For filling 0th row, just compare 0 to m-1 indices of A ,with corresponding characters in C. 
        - If they match, mark dp[0][j] = dp[0][j-1]
    - For filling 0th column, compare 0 to n-1 indices of B with corresponding characters in C.
         - If they match, mark dp[k][0] = dp[k-1][0]
After following 2nd step, we'd have following table for the example that we considered above.


||""(0)|b(1)|c(2)|b(3)|
|:---|:---|:---|:---|:---|
|""(0)|1|0|0|0|
|a(1)|1|0|0|0|
|a(2)|0|0|0|0|
|b(3)|0|0|0|0|

3. Now, we run outer loop (which has j as loop variable) from 1 to n+1. And inner loop (k) from 1 to m+1. To fill dp[j][k], we consider 3 scenarios just like we did in recursion:
    - If A[j-1] == C[j+k-1] && A[j-1] != B[k-1], \
    dp[ j ][ k ] = dp[ j-1 ][ k ]

    - Else if  C[ j+k-1 ] == B[ k-1 ] && A[ j-1 ] != B[ k-1 ] \
     dp[ j ][ k ] = dp[ j ][ k-1 ] 

    - Else if C[ j+k-1 ] == B[ k-1 ] && A[ j-1 ] == B[ k-1 ] \
    dp[ j ][ k ] = dp[ j ][ k-1 ] || dp[ j-1 ][ k ]

After performing this step, we'd end up with following matrix for the considered example:

ababcb
||""(0)|b(1)|c(2)|b(3)|
|:---|:---|:---|:---|:---|
|""(0)|1|0|0|0|
|a(1)|1|1|0|0|
|a(2)|0|1|0|0|
|b(3)|0|1|1|1|

### Code in c++
```
#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool IsInterleavedDP(string A, string B, string C)
{
    vector<vector<int>> dp(A.length()+1);
    for(int i=0 ; i<A.length()+1;i++)
        dp[i] = vector<int>(B.length()+1,0); // Initialised dp of m+1 *n+1 dimensions
    dp[0][0] = 1;
    for(int j = 1;j < A.length()+1;j++)      //Initialising 0th column
       if(A[j-1] == C[j-1])
          dp[j][0] = dp[j-1][0];
    for(int k = 1;k < B.length()+1;k++)      //Initialising 0th column
       if(B[k-1] == C[k-1])
          dp[0][k] = dp[0][k-1];
    for(int j =1;j <A.length()+1;j++)        //Filling up the matrix
    {
        for(int k =1; k< B.length()+1;k++)
        {
            if(A[j-1] == C[j+k-1] && A[j-1] != B[k-1])
                dp[j][k] = dp[j-1][k];
            else if(B[k-1] == C[j+k-1])
            {
                if( A[j-1] != B[k-1])
                    dp[j][k] = dp[j][k-1];
                else 
                    dp[j][k] = dp[j-1][k] || dp[j][k-1];
            }
        }
    }

    return dp[A.length()][B.length()];
}

int main()
{
    string A= "aab",B="bcb",C="ababcb";
    if(IsInterleavedDP(A,B,C) == 0)
       cout<< "C is not interleaved string";
    else
       cout<<"C is a interleaved string";
}
```

#### Time Complexity
Time Complexity is O(m*n) because the inner for loop runs n times and outer for loop runs m times.
Space Complexity is also O(m*n) because of the matrix that is being considered.

Hope it helped:) !