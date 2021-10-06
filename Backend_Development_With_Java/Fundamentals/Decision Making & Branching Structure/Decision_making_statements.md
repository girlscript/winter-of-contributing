
# DECISION MAKING STATEMENTS

To execute a particular set of statements according to a particular condition, a selective statement is required. Here the statements which are used to perform these tasks are known as Decision Making Statements.

Decision statements are also known as conditional statement or branching control.

There are basically three ways to perform Decision making in a program.
1.	If Statements
2.	If-else Statements
3.	Conditional Operators

## IF STATEMENTS

If statement is the widely or can say one of the most extensively used decision making statement. 

Syntax:- 

        If(condition)
        Statement;

In it a set of statements is executed when the condition is true, otherwise skipped. 

- Some examples of if statements:-

1.	Comparison of two variables
        
        if(x>y) 
        cout<<”x is greater than y”;
2.	Comparison with literal
        
        if(grade==’A’)
        cout<<”Outstanding”;
3.	Testing mathematical condition
        
        if(a)
        cout<<”a is true”;
4.	Testing truth value of a condition

        if((x>=0)&&(x<=9))
        Cout<<”Decimal Digits”;

***Points to remember***

-	It is rare to use a floating point number to control a conditional statement because this slows execution time considerably.

-	== must be used for comparison in the expression of if condition, if you use (=) the expression will always return true, because it performs assignment not comparison.

## IF-ELSE STATEMENT

The if-else statement executes one of two alternative statements, according to the specific condition. 

Syntax:- 

        If(condition)
        Statement 1;
        Else
        Statement 2;

When the if condition evaluates as true, statement 1 is executed and else is ignored. When the if condition evaluates as false, statement 1 is ignored and statement 2 is executed.

### NESTED IF STATEMENT

Nested if statements are those statements where if or if-else statements are placed in other if or else statements.

1.	If-else inside both if and else part of statements
	
        if(condition 1)
        {
        if(condition 2)
        Statement 1;
        else
        Statement 2;
        }
        else
        {
        if(condition 3)
        Statement 3;
        else
        Statement 4;
        }

2.	If-else inside only if part of statements
	
        if(condition 1)
        {
        if(condition 2)
        Statement 1;
        else
        Statement 2;
        }
        else
        {
        Statement 3;
        }

3.	If-else inside only else part of statements
	
        if(conditon1)
        {
        Statement  1;
        }
        else
        {
        if(condition 2)
        Statement 2;
        else
        Statement 3;
        }

4.	If inside another if statements
	
        if(condition 1)
        {
        Statement 1;
        If(condition 2)
        {
        Statement 2;
        }
        }

### IF-ELSE-IF STATEMENT

The if-else-if statement executes one or more than two alternatives conditional statements according to the specific conditions.

Syntax:- 

        If(condition 1)
        Statement 1;
        Else if(condition 2)
        Statement 2;
        :
        :
        :
        Else 
        Statement n;

Here if the condition 1 is true then statement 1 will be executed, else, if condition 2 is true then statement 2 will be executed and so on. If all the conditions are false then statement under the else part will be executed.

### SWITCH STATEMENT

This statement is an alternative to if-else-if. As this statement cause a particular group of statements to be chosen from several available groups.
Switch statement is a multiway branching statements.

Syntax:-

        Switch(expression)
        {
        Case 1:
        Statement 1;
        Break;
        Case 2:
        Statement 2;
        Break;
        :
        :
        :
        Case n:
        Statement n;
        Break;
        Default:
        Statement Default;
        }

***Points to remember while using switch statement:***

-	The expression used in a switch statement must have an integral or a char type or be an enumerated type.

-	You can have any number of case statements within a switch. If none of the case expressions match with the switch expression, default case will be executed.

-	The constant expression for a case must be the same data type as the variable in the switch.

-	Every case needs to contain a break statement because when it is encountered the control jumps to the line of code following the switch statements (i.e., outside the body of switch statement). Because if a case statement doesn’t include a break statement, then the control continues right on the next case statement until either a break is encountered or end of switch is reached. This situation is called fall through.

EXAMPLES:-

- Example of if-else-if statement:-

Write a program to find the greatest among three numbers.

        #include<iostream.h>
        #include<conio.h>
        void main()
        {
        int a=10, b=20, c=15;
        clrscr();
        if(a>b && a>c)
        cout<<"a is the greatest number"
        else if(b>c)
        cout<<"b is the greatest number";
        else
        cout<<"c is the greatest number";
        getch();
        }

Output:-

        b is the greatest number

- Example of Switch statement:-

Write a program to enter a number and display it in form of alphabet.

        #include<iostream.h>
        #include<conio.h>
        void main()
        {
        int number;
        cout<<”Enter a number”;
        cin>>number;
        switch(number)
        {
        case 1:
        cout<<”ONE”;
        break;
        case 2:
        cout<<”TWO”;
        break;
        case 3:
        cout<<”THREE”;
        break;
        default:
        cout<<”Number doesn’t exist”;
        }
        getch();
        }

OUTPUT:-

        Enter a number 2
        TWO
  
## CONDITIONAL OPERATOR

Conditional operators is also used as a decision making in a program. It return one value if condition is true and returns another value is condition is false.

It is also known as a ternary operator.

        expression 1 ? expression 2 : expression 3
        
If expression 1 is true then expression 2 will be exceuted else expression 3 will be exceuted on false condition.

HERE YOU GOT IT!!!!! all the general perspective regard decision making.
