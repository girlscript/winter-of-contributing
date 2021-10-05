# Loops in C++
While programming, there will be several times when we need to perform the same task a number of times.
For example if we have to print C++ 5 times the code would be:
```cpp
//C++ program to print C++ 5 times
#include <bits/stdc++.h>
using namespace std;

 // Driver program 
int main()
{
  cout << "C++" << endl;
  cout << "C++" << endl;
  cout << "C++" << endl;
  cout << "C++" << endl;
  cout << "C++" << endl;
    
  return 0;
}
```
### Output:
```
C++
C++
C++
C++ 
C++
```
 <br> <br>
In that case, it is not ideal to write the same piece of code repeatedly, so C++ provides us with something called loops. Loop is a set of instructions that performs a task until a certain condition remains true. There are two types of loops: <br><br>
**Entry Controlled loops:** Here test condition is tested before entering the loop body. Example: for loop and while loop. <br><br>
**Exit Controlled Loops:** Here the test condition is tested at the end of loop body. This ensures that the loop body will execute atleast once regardless of the condition. Example: do while loop.<br><br>

## For Loop
In this loop, a variable is initialized to some value and is tested against a condition which if found true, some statements are executed and thereafter the variable is updated. This continues until the condition is no longer true.<br><br>
The syntax is:
```cpp
for (initialization expression; test expression; update expression)
{    
     // body of the loop
     // statements
}
```
So, if we were to write a code using for loop for the same task we performed earlier the code would be as follows:
```cpp
// C++ program to illustrate for loop
#include <bits/stdc++.h>
using namespace std;
 
 // Driver program
int main()
{
  for(int i=1; i<=5; i++)           //initialization; condition; update
    {
      cout << "C++" << endl;
    }
  
  return 0;
}
```
### Output:
```
C++
C++
C++
C++ 
C++
```
<br><br>
## While Loop
This loop is used in situations when one might not be sure about the number of iterations required, the loop terminates on the basis of the test condition. However, it can still be used to perform tasks similar to that of a for loop.<br><br>
The syntax is:
```cpp
initialization expression;
while (test expression) 
{
   //body of the loop
   // statements
 
  update expression;
}
```
So, if we were to write a code using while loop for the same task we performed earlier the code would be as follows:
```cpp
// C++ program to illustrate while loop
#include <bits/stdc++.h>
using namespace std;

// Driver program
int main()
{
  //initialization
  int i=1;
  //test expression
  while(i<=5)
    {
      //body of the loop
      cout << "C++" << endl;
      //update expression
      i++;
    }
  
  return 0;
}
```
### Output:
```
C++
C++ 
C++
C++ 
C++
```
<br><br>

## Do While Loop
This loop is similar to while loop except for the fact that here the condition is tested at the end of the loop so no matter the condition is true or false the body of the loop will be executed at least once.<br><br>
The syntax is:
```cpp
initialization expression;
do
{
   //body of the loop
   // statements

   update expression;
} while (test expression);
```
So, if we were to write a code using do while loop for the same task we performed earlier the code would be as follows:

```cpp
// C++ program to illustrate do-while loop
#include <bits/stdc++.h>
using namespace std;

// Driver program
int main()
{
  int i=1;    // Initialization expression
  do
    {
        //loop body
        cout << "C++" << endl;
        //update expression
        i++;
    } while(i<=5);    // test expression
  
  return 0;
}
```
### Output:
```
C++ 
C++ 
C++ 
C++ 
C++
```
<br><br>
## Infinite Loop
Sometimes a wrong choice of test condition may result in an endless or infinite loop. This happens because the condition never becomes false and thus the loop doesn't terminate.<br><br>
For Example:
```cpp
// C++ program to demonstrate infinite loops
// using for  while and for 
// Uncomment the  sections to see the output
#include <bits/stdc++.h>
using namespace std;

// Driver program
int main()
{
  int i=1;
  while(i>0)
  {
    cout << i << endl;
    i++;
  }
  
  /*
  for ( ; ; )
    {
        cout << "This loop will run forever.\n";
    }
   */
  
   return 0;
}
```
### Output:
```
1
2
3
..........
```
<br><br>
This happens because the value of i keeps increasing by 1 and it is always greater than 0 so the condition remains true each time and therefore the loop keeps on running.
<br><br>

## Nested Loop
A loop statement inside another loop statement is called nested loop.<br><br>
Syntax for Nested For loop:
```cpp
for ( initialization; condition; increment ) {

   for ( initialization; condition; increment ) {
      
      // statement of inside loop
   }

   // statement of outer loop
}
```
Syntax for Nested While loop:
```cpp
while(condition) {

   while(condition) {
      
      // statement of inside loop
   }

   // statement of outer loop
}
```
Syntax for Nested Do-While loop:
```cpp
do{

   do{
      
      // statement of inside loop
   }while(condition);

   // statement of outer loop
}while(condition);
```
**NOTE:** You can use one type of loop inside a different type of loop since there is no rule as such that a loop should be nested inside its own type. <br><br>
Here is a program to help understand nested loops better:
```cpp
// C++ program online to demonstrate nested loop
#include <bits/stdc++.h>
using namespace std;

// Driver program
int main()
{
    for(int i=1;i<=5;i++)       //this loop prints ***** 5 times
    {
        for(int j=1;j<=5;j++)       //this loop prints * 5 times
        {
            cout << "*";
        }                             
        cout << endl;
    }

    return 0;
}
```
### Output:
```
*****
*****
*****
*****
*****
```







