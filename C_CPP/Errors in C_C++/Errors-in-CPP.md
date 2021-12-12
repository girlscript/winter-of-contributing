# Errors in C++

We all might have faced different types of errors in our C or C++ programs. There are many types of errors such as:
- Syntax Errors
- Logical Errors
- Semantic Errors
- Run-Time Errors
- Linker Errors

Now let us have a close look to know what are these errors.

## Syntax Errors

When the rules of C++ syntaxes are disobeyed/violated, this kind of errors basically occurs. The compiler specifies us this kind of errors before compilation process. So, this error is also called as **compile-time errors**.
Syntax errors occurs when variables or statements are misspelled, when punctions are missed.

### Example:

```Cpp
#include <iostream>
using namespace std;

int main()
{
    cout<<"Example"
}

```
### Output Screenshot:

<img src = "https://user-images.githubusercontent.com/76544476/136778987-b64e6c94-9941-4c15-8749-68a5bbbec00e.png" width="500" height="250">

## Logical Errors

Even if the syntax and other things are correct, then also we may not be able to get the desired/correct output due to logical issues. This is nothing but called as logical errors. At times, we add a semicolon after the loop accidentally which is correct with the syntax but it creates a blank loop. In that case it won't show the wanted output.
Also, when we assign a value to the wrong variable, then it may cause a series of unexpected program errors. When 2 numbers are multiplied instead of adding may produce unwanted 
results.

### Example 1:

```Cpp
#include <iostream>
using namespace std;

int main()
{
    for(int i=0;i<3;i++);
    {
        cout<<"Hello";
    }
}

```
### Output:

> Hello 

In this we want to print "Hello" three times, but because we added semicolon to the end of the loop, it prints only once.

### Example 2:

```Cpp
#include <iostream>
using namespace std;
 
int main () 
{
  int a,b;
  float avg;
  a=20; b=10;
  avg= a + b / 2;		// it should be as (a + b) / 2
  cout<<"Average :"<<avg;
}

```

### Output:

> Average :25 

In this we want 15 as the output. But because of the missing brackets(which is a logic error), we won't get the desired output.

## Semantic Errors

This kind of error generally occurs when the code is correct with respect to syntax but has no meaning. For instance, grammatical errors, if any expression is written to the left side of assignment operator these may result in semantic errors.

### Example 1:

```Cpp
#include <iostream>
using namespace std;

int main()
{
    int a=1,b=2,ans;
    a+b=ans;
}

```

### Output Screenshot:

<img src = "https://user-images.githubusercontent.com/76544476/136785693-bd4c9dcc-7c05-44a3-ba68-529c80cb796f.png" width="800" height="250">  

It must be return as " ans= a+b; " to get the desired output of ans as 3.

### Example 2:

```Cpp
#include <iostream>
using namespace std;
 
int main () 
{
  int x;
  cin>>x;
  if(x>=10)   // It must be (x>10)
    cout<<x<<" is greater than 10";
}

```

### Output:

> 10  <br>
> 10 is greater than 10 

In this it must be x>10, only then the output will be as desired. Because, 10 greater than 10 has no meaning.

## Run-Time Errors

During execution, this kind of errors generally occurs. Compilation occurs successfully because this is not a compilation error. For instance, dividing a number by 0 results in run-time error.ALso an infinite loop, when a wrong value is entered(like when an integer is expected by user, but he/she enters a string) causes this kind of error.

### Example 1:

```Cpp
#include <iostream>
using namespace std;

int main()
{
    int a=2,b=0;
    cout<<a/b;
}

```

### Output Screenshot:

<img src = "https://user-images.githubusercontent.com/76544476/136786882-5705f085-99c6-406f-b340-39013e965324.png" width="700" height="150">  

The program crashes at the runtime.


### Example 2:

```Cpp
#include <iostream>
using namespace std;
 
int main () 
{
  int x;
  cin>>x;
  if(x>10)
    cout<<x<<" is greater than 10";
  else
    cout<<x<<" is lesser than 10";
}

```

### Output:

> eleven  <br>
> 0 is lesser than 10  

Integer input is expected, but a string is entered. So, we won't be able to get a desired output.

## Linker Errors

When the program is compiled successfully and trying to link up with the other object file along with the main object file, this kind of error occurs. So, execution is not generated. For instance, writing wrong function prototype causes this error.

### Example:

```Cpp
#include <iostream>
using namespace std;

int Main() // Here Main() is written in place of main()
{
    int x = 1;
    cout << x;
}

```

### Output Screenshot:

<img src = "https://user-images.githubusercontent.com/76544476/136788204-d9057d24-b68c-4eda-8330-65bd2a5a2897.png" width="700" height="150">

