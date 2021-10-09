# What is Enumerated Data Type ?
Enumerated Data Type is an *User-defined Type* which provides a way for assigning a set of names to the integral constants, thereby increasing the readability and comprehensibility of the code. The **enum** keyword automatically enumerates list of words by giving them values as 0, 1, 2 and so on.

The syntax of Enumeration is some what similar to the *Structures*. The General Form of the **enum** Statement is:
>**enum** *enum-type-name* { *enumeration list* } ;<br />

 __For example__ :- An Enumeration of Rainbow colours is <br />
 ```cpp
enum Rainbow { Violet, Indigo, Blue, Green, Yellow, Orange, Red };
```
***
The enumeration type name can be used to declare variables of its type. In C, an enumeration type name **Rainbow** is its tag name and it requires *enum* keyword for declaring **background** variable:
 ```c
enum Rainbow background;
```

 In C++, the tag name **Rainbow** becomes new type name for declaring **background** to be the variable :
 ```cpp
Rainbow background;
```
***
In C, type of **enum** defines to be **int**, whereas in C++, each enumerated type retains its unique type. This suggests that C++ does not allow **int** value to be automatically converted into **enum**.
 ```cpp
background = lightBlue; // allowed in both C and C++

background = 7; //allowed in C and error in C++
background = (Rainbow)7; // Now Its allowed in C++
```

However, an enumerated value can be assigned to integer data type:
```cpp
int colour = violet; //Rainbow type promoted to int
```
***
As we Know that by default **enum** assignes integer values to the list of words starting from 0. But, We can over-ride the default value by assigning integer values to the enumerators.
```cpp
enum Rainbow { Violet, Indigo, Blue, Green = 5, Yellow, Orange, Red }; 
```
So the values of enumerators become:
```cpp
Violet = 0
Indigo = 1
Blue = 2
Green = 5
Yellow = 6
Orange = 7
Red = 8
```
Note that subsequent initialised enumerators are one larger than the predecessor.
## Implementation of Enumerated Data Type

```cpp
/* C++ program for implementation Enumerated Data Type*/
    #include <bits/stdc++.h>
    using namespace std;

	enum Rainbow{
		Violet= 1, Indigo, Blue, Green , Yellow, Orange, Red 
	};

	int main() {
    	int i;
    	for (i=Violet; i<=Red; i++)      
      		cout<<i<<" ";
        
    return 0;
    }
```
## Output
 ```cpp
1 2 3 4 5 6 7
```
