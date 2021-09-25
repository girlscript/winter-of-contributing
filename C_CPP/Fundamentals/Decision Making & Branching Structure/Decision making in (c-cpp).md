# **Decision making in c/c++**

C conditional statements allow you to make a decision, based upon the result of some condition,If the condition is true a block of statement is executed. These statements are called **Decision Making Statements or Conditional Statements**.
Decision-making statements in programming languages decide the direction of the flow of program execution. 

Decision-making statements available in C or C++
are:

1)if statement

2)if..else statements

3)nested if statements

4)if-else-if ladder

5)switch statements

6)Jump Statements:

  (i)break
  (ii)continue
  (iii)goto
  (iv)return

  ## If statement:
  It is the simplest decision making statement and used to decide whether a block of statement will be executed or not.
  If some condition is true then the block of statements will be executed otherwise not.

  **Syntax:**

    if(condition) 
    {
      // Statements to execute if condition is true
    }

  -->curly braces are used for multiple statements to execute if the condition is true. We can omit braces if only one statement is to be taken into if statement
  
  -->The condition after evaluation will be either true or false.C programming languages assumes every *non-null values to be true* and *null values to be false*.

 for e.g.

    if(condition)
    statement1;
    statement2;
    // Here if the condition is true, if block will consider only 
    //statement1 to be inside its block.

  //C++ program to illustrate if statement
  
  ```cpp
  
    #include<iostream>
    using namespace std;
	int main()
	{
		int i = 5;
		if (i > 15)
		  cout<<"I am greater than 15";
		cout<<"I am Not in if block";
    return 0;
	}  
  ```
  **Output:** I am Not in if block

## if-else in C/C++

  With if statement we can use the else statement with it to execute a block of code when the condition is false.

**Syntax:**

    if (condition)
    {
        // Executes this block if condition is true  
    }
    else
    {
        // Executes this block if condition is false
    }

  //C++ program to illustrate if-else statement
  
  ```cpp
    #include<iostream>
    using namespace std;
	int main()
	{
		int i = 5;
		if (i > 15)
		  cout<<"I am inside if block";
		else 
    cout<<"I am inside else block";
	}
```
  **Output:** I am inside else block

# nested-if in C/C++

Nested if statement means placing one if or else if statement inside another if or else if statement(s).

**Syntax:**

    if (condition1) 
    {
        // Executes when condition1 is true
        if (condition2) 
        {
          // Executes when condition2 is true
        }
    }
    
  //C++ program to illustrate nested-if statements
  
  ```cpp
    #include<iostream>
    using namespace std;
	int main()
	{
		int i = 5;
		if (i < 15)
		{
            cout<<"I am inside outer if block(<15)";
            if(i>0)
              cout<<" I am inside inner if block(>0)";
          }
		else 
          cout<<"I am inside outer else block";
	}
```
  **Output:** I am inside outer if block(<15) I am inside inner if block(>0)
  
# if-else-if ladder in C/C++

The C if statements are executed from the top down. From multiple if conditions in if-else-if ladder,as soon as one of the conditions controling the if is true, the statement associated with that if is executed, and the rest of the C else-if ladder is bypassed. If none of the conditions are true, then the final else statement will be executed. 

**Syntax:**

    if (condition 1)
      statement-1;
    else if (condition 2)
      statement-2;
    else
      statement-3;

  //C program to illustrate if-else-if ladder
  
  ```cpp
    #include <stdio.h>
    int main() {
    int i = 0;
    if (i > 0)
        printf("number is positive");
    else if(i <0)
        printf("number is negative");
    else
        printf("number is zero");
      return 0;
    }  
```

**Output:** number is zero
# Jump Statements in C/C++

These statements are used in C or C++ for the unconditional flow of control throughout the functions in a program.There are 4 types of jump statements:
## 1)break;

break statement is used to terminate the loop.Control goes to the first statement after the loop.

**Syntax:**

     break;

//C program to illustrate break statement

```cpp
    #include<stdio.h>
    int main()
    {
      int a[4]={1,2,3,4};
      int i,x=3;
      for(i=0;i<4;i++)
      if(a[i]==x)
        {
          cout<<"element found at ",i+1," position";
          break;
        }
        return 0;
    }
```
  **Output:** element found at 3 position
  
Here,we don't know the number of iterations after which loop has to be terminated so we have added the break statement if the element is found.
## 2)continue
    
The continue statement is opposite to that of the break statement, instead of terminating the loop, it forces to execute the next iteration of the loop. The statements after the continue statement are skipped and the next iteration is executed.

**Syntax:**

    continue;

//C program to illustrate continue statement
//printing numbers from 1 to 10 skipping 5

```cpp
    #include <stdio.h>
    int main() {
    // loop from 1 to 10
    for (int i = 1; i <= 10; i++) {
 
        // If i=5 then continue without printing
        if (i == 5)
            continue;
        else
            // otherwise print the value of i
            printf("%d ", i);
    }
     return 0;
    }
```

  **Output:** 1 2 3 4 6 7 8 9 10
  
## 3)goto statement

The goto statements are used to jump from one point to another within a function. These are referred as unconditional jump statements

**Syntax1:**

    goto label;
    .
    .
    label:

**Syntax2:**

    label:
    .
    .
    goto label;

-->The goto statement tells the compiler jump to the destination statement which is written inside label. 

//C program to illustrate goto statement

```cpp
    #include<stdio.h>
    int main()
    {
    int n = 1;
    label: printf("%d ",n);
              n++;
      if (n <= 10)
        goto label;
        return 0;
    }
```
**Output:** 1 2 3 4 5 6 7 8 9 10

## 4)return statement

return statement return the flow of the program to the function from where it is called.As soon as the return statement is executed, the flow of the program stops immediately and return the control from where it was called.The return statement may or may not return anything for a void function, but for a non-void function, it must return a value.

**Syntax:** return (expression);

//C program to illustrate return statement

```cpp
    #include<stdio.h>
    int sum(int a,int b)
    {
      return a+b;
    }
    int main()
    {
      int a=2,b=5;
      printf("sum=%d",sum(a,b));
      return 0;
    }
```
**Output:** sum=7

***So these are the conditional statements that are extensively used in C/C++ programming.***
