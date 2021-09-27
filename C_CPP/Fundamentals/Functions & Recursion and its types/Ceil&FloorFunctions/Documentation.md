# CEIL FUNCTION IN C++

## DEFINITION: 
 Ceil() function computes the smallest integer value which is equal to or greater than the argument given.
* Defined in **cmath** header file. 

***

## SYNTAX:  
ceil(double a)   
--where a is the floating point value.
*** 
 * *Now, what will the ceil function return ?* 🤔  
 --->So, the answer is, Ceil function will return the smallest positive integer which is equal to or greater than the argument given.  
 ***
 * *You must be wondering what will this function return if we take a number which is already an integer😮 , will we get an error?*  
--->Well, there will be no change. The integer value will be returned and no error will be there.
```
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cout<<ceil(342);
}
```
### OUTPUT:
```
342
```
*** 
* *What if we pass null as an argument?*   
--->Well, it will return 0 and not an error!😏
```
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cout<<ceil(NULL);
}
```
### OUTPUT:
```
0
```
***
 * Now, there are some prototypes for ceil().  
 --->Like the ceil function, they are also defined in the cmath header file.  
 -->Prototypes for ceil() include the following:
 ```
float ceil(float a);
double ceil(double a);
long double ceil(long double a);
 ```
 We will look into examples in the implemenation file.
 ***
 # FLOOR FUNCTION IN C++

## DEFINITION:
Floor() function computes the largest possible integer which is equal to or less than the argument given.
* Defined in **cmath** header file.
***
## Syntax:
floor(double a);  
--where a is the floating point value.
***
* *Now, what will the floor function return ?* 🤔  
 --->So, the answer is, Floor function will return the largest positive integer which is equal to or less than the argument given. 
 ***
 * *You must be wondering what will this function return if we take a number which is already an integer😮 , will we get error?*  
--->Well, same like in the ceil function, there will be no change. The integer value will be returned and no error will be there!
*** 
* *What if we pass null as an argument* ❓     
--->Similar to the ceil function, it will return 0 and not an error!😏
***
 * There are some prototypes for floor().  
 --->Like the ceil function, they are also defined in the cmath header file.  
 -->Prototypes for ceil() include the following:
 ```
float floor(float a);
double floor(double a);
long double floor(long double a);
 ```
 We will look into examples in the implemenation file.
 *** 

## DIFFERENCE IN CEIL(), FLOAT() AND ROUND()
* Round() function will return the nearest integer.If a number is exactly half way between two integers, than round() will always round **up**.
* The ceil() function is the opposite of floor() function.
* Floor() function allows us to round a number **down** its nearest integer whereas ceil() function allows us to round **up** to its nearest integer.

Look for the example in the implementation file.



