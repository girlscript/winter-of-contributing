# Infix to Postfix using Stack 

### Infix expression
It is an expression in which the operators (+, -, *, /) are written in between the two operands . For example,
```
(A * B + C )
(A + B - C * D / E )
```

### Postix expression
It is an expression in which the operator is written after the operand . For example,
```
(A B C * /)
(A B * C / D -)
```

### Precedence of operators
```
(/ , * ) has greater precedence then (+ , -)
```

## Algorithm

1. Take input of infix expression as a string
2. Initialise the stack and create a string postfix to store the final answer
3. Iterate from the start of the string to its end
4. Add the character to the postfix string if it is an operand
5. Push the operator into the stack If it is an operator (+,-,*,/) and the stack is empty or if the top of the stack contains '(' or ')' symbol.
6. If the operator that is now read from string has greater precedence than the already existing operator on the top of the Stack or if the Stack is already empty , then push this operator into the Stack.
7. If the operator that is now read from string has lesser precedence than the already existing operator on the top of the Stack then the operators which have a higher precedence than the top operator are popped out from the stack into the output postfix string and push it into the Stack.
8. Push the character into the stack if it is a left bracket '('.
9. Pop all the elements from the stack and store them in the postfix string it is a right bracket '(' until a left bracket '(' is reached 
10. Repeat all steps from 4 to 9 until the end of the infix expression is reached.
11. Now pop all the elements from stack into the postfix string until the stack becomes empty.
12. Print the output postfix string.



## Code:-
```
#include<bits/stdc++.h>
using namespace std;
 
//Function to return precedence of operators
int precedence(char ch) 
{
    if(ch == '/' || ch =='*')
        return 2;
    else if(ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}
 
// Function to convert infix expression to postfix expression
void infixToPostfix(string s) 
{
 
    stack<char> st; //Using Built-in Stack
    string postfix;
 
    for(int i = 0; i < s.length(); i++) 
    {
        char c = s[i];

        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            postfix += c;
 
        else if(c == '(')
            st.push('(');
 
        else if(c == ')') 
        {
            while(st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
 
        else 
        {
            while(!st.empty() && precedence(s[i]) <= precedence(st.top())) 
            {
                postfix += st.top();
                st.pop(); 
            }
            st.push(c);
        }
    }

    while(!st.empty()) 
    {
        postfix += st.top();
        st.pop();
    }
 
    cout <<"\n\nPostfix expression:- "<<postfix<< endl;
}
 

int main() 
{
    string infix;
    cout<<"\n\nEnter infix expression:\n";
    cin>>infix;
    infixToPostfix(infix);
    return 0;
}
```

## Output:-

![image](https://user-images.githubusercontent.com/75535031/139717091-8d81c754-e1d2-4c28-a0ce-a3dc5108a03f.png)