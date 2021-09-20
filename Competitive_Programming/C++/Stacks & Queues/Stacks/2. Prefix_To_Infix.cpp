/*
CODE DESCRIPTION:
Infix expression : An expression in which the operator appears in between the operands.
Syntax: (operand1 operator operand2)
Prefix expression : An expression in which the operator appears before the operands.
Syntax: (operator operand1 operand2)
Here, we need to convert given a Prefix expression  into an Infix expression.
COMPLEXITY:
Time Complexity : O(n)
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Function to convert prefix to Infix expression
string prefix_to_infix(string prefix)
{
  stack<string> s;
  int l=prefix.length();

  // Reading the Prefix expression in reverse order i.e, from right to left
  for(int i=l-1;i>=0;i--)
  {
      // if the symbol is an operand, push it to the stack
      if(prefix[i]>='a' && prefix[i]<='z'||prefix[i]>='A' && prefix[i]<='Z')
        s.push(string(1,prefix[i]));

      // if symbol is an operator
      else{
        // pop two operands (op1 & op2) from stack
        string op1=s.top();
        s.pop();
        string op2=s.top();
        s.pop();

        // Creating a string by concatenating the two operands and the operator between them and pushing it back to the stack.
        string temp=("("+op1+prefix[i]+op2+")");
        s.push(temp);
      }
  }

  // returning element/string at top of stack
  return s.top();
}

int main()
{
  string exp;
  cout<<"Enter expression: ";
  cin>>exp;

  cout<<"prefix to infix expression is: "<<prefix_to_infix(exp);
}
