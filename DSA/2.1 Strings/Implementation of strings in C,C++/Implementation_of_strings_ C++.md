# Implementation of strings in C/C++

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
*Functions we are going to implement and their uses:
  
  * read()  :  Reads input string from user
  * display(): Displays string in output
  * length(): It is used to find the length of string
  * copy():   It is used to copy the string
  * concat():  Adds two string
  * toUpper():  converts all lowercase characters to upper
  * toLower(): converts all uppercase characters to lower
  * reverse(): reverses all characters in string


* Now we need to define each function outside class and write a code for it.

* The code includes calculations to get desired output.

```

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
str.arr[i]=arr[i];
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

```

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

