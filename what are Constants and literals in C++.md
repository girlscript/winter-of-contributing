# **"what are Constants and literals in C++"**

## **Constants:**

* Constants, by their simplest definition, are values that do not change. In C++, a constant is a variable with a fixed value defined before the program runs. A constant is treated as a regular variable with a single exception that its value can not be changed.

## **Literals:**

* A literal is a way to express the value that might be assigned to a constant. Literals do not refer to variables, they are the values themselves

For Example: 
const int z = 5;

Here z is a constant,whereas 5 is an integer literal.



## **There are several types of literals in C++:**

1. Integer literals 
2. Floating-point literals
3. Boolean literals
4. Character literals 
5. String literals

## **Integer Literals:**

* <i>Integer literal is a type of literal for an integer whose value is directly represented in source code.</i> 
    
    Base 10 integer literals: **-1979, ​0​, +15**
    
    Base 8 integer literals: **0775, -0123**
    
    Base 16 integer literals: **0x775, 0XFF, 0Xd3b5**
> Example:

    #include <iostream>
    using namespace std;
    int main()
    {
    // PREFIXES
    cout<<213<<endl;      // decimal integer literal
        <<0213<<endl;    // Octal integer literal
        <<0x213A<<endl; // hexadecimal integer literal
        <<0b101<<endl; // binary integer literal
  
         // SUFFIXES
         // long long literal
        <<1234567890123456789LL<<endl;
  
         // unsigned long long literal
        <<12345678901234567890ull<<endl;
  
         // automatic conversion of unsigned long long even
         // without long long prefix
        <<12345678901234567890u;endl;
  
    return 0;
    }

**Output:**

213

139

8506

5

1234567890123456789

12345678901234567890

12345678901234567890

1221300


## **Floating-point Literals:**

* <i>Floating-point literal has an integer part, a decimal point, a fractional part, and an exponent part. You can represent floating point literals either in decimal form or exponential form.</i>

> Example:

    #include<iostream>
    int main()
    using namespace std;
    {
        cout<< 58.        <<endl
        cout<< 4e2        <<endl
        cout<< 123.456e-67<<endl
        cout<< .1E4f      <<endl
        cout<< 0x10.1p0   <<endl
        cout<< 0x1e5      <<endl;
    }

**Output:**

58

400

1.23456e-65

1000

16.0625

485

## **Boolean Literals:**

* <i>Boolean literals represent boolean values. They are the simplest category of literals in that only two different values are allowed: true and false. Both of them evaluate to a value of type bool. bool may be converted to integer types, in which case a true yields to nonzero value, whereas false yields zero.</i>

>Example:


    #include<iostream>

    #include<iomanip>

    int main()

    using namespace std; 

    {

    cout<<boolalpha;     // print booleans in readable form
    
    bool b = true;
    cout << b <<endl;  // print a bool constant
    
    cout<<true<<endl; // print a literal directly
    cout<<false<<endl;
 
    int i = b;
    // print an integer representation of bool
    cout<<i<<endl;
    i = false;
    cout<<i<<endl;
    }

**Output:**

true

false

1


## **Character Literals:**

* <i>Character literals represent a single character.
Special characters that can not be expressed directly in source code, such as the newline, can be represented using escape characters, such as '\n' (a newline) or '\t' (a tab).</i>

> Example:
    #include<iostream>
    using namespace std;
    int main() 
    {
    char newline = '\n';
    char tab = '\t';
    char backspace = '\b';
    char backslash = '\\';
    char nullChar = '\0';

    cout<<"Newline character:"<<newline<<"ending"<<endl;
    cout<<"Tab character:"<<tab<<"ending"<<endl;
    cout<<"Backspace character:"<<backspace<<"ending"<<endl;
    cout<<"Backslash character:"<<backslash<<"ending"<<endl;
    cout<<"Null character:"<<nullChar<<"ending"<<endl;
    }

**Output:**

Newline character:
ending

Tab character:  ending

Backspace character:ending

Backslash character: \ending

Null character:  ending


## **String Literals:**

* <i>Characters enclosed by " and ", eg. "Today is Sunday!". The " meta-character is escaped with '\"'. String literals are null terminated (eg. with '\0'). That's why</i>

> Example:

std::cout<<sizeof("a"); 



<!-- 
## variables is initilised in a program, its value can't be changed afterwards. 






an example program for constant 


#include<iostream>
using namespace std;
int main(){
    int a=34;
    cout<<"the value of a was"<<a;
    a=45;
    cout<<"the value of a is:"<<a;
    return0;
}


output:
the value of a was: 34
the value of a is: 45 -->

