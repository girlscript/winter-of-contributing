// C++ code to check if an expression contains balanced parentheses or not

#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
using namespace std;

// function to check if brackets are balanced
bool is_balanced(string exp)
{
    stack<char> s;
    char x;

  // Traversing the Expression
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {

          // Push the element in the stack
            s.push(exp[i]);
            continue;
        }

      // IF current current character is not opening
        // bracket, then it must be closing. So stack
        // cannot be empty at this point.

        if (s.empty())
            return false;

        switch (exp[i])
        {
        case ')':
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;
        case '}':
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;
        case ']':
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        default:
            break;
        }
    }
    return (s.empty());
}

// driver code
int main()
{
    string str;
    cout << "Enter the expression: ";
    cin >> str;
    if (is_balanced(str))
        cout << "\nBALANCED";
    else
        cout << "\nNOT BALANCED";
}
