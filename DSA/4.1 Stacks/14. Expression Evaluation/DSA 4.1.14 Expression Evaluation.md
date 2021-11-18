# **Expression Evaluation**

## **What is Infix Expression ?**  
   An expression is called the **Infix** expression if the operator appears in the expression between the operands. Simply of the form (operand1 operator operand2).

#### Example :

(A+B)*(C-D)

## **What is Prefix Expression ?**  
   An expression is called the **Prefix** expression if the operator appears in the expression before the operands. Simply of the form (operator operand1 operand2). 

#### Example : 

*+AB-CD 

## **What is Postfix Expression ?**  
   An expression is called the **Postfix** expression if the operator appears in the expression after the operands. Simply of the form (operand1 operand2 operator). 

#### Example : 

AB+CD-* 



### Evaluation of Prefix Expression :

Prefix and Postfix expressions can be evaluated faster than an infix expression. This is because we don’t need to process any brackets or follow operator precedence rule. In postfix and prefix expressions which ever operator comes before will be evaluated first, irrespective of its priority. Also, there are no brackets in these expressions. As long as we can guarantee that a valid prefix or postfix expression is used, it can be evaluated with correctness.

#### Algorithm : 
```
Step 1: Put a pointer P at the end of the end
Step 2: If character at P is an operand push it to Stack
Step 3: If the character at P is an operator pop two 
        elements from the Stack. Operate on these elements
        according to the operator, and push the result 
        back to the Stack
Step 4: Decrement P by 1 and go to Step 2 as long as there
        are characters left to be scanned in the expression.
Step 5: The Result is stored at the top of the Stack, 
        return it
Step 6: End
```

#### Example to demonstrate working of the algorithm  : 

```
Expression: +9*26

Character | Stack       |  Explanation
Scanned   | (Front to   |
          |  Back)      | 
-------------------------------------------
6           6             6 is an operand, 
                            push to Stack
2           6 2           2 is an operand, 
                            push to Stack
*           12 (6*2)      * is an operator, 
                          pop 6 and 2, multiply 
                          them and push result 
                          to Stack 
9           12 9          9 is an operand, push 
                          to Stack
+           21 (12+9)     + is an operator, pop
                          12 and 9 add them and
                          push result to Stack

Result: 21
```

#### Implementation of the above Approach : 

```cpp
// C++ program to evaluate a prefix expression.
#include <bits/stdc++.h>
using namespace std;

double evaluatePrefix(string exprsn)
{
	stack<double> Stack;

	for (int j = exprsn.size() - 1; j >= 0; j--) {
	
		// if jth character is the delimiter ( which is
		// space in this case) then skip it
		if (exprsn[j] == ' ')
			continue;

		// Push operand to Stack
		// To convert exprsn[j] to digit subtract
		// '0' from exprsn[j].
		if (isdigit(exprsn[j])) {
		
			// there may be more than
			// one digits in a number
			double num = 0, i = j;
			while (j < exprsn.size() && isdigit(exprsn[j]))
				j--;
			j++;

			// from [j, i] exprsn contains a number
			for (int k = j; k <= i; k++)
				num = num * 10 + double(exprsn[k] - '0');

			Stack.push(num);
		}
		else {

			// Operator encountered
			// Pop two elements from Stack
			double o1 = Stack.top();
			Stack.pop();
			double o2 = Stack.top();
			Stack.pop();

			// Use switch case to operate on o1
			// and o2 and perform o1 O o2.
			switch (exprsn[j]) {
			case '+':
				Stack.push(o1 + o2);
				break;
			case '-':
				Stack.push(o1 - o2);
				break;
			case '*':
				Stack.push(o1 * o2);
				break;
			case '/':
				Stack.push(o1 / o2);
				break;
			}
		}
	}

	return Stack.top();
}

// Driver code
int main()
{
	string exprsn = "+ 9 * 12 6";
	cout << evaluatePrefix(exprsn) << endl; //Output : 81
	return 0;
}
```

#### **Time Complexity** :  
The algorithm has linear complexity since we scan the expression once and perform at most **O(N)** push and pop operations which take constant time.
>Hence the time complexity is **O(N)** i.e. Linear Time 


#### **Space Complexity** :  
In the above approach, we are using stack to store the operands & operators. So the space required is **O(N)**.

>Hence, the space complexity is **O(N).**

<br>

### Evaluation of Postfix Expression :

The Postfix notation is used to represent algebraic expressions. The expressions written in postfix form are evaluated faster compared to infix notation as parenthesis are not required in postfix.

#### Algorithm : 
```
Step 1: Create a stack to store operands. 
Step 2: Scan the given expression and do 
        the following for every scanned 
        element. 
Step 2.a: If the element is a number, 
          push it into the stack. 
Step 2.b: If the element is an operator, 
          pop operands for the operator 
          from the stack. Evaluate the 
          operator and push the result 
          back to the stack.
Step 3: When the expression is ended, 
        the number in the stack is the 
        final answer. 
```

#### Example to demonstrate working of the algorithm  : 

```
Expression: 2 3 1 * + 9 -

Character | Stack       |  Explanation
Scanned   | (Front to   |
          |  Back)      | 
-------------------------------------------
2           2             2 is an operand, 
                            push to Stack
3           2 3           3 is an operand, 
                            push to Stack
1           2 3 1         1 is an operand, 
                            push to Stack
*           2 3 (3*1)     * is an operator, pop
                          3 and 1 multiply them and
                          push result to Stack 
+           5 (2+3)       + is an operator, pop
                          2 and 3 add them and
                          push result to Stack                                 
9           5 9           9 is an operand, push 
                          to Stack
-           -4 (5-9)      - is an operator, pop
                          5 and 9 substract them and
                          push result to Stack

Result: -4
```

#### Implementation of the above Approach : 

```cpp
// C++ program to evaluate value of a postfix
// expression having multiple digit operands
#include <bits/stdc++.h>
using namespace std;

// The main function that returns value
// of a given postfix expression
int evaluatePostfix(string exp)
{
    // Create a Stack of capacity equal to expression size
    stack<int> Stack;

    // Scan all characters one by one
    for (int i = 0; exp[i]; ++i)
    {
        //if the character is blank space then continue
        if(exp[i] == ' ')continue;
        
        // If the scanned character is an
        // operand (number here),extract the full number
        // Push it to the Stack.
        else if (isdigit(exp[i]))
        {
            int num=0;
            
            //extract full number
            while(isdigit(exp[i]))
            {
                num = num * 10 + (int)(exp[i] - '0');
                i++;
            }
            i--;
            
            //push the element in the Stack
            Stack.push(num);
        }
        
        // If the scanned character is an operator, pop two
        // elements from Stack apply the operator
        else
        {
            int val1 = Stack.top();
            Stack.pop();
            int val2 = Stack.top();
            Stack.pop();
            
            switch (exp[i])
            {
                case '+': Stack.push(val2 + val1); break;
                case '-': Stack.push(val2 - val1); break;
                case '*': Stack.push(val2 * val1); break;
                case '/': Stack.push(val2/val1); break;
            }
        }
    }
    return Stack.top();
}

// Driver code
int main()
{
    string exp = "100 200 + 2 / 5 * 7 +";
    cout << evaluatePostfix(exp); // Output : 757
    return 0;
}
```

#### **Time Complexity** :  
The time complexity of the evaluation algorithm is **O(N)** where N is a number of characters in the input expression.
>Hence the time complexity is **O(N)** i.e. Linear Time 


#### **Space Complexity** :  
In the above approach, we are using stack to store the operands & operators. So the space required is **O(N)**.

>Hence, the space complexity is **O(N).** i.e. Linear Space

<br>

### Evaluation of Infix Expression :

Infix Expressions are harder for Computers to evaluate because of the additional work needed to decide precedence. Infix notation is how expressions are written and recognized by humans and, generally, input to programs. Given that they are harder to evaluate, they are generally converted to one of the two remaining forms. A very well known algorithm for converting an infix notation to a postfix notation is Shunting Yard Algorithm by Edgar Dijkstra. This algorithm takes as input an Infix Expression and produces a queue that has this expression converted to postfix notation. The same algorithm can be modified so that it outputs the result of the evaluation of expression instead of a queue. The trick is using two stacks instead of one, one for operands, and one for operators.

#### Algorithm : 
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

#### Implementation of the above Approach : 

```cpp
// CPP program to evaluate a given
// expression where tokens are
// separated by space.
#include <bits/stdc++.h>
using namespace std;

// Function to find precedence of
// operators.
int precedence(char op){
	if(op == '+'||op == '-')
	return 1;
	if(op == '*'||op == '/')
	return 2;
	return 0;
}

// Function to perform arithmetic operations.
int applyOp(int a, int b, char op){
	switch(op){
		case '+': return a + b;
		case '-': return a - b;
		case '*': return a * b;
		case '/': return a / b;
	}
}

// Function that returns value of
// expression after evaluation.
int evaluateInfix(string tokens){
	int i;
	
	// stack to store integer values.
	stack <int> values;
	
	// stack to store operators.
	stack <char> ops;
	
	for(i = 0; i < tokens.length(); i++){
		
		// Current token is a whitespace,
		// skip it.
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
			
			// right now the i points to
			// the character next to the digit,
			// since the for loop also increases
			// the i, we would skip one
			// token position; we need to
			// decrease the value of i by 1 to
			// correct the offset.
			i--;
		}
		
		// Closing brace encountered, solve
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
			// While top of 'ops' has same or greater
			// precedence to current token, which
			// is an operator. Apply operator on top
			// of 'ops' to top two elements in values stack.
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
			
			// Push current token to 'ops'.
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
	string expr = "100 * ( 2 + 12 ) / 14" ;
        cout << evaluateInfix(expr); // Output : 100
	return 0;
}
```
#### **Time Complexity** :  
It should be clear that this algorithm runs in linear time **O(N)** – each number or operator is pushed onto and popped from stack only once. 
>Hence the time complexity is **O(N)** i.e. Linear Time 


#### **Space Complexity** :  
In the above approach, we are using two stacks one to store the operands &  other to store operators. So the space required is **O(2*N)** that is equal to **O(N)**.

>Hence, the space complexity is **O(N).** i.e. Linear Space