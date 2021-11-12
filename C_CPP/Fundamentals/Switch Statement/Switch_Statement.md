# SWITCH STATEMENT

- C/C++ provides an inbuild decision structure called switch for **multiway** selection.
- Swicht decision structure is made up of four C/C++ keywords namely **switch**, **case**, **default** and **break**.

## Syntax 
```cpp
switch(expression){
    case value1:
        [action block]
        break;
    case value2:
        [action block]
        break;
    case value3:
        [action block]
        break;                
    case value4:
        [action block]
        break;
    default:
        [action block]
        break;        
}
```
In switch statement we put values only **number** or **charcter.**

Examples :-
```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        printf("\n Addition ->1\n Subtraction ->2\n Multiplication ->3\n Division ->4\n Exit -> 0\n");
        printf("Inter your choice : ");
        int choice;
        scanf("%d",&choice);
        float num1,num2;
        switch(choice){
            case 1:
                cout<<"Enter the two number :";
                cin>>num1>>num2;
                printf("Additon of two number %f and %f is %f ",num1,num2,num1+num2);
                break;
            case 2:
                cout<<"Enter the two number :";
                cin>>num1>>num2;
                printf("Subtraction of two number %f and %f is %f ",num1,num2,num1-num2);
                break;
            case 3:
                cout<<"Enter the two number :";
                cin>>num1>>num2;
                printf("Multiplication of two number %f and %f is %f ",num1,num2,num1*num2);
                break;
            case 4:
                cout<<"Enter the two number :";
                cin>>num1>>num2;
                printf("Division of two number %f and %f is %f ",num1,num2,num1/num2);
                break;
            case 0:
                exit(0);
                break;
            default: 
                cout<<"Please Inter wright choice";
                break;
            }
        }
    return 0;
}
```

