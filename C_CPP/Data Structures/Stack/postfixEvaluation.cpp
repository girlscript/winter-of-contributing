#include<bits/stdc++.h>
using namespace std;

class postfixEvaluation
{

public:

void postEval(string exp)
{
    stack<int> st;                              //st stack to store the ans and perform the all operations.
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] >= '0' and exp[i] <= '9')
        {
            st.push(exp[i] - '0');
        }
        else
        {
            int second_op = st.top();
            st.pop();
            int first_op = st.top();
            st.pop();

            switch (exp[i])
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
    cout<<st.top();
}
};

int main()
{
    postfixEvaluation obj;

    string exp;                                           // Time Complexity => O(l), l = length of the string
    cout<<"Enter the postfix expression : "<<endl;
    cin>>exp;
    obj.postEval(exp);

    return 0;
}
