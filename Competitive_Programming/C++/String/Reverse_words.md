# Program to reverse words in a given string in C++

## Problem Statement
Reverse words in a string” states that you are given a string s of size n. Print the string in reverse order such that the last word becomes the first, second last becomes the second, and so on.

Example:
```
Input: GirlScript Winter of Contributing

Output: Contributing of Winter GirlScript
```

# Algorithm:
```
1. Initialize a string s of size n.
2. Create a function to reverse the words of the given string which accepts a string variable as it's a parameter.
3. After that, create two variables of integer type begin and end. Initialize the variable end as the size of the string.
4. Create an empty string variable to store the result.
5. Traverse through the string from the last character to first and check if the character at current index in the given string is a white space, update the variable begin as current index + 1 and while variable begin is not equal to the variable end, add the character at index begin + 1 of the given string in the result string variable.
6. Add a white space in the result string variable and update the variable end as the current index.
7. Update variable begin as 0.
8. Traverse again, while variable begin is not equal to variable end, add the character at index begin + 1 of the given string in the result string variable.
9. Return the resulting string variable.
``` 
Implementation of code in C++:
```C++
#include<iostream>
#include <cstring>
using namespace std;
main()
{
    string str;
    cout<<"Enter your String:";
    getline(cin,str);
    int in=0,out=0,p=0;
    int len=0;
    char sub_str[100][100]={0};
    for(in=0;str[in]!='\0';in++)
    {
        len++;
    }
    //splitting Input String into sub string
    while(str[p]!='\0')
    {
        out=0;
        while(str[p]!=' ' && str[p]!='\0')
        {
            sub_str[in][out]=str[p];
            p++;
            out++;
        }
        sub_str[in][out]='\0';
        in++;
        if(str[p]!='\0')
        {
            p++;
        }
    }
    cout<<"After reversing words in a given string is :";
     //Here 'in' variable count number of word present in the given string
    for(out=in-1;out>=0;out--){
   cout<<sub_str[out]<<" ";
        }
}
```
# Output
```
Input: GirlScript Winter of Contributing

Output: Contributing of Winter GirlScript
```