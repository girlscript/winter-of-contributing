# Jump Statements in C++

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







