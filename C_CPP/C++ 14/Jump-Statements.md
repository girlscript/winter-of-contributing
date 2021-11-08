# Jump Statements in C++

Jump statements in C++ are used to handle the program flow when some circumstances are met. It is used to modify the conduct of any conditional and iterative statements.
It helps to continue or terminate the function and also to end the functions.

There are 4 types of Jump Statements in C++:
- Break
- Continue
- Goto
- Return

## Break Statement

Break Statement in C++ is used to break a loop or a switch case statement. It breaks the current loop flow of a program in a given condition. If a break statement is used in a 
inner loop, then the inner loop is breaked and skipped.

### Program 1
```Cpp
#include <iostream>
using namespace std;
int main()
{
    int j;
    for(j=0;j<10;j++)
    {
        if(j==8)
        {
            break;
        }
        cout<<j<<" ";
    }
}

```
### Output:
> 0 1 2 3 4 5 6 7 

In this, once j=8 becomes true and encounters break statement, the for loop itself is skipped and 9 is not printed.

### Program 2
```Cpp
#include <iostream>
using namespace std;
int main()
{
    int j,i;
    for(j=0;j<=2;j++) // outer loop
    {
        for(i=0;i<=2;i++) // inner loop 
        {
        if(j==1&&i==1)
        {
            break;
        }
        cout<<j<<" "<<i<<"\n";
        } // end of inner loop
    }  // end of outer loop
}


```
### Output:
> 0 0 <br>
> 0 1 <br>
> 0 2 <br>
> 1 0 <br>
> 2 0 <br>
> 2 1 <br>
> 2 2 <br>

In this only the inner for loop gets breaked and skipped. 

## Continue Statement

Continue statement in C++ is used to break one iteration and continue with the next iterations of the loop. It skips the remaining code and 
continues the current flow of program.

### Program 1

```Cpp
#include <iostream>
using namespace std;
int main()
{
    int j;
    for(j=0;j<10;j++)
    {
        if(j==8)
        {
            continue;
        }
        cout<<j<<" ";
    }
}
```

### Output:

> 0 1 2 3 4 5 6 7 9 

In this that one iteration is skipped and next iteration of the loop takes place.


### Program 2

```Cpp
#include <iostream>
using namespace std;
int main()
{
    int j,i;
    for(j=0;j<=2;j++) // Outer loop
    {
        for(i=0;i<=2;i++) // Inner loop
        {
        if(j==1&&i==1)
        {
            continue;
        }
        cout<<j<<" "<<i<<"\n";
        }
    }
}

```

### Output:
> 0 0
> 0 1
> 0 2
> 1 0
> 1 2
> 2 0
> 2 1
> 2 2

In this, only when i=j=1 is skipped and the next iteration of the inner loop takes place.

## Goto Statement

Goto statement is used in C++ to shift control to another part of the program, by unconditionally jumping to some particular label.It is mainly used in extreme 
nested loops and switch cases. 

### Program 
```Cpp
#include <iostream>
using namespace std;

int main()
{
    float n,avg,sum = 0.0;
    int i,a;

    cout<<"Enter the number of inputs: ";
    cin>>a;

    for(i=1;i<=a;i++)
    {
        cout<<"Enter n"<<i<<": ";
        cin>>n;
        
        if(n<0.0)
        {
           // Control of the program move to welcome:
            goto welcome;
        } 
        sum+=n;
    }
welcome:
    avg=sum/(i-1);
    cout<<"\nAverage = "<<avg;
    return 0;
}
```
### Output:

> Enter the number of inputs: 3  
> Enter n1: 2  
> Enter n2: -1  
> 
> Average = 2

In this when the input entered is less than 0.0, the control goes to the welcome lable and gets executed and skips from reading the 3rd input itself.

## Return Statement

Return statement is used in C++ to return the execution flow of the function from the place it is called. When a return statement is encountered the program flow stops immediately and returns the control from where it is called. A void function returns no value but a non-void function returns value(s).

### Program
```Cpp
#include <iostream>
using namespace std;

int Compute(int a,int b)
{
    int add;
    add=a+b;
    return add;
}
  

int main()
{
    int result=Compute(3,2);
    cout<<result;
    return 0;
}
```

### Output:
> 5

In this, add value is returned when the function is called and it gets stored in the result. 
