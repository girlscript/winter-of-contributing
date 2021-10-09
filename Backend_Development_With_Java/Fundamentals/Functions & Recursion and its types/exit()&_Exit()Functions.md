# exit() Function in C++
* exit is a built-in function which terminates the on going program.
* This function is defined in **cstdlib** header file.
* exit is a type of jump statement in C++.
* It takes an integer as an argument.
***
## SYNTAX:  
```c++
exit(exit_code); 
```
- where exit code is defining exit status.  
For example:
```c++
exit(0)
```
* When the program terminates,this value gets returned to the operating system and not to the caller.
* Remaining code will not be executed after this function is executed.
* Objects that have static storage duration, are dismantled and files created by tmpfile function are removed when exit function executes.

successful termination: exit code of 0/ EXIT_SUCCESS  
unsuccessful termination: exit code of 1/ EXIT_FAILURE 


- exit(0) indicates a clean exit without any error.  
- exit(1) indicates an error and that's why the program is terminating.  
--->Both report the status of termination of the program to the host environment.  
Any other integer (except 0) will also indicate unsuccessful termination. 
***
```c++
#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int numerator = 50;
    int denominator;
    cout<<"Enter denominator: ";
    cin>>denominator;
    
    if (denominator == 0) {
        cout << "Denominator is 0.Exit failure!"<< endl;
        exit(1);   // EXIT_FAILURE
    }
    cout << "Exit success!"<<" "<<numerator << "/" << denominator << " = " << numerator/denominator << endl;
    
    exit(0);   // EXIT_SUCCESS
    return 0;
}
```
### OUTPUT:
* if value entered by user = 0
```c++
Enter denominator: 0
Denominator is 0.Exit failure!
```
### OUTPUT:
* if value entered by user is not equal to 0
```c++
Enter denominator: 20
Exit success! 50/20 = 2
```
# _Exit() Function in C++
* This function was introduced in C11.
* Just as in exit() function,_Exit() function is a built-in function which terminates the going on program.
* This function is also defined in **cstdlib** header file.
***
### SYNTAX:
``` c++
_Exit(exit_code);
```
---where exit code is defining exit status.  
For example:
```c++
_Exit(0)
```
***
* Exit function terminates the program without cleaning the resources.
* This function returns the control to the host environment.
* **You must be wondering that what is the need for this when we have exit() function to terminate the process?**  🤔  
--->So, the answer is: While using exit() function, there is some cleanup function like buffer removal...but _Exit() function will not perform any buffer removal or any type of cleanup and will terminate the program immediately.
* Just like the exit function, remaining code will not be executed after this function is executed.
```
successful termination: exit code of 0/ EXIT_SUCCCESS
unsuccessful termination: exit code of 1/ EXIT_FAILURE 
```
- _Exit(0) indicates a clean exit without any error.  
- _Exit(1) indicates an error and that's why the program is terminating.  
--->Both report the status of termination of the program to the host environment.  
Any other integer (except 0) will also indicate unsuccessful termination.
```c++
#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    printf("HEY! I am using _EXIT function");
    _Exit(0);
    return 0;
}
```
### OUTPUT:
```c++
(no output)
```
**Wondering why there is no output? Look at this example:**
```c++
#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int n;
    cout<<("Enter value of n: ");
    cin>>n;
    if(n==45){
        printf("Exitting with exit function!");
        exit(0);
    }
    else{
        printf("Exitting with _Exit() function");
        _Exit(0);
    }
    return 0;
}
```
### OUTPUT:
* if n=45
```c++
Enter value of n: 45
Exitting with exit function!
```
### OUTPUT:
if n is not equal to 45
```c++
Enter value of n: 10
```
* In this example, when n=45, there is printing statement before exit function, so output will be printed and then program will terminate.  
* When n is not equal to 45,  _Exit function will not print anything despite having printing statement before it as this function do not clean up  and thus will not flush the output stream and nothing will be printed while exit function will do cleaning and output stream will be flushed.


