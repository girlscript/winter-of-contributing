# Pointers and Functions

In C/C++ programming we can pass and return pointers just like normal variables.

Here are some ways in which pointers and functions can be used in C/C++.

## Pointers as function arguments
<hr>

We can use pointers in functions such that the data passed to the function is reflected back in the main program.

#### Following is a simple program to swap two numbers which implements this:

```c++
#include<iostream>
using namespace std;
void swap(int *a,int *b){
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
}
int main(){
    int a = 10,b = 20;
    cout<<"The numbers before swapping are:"<<a<<" and "<<b<<endl;
    swap(&a,&b);
    cout<<"The numbers after swapping are:"<<a<<" and "<<b<<endl;
    return 0;
}
 ```
### Output
```
The numbers before swapping are:10 and 20
The numbers after swapping are:20 and 10
```

## Functions returning Pointer
<hr>

We can also return pointers to the main code with the help of functions.



#### Program illustrating this concept:

```c++
#include<iostream>
using namespace std;
int* func(){
    static int i = 10;
    return (&i);
}

int main(){
    int *p;
    p = func();
    cout<<"The value returned by function: "<<*p; // p stores the adress returned by the function. Hence to print it's value we derefernce it.
    return 0;
}
```
### Output
```
The value returned by function: 10
```


## Pointer to Function variables
<hr>

We can use a pointer to point to a function also as functions are also stored in memory with a specific address.

### Let us look at an example:

```c++
#include<iostream>
using namespace std;
void display(); // Prototype
int main(){
    void (*ptr)(); // declare a pointer to a function
    ptr = display();
    (*ptr)(); // invokes the pointer display
    return 0;
}

void display(){
    cout<<"Hello World";
}
```
### Output :
```
Hello World
```