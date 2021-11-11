# How to Overcome from TLE Error in competitive programming?


## What is **TLE**?

TLE == "Time Limit Exceed"

Many programmers always argue that the problems in Competitive Programming always end up with TLE(Time Limit Exceed). The main problem with this error is that it will not allow you to know that your solution would reach to correct solution or not! 


The main problem in TLE is, you will not be able to know whether your code is generating the right output or not. and when output is right and that time code gives TLE ,the online judge has to stop your submission from running after a particular time period.

Because they first check your compiler error (if any) then runtime error (if any), then TLE (if any) and at last right or wrong answer your code is generating.

## Why **TLE** comes?

To understand Time Limit Exceeded(TLE), understanding how the online judge works will help. The online judge allocates resources like memory and CPU for evaluating every submission. 

There might be various reasons behind it that your **TLE** is coming. Few points are :

### Online Judge :
An online judge ( Problem setter the problem) gives TLE on a problem because there are some restrictions in each input with a specific time limit. If your program exceeds that time limit you will get TLE.

### Your program is too slow :
The most common reason that you would get a TLE is because your program is too slow.
Read the bounds in the input carefully before writing your program, and try to figure out which inputs will cause your program to run the slowest.



To add fast IO in your code you have to write the following lines in main() in your code in **C/C++**:

```
ios_base::sync_with_stdio(false); 
    cin.tie(NULL) ;
```


### Server Configuration:
Sometimes, the server takes time to run your code. So, it might depend on their CPU, OS, etc. For this reason, the different platform (different servers like practice, CodeChef , HackerEarth etc..)gives you TLE in different cases.
By estimating the maximum value of N (N is the total number of instructions of your whole code), you can roughly estimate the TLE would occur or not in 1 sec. 

```
MAX value of N                       Time complexity
   10^8                              O(N) Border case
   10^7                     O(N) Might be accepted
   10^6                              O(N) Perfect
   10^5                              O(N * logN)
   10^4                              O(N ^ 2)
   10^2                              O(N ^ 3)
   10^9                              O(logN) or Sqrt(N)
```

**Note** a loop value (N) cannot be greater than 10^9 if N is an integer. Because an integer can take up to 10^9.

So after analyzing this Table you can estimate your Time complexity roughly and try to make your code within the upper bound limit.
