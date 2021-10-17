# <p align = "center">Valid Brackets</p>

## Problem Statement :

Given an expression, examine whether it has valid/balanced bracket or not.

## These are the commonly used brackets :

- Parentheses: ( )
- Square brackets: [ ]
- Curly brackets: { }

## Algorithm :

1. Firstly, we define a Stack to store opening brackets.
2. Now, we traverse the string from left to right.
   - If the first character is closing bracket ), or } or ], then we'll print "Not Balanced Brackets".
   - If the first character is opening bracket (, or { or [, then push it into Stack.
3. Then, in the if statements, if the character is closing bracket ), } or ], then pop the element from the stack, also :
   - if the popped character is matched with the starting bracket then proceed next.
   - Otherwise they are not balanced.
4. After complete traversal, if there is some starting bracket left in stack then “not balanced”

## Example:

## Input :

```
1. ( ) { [ ] }
2. ) ( ) { }
3. { } ( ) [ ]
4. [ { ( ) } ]
5. [ } ( ) ]
```

## Ouput

```
1. Balanced/ Valid Brackets
2. Not Balanced/ Invalid Brackets
3. Balanced/ Valid Brackets
4. Balanced/ Valid Brackets
5. Not Balanced/ Invalid Brackets
```

## Implementation Code in C++

```C++
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    string s;
    getline(cin, s); // taking string

    stack<char> stack;
    int flag = 1;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[0] == ')' || s[0] == ']' || s[0] == '}') // checking if first index is closed
        {
            flag = 0;
            break;
        }

        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            stack.push(s[i]); // inserting elements in stack
            continue;
        }

        if (stack.empty()) // checking if string is empty
        {
            flag = 0;
            break;
        }

        char container; // made a variable to store topmost element of stack

        if (s[i] == ')' && stack.empty() != 1)
        {
            container = stack.top();
            stack.pop();
            if (container == '{' || container == '[') // checking the topmost element in stack whether it is not matching
            {
                flag = 0;
                break;
            }
        }

        else if (s[i] == '}' && stack.empty() != 1)
        {
            container = stack.top();
            stack.pop();
            if (container == '(' || container == '[') // checking the topmost element in stack whether it is not matching
            {
                flag = 0;
                break;
            }
        }

        else if (s[i] == ']' && stack.empty() != 1)
        {
            container = stack.top();
            stack.pop();
            if (container == '{' || container == '(') // checking the topmost element in stack whether it is not matching
            {
                flag = 0;
                break;
            }
        }

        else
        {
            flag = 0;
            break;
        }
    }

    if (stack.empty() == 0)
    {
        flag = 0;
    }

    if (flag == 0)
    {
        cout << "Not Balanced/ Invalid Brackets" << endl;
    }

    else
    {
        cout << "Balanced/ Valid Brackets" << endl;
    }

    return 0;
}
```

### Output

```
( ) { [ ] }
Balanced/ Valid Brackets

 ) ( ) { }
Not Balanced/ Invalid Brackets

 { } ( ) [ ]
Balanced/ Valid Brackets

 [ { ( ) } ]
Balanced/ Valid Brackets

 [ } ( ) ]
Not Balanced/ Invalid Brackets
```

## Time Complexity

> Time Complexity = O(n)

## Space Complexity

> Auxiliary Space = O(n) for Stack
