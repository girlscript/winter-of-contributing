# Infix to Prefix

Expression conversion is the most important application of stacks. Given an infix expression, it can be converted to both prefix and postfix notations.
Now, let us see how to convert an expression from infix to prefix.
* Infix notation ( a operator b ): For example, a + b is an infix notation.
* Prefix notation ( operator a b ): + a b  is the equivalent prefix notation of a + b.
The compiler scans the given expression either from left to right or from right to left.
Consider the below expression: a + b / c - d
* At first, compiler scans the expression to evaluate the expression b / c, then scans the expression again to add a to it. The result is then subtracted with d after another scan.
* This repeated scanning makes the process very inefficient and time consuming. It will be much easier if the expression is converted to prefix (or postfix) before evaluation.
* The corresponding expression in prefix form is: -+a/bcd. The prefix expressions can be easily evaluated using a stack. 

## Rules for the conversion of infix to prefix expression:

* First, reverse the infix expression given in the problem.
* Scan the expression from left to right.
* Whenever the operands arrive, print them.
* If the operator arrives and the stack is found to be empty, then simply push the operator into the stack.
* If the incoming operator has higher precedence than the TOP of the stack, push the incoming operator into the stack.
* If the incoming operator has the same precedence with a TOP of the stack, push the incoming operator into the stack.
* If the incoming operator has lower precedence than the TOP of the stack, pop, and print the top of the stack. Test the incoming operator against the top of the stack again and pop the operator from the stack till it finds the operator of a lower precedence or same precedence.
* If the incoming operator has the same precedence with the top of the stack and the incoming operator is ^, then pop the top of the stack till the condition is true. If the condition is not true, push the ^ operator.
* When we reach the end of the expression, pop, and print all the operators from the top of the stack.
* If the operator is ')', then push it into the stack.
* If the operator is '(', then pop all the operators from the stack till it finds ) opening bracket in the stack.
* If the top of the stack is ')', push the operator on the stack.
* At the end, reverse the output.

## Implementation of infix to prefix conversion in C++:

```cpp
#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c)
{
	return (!isalpha(c) && !isdigit(c));
}

int getPriority(char C)
{
	if (C == '-' || C == '+')
		return 1;
	else if (C == '*' || C == '/')
		return 2;
	else if (C == '^')
		return 3;
	return 0;
}

string infixToPostfix(string infix)
{
	infix = '(' + infix + ')';
	int l = infix.size();
	stack<char> char_stack;
	string output;

	for (int i = 0; i < l; i++) {
		if (isalpha(infix[i]) || isdigit(infix[i]))
			output += infix[i];

		else if (infix[i] == '(')
			char_stack.push('(');

		else if (infix[i] == ')') {
			while (char_stack.top() != '(') {
				output += char_stack.top();
				char_stack.pop();
			}

			char_stack.pop();
		}

		else
		{
			if (isOperator(char_stack.top()))
			{
				if(infix[i] == '^')
				{
					while (getPriority(infix[i]) <= getPriority(char_stack.top()))
					{
						output += char_stack.top();
						char_stack.pop();
					}
					
				}
				else
				{
					while (getPriority(infix[i]) < getPriority(char_stack.top()))
					{
						output += char_stack.top();
						char_stack.pop();
					}
					
				}

				char_stack.push(infix[i]);
			}
		}
	}
	while(!char_stack.empty()){
		output += char_stack.top();
		char_stack.pop();
	}
	return output;
}

string infixToPrefix(string infix)
{
	int l = infix.size();

	reverse(infix.begin(), infix.end());

	for (int i = 0; i < l; i++) {

		if (infix[i] == '(') {
			infix[i] = ')';
			i++;
		}
		else if (infix[i] == ')') {
			infix[i] = '(';
			i++;
		}
	}

	string prefix = infixToPostfix(infix);
	reverse(prefix.begin(), prefix.end());

	return prefix;
}

int main()
{
	string s = ("x+y*z/w+u");
	cout << infixToPrefix(s) << std::endl;
	return 0;
}
```

## Implementation of infix to prefix conversion in Java
```java
import java.util.*;

class Main
{
static boolean isalpha(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
	return true;
	}
	return false;
}

static boolean isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
	return true;
	}
	return false;
}

static boolean isOperator(char c)
{
	return (!isalpha(c) && !isdigit(c));
}

static int getPriority(char C)
{
	if (C == '-' || C == '+')
	return 1;
	else if (C == '*' || C == '/')
	return 2;
	else if (C == '^')
	return 3;

	return 0;
}

static String reverse(char str[], int start, int end)
{
	char temp;
	while (start < end)
	{
	temp = str[start];
	str[start] = str[end];
	str[end] = temp;
	start++;
	end--;
	}
	return String.valueOf(str);
}

static String infixToPostfix(char[] infix1)
{
	System.out.println(infix1);
	String infix = '(' + String.valueOf(infix1) + ')';

	int l = infix.length();
	Stack<Character> char_stack = new Stack<>();
	String output="";

	for (int i = 0; i < l; i++)
	{.
	if (isalpha(infix.charAt(i)) || isdigit(infix.charAt(i)))
		output += infix.charAt(i);

	else if (infix.charAt(i) == '(')
		char_stack.add('(');
		
	else if (infix.charAt(i) == ')')
	{
		while (char_stack.peek() != '(')
		{
		output += char_stack.peek();
		char_stack.pop();
		}

		// Remove '(' from the stack
		char_stack.pop();
	}

	else {
		if (isOperator(char_stack.peek()))
		{
		while ((getPriority(infix.charAt(i)) <
				getPriority(char_stack.peek()))
				|| (getPriority(infix.charAt(i)) <=
					getPriority(char_stack.peek())
					&& infix.charAt(i) == '^'))
		{
			output += char_stack.peek();
			char_stack.pop();
		}

		char_stack.add(infix.charAt(i));
		}
	}
	}
	while(!char_stack.empty()){
		output += char_stack.pop();
	}
	return output;
}

static String infixToPrefix(char[] infix)
{

	int l = infix.length;

	String infix1 = reverse(infix, 0, l - 1);
	infix = infix1.toCharArray();

	for (int i = 0; i < l; i++)
	{

	if (infix[i] == '(')
	{
		infix[i] = ')';
		i++;
	}
	else if (infix[i] == ')')
	{
		infix[i] = '(';
		i++;
	}
	}

	String prefix = infixToPostfix(infix);

	prefix = reverse(prefix.toCharArray(), 0, l-1);

	return prefix;
}

public static void main(String[] args)
{
	String s = ("x+y*z/w+u");
	System.out.print(infixToPrefix(s.toCharArray()));
}
}
``` 
