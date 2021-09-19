# 💻 Exercises

## Functions :
Functions are the building blocks of readable, maintainable, and reusable code. A function is a set of statements to perform a specific task.
### Example Question and solution:  
Find the sum of 2 numbers ?
```

 int sum(int a, int b){  
     int result;  
     result = a+b;  
     return result;  
} 
void main() {  
var c = sum(30,20);  
print("The sum of two numbers is: ${c}");  
}  
```
From the above example we can conclude that, sum is the name of the function, and in 
main function we are calling the function in the name of c and printing it.
##### Questions:
1. Find the factorial of a number by getting the input from the user.
```
Hint: To get input from the user
    print("Enter your favourite number:");
    int? n = int.parse(stdin.readLineSync()!);
    print("The input from the user is $n");
```
2. Find the number is palindrome or not using function.
3. Write a function to find out if a number is prime or not.
