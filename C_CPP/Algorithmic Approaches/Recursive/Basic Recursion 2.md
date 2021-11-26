# Basic Recursion Questions (Part II)
 
## Print numbers till n in increasing and decreasing order


 ```CPP

#include<iostream>
using namespace std;

void dec(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<n<<" ";
    dec(n-1);
}

void inc(int n){
    if(n==1)
    {
        cout<<"1"<<" ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
    
}

int main()
{
    int n ;
    cin>>n;
    dec(n);
    cout<<endl;
    inc(n);
    return(0);
}
 
 ```
 - In this question We will print numbers in increasing and decreasing order, We have taken n as input. Suppose n=5 so the finally output will be 1 2 3 4 5 for increasing order and 5 4 3 2 1 for decreasing order.

#### Input

 ```CPP
 5
```
```CPP

 1 2 3 4 5

 5 4 3 2 1
 ```

 ## Move all x to the end of the string


 ```CPP
 
#include<iostream>
using namespace std;

string moveallX(string s)
{
    if(s.length()==0)
    return "";

    char ch=s[0];
    string ans=moveallX(s.substr(1));

    if(ch=='X'){
        return ans+ch;
    }
    return ch+ans;
}

int main(){

    cout<<moveallX("abscdaXXXedddiddaaaXXXXXXddd");
    return(0);
}
```

#### INPUT
```CPP
abscdXXXXedddiddaaaXXXXXXXddd
```
#### OUTPUT
```CPP
absdaedddiddaaadddXXXXXXXXXXX
```

## Replace the pi with 3.14 in string

```CPP
#include<iostream>
using namespace std;

void replacepi(string s)
{
    if(s.length()==0)
    return;
    
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacepi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacepi(s.substr(1));
    }
}

int main()
{
    
    replacepi("pippxxppiixipi");
    return(0);
}
```
#### INPUT
```CPP
pippxxppiixipi
```

#### OUTPUT
```CPP
3.14ppxxp3.14ixi3.14

```


## Find power of x to y

```CPP
#include <bits/stdc++.h>
using namespace std;

float power(float x, int y)
{
    float temp;
    if(y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
    {
        if(y > 0)
            return x * temp * temp;
        else
            return (temp * temp) / x;
    }
}

int main()
{
    float x ;
    int y ;
    cin>>x>>y;
    cout << power(x, y);
    return 0;
}
```

- In this question we will take x and y as input.suppose x=2 and y=5, So the final output will be 32.
```CPP

#### INPUT
```CPP
2 5
```
#### OUTPUT

```CPP
32
```

## Remove all duplicates from a string

```CPP

#include<iostream>
using namespace std;

string removedup(string s)
{
    if(s.length()==0)
    return " ";

    char ch=s[0];
    string ans=removedup(s.substr(1));
    if(ch==ans[0])
    return ans;

    else
    return ch +ans;
}

int main()
{
    cout<<removedup("aaabbccddeeeaaff");
    return(0);
}

```
- In this question we will remove all duplicate characters from the string.
```CPP

#### INPUT
```CPP
aaabbccddeeeaaff
```

#### OUTPUT
```CPP
abcdeaf
```
## Reverse a string using Recursion

```CPP

#include<iostream>
#include<string>
using namespace std;

void reverse(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main()
{
    reverse("Akrati");
    return(0);
}


```

- In this question we will reverse a string. We have given Akrati as input so we will get itarkA as output.
#### INPUT

```CPP
Akrati
```

### OUTPUT
```CPP
itarkA
```
## We will check whether the array is sorted or not

```CPP
#include<iostream>
using namespace std;

bool is_sorted(int a[], int size)
{
    if(size==0 || size==1)
    {
        return true;
    }
    if(a[0]>a[1])
    {
        return false;
    }
    bool issmallsorted=is_sorted(a+1,size-1);
    return issmallsorted;
}
int main()
{
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<is_sorted(a,size)<<endl;
    return(0);
}

```
- In this question we will check whether array is sorted or not. If it is sorted then we will output 1 and if it is not sorted then we will output 0.

#### OUTPUT
```CPP
1
```
## Tower of Hanoi

```CPP

#include<iostream>
using namespace std;

void towerofhanoi(int n , char src, char dest , char helper){
    if(n==0)
    {
        return;
    }
    towerofhanoi(n-1,src, helper , dest);
    cout<<"Move from "<<src<<" To "<<dest<<endl;
    towerofhanoi(n-1, helper, dest, src);
}

int main()
{
    towerofhanoi(3,'A','C','B');
    return(0);
}

```

- Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules: 

1. Only one disk can be moved at a time.
2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
3. No disk may be placed on top of a smaller disk.

#### OUTPUT
```CPP

Move from A To C

Move from A To B

Move from C To B

Move from A To C

Move from B To A

Move from B To C

Move from A To C
```
