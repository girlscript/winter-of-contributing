# Expression Evaluation

### Here we have to evaluate an expression which is represented by a String. That expression can contain parentheses, here we can assume that the  parentheses are well-matched. For our ease we will assume only binary operations such as  +, -, *, and /. Arithmetic Expressions can be written in one of three forms:

What is expression evaluation?
The Expression evaluation tool (sometimes called the Watch tool) makes it possible to evaluate expressions while the application is stopped in the debugger. A typical use for it is the case in which you would like to know the result that an external feature would

What determines the order of evaluation in an expression?
The precedence of operators determines the order of evaluation in an expression.

What is expression evaluation in data structure?

The stack organization is very effective in evaluating arithmetic expressions. Expressions are usually represented in what is known as Infix notation, in which each operator is written between two operands (i.e., A + B)

Infix Notation:In this notation Operators are written between the operands they operate on.
 The usual expressions which we encounter are infix expressions. 
For example, 

(A + B) * C / D – E

Prefix Notation:Prefix notation's Operators are written before the operands, e.g + 3 4
Now that we know what expressions we’re dealing with, solving them will be even easier. Before moving on to the evaluation, there is one more thing we need to learn – the precedence of operators.

Postfix Notation: Operators are written after operands.

It is difficult for computers to evaluate infix expressions because additional work is required to determine the precedence. Infix notation is how expressions are written and recognized by humans and are typically input into programs. Given that they are difficult to evaluate, they usually converge to one of the two remaining forms.
A very famous algorithm for converting an infix notation to a postfix notation is the shunting yard algorithm by Edgar Dijkstra. This algorithm takes as input an infix expression and generates a queue in which this expression is converted into postfix notation. The same algorithm can be modified so that it outputs the result of the evaluation of the expression instead of a queue.
 The trick is using two stacks instead of one, one for operands, and one for operators. The algorithm was described succinctly on http://www.cis.upenn.edu/matuszek/cit594-2002/Assignments/5-expressions.htm, and is reproduced here. (Note that credit for succinctness goes to the author of said page) 

```

1. While there are still tokens to be read in,
   1.1 Get the next token.
   1.2 If the token is:
       1.2.1 A number: push it onto the value stack.
       1.2.2 A variable: get its value, and push onto the value stack.
       1.2.3 A left parenthesis: push it onto the operator stack.
       1.2.4 A right parenthesis:
         1 While the thing on top of the operator stack is not a 
           left parenthesis,
             1 Pop the operator from the operator stack.
             2 Pop the value stack twice, getting two operands.
             3 Apply the operator to the operands, in the correct order.
             4 Push the result onto the value stack.
         2 Pop the left parenthesis from the operator stack, and discard it.
       1.2.5 An operator (call it thisOp):
         1 While the operator stack is not empty, and the top thing on the
           operator stack has the same or greater precedence as thisOp,
           1 Pop the operator from the operator stack.
           2 Pop the value stack twice, getting two operands.
           3 Apply the operator to the operands, in the correct order.
           4 Push the result onto the value stack.
         2 Push thisOp onto the operator stack.
2. While the operator stack is not empty,
    1 Pop the operator from the operator stack.
    2 Pop the value stack twice, getting two operands.
    3 Apply the operator to the operands, in the correct order.
    4 Push the result onto the value stack.
3. At this point the operator stack should be empty, and the value
   stack should have only one value in it, which is the final result.
   
   ```
   
It should be clear that this algorithm runs in linear time – each number or operator is pushed onto and popped from Stack only once. Also see

```
http://www2.lawrence.edu/fast/GREGGJ/CMSC270/Infix.html, 

http://faculty.cs.niu.edu/~hutchins/csci241/eval.htm.

```
Now we will do the implementation of above algorithm:

```

// CPP program to evaluate an expression
 // here tokens are separated by space.

#include <bits/stdc++.h>
using namespace std;


int precedence(char op){
	if(op == '+'||op == '-')
	return 1;
	if(op == '*'||op == '/')
	return 2;
	return 0;
}

// Function for arithmetic operations.
int applyOp(int a, int b, char op){
	switch(op){
		case '+': return a + b;
		case '-': return a - b;
		case '*': return a * b;
		case '/': return a / b;
	}
}

// Function to returns value of expression after evaluation.

int evaluate(string tokens){
	int i;
	

	stack <int> values;
	

	stack <char> ops;
	
	for(i = 0; i < tokens.length(); i++){
		
		// Here the current token is a whitespace,
		// we can skip it.
		if(tokens[i] == ' ')
			continue;
		
		// Current token is an opening
		// brace, push it to 'ops'
		else if(tokens[i] == '('){
			ops.push(tokens[i]);
		}
		
		// Current token is a number, push
		// it to stack for numbers.
		else if(isdigit(tokens[i])){
			int val = 0;
			
			// There may be more than one
			// digits in number.
			while(i < tokens.length() &&
						isdigit(tokens[i]))
			{
				val = (val*10) + (tokens[i]-'0');
				i++;
			}
			
			values.push(val);
			
			
			i--;
		}
		
		// Now we are  Closing brace encountered, solve
		// entire brace.
		else if(tokens[i] == ')')
		{
			while(!ops.empty() && ops.top() != '(')
			{
				int val2 = values.top();
				values.pop();
				
				int val1 = values.top();
				values.pop();
				
				char op = ops.top();
				ops.pop();
				
				values.push(applyOp(val1, val2, op));
			}
			
			// pop opening brace.
			if(!ops.empty())
			ops.pop();
		}
		
		// Current token is an operator.
		else
		{
			
			while(!ops.empty() && precedence(ops.top())
								>= precedence(tokens[i])){
				int val2 = values.top();
				values.pop();
				
				int val1 = values.top();
				values.pop();
				
				char op = ops.top();
				ops.pop();
				
				values.push(applyOp(val1, val2, op));
			}
			
			// Here we will Push current token to 'ops'.
			ops.push(tokens[i]);
		}
	}
	
	// Entire expression has been parsed at this
	// point, apply remaining ops to remaining
	// values.
	while(!ops.empty()){
		int val2 = values.top();
		values.pop();
				
		int val1 = values.top();
		values.pop();
				
		char op = ops.top();
		ops.pop();
				
		values.push(applyOp(val1, val2, op));
	}
	
	// Top of 'values' contains result, return it.
	return values.top();
}

int main() {
	cout << evaluate("10 + 2 * 6") << "\n";
	cout << evaluate("100 * 2 + 12") << "\n";
	cout << evaluate("100 * ( 2 + 12 )") << "\n";
	cout << evaluate("100 * ( 2 + 12 ) / 14");
	return 0;
}


```

## Output:

```

22
212
1400
100

```

### Time Complexity: O(n) 

### Space Complexity: O(n)

This article is compiled by **Ciphe**. 

