# Loops in C++
While programming, there will be several times when we need to perform the same task a number of times.
For example if we have to print C++ 5 times the code would be:
```
#include <bits/stdc++.h>
using namespace std;
  
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
## Output:
C++ <br>
C++ <br>
C++ <br>
C++ <br>
C++ <br>

In that case, it is not ideal to write the same piece of code repeatedly, so C++ provides us with something called loops. Loop is a set of instructions that performs a task until a certain condition remains true. There are two types of loops: <br><br>
**Entry Controlled loops:** Here test condition is tested before entering the loop body. Example: for loop and while loop. <br><br>
**Exit Controlled Loops:** Here the test condition is tested at the end of loop body. This ensures that the loop body will execute atleast once regardless of the condition. Example: do while loop.<br><br>

## For Loop
In this loop, a variable is initialized to some value and is tested against a condition which if found true, some statements are executed and thereafter the variable is updated. This continues until the condition is no longer true.<br><br>
The syntax is:
```
for (initialization expression; test expression or condition; update expression)
{    
     // body of the loop
     // statements
}
```
So, if we were to write a code using for loop for the same task we performed earlier the code would be as follows:
```
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  for(int i=1;i<=5;i++)
    {
      cout << "C++" << endl;
    }
  
  return 0;
}
```
## Output:
C++ <br>
C++ <br>
C++ <br>
C++ <br>
C++ <br><br>

## While Loop
This loop is used in situations when one might not be sure about the number of iterations required, the loop terminates on the basis of the test condition. However, it can still be used to perform tasks similar to that of a for loop.<br><br>
The syntax is:
```
initialization expression;
while (test expression or condition) 
{
   //body of the loop
   // statements
 
  update expression;
}
```
So, if we were to write a code using while loop for the same task we performed earlier the code would be as follows:
```
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  int i=1;
  while(i<=5)
    {
      cout << "C++" << endl;
    
      i++;
    }
  
  return 0;
}
```
## Output:
C++ <br>
C++ <br>
C++ <br>
C++ <br>
C++ <br><br>

## Do While Loop
This loop is similar to while loop except for the fact that here the condition is tested at the end of the loop so no matter the condition is true or false the body of the loop will be executed at least once.<br><br>
The syntax is:
```
initialization expression;
do
{
   //body of the loop
   // statements

   update expression;
} while (test expression or condition);
```
So, if we were to write a code using do while loop for the same task we performed earlier the code would be as follows:

```
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  int i=1;
  do
    {
        cout << "C++" << endl;
      
        i++;
    } while(i<=5);
  
  return 0;
}
```
## Output:
C++ <br>
C++ <br>
C++ <br>
C++ <br>
C++ <br><br>

**NOTE:** Sometimes a wrong choice of test condition may result in an endless or infinite loop. This happens because the condition never becomes false and thus the loop doesn't terminate.<br><br>
For Example:
```
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  int i=1;
  while(i>0)
  {
    cout << i << endl;
    i++;
  }
  
   return 0;
}
```
## Output:
1<br>
2<br>
3<br>
..........<br><br>
This happens because the value of i keeps increasing by 1 and it is always greater than 0 so the condition remains true each time and therefore the loop keeps on running.
