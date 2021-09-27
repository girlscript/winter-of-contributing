# ```label``` Statement

Javascript ```label``` statement is a statement that can be utilised with ```break``` and ```continue``` statements. It's the practise of prefixing a statement with a referenceable identifier.

## Syntax:
```js
label_name:
// statements to be executed
```

# ```break``` Statement
Earlier you have seen ```break``` statement while learning ```switch``` statements, it's use to jump out of a current ```switch``` statement or simply you can say, it terminates the ```switch``` statement.

## Syntax:
```js
// statements
break;
```
__Example:__
```javascript
var a =0;
while(a<=5){
    if(a == 3){
        break; // will terminate out of loop
    }
    document.write("a = "+a+"<br>");
    a = a+1;
}
```
__Output:__
```
a = 0
a = 1
a = 2
```
__Explanation:__

Here the loop starts from ```a = 0``` and will print according to the given conditions, and will terminate out of the loop when a ```break``` statement is executed. Here, the loop will terminate when the value of a becomes equal to 3 after that break statement will be executed and the loop will terminate.

# ```continue``` Statement
```continue``` statement will skip one iteration of a loop when the given condition satisfies and it will continue with the next remaining iterations of a loop.

__Syntax:__
```
continue;
```
__Example:__
```javascript
var a =0;
while(a<=5){
    if(a == 3){
        continue; // will skip this iteration
    }
    document.write("a = "+a+"<br>");
    a = a+1;
}
```
__Output:__
```
a = 0
a = 1
a = 2
a = 4
a = 5
```
__Explanation:__
Here when the value of ```a``` becomes equal to 3 then it will skip one iteration and then continue with next iteration till condition satisfies.

# ```label``` statement with ```continue``` 

When you use ```label``` statement with ```continue``` you have to use the following syntax.

__Syntax:__
```js
// iterative statements
continue label_name;
```
__Example:__
```javascript
let a,b;
loop1:
for(a=0;a<5;a++){
    loop2:
    for(b=0;b<5;b++){
        if(a==2 && b==2){
            continue loop1;
        }
        document.write("a = "+a+" b = "+b+"<br>");
    }
}
```
__Output:__
```
a = 0 b = 0
a = 0 b = 1
a = 0 b = 2
a = 0 b = 3
a = 0 b = 4
a = 1 b = 0
a = 1 b = 1
a = 1 b = 2
a = 1 b = 3
a = 1 b = 4
a = 2 b = 0
a = 2 b = 1
a = 3 b = 0
a = 3 b = 1
a = 3 b = 2
a = 3 b = 3
a = 3 b = 4
a = 4 b = 0
a = 4 b = 1
a = 4 b = 2
a = 4 b = 3
a = 4 b = 4
```
__Explanation:__

In this example when the given condition i.e, ```a==2 && b==2``` satisfies the continue statement will be executed that means it will terminates the current iteration of loop1(label) and continue with the next iterations.

# ```label``` statement with ```break```

When you want to use ```label``` with ```break```, you have to use the following syntax.

__Syntax:__
```js
// iterative statements
break label_name;
```
__Example:__
```javascript
let a,b;
loop1:
for(a=0;a<5;a++){
    loop2:
    for(b=0;b<5;b++){
        if(a==2 && b==2){
            break loop1;
        }
        document.write("a = "+a+" b = "+b+"<br>");
    }
}
```
__Output:__
```
a = 0 b = 0
a = 0 b = 1
a = 0 b = 2
a = 0 b = 3
a = 0 b = 4
a = 1 b = 0
a = 1 b = 1
a = 1 b = 2
a = 1 b = 3
a = 1 b = 4
a = 2 b = 0
a = 2 b = 1
```
__Explanation:__

Here the when the given condition i.e, ```a==2 && b==2``` satisfies, the ```break``` statement will be executed and it will terminate the loop1(labeled) and if loop1 terminates obviously inner loop(loop2) will too get terminate.

# Difference between ```break``` & ```continue```
The basic difference between them is that:

1. ```break``` statement simply terminates the loop whenever it executes.
2. ```continue``` statement only skips the iteration of that loop when it executes and it continues the next iteration of the loop as per the condition provided.

# Conclusion

Congratulation! You've successfully learned about ```label```, ```continue```, ```break``` statements.

Keep exploring JavaScript :wave:

Contributor : [Abhinandan Adhikari](https://github.com/AbhinandanAdhikari) :heart:
