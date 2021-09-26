# exit() Function
* exit() function is a built-in function which terminates the going on program.
* This function is included in **stdlib.h** header file.
***
## SYNTAX:  
exit(int status);  
---where status is defining exit status. 
***
* When the program terminates,this value gets returned to the operating system and not to the caller.
* Remaining code will not be executed after this function is executed.
* Objects that have static storage duration, are dismantled and files created by tmpfile function are removed when exit function executes.
```
successful termination: exit code of 0/ EXIT_STATUS 
unsuccessful termination: exit code of 1/ EXIT_FAILURE 
```
--->This status gets returned to the host environment and indicates whether our program is successfully terminated or not.
***

# _EXIT() Function()  
In **C++11**, one new function is present called _Exit().
* Just as in exit() function, _EXIT() function is a built-in functions which terminates the going on program.
* This function is also included in stdlib.h header file.
***
### SYNTAX:
_EXIT(int status);  
---where status is defining exit status.
***

* This function returns the control to the host environment  
* *You must be wondering that what is the need for this when we have exit() function to terminate the process?*  🤔  
--->So, the answer is: While using exit() function, there is some cleanup function like buffer removal...but _EXIT() function will not perform any buffer removal or any type of cleanup and will terminate the program normally.
```
successful termination: exit code of 0/ EXIT_STATUS 
unsuccessful termination: exit code of 1/ EXIT_FAILURE 
```


This status gets returned to the host environment and indicates whether ou program is successfully terminated or not.
