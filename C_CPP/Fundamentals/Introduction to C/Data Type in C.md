
# DATA TYPES IN C:

## There are four fundamental data types in C .Other data types defined by user comes under derived data types.Size of all these types mainly depend on processor and compiler .But basically integer is  of 4 bytes,character of 1 byte ,float of 4 bytes and double 8 bytes.
### We will focus on basic data types in this discussion.
### Four of them are:
1. int        (integer)
1. char     (character)
1. float
1. double

**int data type** :
 
### Integers are whole numbers such as 8,0,-34 etc. So they cannot have fractional or decimal parts . An identifier declared as integer can be positive , negative or zero depending on its sign. 

Syntax:

**int name**;
Here variable name has been assigned integer data type.

### Integer can further be  categorised in signed ,unsigned,long or short(these are known as data type modifier) depending on the size of variable .All of these have defined range within which we can apply them.
 
|   Data type    |     Memory    |              Range               |      Format specifier   |
|     :---:      |     :---:     |              :---:               |          :---:          |
|int             |       4       |  -2,147,483,648 to 2,147,483,647 |            %d           |
|short int       |       2       |         -32,768 to 32,767        |            %hd          |
|long int        |       4       |  -2,147,483,648 to 2,147,483,647 |            %ld          |
|unsigned int    |       4       |         0 to 4,294,967,295       |             %u          |
|signed int      |       4       |           same as int            |             %d          |

 **char data type**:

### This data type is used for defining a single character in C. Mainly a letter or a symbol is represented by char data type. 
Eg: A, b, C, $, 3, 5 etc

### All symbol and letter are associated with ASCII code so a char data type are often type conversed into int data type.

Syntax:

**char ch =’A’**;
### Here variable ch stores a single character A .
### Below is the different range of character data types:

|Data type          |      Memory       |       Range       |       Format Specifier    |
| :---------------: | :---------------: | :---------------: | :-----------------------: |
|char               |        1          |     -128 to 127   |               %c          |
|signed char        |        1          |    -128 to 127    |              %c           |
|unsigned char      |        1          |       0 to 255    |             %c            |



**Float data type**:

### A number having fractional part  is a float number. It contains decimal point which indicates floating point of the number. They represent real number which can be used for measurable quantities like distance , length , temperature etc
Eg : 3.2, 5.0, -3.8 

Syntax:

**float pi=3.14**;
### Here pi is a float type variable which contains a decimal number.

Data type     |     Memory        |             Range          |        Format Specifier
:----------:  | :--------------:  | :----------------------:   | :----------------------:
float         |        4          |       3.4E-38 to 3.4E+38   |         %f




**double data type**:
### This is also used to describe floating point numbers but with more accuracy and takes double memory as compared to float.
### It has more range and precision .

**Syntax**
**double d = 8.6677**:

Data type   |      Memory   |        Range              |    Format Specifier
:---------: | :-----------: | :---------------------:   | :-------------------:
double      |       8       |    2.3E-308 to 1.7E+308   |       %lf
long double |      16       |   3.4E-4932 to 1.1E+4932  |        %Lf




