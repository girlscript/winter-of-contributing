# Data Types in Cpp
*Data types are declaration for variables. It define what type and size of data will store in variable.*

**Example ->**
```cpp
int num = 12;
// Here num is variable and "int" is data type.
```

**Following are the Data types in cpp**
| User Defined | Built-In | Derived |
|---------------|---------|----------|
| structure | int | Array |
| Union | char | function |
| class | void | pointer |
| enum | float |          |
|      | double |         |

## 1. Built-In Data types 
*The Built-in data types have several modifier precending them to serve the needs of various situation. The modifier **signed, unsigned, long** and **short** applied to **char** and **int** type, and **long** also be applied to **double**.*
>Size and range of C++ basic data types:-

| Type | Bytes | Range |
|------|-------|-------|
|char| 1 | -128 to 127 |
| unsigned char | 1 | 0 to 255 |
| signed char | 1 | -128 to 127 |
| int | 2 | -32768 to 32767 |
| unsigned int | 2 | 0 to 65535 |
| signed int | 2 | -32768 to 32767 |
| short int | 2 | -32768 to 32767 |
| unsigned short int | 2 | 0 to 65535 |
| signed short int | 2 | -32768 to 32767 |
| long int | 4 | -2147483648 to 2147483647 |
| unsigned long int | 4 | 0 to 4294967295 |
| signed long int | 4 | -2147483648 to 2147483647 |
| float | 4 | 3.4E-38 to 3.4E+38 |
| double | 8 | 1.7E-308 to 1.7E+308 |
| long double | 10 | 3.4E-4932 to 1.1E+4932 |
| wchar_t | 2 | 1 wide character |
| bool | 1 | true or false |

> ### void :- 
> *we cannot declare variable of void type. we use void for function & pointer declaration.*
> *Two normal uses of void are:*
> 1. To specify the return type of function when it is not returning any value.
> 2.  To indicate an empty argument list to a function.

## 2. User-Defined Data Types
*The data type that are defined by the user are known as User define data type. It is derivede from more than one built in data type which is used to store complex data.*
### A. Structure :- 
*Structure are used for grouping together elements with dissimilar type. structure can have arrays, pointer or structures as members.*

**Syntax ->**
```cpp
struct name 
{
  data_type member1;
  data_type member2;
  .....
    .....
};
```
**Example ->**
```cpp
struct book 
{
  char title[25];
  char author[25];
  int pages;
  float price;
};
book book1, book2, book3;

//Here book1, book2, book3 are declared as variable of user defined type book.
```
### B. Union :- 
*Union are conceptually similar to structure as they allow us to group together dissimilar type elements inside a single unit.*
- *But there is a difference, that the size of structure type is equal to the sum of sizes of individual memeber types. however the size of union type is equal to the size of largest member element.*
- *Union are memory efficient alternative of structures particularly in situation where it is not required to access the different member elements simultaneously.*

**Example ->** 
```cpp
union result 
{
  int marks;
  char grade;
  float percent;
};
// The union result occupy 4 bytes memory its largest size member is float and if we defined result as structure then,
//it would have occupied 7 bytes, the sum of size of individual elements.

```

### C. Classes :- 
*A class is a way to bind data and its associated function together. when defining class, we are creating a new abstract data type that can be treated like any other built-in data type.
The class declaration is similar to struct declaration. The class variables are known as objects, which are the central focus of OOPs.*

**Syntax ->**
```cpp
class class_name 
{
  private:
  variable declarations;
  function declarations;
  public:
  variable declarations;
  function declaration;
};
```
**Example ->**
```cpp
class item
{
  int number;              //variable declaration private by default 
  float cost;
  public :
  void getdata(int a, float b);   //function declaration
  void putdata(void);
};
```
### D. Enumerated :- 
*It provides a way for attaching names to numbers.The **enum** keyword automatically enumerates a list of words by assigning them value 0,1,2 and so on.* 
**Example ->**
```cpp
enum shape {
  circle, square, triangle};
```
- *By default, the enumerators are assigned interger value starting with 0 for the 1st enum, 1 for the 2nd and so on. We can over-ride the default by explicitly assigning integer value to enum.*

**Example ->**
```cpp
enum colour{ red = 5, blue, green };
```
## 3. Derived Data types
*Data types that are derived from the built-in data types are known as derived data types. The various derived data types provided by C++ are arrays, junctions, references and pointers.*
### A. Array :- 
*Array is a collection of similar type of data. All the elements of array are stored in contiguous memory & each element is accessed by a unique index.*

**Syntax ->** 
```cpp
datatype arrayName [ arraySize ] = {..elements....};
```
**Example ->**
```cpp
int num[5] = { 10, 20, 30, 40, 50 };
```
### B. Functions :- 
*Function is block of code which is used to perform a particular task. Function consist of :-*
- Function declaration
- Function defination

**Example ->**
```cpp
  void show( );           /* function declaration */
  main ( )
  {
    show( );              /* function call*/
  }
void show( )              /* function definition */
{
  .........
    .........             /* function body */
    .........
  }
```

### C. Pointers :- 
*Pointer refers to a variable that holds the address of another variable. A pointer of type integer can hold the address of a variable of type integer. A pointer of character type can hold the address of a variable of character type.*

**Syntax ->**
```cpp
datatype * variable_name;
``` 
**Example ->**
```cpp
int * a;   // a pointer to integer
```
</br>
</hr>
</br>

<h1 align="center">Thanks For Reading</h1>
    
    
    
    
