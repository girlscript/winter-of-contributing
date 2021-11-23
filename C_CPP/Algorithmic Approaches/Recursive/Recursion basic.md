# Basic Recursion Questions (Part I)



## Find the first and last occurence of a number in an array

```CPP

#include<iostream>
using namespace std;

int firstocc(int arr[], int n , int i , int key){
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstocc(arr,n , i+1, key);
}

int lastocc(int arr[], int n , int i , int key){
    int restarray=lastocc(arr,n , i+1, key);
    if(restarray==-1){
    return restarray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main()
{
    int arr[]={4,2,1,2,5,2,7};
    cout<<firstocc(arr,7,0,7)<<endl;
    cout<<lastocc(arr,7, 0 , 7)<<endl;
    return (0);
}
```
- In this question we will find the first and last occurence of a number as you can see i have given a array of size 7 and want to know the first and last occurence of 7. since , 7 is present in the array at 6th position and 6th position is the first also the last occurence of 7. So, We will get 6 as the output.

#### OUTPUT
```CPP
6 
```

## Count no. of digits in number

```CPP
#include<iostream>
using namespace std;

int countdigit(long long n)
{
    int count=0;

    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}

int main()
{
    long long n ;
    cin>>n;
    cout<<countdigit(n);
    return (0);
}
```

- In this question we will count the number of digits in a number. We have taken n as input suppose we have n = 234. So, number of digits present in 234 are 3, Therefore , Program will give 3 as output.

#### INPUT
```CPP
234
```
#### OUTPUT
```CPP
3
```
## Find the factorial of a number

```CPP
#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int smalloutput=factorial(n-1);
    return n*smalloutput;
}

int main(){
    int n;
    cin>>n;
    int output=factorial(n);
    cout<<output<<endl;
    return(0);
}

```

- In this question we will calculate the factorial of a number , We have taken n as input , Suppose n = 5 then it will give 120 as input.

#### INPUT
```CPP
5
```
#### OUTPUT
```CPP
120
```
## Find the nth Fibonnaci Number

```CPP
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0)
    {
        return (0);
    }
    if(n==1)
    {
        return 1;
    }
    int smalloutput1=fib(n-1);
    int smalloutput2=fib(n-2);
    return smalloutput1 + smalloutput2;
}

int main()
{
    cout<<fib(3)<<endl;
    return(0);
}


```
- In this question we will find the nth fibonacci number from the Fibonacci series.In this question we have taken 3 as input so we will get 2 as output because fibonacci series is 0 1 1 2 3....
and 2 is the 3rd element in the fibonacci series.

#### INPUT
```CPP
3
```

#### OUTPUT
```CPP
2
```
## Generate all substring of a string

```CPP

#include<iostream>
#include<string>

using namespace std;

void subseq(string s , string ans)
{
    if(s.length()==0){
    cout<<ans<<endl;
    return ;
    }
    char ch= s[0];
    string ros=s.substr(1);

    subseq(ros,ans);
    subseq(ros,ans+ch);
}

int main()
{
    subseq("ABC"," ");
    return(0);
}

```

- In this question we will find substrings of a given string
### OUTPUT
```CPP
ABC

 C

 B

 BC

 A

 AC

 AB

 ABC
```
