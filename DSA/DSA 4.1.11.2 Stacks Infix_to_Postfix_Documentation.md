                                      INFIX TO POSTFIX

In this documentation we are going to learn how to convert infix notations to postfix notations. Let us first discuss what infix and postfix notations are:

Infix notation:- The infix notations are the notations in which the operators, that are  +,-,\ ,/ , are written between the operands. 

For example: - 6*3:- This is an infix notation. 

Postfix notation:- The postfix notations are the notations in which the operators are written after the operands.

For example: - 6 3 *  :- This is a postfix notation.

Conversion of Infix to postfix notation

We use stack for converting infix notations to postfix notations. We can make three columns named infix notation, Stack , Postfix notation. We will write each character one by one in the infix notation column. 
For example we have (2*3+4-1)

We will write it as:-

|  INFIX NOTATION  |  STACK  |  POSTFIX NOTATION  |
|  (               |         |                    |
|  2               |         |                    |
|  *               |         |                    |
|  3               |         |                    |
|  +               |         |                    |
|  4               |         |                    |
|  -               |         |                    |
|  1               |         |                    |
|  )               |         |                    |


The operands always stay in the same order with respect to one another. An operator will move only to the right with respect to the other operands. All the parentheses are removed. The operands present here are 2 ,3, 4 and 1. The operators present here are *,+,- . We have to keep in mind that we will be adding the operands in the Postfix notation column and operators in Stack one by one. 

Steps of conversion :-

1. Scan infix expression from left to right
2. Each time an operand is encountered, move it to the postfix notation column.
3. When a left bracket is encountered, push it into the stack. If the bracket encountered is right, pop all the operators until you encounter a left bracket and then discard that left bracket.
4. When an operator is encountered you have to push it onto the stack , before pushing it onto the stack you have to check its priority. If the priority is >= the current operator, pop the top operator and move it to postfix notation column. Continue until an operator of lower priority is encountered or until the stack is empty.
5. When the end of the expression is reached, you have to move all the characters left in the stack into the postfix notation column. As the characters are in the stack, you have to pop them in FIFO way.

  Priority table:-  

|  Operator  |  priority  |
|  1         |     ^      |
|  2         |  * ,/      |
|  3         |    +,-     |

We will be performing these steps on the above example we took for better understanding:-


|  INFIX NOTATION  |  STACK  |  POSTFIX NOTATION  |
|  (               |(        |                    |
|  2               |(        |2                   |
|  *               |(*       |2                   |
|  3               |(*       |23                  |
|  +               |(+       |23*                 |
|  4               |(+       |23*4                |
|  -               |(-       |23*4+               |
|  1               |(-       |23*4+1              |
|  )               |(-)      |23*4+1-             |


Steps:-

1. We got left parentheses so we pushed it onto the stack.
2. ‘2’ is an operand so we copied it to the postfix notation column.
3. ‘*’ is an operator so it got pushed in the stack. Now we have '(*'  in our stack.
4. ‘3’ is an operand so we copied it to the postfix notation column after 2, so now we have ‘2 3’ is the postfix notation.
5. In this step we got ‘+’ whose priority is less than ‘*’ so the ‘*’ gets popped from the stack as ‘+’ cannot hold it. After this our stack contains ‘(+’.
6. Here we got ‘4’ which is an operand so we will copy it in the postfix notation.
7. In this step we got ‘-‘ whose priority is same as ‘+’ operator, so ‘+’ will be popped and copied to the postfix notation. Now we have ‘(-‘ in our stack.
8. ‘1’ is an operand so it will be copied in the postfix notation.
9. In the end, we got right parentheses, so we are going to pop the operators until we encounter left parentheses.
10. At the end our stack is empty and we have no operators or operands left. The expression we got in the last is our postfix notation. 

Hence, 

Infix notation :- (2*3+4-1)
Postfix notation :- 23*4+1-

Here are some questions you can try for better understanding:-

1. 4/5+9-2                                                                   Ans:-   45/9+2-    
2. A+B*C/D                                                                   Ans:-   ABC*D/+  
3. A*(D-C)/S                                                                 Ans:-   ADC-*S/   
4. A+B*(C^D-E)                                                               Ans:-   ABCD^E-*+  

