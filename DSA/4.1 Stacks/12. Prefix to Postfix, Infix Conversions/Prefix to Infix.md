# Prefix to Infix Conversion

## What is Prefix?

This notation style is also known as **Polish Notation**. In this the operator is written ahead of operands. For example, **+AB**. This is equivalent to its infix notation **A + B**.

## What is Infix?

This notation style is similar to how we generally write an expression. In this the operators are written between the operands. For example, **(A + B)**.\
**Written as operand1 + operator + operand2**.

## Examples

![image](https://user-images.githubusercontent.com/78202785/141856282-72dcd26a-e33d-4a1a-b1df-0da81f254bc6.png)

## Algorithm for Prefix to Infix using stack data structure:

- Create a stack of type string
- Scan the Prefix expression from right to left, i.e. ,in reverse order.
- If the element is an **operand then push** it into the stack.
- If the element is an **operator then pop two operands** from the stack.
  Then concatenate them as (Infix Style) \
  **String = First Operand + Current Operator + Second Operand**. \
  And Push the string back into the stack.
- Repeat the above steps until we reach the end of the Prefix expression

## Program to convert Prefix to Infix in Java :

```java
import java.util.*;

class PrefixToInfix{

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

	// function to Convert Prefix to Infix expression
    static String preToInfix(String prefix_expression)
    {
        Stack<String> s = new Stack<String>();

        // length of expression
        int length = prefix_expression.length();

        // reading from right to left
        for (int i = length - 1; i >= 0; i--) {

            // check if symbol is operator
            if (isOperator(prefix_expression.charAt(i))) {

                // if it is then pop two operands from stack
                // store first operand in op1 variable then pop
                String op1 = s.peek();
                s.pop();
                // store second operand in op2 variable then pop
                String op2 = s.peek();
                s.pop();

                // concatenating the operator and operands in Infix style
                String temp = "(" + op1 + prefix_expression.charAt(i) + op2 + ")";

                // Push String temp back to stack
                s.push(temp);
            }

            // if symbol is an operand
            else {

                // push the operand to the stack
                s.push(prefix_expression.charAt(i) + "");
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
        String prefix_expression = "-*+ABC*-DE+FG";
        System.out.println("Prefix : " + prefix_expression);

        // Function call for Prefix to Infix
        System.out.println("Infix : " + preToInfix(prefix_expression));
    }
}
```

## Output

![Prefix to Infix Output](https://user-images.githubusercontent.com/78202785/142072854-a4947639-69ee-47e1-b027-2b618caf0643.PNG)

## Step by Step instruction for Prefix to Infix

![Prefix to Infix Conversion by Anuj Nandeshwar](https://user-images.githubusercontent.com/78202785/142072789-005d59cf-389c-4345-b13f-863b21df28be.png)

## Time Complexity

**Time Complexity:** As we traverse the whole input string once and the stack operations require constant time, the overall time complexity is O(n), n is the length of Prefix Expression.

## Space Complexity

**Space Complexity:** O(n) as we use space to store each of the n characters of the string.

## References

https://www.tutorialcup.com \
https://www.tutorialspoint.com \
https://www.geeksforgeeks.org \
https://algorithms.tutorialhorizon.com \
https://algorithms.tutorialhorizon.com
