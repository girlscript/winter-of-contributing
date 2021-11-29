# Postfix to Infix Conversion

## What is Postfix?

This notation style is also known as **Reversed Polish Notation**. In this the operator is written after the operands. For example, **AB+**. This is equivalent to its infix notation **A + B**.

## What is Infix?

This notation style is similar to how we generally write an expression. In this the operators are written between the operands. For example, **A + B**.

## Examples

![image](https://user-images.githubusercontent.com/78202785/141856282-72dcd26a-e33d-4a1a-b1df-0da81f254bc6.png)

## Algorithm for Postfix to Infix using stack data structure:

- Create a stack of type string
- Scan the postfix expression from left to right, i.e. , start to end
- If the element is an **operand then push** it into the stack.
- If the element is an **operator then pop two operands** from the stack.
  Then concatenate them as (Infix style) \
  **String =  Second Operand + Current Operator + First Operand**.\
  And Push the string back into the stack.
- Repeat the above steps until we reach the end of the postfix expression

## Program to convert Postfix to Infix in Java :

```java
import java.util.*;

class PostfixToInfix{

	// check if character is operator or not
	static boolean isOperator(char x)
	{

		switch (x) {
		case '+':
		case '-':
		case '/':
		case '*':
		case '^':
			return true;
		}
		return false;
	}

	// function to Convert Postfix to Infix expression
    static String postToInfix(String postfix_expression)
    {
        Stack<String> s = new Stack<String>();

        // length of expression
        int length = postfix_expression.length();

        // reading from left to right 
        for (int i = 0; i < length; i++) {

            // check if symbol is operator
            if (isOperator(postfix_expression.charAt(i))) {

                // if it is then pop two operands from stack
                // store first operand in op1 variable then pop
                String op1 = s.peek();
                s.pop();
                // store second operand in op2 variable then pop
                String op2 = s.peek();
                s.pop();

                // concatenating the operator and operands in Infix style
                String temp = "(" + op2 + postfix_expression.charAt(i) + op1 + ")";

                // Push String temp back to stack
                s.push(temp);
            }

            // if symbol is an operand
            else {

                // push the operand to the stack
                s.push(postfix_expression.charAt(i) + "");
            }
        }
        // store final String in ans
        String ans = s.pop();

        // return the final String expression ans
        return ans;
    }

    // Driver Code
    public static void main(String[] args)
    {
        String postfix_expression = "AB+C*DE-FG+*-";
        System.out.println("postfix : " + postfix_expression);

        // Function call for Postfix to Infix
        System.out.println("Infix : " + postToInfix(postfix_expression));
    }
}
```

## Output

![Postfix to Infix Output](https://user-images.githubusercontent.com/78202785/143795127-a4148d00-ac46-426d-8e36-f43474fade8f.PNG)



## Step by Step instruction for Postfix to Infix

![Postfix to Infix by Anuj Nandeshwar](https://user-images.githubusercontent.com/78202785/143799600-75a9af3f-438f-4a9b-b487-aaf9bb46c703.PNG)




## Time Complexity

**Time Complexity:** As we traverse the whole input string once and the stack operations require constant time, the overall time complexity is O(n), n is the length of Postfix Expression.

## Space Complexity

**Space Complexity:** O(n) as we use space to store each of the n characters of the string.

## References

https://www.tutorialcup.com \
https://www.tutorialspoint.com \
https://www.geeksforgeeks.org \
https://algorithms.tutorialhorizon.com \
https://algorithms.tutorialhorizon.com
