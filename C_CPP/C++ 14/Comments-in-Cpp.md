# Comments in C++

Comments are statements generally which are not executed by the compiler. It is written for the user to understand the purpose of 
the program or the source code written by the programmers.
Also written to provide information about the variables, methods, class. 

There are 2 types of comments in C++:
- Single Line Comments
- Multi Line Comments

<div align="center">
  <img src = "https://user-images.githubusercontent.com/76544476/137767962-fff80713-3416-4699-b95c-c025b420dc2e.png" width="300" height="200">
  
  Source: [GeeksForGeeks](https://www.geeksforgeeks.org/comments-in-c-c/)
  </div>
  

## Single Line Comment

A single line comment starts with "//" _i.e.,_ a double slash.

### Example Program
```Cpp
#include <iostream>
using namespace std;
int main()
{
    int j; //j is declared.
    cin>>j; // reads input for j from user.
    cout<<j; //displays the value of j
}
```
### Output:
> 5  
> 5


## Multi Line Comment

A multi line comment is used in C++ when there are many lines of code or a huge explaination or a huge question of a program. It starts and ends 
like "/\*....\*/" _i.e.,_ a slash and a asterisk.

### Example Program
```Cpp
/* This program is used to demonstrate the use of multi line comment.*/
#include <iostream>
using namespace std;
int main()
{
    int j;
    cin>>j; 
    cout<<j; 
    /* j is declared, then input of j is read and then it's value is displayed.*/
}
```

### Output:
> 10  
> 10
