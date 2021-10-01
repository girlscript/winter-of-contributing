//Program to evaluate infix expression
#include <bits/stdc++.h>
using namespace std;

class infixEvaluation{

public:

    int infEval(string ch)
    {
        stack<int> operands;                                    //Operands stack to store the operands.

        stack<char> operators;                                  //Operators stack to store the operators.       

        for (int i = 0; i < ch.length(); i++)
        {

            if (ch[i] == ' ')                                   //If expression contain ' '(space) then continue the expression.
            {
                continue;
            }
            else if (ch[i] == '(')                              //If expression contain opening paretheses '(', push it into operators stack.
            {
                operators.push(ch[i]);
            }
            else if (isdigit(ch[i]))                            //If expression contain operand convert it into integer and push it in operands stack.
            {
                int val = 0;
                while (i < ch.length() && isdigit(ch[i]))
                {
                    val = (val * 10) + (ch[i] - '0');
                    i++;
                }
                operands.push(val);
            }

            else if (ch[i] == ')')                              //If expression contain closing paretheses ')' then pop all the elements from operators stack until operators stack is not empty or top of the stack not contain opening parentheses ')'. 
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

            else                                                   //If expression contain operator it will pop the elements which is greater or equal to it from the operator stack.
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

        while (!operators.empty()) //it will pop last 2 operands and 1 operators then using apply_Opr(),it will perform arithmetic operation and store the output in operands stack.
        {
            int val2 = operands.top();
            operands.pop();

            int val1 = operands.top();
            operands.pop();

            char op = operators.top();
            operators.pop();

            operands.push(apply_Opr(val1, val2, op));
        }

        return operands.top(); //return top most element of the operands stack.
    }

    int prec(char optor)    //prec() function to check precendence of the operator
    {
        if (optor == '+' || optor == '-')
            return 1;
        if (optor == '*' || optor == '/')
            return 2;
        return 0;
    }

    int apply_Opr(int a, int b, char optor) //apply_Opr() function to perform the arithmetic operations
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

    cout << obj.infEval(s);     //Time Complexity : O(l) , l = length of the string

    return 0;
}
