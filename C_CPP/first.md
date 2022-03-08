#STRINGS 
String is a that stores characters(letters, etc) consecutively. In C++ ,string is a datatype in which we can store the desired set of characters. The syntax is as follows
>String xyz=”Hello”;
The string is terminated by a null character (‘\0’). It is not necessary to put \’0’ at the end of the string to mark its termination as the compiler does this automatically on the initialisation of the string .
Many functions can be used on strings for performing various operations. Some commonly used are
1.Strlen()- This is a direct function that can be used to get length of the string 
Example- strlen(s)- Return the length of string named s.

2.Strcpy-()-Helps in copying of one string to other. 
Example- strcpy(str1,str2)- Copies str2 into str1.

3.Strcat()- Useful in concatenating or joining two or more strings
Example- strcat(str1,str2)- str2 is concatenated at the end of str1.

>Although in C++, this can be done more directly by using string class as it supports almost all the operations on strings and some more too…

4.getline()-For storing the characters along with the spaces occuring in between
Example-getline(cin,s)- hello world

5.pop_back()-For removing last character from the string
Example-s.pop_back();
Cout<<s<<endl;-hello worl

6.push_back()-For adding a character at the end of the string
Example-s.push_back(‘d’);
Cout<<s<<endl;-hello world
And many more...

>A code using some of the string functions mentioned above-
#include<iostream>
#include<string>
Using namespace std;
Int main(){
String s1=”Open”;
String s2=”Source”;
String s3;
S3=s1+s2;
Cout<<s3<<endl;
// concatenation of s1 and s2

Int length=s3.size();
Cout<<length<<endl;
//length of the string

S2=s1;
Cout<<s2<<endl;
//copying s1 to s2

getline(cin,s3);
// Printing Open Source