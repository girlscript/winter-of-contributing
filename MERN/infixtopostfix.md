 Question - Write a Program to covert Infix expression into Postfix Expression in C++.


 ## Infix expression
 An expression in which operators like(+,-,*,/) comes in between the two operands.
 for example -> c*d
                Here the operator (*) comes in between two operands c and d.

 ## Postfix Expression
 An expression in which operators are written after the operands.
 for example-> cd*
               Here the operator (*) comes after the two operands c and d.

 ## Algorithm 

 - Scan the expression from left to right.
 - We have the conditions that if the scanned character is 
            - if Operand, then output it.
            - else
                   - if the scanned character is operator with the greater precedence than the operator in the stack or if the stack is empty then push the character in the stack.
                   - If the scanned character is operator with the low precedence or has equal precedence than the operator present in the stack then pop out all the elements from the stack and push the scanned operator.
            - if the scanned character is '(' then psuh it to the stack.
            - if the scanned character is ')  then pop out all the elements until the '(' is found
  - Repeat all the steps until and unless whole expression gets scanned.
  -Print the output
  - Pop out all the elements from the stack until the stack gets empty.

<hr>
  ## Implementation

  #include<iostream>
#include<stack>
using namespace std;

// function to check precedence of the operator.
int prec(char c)
{
    if(c=='^')
    return 3;

    else if(c=='*' || c=='/')
    return 2;

    else if(c=='+'|| c=='-')
    return 1;

    else
    return -1;
}


void infixtopostfix(string s)
{
    stack<char>st;
    string output;

    for(int i=0;i<s.length();i++)
    {
        char c=s[i];
    

    if(c>='a' && c<='z' || c>='A' && c<='Z')
    {
        output+=c;
    }

    else if(c=='(')
    {
        st.push('(');
    }

    else if(c==')')
    {
        while(st.top()!='(')
        {
            output+=st.top();
            st.pop();
        }

        st.pop();
    }

    else
    {
        while(!st.empty() && prec(s[i])<=prec(st.top()))
        {
            output+=st.top();
            st.pop();
        }

        st.push(c);
    }

}
    while(!st.empty())
    {
        output+=st.top();
        st.pop();
    }

    cout<<""<<output<<endl;
}

  int main()
  {
      string exp="a/b*(c^d-e)^(f+g*h)";
      infixtopostfix(exp);   
                                  //function is called to convert infix expression to postfix expression.

       return 0;                           
  }


<hr>


  ## OUTPUT-

    ab/cd^e-fgh*+^*

