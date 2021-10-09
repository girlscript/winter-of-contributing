# Python Program to find factorial of a number using Recursion
# Written by Lisha Ray

# Function to calculate Factorial of a number
def factorial(number):
    if number == 1:
        return 1
    else :
        return factorial(number-1) * number

number=int(input("Enter a number = "))
print("Factorial of number = ",factorial(number)) 

#Output:
#Enter a number = 3
#Factorial of number = 6
