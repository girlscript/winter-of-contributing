# Recursion


## <b>What is Recursion ?</b>
A function which calls itself is called <i>Recursive function</i>, and this process is known as <i>Recursion</i>.


## <b> Working of Recursion </b>
~~~
void Recursion(){
    ...
    Recursion();        //function calling itself
    ...
}
int main(){
    Recursion();
}
~~~
![working of recursion](https://i.imgur.com/3dCcvI1.jpg)

***ref : Google Images***

## <b>Types of Recursion </b>
*  **Tail Recursion** - A function that calls itself, and doesn't perform any task after function call, is known as tail recursion.
```
void funct(int n){
    if(n>0){
        cout<<n;
        funct(n-1);    //there is no statement after the function call
    }
}
int main(){
    int n=10;
    funct(n);

}
```
*  **Head Recursion** - A function that calls itself , and doesn't perform any task before the function call ,is known as head recursion .
```
int funct(int n){
    if(n>0){
        funct(n-1);    //there is no statement before function call
        int x=10;
        return x++;  
    };
}
int main(){
    int x=10;
    cout<<funct(n);
}
```
* **Nested Recursion** - Recursion inside recursion is known as nested recursion.
```
int fun(int n){
    if (n>100){
        return (n-10);
    }else{
        return fun(fun(n+11));     //this is nested recursion
    }
}


int main(){
    int x=95;
    cout <<fun(x);

}
```
* **Direct and Indirect Recursion** - A function fun is called direct recursive if it calls the same function fun. On the other hand, indirect recursion can be used to call more than one method or function with the help of other functions.

    ***example of Indirect Recursion*** :-
```
#include<iostream>
using namespace std;
int funB(int n);
int funA(int n){
    if (n>0){
        cout<<n<<endl;
        funB(n-1);   
    }
}
int funB(int n){
    if (n>1){
        cout << n <<endl;
        funA(n/2);
    }
}
int main(){
    int x=20;
    funA(x);
}
```

## <b> Examples of Recursion </b>
## Example-1 : Factorial Function Using Recursion 
What is Factorial ?
- Factorial, in mathematics, the product of all positive integers less than or equal to a given positive integer and denoted by that integer and an exclamation point. 
- Thus, factorial seven is written 7!, meaning 1 × 2 × 3 × 4 × 5 × 6 × 7. Factorial zero is defined as equal to 1.

```
#include <iostream>
using namespace std;

int fac(int);

int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = fac(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int fac(int n) {
    if (n==0 || n==1) {
        return 1;
    } else {
        return n * fac(n - 1);
    }
}

```
OUTPUT
```
Enter a non-negative number:5
Factorial of 5 = 120
```

Working :

![factorial working](https://i.imgur.com/0Ev2nwc.png)

***ref : Google Images***

## Example-2 : Tower of Hanoi 
What is Tower of Hanoi ?
- Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules: -
  - 1. Only one disk can be moved at a time.
  - 2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
  - 3. No disk may be placed on top of a smaller disk.

  ![tower of Hanoi](https://i.imgur.com/F1K1T0C.png)  

     ***ref : Google Images***

Program for Tower of Hanoi Using Recursion :-
```
#include<iostream>
using namespace std;
void TOH(int n,int A, int B ,int C){
    if (n>0){
        TOH(n-1 ,A,C,B);
        cout<<"("<<A<<","<<C<<")";
        TOH(n-1,B,A,C);
    }
}
int main(){
    TOH(3,1,2,3);
}
```
OUTPUT
```
(1,3)(1,2)(3,2)(1,3)(2,1)(2,3)(1,3)
```

## **Advantages and Disadvantages of Recursion Over Iterative Functions**
### Advantages :
* Recursion adds clarity and reduces the time needed to write and debug code.
* Recursion is better at tree traversal and Tower of Hanoi.
### Disadvantages :
* It takes a lot of stack space compared to an iterative program
* It can be slow.
* It can be more difficult to debug compared to an equivalent iterative program


### ***Refrences :***
* [Geeks for Geeks](geeksforgeeks.org)
* [Javatpoint](javatpoint.com)
* [Medium](medium.com)
