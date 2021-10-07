# **goto** CONTROL INSTRUCTION
- goto is a keyword.
- goto statement is also known as jump statement.
- It is used for unconditional jump from one part of the program to another part. 
- It works only within the very same function body.
## How goto statement works?
- goto works by transferring the program control to a location in the program mentioned by a user-defined identifier *‘label’*.
- It can move control in forward as well as backward in the program.
- There’s no need of declaring them as variables.
## Flowchart
<img src="images/img1.png" width=350><br>
## Syntax
```c
  //Forward goto usage
          goto label;
          .
          .
          .
          label:
             .
             .
 ```
<br> OR <br>

```c
//Backward goto usage
          label:
              .
              .
          goto label;
```
## Program to illustrate the use of goto statements
```c
#include <stdio.h>
#include <conio.h>

int main()
{
    int S,a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a%2==0&&b%2==0||a%2!=0&&b%2!=0)
      {
         S=a+b;
         goto x;    //jump to x
      }
    else
      {
        S=a+b;
        goto y;    //jump to y
      }
    x:
        printf("Sum of given two numbers is %d (even)",S);
        return 0;
    y:
        printf("Sum of given two numbers is %d (odd)",S);
    getch();
}
```
- ## Input for this program 
```c
    5  6
```
- ## Output for this program
```
     Enter two numbers:5 6
     Sum of given two numbers is 11 (odd)
```
## Disadvantages
- It is not preferable to use as it makes the program complex and tangled. 
- It minimizes the efficiency of the program.
- In modern programming ,it is a bad programming practice.
- It’s **better to use break and continue statements instead of goto statements**.

          
