#include <bits/stdc++.h>
using namespace std;

class prefixEvaluation
{

public:
    void prefEval(string s)
    {
        stack<int> st;                              //st stack to store the ans and perform the all operations.
        for (int i = s.length() - 1; i >= 0; --i)   
        {
            if (s[i] >= '0' and s[i] <= '9')
            {
                st.push(s[i] - '0');
            }
            else
            {
                int first_op = st.top();
                st.pop();
                int second_op = st.top();
                st.pop();

                switch (s[i])
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

    string s;                                           // Time Complexity => O(l), l = length of the string
    cout << "Enter the prefix expression : " << endl;
    cin >> s;
    obj.prefEval(s);

    return 0;
}
