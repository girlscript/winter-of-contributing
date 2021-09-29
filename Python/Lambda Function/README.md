# Lambda Function

Name-Bhaswati Roy

Domain-Python

Issue Number-574

Contribution Approach-Lambda functions are small functions which has a different way to define any function other than what we do in normal function definition. We do not use the 
"def" keyword instead we use the "lambda" keyword. It can take any number of arguments but can only work with one line of expression.
Lambda Function Statement->

(lambda arguments : expression) {general statement}

{example to return twice value of number passed as arguments}
x=lambda n : 2n 
      or
def func(n):
   return 2n

Lambda function is much more readable and is helpful when we work with huge lines of code specially when we do data science projects.
Also when we need a function with one line of expression then using the lambda function is much more feasible. 

We can even add lambda function inside another function and the job is done simply with the help of return statement.

def func(n):
   return lambda n : 2n
   
This function uses the return function to return the output value of lambda function

Lambda functions can also be used as the parameters of other functions. Thus all over it acts as an important tool for us.

https://drive.google.com/file/d/1DF13HbaJjDOIw8qBdP4Scsq03zEqI1Ao/view?usp=sharing

Documentation for the same can be found in the above file named `Lambda_Documentation.ipynb`
