//Program to evaluate infix expression
#include <bits/stdc++.h>
using namespace std;

class infixEvaluation{

public:

    int infEval(string ch)
    {
        stack<int> operands;                        //stack to store the output and perform the all operations.

        stack<char> operators;

        for (int i = 0; i < ch.length(); i++)
        {

            if (ch[i] == ' ')
            {
                continue;
            }

            else if (ch[i] == '(')
            {
                operators.push(ch[i]);
            }

            else if (isdigit(ch[i]))
            {
                int val = 0;
                while (i < ch.length() && isdigit(ch[i]))
                {
                    val = (val * 10) + (ch[i] - '0');
                    i++;
                }
                operands.push(val);
            }

            else if (ch[i] == ')')
            {

                while (!operators.empty() && operators.top() != '(')
                {
                    int val2 = operands.top();
                    operands.pop();

                    int val1 = operands.top();
                    operands.pop();

                    char op = operators.top();
                    operators.pop();

                    operands.push(apply_Opr(val1, val2, op));
                }

                if (!operators.empty())
                    operators.pop();
            }

            else
            {
                while (!operators.empty() && prec(operators.top()) >= prec(ch[i]))
                {
                    int val2 = operands.top();
                    operands.pop();

                    int val1 = operands.top();
                    operands.pop();

                    char op = operators.top();
                    operators.pop();

                    operands.push(apply_Opr(val1, val2, op));
                }

                operators.push(ch[i]);
            }
        }

        while (!operators.empty())
        {
            int val2 = operands.top();
            operands.pop();

            int val1 = operands.top();
            operands.pop();

            char op = operators.top();
            operators.pop();

            operands.push(apply_Opr(val1, val2, op));
        }

        return operands.top();
    }

    int prec(char optor)
    {
        if (optor == '+' || optor == '-')
            return 1;
        if (optor == '*' || optor == '/')
            return 2;
        return 0;
    }

    int apply_Opr(int a, int b, char optor)
    {
        switch (optor)
        {
        case '+':
            return (a + b);
        case '-':
            return (a - b);
        case '*':
            return (a * b);
        case '/':
            return (a / b);
        default:
            break;
        }
        return 0;
    }

};


int main()
{
    infixEvaluation obj;
    string s;
    cout<<"Enter the infix expression :"<<endl;
    getline(cin, s);

    cout << obj.infEval(s);

    return 0;
}
