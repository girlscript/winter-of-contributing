# Strings in C++

Strings are a fundamental data type in the object-oriented language C++. They are essentially **a set or a sequence of characters**.
<br>

In C++, strings can be represented in the following ways:
* CHARACTER ARRAYS
* USING THE STRING CLASS

<br>

### __Characters arrays__ are often declared and initialised as: 
` char str[] = "Hello World";` 
<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; or  
` char *str = "Hello World";`

Although this does the job, the string class in C++ is a much desirable option when it comes to using strings in your code.

<br><br>

### The **String Class** which is a part of the ***String library*** is much preferred because of the diverse inbuilt functionalities offered. Internally, the class uses character arrays to store the stream of characters, but the memory management and null termination is done by the class itself.
- Each string is considered to be an object of the **std::string** class 
- To be able to use the class, we need to include the required library : `#include<string>`
<BR>

### - DECLARING AND INITIALISING STRINGS
* Each string object can be declared and initialised as:
       <br> `string str1 = "Hello World";`  
       &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; or  
       `string str2("Hello World");`

* To initialise strings using user input, we can use the standard input object:
  ```
        #include<iostream>
        #include<string>
        
        int main(){
            string str;
            cin >> str;
        
            return 0;
        }
  ```
    
    <br>
    
    But this method will prevent the user from entering multiple words as **cin** recognises whitespace as a terminating character. 
    <br>To overcome this, we can use the **getline()** to allow the users enter a stream of characters until a newline character is encountered.    
  ```
        #include<iostream>
        #include<string>
        
        int main(){
            string str;
            getline(cin,str);
        
            return 0;
        }
   ```
<BR>

### - ACCESSING THE CHARACTERS OF A STRING
* In strings, each character occupies a byte's worth of space in the memory and can be accessed individually.
<br>

* Since strings are considered to be a container class, we can use the concept of iterators to access the characters seperately. This can be done in the following manner.
```
#include<iostream>
#include<string>

int main(){

    string str = "GirlScript";
    string::iterator it;

    for(it=str.begin(); it!=str.end(); it++)
        cout << *it << "\t";
    cout << endl;

    return 0;
}
```
    OUTPUT : G i r l S c r i p t

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;The member functions of class string used above : 
<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - **begin()**  --> returns an iterator pointing to the beginning of the string
<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - **end()**  --> returns an iterator pointing to the end of the string
<br><br>

* The characters can also be obtained by using indices. We use a standard loop and the [ ] operator for indexing each character.
```
#include<iostream>
#include<string>

int main(){

    string str = "DSA";

    for(int i=0; i<str.length(); i++)
        cout << str[i] << "\t";
    cout << endl;

    return 0;
}
```
    OUTPUT : D S A
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;The member functions of class string used above : 
<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - **length()**  --> returns the length of the string 
<br><br>

### - DIFFERENCE BETWEEN ***CHARACTER ARRAYS*** AND ***STRING CLASS***
<br>

|Character Arrays|String Objects|
--------------------|-----------------|
| - strings are usually represented as arrays | - strings are represented as objects of the class std::string |
| - memory is allocated in a static manner   | - memory is allocated dynamically during run time |
| - no inbuilt functions available and very restricted in terms functionality | - the class offers a variety of methods to ease the usage of strings|


<br><br>
  
### Refer below to become familiar with more inbuilt methods of the string class:
* https://www.cplusplus.com/reference/string/string/
* https://www.geeksforgeeks.org/c-string-class-applications-set-2/
