# Postfix to Prefix Conversion

## What is Postfix?

This notation style is also known as **Reversed Polish Notation**. In this the operator is written after the operands. For example, **AB+**. This is equivalent to its infix notation **A + B**.

## What is Prefix?

This notation style is also known as **Polish Notation**. In this the operator is written ahead of operands. For example, **+AB**. This is also equivalent to its infix notation **A + B**.

## What is Infix?

This notation style is similar to how we generally write an expression. In this the operators are written between the operands. For example, **A + B**.

## Examples

![image](https://user-images.githubusercontent.com/78202785/141856282-72dcd26a-e33d-4a1a-b1df-0da81f254bc6.png)

## Algorithm for Postfix to Prefix using stack data structure:

- Create a stack of type string
- Scan the postfix expression from left to right, i.e. , start to end
- If the element is an **operand then push** it into the stack.
- If the element is an **operator then pop two operands** from the stack.
  Then concatenate them as \
  **String = Current Operator + Second Operand + First Operand**.\
  And Push the string back into the stack.
- Repeat the above steps until we reach the end of the postfix expression

## Program to convert Postfix to Prefix in Java :

```java
import java.util.*;

class PostfixToPrefix{

	// check if character is operator or not
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

	// function to Convert postfix to Prefix expression
    static String postToPre(String postfix_expression)
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

                // concatenating the operator and operands
                String temp = postfix_expression.charAt(i) + op2 + op1;

                // Push String temp back to stack
                s.push(temp);
            }

            // if symbol is an operand
            else {

                // push the operand to the stack
                s.push(postfix_expression.charAt(i) + "");
            }
        }

        // concatenate all strings in stack
        String result= "";
        for (String i : s){
            result = result + i;
        }
        // return the final result
        return result;
    }

    // Driver Code
    public static void main(String[] args)
    {
        String postfix_expression = "AB+C*DE-FG+*-";
        System.out.println("Postfix : " + postfix_expression);

        // Function call for Postfix To Prefix
        System.out.println("Prefix : " + postToPre(postfix_expression));
    }
}
```

## Output

![Postfix to Prefix output](https://user-images.githubusercontent.com/78202785/142046370-fdca823a-0329-44b7-847f-29635aa55983.PNG)

## Step by Step instruction for Postfix to Prefix

![Postfix to Prefix by Anuj Nandeshwar](https://user-images.githubusercontent.com/78202785/142045327-fd68f87c-ce31-4b89-a314-b3ff03f3a954.png)

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
