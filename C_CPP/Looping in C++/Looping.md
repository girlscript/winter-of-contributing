# Looping in C++ #

There must be many times that we need to execute a certain block many number of times that is the statement gets executed sequentially.
The first line of the function executed first followed by second, third and so on until the condition gets satisfied.
Just like if we need to print a statement 200 times then instead of writing cout statements 100 times we would just apply a loop to it and Hurrah!!! we are done.
 By use of loop we can make the program more efficient and less time consuming.
 It also decreases its space and time complexity.
 ### We have three kind of loop:
 * #### FOR 
 * #### WHILE
 * #### DO-WHILE
 
 
### For loop:-
 The syntax of for-loop is:
```C++
for (initialization; condition; update) 
{
    // body of-loop 
}
```
the first step is initialization i.e initializing a variable with a certain value and it is executed only once
the second step is condition i.e we provide condition to the loop structure and if condition is true the control goes inside the block to execute the body of the loop.
If false loop gets terminated.
the third step is updation i.e it updates the value of initialized variable and again check condition.

Let us learn its functioning with the help of a code snippet:
#### Program to print sum from 1 to 5:

```C++
#include<iostream.h>

using namespace std;
{
    int main()
    {
        int sum=0;
        for(int i=1;i<=5;i++)
        {
            sum sum+i;
        }
        cout<<"sum is"<<sum;
        return 0;
    }
}

```
### Output:
sum is 15


| Iteration | Variable | i<=5    | Action  |
| -------------- | :--------- | ----------: | :----------: |
| 1st   | i=1| true| sum is added to 1|
| 2nd| i=2| true| sum is added to 3|
|3rd|i=3| true| sum is added to 6|
|4th|i=4| true| sum is added to 10|
|5th| i=5| true| sum is added to 15|
|6th |i=6| false| loop is terminated|

### Program to print product of first n natural numbers.
```c++
#include<iostream.h>

using namespace std;
int main()
{
    int prod=1;
    int n=0;
    cout<<"enter a number";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        prod=prod*i;
    }
    cout<<endl<<"product is"<<prod;
    return 0;
}
```

### Output:
enter a number
3
product is 6
 
 ### This is the basic structure of for loop and this is how for loop actually works.
 
 ### While loop:-
 
 The syntax of the while loop is:-
```c++
while (condition) {
    // body of the loop
    update
}
 ```
 Here the initialization is done before starting the while loop.
 the condition is checked then, if it comes true the control moves inside loop and execute further statements after which updation occurs then again condition is checked and so on. 
 If condition comes false, the loop gets terminated.
 
 Let us learn its functioning with the help of code snippet:-
 
 ### Program to print the numbers from 1 to 10.
 
 ```c++
 #include<iostream.h>
 
 using namespace std;
 int main()
 {
     int i=1;
     while(i<=6)
     {
         cout<<endl<<i;
         i++;
     }
     return 0;
 }
 ```
 ### Output:
 1
 2
 3
 4
 5
 6
 
 | Iteration | Variable | i<=6    | Action  |
| -------------- | :--------- | ----------: | :----------: |
| 1st   | i=1| true| 1 is printed|
| 2nd| i=2| true| 2 is printed|
|3rd|i=3| true| 3 is printed |
|4th|i=4| true| 4 is printed |
|5th| i=5| true| 5 is printed |
|6th |i=6| true| 6 is printed|
|7th| i=7| false| loop is terminated|

### Program to print the even numbers from to 20.


```c++
#include<iostream.h>

using namespace std;
int main()
{
    int i=1;
    while(i<=20)
    {
        if(i%2==0)
        {
            cout<<endl<<i;
        }
        i++;
    }
    return 0;
}
```

### Output:

2
4
6
8
10
12
14
16
18
20
### This is the basic structure of while loop and this is how while loop works.


### do-while loop:-

the syntax of do-while loop is:
```c++
do {
  // code block to be executed
}
while (condition);
```
This loop will execute the code block once, before checking if the condition is true, then it will continue the loop until condition is true.

### program to print numbers to 1 to 6
```c++
#include<iostream.h>

using namespace std;
int main()
{
    int i = 1; 
    do {
        cout << endl<<i;
        i++;
    }
    while (i <= 7);
    
    return 0;
}
}
```

### Output:
1
2
3
4
5
6

| Iteration | Variable | i<=6    | Action  |
| -------------- | :--------- | ----------: | :----------: |
| 1st   | i=1| true| 1 is printed|
| 2nd| i=2| true| 2 is printed|
|3rd|i=3| true| 3 is printed |
|4th|i=4| true| 4 is printed |
|5th| i=5| true| 5 is printed |
|6th |i=6| true| 6 is printed|
|7th| i=7| true| 7 is printed|
|8th|i=8|false|loop is terminated|


### Program to print factorial of n numbers.
```c++
#include<iostream.h>

using namespace std;

    int main()
    {
        int n=0;
        cout<<endl<<"enter a number";
        cin>>n;
        int prod=1;
        do
        {
            prod=prod*n;
            n--;
        }
       while(n!=0);
       cout<<endl<<"factorial is"<<prod;
       return 0;
    }
```
### Output:
enter a number
4
factorial is 24

### This is the basic structure of do-while loop and this is how do-while loop works.


## INFINITE FOR LOOP:
If the condition of for loop is always true, it runs continuously. For example,
```c++
for(int i = 1; i > -1; i++) {
    // block of code
}
```

## INFINITE WHILE LOOP:
If the condition of a while loop is always true, the loop runs for infinite number of  times. For example,
```c++
while(true) {
    // body of the loop
}
```

### This is the overall functioning of for, while , do-while loop.
### Hope you have enjoyed it....
### HAPPY PROGRAMMING!!