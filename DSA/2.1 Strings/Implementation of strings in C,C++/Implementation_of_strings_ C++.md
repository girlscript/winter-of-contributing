# Implementation of Strings in C

Hey all! We all know, in C programming strings are nothing but an array of characters ending with '\0'.

We can perform different operations on strings using predefined functions in standard library. In this document we try to implement these
function in C.

First lets add main function to our code.
Here we use switch cases for better understanding and differentiating functions.

```
int main()
{
printf("1.Concatenation");
printf("2.Copy");
printf("3.Find Length");
printf("4.Reverse");
printf("5.Exit");
}
printf("Enter ur choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1: Concat();break;
case 2: Copy();break;
case 3:length();break;
case 4: 
       string str; //read string from user
       reverseStr(str);
       cout << str;
       break;
case 5: exit(0);break;
default:printf("Invalid");
break;
}
return 0;
}

```

Now define functions and use calculations. Here functions explained with examples.
* concat()- This function adds two string. 

```
void concat()
  {
  char s1[100];
  char s2[100];
    //read s1 and s2
  int len=0,j;
  while(s1[len]!='\0'){
  ++len;
  }
  for (j = 0; s2[j] != '\0'; ++j, ++len) {
    s1[len] = s2[j];
  }
  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);
  }

```
***
Example: Input1: Girlscript
         Input2: Contribution
         
        Output: After concatenation: Girlscript Contribution


* copy()- This function copies same string into other string variable.
```        
void copy(){
  char str1[100], str2[100], i;
    printf("Enter string s1: ");
      //read s1

    for (i = 0; s1[i] != '\0'; ++i) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("String s2: %s", s2);
    }
    
```
***
example: Input: Programmer
         
         Output: Programmer
         
* length()- This function reads a string and prints lentgh of string. 
  * Declare a counter  which increments while loop doesn't reach end of string.      
```
void length{
    char str[]; //read string

    for (int count = 0; str[count] != '\0'; ++count);
    
    printf("%d is length", count);
    return 0;

}

```
***
Example: Input: Winter of contributing
         
         Output: 22
         
* Reverse()- This function reverses string. We need to write a logic with a loop, which iterates upto length of string and swaps letters from both side.         
```
void reverseStr(string& str)
{
    int n;    //get string length
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]); 
}
 
```
***
Example: Input: Contributing
         
         Output: gnitubirtnoC

### Complete Code:
```
int main()
{
printf("1.Concatenation");
printf("2.Copy");
printf("3.Find Length");
printf("4.Reverse");
printf("5.Exit");
}
printf("Enter ur choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1: Concat();break;
case 2: Copy();break;
case 3:length();break;
case 4: 
       string str; //read string from user
       reverseStr(str);
       cout << str;
       break;
case 5: exit(0);break;
default:printf("Invalid");
break;
}
return 0;
}
void concat()
  {
  char s1[100];
  char s2[100];
    //read s1 and s2
  int len=0,j;
  while(s1[len]!='\0'){
  ++len;
  }
  for (j = 0; s2[j] != '\0'; ++j, ++len) {
    s1[len] = s2[j];
  }
  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);
  }
 void copy(){
  char str1[100], str2[100], i;
    printf("Enter string s1: ");
      //read s1

    for (i = 0; s1[i] != '\0'; ++i) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("String s2: %s", s2);
    }
  void length{
    char str[]; //read string

    for (int count = 0; str[count] != '\0'; ++count);
    
    printf("%d is length", count);
    return 0;

}
void reverseStr(string& str)
{
    int n;    //get string length
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]); 
}
```





# Implementation of strings in C++

We all use string functions directly by including #include<string> header file. Do you ever try to explore how these are implemented?

This document makes you to understand how strings are implemented
in C++. Also, explains different functions available in STL classes.

* Firstly, we need our class body. Here it is declared as clsStr(class string).

* Then we need to declare character to preserve values. 

* when we write a code with above definition we get:

```

#define MAX 100

class clsStr{

private: char arr[MAX];

}
```

* Now we need to add some functions, so that we can track our code easily with string class.

* Remember we need to declare these functions publically.
 * define each function outside class and write a code for it.

* The code includes calculations to get desired output.
  
* Functions we are going to implement and their uses:
  
  * read()  :  Reads input string from user
  
```
  void clsStr::read(){
  cout<<"enter string";
  cin.getline(arr,MAX);
}
 ```
  
* display(): Displays string in output

```  
  void clsStr::display(){
  puts(arr);
  }
```
  ***
  Example: enter string: India
  
          Output:India
  
  
  * length(): It is used to find the length of string
```
  int clsStr::length(){
  int i;
  for(int i=0;a[i]!='\0';i++);
  return i;
  }
  ```
  
  * copy():   It is used to copy the string
  ```
  void clsStr::copy(clsStr &str){
int i;
for(i=0;arr[i]!='\0';i++)
{
str.arr[i]=arr[i];
}
str.arr[i]='\0';
  cout<<"String copied";
}
```
  ***
  Output: String copied.
  
  * concat():  Adds two string
  ```
  void ClsSrt::concat(){
char s1[100]=read();
char s2[100]=read();

int len=0,j;

while(s1[len]!='\0'){
++len;
}
for(j=0;s2[j]!='\0';++j,++len)
{
s1[len]=s2[j];
}
s1[len]='\0';

    //display s1
}
  ```
  ***
  Example: Input1: LinkedIn  Input 2: Profile
  
  Output: LinkedIn Profile
  
  * toUpper():  converts all lowercase characters to upper
  ```
  void clsStr::toUpper(){
  //read string
for(int i=0;arr[i]!='\0';i++)
{
if((arr[i]>='a')&&(arr[i]<='z'))
{               
arr[i]-=32;      
}
}
 ```
 ***
 Example:Input:Welcome
        
         Output:WELCOME                    
  * toLower(): converts all uppercase characters to lower
 ```      
    void clsStr::toLower(){
for(int i=0;arr[i]!='\0';i++)
{
if((arr[i]>='A')&&(arr[i]<='Z'))
{               
arr[i]+=32;      
}
}
```
  * reverse(): reverses all characters in string, by swapping letters from both side.
```
 void clsStr::reverse(){
int i=length();  
char temp;
for(int k=0,j=i-1;k<j;k++,j--)
{
temp=arr[j]; 
arr[j]=a[k]; 
arr[k]=temp;
}
}

```
***
  Example: Input: Banana
  
  Output: ananaB

Great! Thus we completed our function definitions. You can also implement them according to your logic.
Also, below is the complete code of implementation of string with basic functionalities.

```
class clsStr{
private: char arr[MAX];
public:
void read();
void display();
int length();
void copy(clsStr &str); //Pass by reference
void concate();
void toUpper();
void toLower();
void reverse();
};


void clsStr::read(){
cout<<"enter string";
cin.getline(arr,MAX);
}

void clsStr::display(){
puts(arr);
}

int clsStr::length(){
int i;
for(int i=0;a[i]!='\0';i++);
return i;
}

void clsStr::copy(clsStr &str){
int i;
for(i=0;arr[i]!='\0';i++)
{
atr.arr[i]=a[i];
}
str.arr[i]='\0';
}

void clsStr::toUpper(){
for(int i=0;arr[i]!='\0';i++)
{
if((arr[i]>='a')&&(arr[i]<='z'))
{               
arr[i]-=32;      
}
}

void clsStr::toLower(){
for(int i=0;arr[i]!='\0';i++)
{
if((arr[i]>='A')&&(arr[i]<='Z'))
{               
arr[i]+=32;      
}
}

void clsStr::reverse(){
int i=length();  
char temp;
for(int k=0,j=i-1;k<j;k++,j--)
{
temp=arr[j]; 
arr[j]=a[k]; 
arr[k]=temp;
}
    //display reversed string
}


void ClsSrt::concat(){
char s1[100]=read();
char s2[100]=read();
int len=0,j;
while(s1[len]!='\0'){
++len;
}
for(j=0;s2[j]!='\0';++j,++len)
{
s1[len]=s2[j];
}
s1[len]='\0';

    //display s1
}

int main(){

    //create object for class
    //add a call to function

return 0;
}
 ```
### Finally, we come to end of document. With this you understood how actually functions and implemented in string. Also got to know about different operations on strings.
  You can also try to write your own logic and implement different functions.
       
  Below are some tutorials where you can explore more topics on strings. Do have a glance.
       
## References
       
* [String functions C](https://beginnersbook.com/2014/01/c-strings-string-functions/)
* [String tutorials C++](https://www.tutorialspoint.com/cplusplus/cpp_strings.htm)

* [Operations](https://www.sudo.ws/todd/papers/strlcpy.html)
* [More](https://en.wikipedia.org/wiki/String_(computer_science))
