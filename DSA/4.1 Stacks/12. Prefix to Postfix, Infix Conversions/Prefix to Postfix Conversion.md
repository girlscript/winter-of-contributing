# Prefix to Postfix Conversion

## What is Prefix?
An expression is called the prefix expression if the operator appears in the expression before the operands.

## What is Postfix?
An expression is called the postfix expression if the operator appears in the expression after the operands.

## Algorithm for Prefix to Postfix using stack data structure:
* Scan the prefix expression from right to left, i.e., reverse.
* If the incoming symbol is an operand then push it into the stack.
* If the incoming symbol is an operator then pop two operands from the stack. Once the operands are popped out from the stack, we add the incoming symbol after the operands. When the operator is added after the operands, then the expression is pushed back into the stack.
* Once the whole expression is scanned, pop and print the postfix expression from the stack.

## Program to convert Prefix to Postfix in C++ :

```cpp
#include <iostream>
#include <stack>
using namespace std;

// function to check if char is operator or not
bool isOperator(char x)
{
	switch (x) {
	case '+':
	case '-':
	case '/':
	case '*':
		return true;
	}
	return false;
}

string preToPost(string pre_exp)
{
	stack<string> s;
	// length of expression
	int length = pre_exp.size();

	// reading from right to left
	for (int i = length - 1; i >= 0; i--)
	{
		// check if symbol is operator
		if (isOperator(pre_exp[i]))
		{
			// pop two operands from stack
			string op1 = s.top();
			s.pop();
			string op2 = s.top();
			s.pop();
			string temp = op1 + op2 + pre_exp[i];
			s.push(temp);
		}
		else {
			// push the operand to the stack
			s.push(string(1, pre_exp[i]));
		}
	}
	return s.top();
}

int main()
{
	string pre_exp = "*-A/BC-/AKL";
	cout << "Postfix : " << preToPost(pre_exp);
	return 0;
}
```

## Program to convert Prefix to Postfix in Java : 

```java
import java.util.*;

class myMain {

	static boolean isOperator(char x)
	{
		switch (x) {
		case '+':
		case '-':
		case '/':
		case '*':
			return true;
		}
		return false;
	}

	static String preToPost(String pre_exp)
	{
		Stack<String> s = new Stack<String>();
		int length = pre_exp.length();
		// reading from right to left
		for (int i = length - 1; i >= 0; i--)
		{
			if (isOperator(pre_exp.charAt(i)))
			{
				// pop two operands from stack
				String op1 = s.peek();
				s.pop();
				String op2 = s.peek();
				s.pop();

				// concat the operands and operator
				String temp = op1 + op2 + pre_exp.charAt(i);

				// Push String temp back to stack
				s.push(temp);
			}

			// if symbol is an operand
			else {
				// push the operand to the stack
				s.push(pre_exp.charAt(i) + "");
			}
		}
		return s.peek();
	}

	public static void main(String args[])
	{
		String pre_exp = "*-A/BC-/AKL";
		System.out.println("Postfix : "
						+ preToPost(pre_exp));
	}
}
```


## Program to convert Prefix to Postfix in Python :

```python
s = "*-A/BC-/AKL"

# Stack for storing operands
stack = []
operators = set(['+', '-', '*', '/', '^'])
# Reversing the order
s = s[::-1]
# iterating through individual elements
for i in s:
	if i in operators:
		# pop 2 elements from stack
		a = stack.pop()
		b = stack.pop()
		temp = a+b+i
		stack.append(temp)
	else:
		stack.append(i)
print(*stack)
```
