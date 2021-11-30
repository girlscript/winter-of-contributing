# TLE - Time Limit Exceeded Error

In CP, we face this error when the code submitted takes more time to execute than accepted. There are few assumptions made by C++ programmer which is not true.

1. Header File

 ``` c++
  #include<bits/stdc++.h>
  using namespace std;

```

normally you find this on the top of the code of c++ coders. <bits/stdc++.h> is a very large header file .
It has all the headers that one could need for CP in it but also have many other headers that take more compilation time.
This would not effect Time execution online but it should be avoided if we want a very efficient solution.

2. The best method to avoid TLE is to work more on bits than on operators or prebuild functions
 
like:

**for swapping two numbers**
```c++

//for swapping two numbers
a^=b
b^=a
a^=b

```
 **for determing if a number is even or odd**
```c++

// for determining if a number is even or odd
if(number & 1)
  cout<<"number is odd";
else
  cout<<"number is even";

```

**for multiplication a number with 2^n**
```c++

//for multiplication of a number with 2^n
number<<n;

```
**for division a number with 2^n**
```c++

//for division a number with 2^n
number>>n;

```

**check if a number is a power of 2**

```c++

bool isPowerOf2( int n )
{
  return ( n && (!(n & ( n-1 ) ) );
  }

```

3. Input Output 

In C++, scanf and printf work faster than cin and cout this happens due to synchronization.
So if we don't want to use scanf and printf in C++. we should turn off the synchronization.

```c++

ios_base :: sync_with_stdio(false);

```
4. Time Space Trade
 If we want less time , we can increase the space it might help in reducing the space similarly,
 if we wish to use less space than time might increase.
 
 These are some observations and tricks to save yourself from TLE error.
