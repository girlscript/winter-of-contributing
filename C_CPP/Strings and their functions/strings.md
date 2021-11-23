## STRING IN C++

**Definition**: String is an object of string class(The Standard C++ Library string class) that represents sequence of characters.

### The syntax for declaring a string :
```c++
string str = "abcd"; // It declares a string of value "abcd"
string str(5); // It declares a string of size 5
string str(5, 'a'); // It declares a string of size 5 with all characters 'a'
string xyz(str2); // It declares a copy of the string str2
```
### There are some functions that can be used to perform operations on strings.

- getline(): It reads a line from the input stream and stores it in the string.
- append(): It inserts additional characters at the end of the string.
- assign(): It assigns a new value to the string by replacing the previous value. 
- at(): It returns the character at the specified position.
- compare(): It compares two strings and returns an integer less than, equal to, or greater than zero if the first string is found, respectively, to be less than, to match, or be greater than the second string.
- find(): It returns the position of the first character in the string that matches any of the characters in the specified string.
- insert(): It inserts additional characters at the specified position.
- length(): It returns the length of the string.
- size(): It returns the length of the string.
- strcpy(s1, s2): It copies the string s2 into the string s1.
- strcat(s1, s2): It appends the string s2 to the string s1.
- strlen(s): It returns the length of the string.
- push_back(): It appends a character at the end of the string.
- pop_back(): It removes the last character from the string.
- erase(): It removes the characters from the string.

### A Program to demonstrate working of getline(), push_back() and pop_back() functions
```c++
#include<iostream>
#include<string> 
using namespace std;

int main()
{
	string str;
	getline(cin,str);

	cout << "Initially the string is: ";
	cout << str << endl;

	str.push_back('A');
    str.push_back('B');
    str.push_back('C');
	cout << "The string after push_back operation is : ";
	cout << str << endl;
	str.pop_back();
	cout << "The string after pop_back operation is : ";
	cout << str << endl;
	return 0;
}
```
- ### Input for this program-
```c++
Hello World 
```
- ### Output for this program-
```c++
Initially the string is: Hello World 
The string after push_back operation is : Hello World ABC
The string after pop_back operation is : Hello World AB
```
### A Program to demonstrate working of push_back(), size() function
```c++
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    string str_rev;

    for(int i=str.size()-1;i>=0;i--){
        str_rev.push_back(str[i]);
    }
    cout<<str_rev;
}
```
- ### Input for above program-
```c++
 Hello World 
 ```
- ### Output for above program-
```c++
dlroW olleH
```
### Program for concatenation of two strings

In C++, we can concatenate two strings by using the + operator.
```c++
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1,str2;
    str1="Hello";
    str2="World";
    string result = str1 + " " + str2;
    cout<<result;
}
```
### Output will be-
```c++
Hello World
```
### Program to demonstrate strcpy(), strcat() and strlen() functions
```c++
#include <bits/stdc++.h>
using namespace std;

int main () {

   char str1[20] = "Hello";
   char str2[20] = " World";
   char str3[20];
   int  len ;

   strcpy( str3, str1); // copy str1 into str3
   cout << str3 << endl;

   strcat( str1, str2); // concatenates str1 and str2
   cout << str1 << endl;

   len = strlen(str1); //length of str1 string
   cout << len << endl;

   return 0;
}
```
### Output for above program-
```c++
Hello
Hello World
11
```