## Concatenation Function in String

### Overview
It is a function that includes two things in it str refers to the string and cat refers to appending the string either at the end of the string or at the beginning of the string but mostly at the end of the string i.e. appends a copy of the string.This function is defined in “string.h” header file.

### Syntax:
char * strcat(char * init, const char * add).
strcat() basically says to join two strings which means concatenating two strings. Here with the help of this function, we can concatenate two strings but here strcat functions in somewhat different ways. It will append a copy of the add string to the end of the init string. The strcat() will consider two parameters or arguments.

### Return Value: 
Returned value of the strcat function returns the init argument, which is pointing to the init string. If there is a null init string, then with strcat function there will be overlapping i.e. all characters will get replaced with the copy of add string. One disclaimer to be kept in mind never ever the init should get overlap only if init is a null string then only the possibility arises otherwise not. Also, Pointer to the destination location should be large enough so that it can hold or contain a resultant concatenated string.

### Algorithm

```
strcat(init,add) <br/>
     1. First We take two character array  <br/>  
             char init[],string add[] <br/>
     2. After 1 step we use strcat() function to concate or overwrite add string after init  string finished in init string    <br/>
             strcat(init,add)<br/>
              <br/>
```
<hr>
<p align="center">
<img src="https://www.w3resource.com/w3r_images/c-string-image-exercise-19.png"> 
</p>

### Code.
```

#include <iostream>
#include<string.h>
using namespace std;
  
int main()
{
    char init[] = "this is init";
    char add[] = " added now";
  
    // concatenating the string.
    strcat(init, add);
  
    cout << init << endl;
  
    return 0;
}
```
### Complexity analysis.
Time complexity of strcat() function 
T(n) = O(n).
Auxiliary Space: O(n+m) <br/>
Stable: Yes <br/>
<br>

## Author
* [@Hirdiyansh](https://github.com/Hirdiyansh)
