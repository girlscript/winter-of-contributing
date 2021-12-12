# Structure Padding in C
Structure padding is the concept in C in which one or more bytes are added and bytes added are empty , they are inserted  between the memory addresses to align the data in memory .
##  let's take an example : - 
Suppose we define a structure Car which have the name , model number and brand name .

1. Code :
```c
struct Car{
  char name;
  char brand;
  int model_no ;

} Car1;

// In this we also have an object Car1 .
```
2. Size of struct Car :
Now we calculate the size of the Structure car in which int and char datatype is used .
```c
struct Car{
 char name; // 1 byte
 char brand; // 1 byte
 int model_no; // 4 byte
}

// So total size of the structure is 6 bytes .
```
But this is wrong , the size of the structure is not 6 . Let's Discuss Why this is wrong .

3. Structure Padding : The processor in our laptop and Pc it don't read 1 byte at the time , it actually reads 1 word at a time or we can say in onr cycle . It also depends Upon the bit of the processor it is 32-bit or 64-bit .
- For 32-bit 
```
1 word = 4 bytes
``` 
- For 64-bit 
```
1 word = 8 bytes
``` 
### What's The Problem ?
- In one cycle 32-bit and 64-bit processor reads only 1 word and 1 word for 32-bit is of 4 byte and for 64-bit it is 8 byte , so in cycle it read only 4 and 8 byte size elements . 
- If we talk about the 32-bit processor it talk only 4 bit size word or element , means it can take 2 byte for both char datatypes and 2 byte for int datatype in structure car , But int takes the size of 4 so the full value of int can't be access in one cycle , CPU have to make two cycles so this is waste of CPU cycles .
- So in order to avoid this there are methos of Structure padding and using of #pragma pack ( 1 ) directive and using attribute .

## How the Structure Padding Done : -
If we have to archieve the structure padding , an empty row is created on the left and the variable " model_no " is shifted to the right by which the right side all 4 bytes are occupied by the variable " model_no " and at left side there are two variables " name " and " brand " and also 2 empty spaces . So by this the size of the Structure car is of 8 bytes . 
```c
#include<stdio.h>

struct car {

    char name;
    char Brand;
    int model_no;
};

int main(){

    struct car c1;
     
    printf(" The Size Of the Car Structure is : %d",sizeof(c1));

    return 0;
}
```
Output :

```
The Size Of the Car Structure is : 8 
```
## Now Changing the order of variable
```c
#include<stdio.h>

struct car {

    char name;
    int model_no;
    char Brand;
};

int main(){

    struct car c1;
     
    printf(" The Size Of the Car Structure is : %d",sizeof(c1));

    return 0;
}

/* In this case first the variable " name " is processed and take full left row of 1 byte of char and 3 bytes empty spaces 
Then variable " model_no " is processed and occupied space of 4 bytes 
At last the variable " brand " occupy 1 byte for char and 3 empty blocks . */
```
Ouput :
```
The Size Of the Car Structure is : 12 
```

## Using `#Pragma pack  (1)` and Attribute
The structural padding is an in-built process which is performed by the compiler , but sometimes we have to avoid structure padding as it increses the size of thestructure which is greater than its data members .

- Using #pragma pack(1) directive :
```c
#include<stdio.h>

#pragma pack(1)
struct parent {

    int x;
    char y;
    double z;
};

int main(){

    struct parent p;
     
    printf(" The Size Of the p is : %d",sizeof(p));

    return 0;
}
```
Output :
```
The Size Of the p is : 13
```
- Using the Attribute :
```c
#include<stdio.h>

struct parent {

    int x;
    char y;
    double z;
}__attribute__((packed)); ;  // This is the using of the attribute . 

int main(){

    struct parent p;
     
    printf(" The Size Of the p is : %d",sizeof(p));

    return 0;
}
```
Output :
```
The Size Of the p is : 13
```

Reference for code snippet : https://www.javatpoint.com/structure-padding-in-c
