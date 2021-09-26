//Program to evaluate prefix expression.
#include <bits/stdc++.h>
using namespace std;

class prefixEvaluation
{

public:
    void prefEval(string exp)
    {
        stack<int> st;                              //st stack to store the ans and perform the all operations.
        for (int i = exp.length() - 1; i >= 0; --i)   
        {
            if (exp[i] >= '0' and exp[i] <= '9')
            {
                st.push(exp[i] - '0');
            }else if(exp[i]==' '){
                continue;
            }
            else
            {
                int first_op = st.top();
                st.pop();
                int second_op = st.top();
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
{   prefixEvaluation obj;

    string exp;                                           // Time Complexity => O(l), l = length of the string
    cout << "Enter the prefix expression : " << endl;
    getline(cin, exp);
    obj.prefEval(exp);

    return 0;
}
