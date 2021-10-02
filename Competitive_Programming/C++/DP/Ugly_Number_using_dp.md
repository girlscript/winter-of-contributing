# **Ugly numbers Using Dynamic programming**
## What is dynamic programming?
Dynamic programming is an optimization method in which we break the problem into simpler sub problems and then solve them. It is an optimization method for recursive algorithm. 

### **When   to use dynamic Programming?**
When there is a recursive solution which has repeated calls for the same values, then we can optimize it using dynamic programming. We store the repeated values and use it if there is a need.

Lets take example of **Fibonacci Numbers** .

Here , we call the recursive function for fibonacci number F(n) .

First we see the recursion tree of fibonacci number .

![alt text](https://holycoders.com/content/images/wordpress/2020/04/fibonacci-sequence-recursion-tree.png)

In this image, we will find the fibonacci of number n ,i.e,F(n). So we can see that F(n-3) is called so many times. So to avoid  this we use Dynamic programming. Thats why it is called an optimization over recursion.

Now we will see the diffrence between the code of fibonacci number using recursion and using dynamic programming.

### Recursive Solution :

```c++
// function call for fibonacci number
int fibo( int n)
{
    if(n<=1)
    return n;
    return fibo(n-1)+fibo(n-2);
}
```
### Using DP :
```c++
// function call for fibonacci number
int fibo(int n)
{
    //Declaring an array dp
    int dp[n+1];
    dp[0]=0; //storing 0 in zeroth index
    dp[1]=1; // storing 1 in first index
    for(int i=2;i<=n:i++)
    {
    dp[i]=dp[i-1]+dp[i-2];//using the stored value
    }
return dp[n]; //returning the array
}
```


Now coming towards the main part ,i.e , **Ugly Number Problem** using Dynamic Programming.
## __*Ugly Numbers*__
Ugly Numbers are the numbers whose **prime factors** are only ***2 , 3 and 5.***

Let N=10 , so first 10 ugly numbers are **1, 2, 3, 4, 5, 6, 8, 9, 10, 12 .** Conventionally 1 is included.

If N = 9 , the **9th** ugly number is ***10*** .

## Code of Ugly Number in c++.
```c++
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

class Solution{
public:	
	
	//Function to get the nth ugly number
	ull getNthUglyNo(int n) {
	    ull dp[n+1];// declaring an array dp
	    dp[1]=1; // storing 1 at first index .By default first ugly number is 1.

	    ull p2=1; //pointer for 2
	    ull p3=1; //pointer for 3
	    ull p5=1;// pointer for 5
	    
	    for(int i=2;i<=n;i++)
	    {
            // candidates for next ugly number
	        ull ans2=2*dp[p2];
	        ull ans3=3*dp[p3];
	        ull ans5=5*dp[p5];
            //above three are candidates for next ugly number
	        
            //the minimum of above three candidates will be next ugly number
	        ull m=min(ans2,ans3);
	        m=min(m,ans5);
	        dp[i]=m;
	        
	        if(m==ans2) 
	        p2++;
	        if(m==ans3)
	        p3++;
	        if(m==ans5)
	        p5++;
	    }
	    return dp[n];
	}
};

// Driver Code Starts.

int main() { {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
```
### Input :
10

### Ouput:
12

