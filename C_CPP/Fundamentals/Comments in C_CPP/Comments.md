# COMMENTS IN C/CPP

## What are comments?

Comments are lines of code which are ignored by the compiler.
Comments are of 2 types:
- Single Line Comment
- Multi Line Comment

### SINGLE LINE COMMENT

Single line comments are used to apply comment to one line only. It is denoted by `// text`. <br>
**SYNTAX:**
```
    // Single Line Comment
```
**EXAMPLE:**
```CPP
    //Program to print 'Hello World'
    #include<bits/stdc++.h> // Header File
    using namespace std;

    int main()
    {
      cout<<"Hello World"; // Print statement
      return 0;
    }
```
**OUTPUT:**
```
    Hello World
```

**EXPLANATION:**
If we take a look at this particular program we can see that the comment lines are used to show the function of certain lines. It is also used to define what the particular code does. As we can see in the above code, the single line comments are used a number of times.

### MULTI LINE COMMENT

Multi line comments are used to apply comment to more than one line only. It is denoted by ` /* text */`. <br>
**SYNTAX:**
```
    /* Multi Line Comment
    .
    .
    .
    Comment ends here */
```
**EXAMPLE:**
```CPP
    /*Program to print 'Hello World'.
    In this particular program only a single line of output is printed. */
    #include<bits/stdc++.h> 
    using namespace std;

    int main()
    {
      cout<<"Hello World"; 
      return 0;
    }
```
**OUTPUT:**
```
    Hello World
```

**EXPLANATION:**
We can say that with the help of multi line comments we can provide a clear description of what the program does.

Let us now look at a C code having combination of single and multi line comment:
```C
  /* Program to find the sum of 2 variables.
    The value of the variables are declared in the main function itself.
  */
  #include<stdio.h>
  #include<stdlib.h>

  int main()
  {
    int a=9, b=1; // variable whose sum is to be printed
    printf("%d", a+b); // sum of the variables
    return 0;
  }
```
**OUTPUT:**
```
    10
```

### ADVANTAGES:
- They are use to define the work of a particular variable or function.
- They help in documentation for future use.
- A person reading a long code will be confused if comments are not used.
- With the help of comments we can describe the algorithm of the program.

Using too much unnecessary and, long comments can also make our code confusing and messy. So, it is better if the comments are short and precise.
