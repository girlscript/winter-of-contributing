//Program to evaluate prefix expression.
#include <bits/stdc++.h>
using namespace std;

class prefixEvaluation
{

public:
    void prefEval(string exp)
    {
        stack<int> st;                              //st stack to store the output and perform the all operations.

    
        for (int i = exp.length() - 1; i >= 0; --i)   //In prefix, we traverse expression from the end.
        {
            if (exp[i] >= '0' and exp[i] <= '9') //if element of expression containing element in between '0' and '9', it will convert that string into integer and push in stack.
            {
                st.push(exp[i] - '0');
            }else if(exp[i]==' '){              //if expression contain ' '(SPACE) skip it and check the next element of expression
                continue;
            }
            else                                //if element is operator, pop two operand from stack, then perform arithmetic expression on that two operands
            {
                int first_op = st.top();    
                st.pop();
                int second_op = st.top();
                st.pop();

                switch (exp[i])            //afther arithmetic operation push the result in stack
                {
                case '+':
                    st.push(first_op + second_op);
                    break;
                case '-':
                    st.push(first_op - second_op);
                    break;
                case '*':
                    st.push(first_op * second_op);
                    break;
                case '/':
                    st.push(first_op / second_op);
                    break;
                case '^':
                st.push(pow(first_op,second_op));
                break;
                default:
                exit(0);
                break;
                }
            }
        }
        cout<<st.top();                 //If traversal of the expression will complete then print the top most element of the stack.
    }
};

int main()
{   prefixEvaluation obj;

    string exp;                                           // Time Complexity => O(l), l = length of the string
    cout << "Enter the prefix expression : " << endl;
    getline(cin, exp);
    obj.prefEval(exp);

    return 0;
}
