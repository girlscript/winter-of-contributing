
# Insertion and Extraction Operator in C++
It gives us a detailed description about the insertion and extraction operators used in C++ and also about cin and cout.




## Introduction

The insertion operator is used to write the information and extraction operator is used to read the information.

## Insertion Operator
  The insertion operator << is the one we usually use for output, as in:

     cout << "This is output" << endl;

It gets its name from the idea of inserting data into the output stream.

### Syntax :

cout <<"Message to print'' or result to be show

Eg : cout << "Welcome to c++ ";
OUTPUT : Welcome to C++


## Extraction Operator
   The extraction operator >> is the one we usually use for input, as in:

     cin >> x;
It gets its name from the idea of extracting data from the input stream.

### Syntax :
cin >> variable value;
   
Eg : cin >> x;
         where x is a variable. 


### cin

cin is a predefined object and represents the standard input stream and this input stream is used to read the data or take value from user.
It is usually used with the extraction operator.

### cout

cout is a predefined object and represents the standard output stream and this output stream represents the screen.
It is usually used with the insertion operator.


## Examples

1. #include <iostream>
using namespace std;
 
int main()
{
    int age;
 
    cout << "Enter your age:";
    cin >> age;
    cout << "\nYour age is: " << age;
 
    return 0;
}

### Input : 

18

### Output: 

Enter your age:  
Your age is: 18

2.  #include <iostream>  
using namespace std;  

int main( ) 
{
    
    cout << "Insertion Operator"<<endl;     
    cout << "Extraction Operator"<<endl;   
    cout << "C++"<<endl;  

    return 0;
       
}   

### Output:

Insertion Operator  
Extraction Operator  
C++


