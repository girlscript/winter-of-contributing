
# Literals in Java

A literal is a data that has fixed or constant value that appear directly in the program.

It is a synthetic representation of boolean, numeric, character, or string data.

Literals can be assigned to any primitive type variable.

For eg.
```
   int num = 50;  
```
or
```
   byte b = 28;  
```
Here int is the data type, num is the variable name and 50 is a literal.


## Types of Literals in Java

- Integer Literals
- Floating Point Literals
- Boolean Literals
- Character Literals
- String Literals
- Null Literals

  
Let's take a closer look at these various types of literals.

### Integer Literals
These literals are of type ```int```. There are three types of integer literals.
- _Binary Integer Literals_
- _Decimal Integer Literals_
- _Octal Integer Literals_
- _Hexadecimal Integer Literals_


Let's deep dive further into the Integer Literals.

#### Binary Integer Literals
This type of literal contains integers ```0 or 1```.
Literals value should be prefixed with 0b or 0B. 


```
  int num1 = 0b01;      //Binary Integer Literal
  int num2 = 0B1110;    //Decimal Integer Literal
  int num3 = 10000101;  //Not a Binary Integer Literal as 0b or 0B is not the prefix
```

#### Decimal Integer Literals
This type of literal contains integers from ```0 to 9```.
It can be either positive or negative. The only restriction is ```It should not start with 0```. 

```
  int num1 = 560;  //Decimal Integer Literal
  int num2 = -980; //Decimal Integer Literal
  int num3 = 004;  //Not a Decimal Integer Literal
```
#### Octal Integer Literals
This type of literal contains integers from ```0 to 7```.
These type of literals ```always start with 0```. 

```
  int num1 = 060;   //Octal Integer Literal
  int num2 = 0969;  //Not an octal Integer Literal as it contains integers greater than 7
  int num3 = 02004; //Octal Integer Literal
```
#### Hexadecimal Integer Literals
This type of literal can either contain only integers from```0 to 9``` 
or a combination of integers from ```0 to 9``` and characters from ```a to z```. The characters can either be in lowercase or uppercase. The characters represents the numbers from 10 to 15.
These type of literals should be prefixed with ```0x or 0X```. 

```
  int num1 = 0XA6D;       //Hexadecimal Integer Literal
  int num2 = 0x889Ae4dC;  //Hexadecimal Integer Literal 
  int num3 = xF2004;      //Not a Hexadecimal Integer Literal as it doesn't start with 0
  int num4 = 0xG245dE1    //Not a Hexadecimal Integer Literal as G does not represent any integer
```

Now that we are done with Integer literals, let's jump straight into Floating Literals.

### Floating Point Literals
These literals are of type ```float``` or ```double```.If the literal ends with```f or F```, then it is of float type, otherwise double. As the name itself suggests, it contains both floating part and a decimal part. It can be either positive or negative based on the symbol mentioned in the prefix. These can also be represented in exponential form
```
  float  num1 = 11.34f;      //Floating point literal
  float  num2 = 90.8F;       //Floating point literal
  double num3 = 123.4;       //Floating point literal
  double num4 = -699E-7;     //Floating point literal in exponential form
  double num5 = -6997;       //Not a Floating Point Literal as there is no decimal part
  double num6 = 1234e12;     //Floating point literal in exponential form
  float  num7 = 11.34.98f;   //Invalid Floating point literal as there are two decimal points
  double num8 = 992E+8       //Floating point literal in exponential form
  double num9 = 0987e2.3     //Invalid as exponent cannot have fractional part
  double num10 = 0987e       //Invalid as no digit specified for exponent 
```
### Boolean Literals
These literals are of ```boolean``` type. 
They are either ```true or false```. 

```
  boolean a = false;    //Boolean Literal
  boolean b = true;     //Boolean Integer Literal 
  boolean num1 = -92;   //Not a Boolean Literal 
```
### Character Literals
These literals are of type ```char```. These are represented in single quotes (''). Only a single character can be written inside the quotes.
```
  char ch1 = 'G';
  char ch2 = ‘%’;
  char ch3 = ‘4’;
  
```
Other than this java also allows us to use some non-graphic characters as character literals. Some are listed below.

![Logo](https://i0.wp.com/techvidvan.com/tutorials/wp-content/uploads/sites/2/2020/05/Escape-Sequences-in-Java.jpg?w=730&ssl=1)

*Source - https://techvidvan.com/tutorials/literals-in-java/#google_vignette

We can also use character literals to represent Unicode (UTF-16) characters.
```
char ch4 = '\u0108';
```

### String Literals
These literals are of ```string``` data type. They are represented within double quotes ("").We can write multiple characters within the quotes.These literals can contain alphbets, integers, spaces and special characters. The escape characters which we mentioned for character literals can also be used as string literals.
```
string str1 = "girlsript";                  //String literal
string str2 = "FOUndatION1";                //String literal
string str3 = "-1112";                      //String literal
string str4 = "This is a string LITERAL";   //String literal
string str5 = "\n This is next line";       //String literal
string str5 = "line';                       //Invalid String literal as the quotes are not proper
```
### Null Literals
These literals are of type ```null```. It is case sensitive. These are used as a value for any reference type. Null may be assigned to any variable, except variables of primitive types. It is used as a marker to indicate when some object is unavailable.
```
Balance acct = null;               //Null literal
String str = null;                 //Null literal
Object obj = NULL;                 //Invalid Null literal as it is case sensitive
Integer itr = null;                //Null literal
byte a = null;                     //Invalid Null literal as it is not applicable to primitive data types
```


Every programmer should know the basic literals in order to master java.
This was eveything you need to know about literals in java.
