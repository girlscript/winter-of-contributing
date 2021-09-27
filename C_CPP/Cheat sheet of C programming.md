<h1> ⚙🚀 C Programming Language 🎈🤖 </h1>

<h2> History of C programming </h2>
- Dennis Ritchie is devoleper of C Programming .
- C Programming was developed in at { AT & T's BEEL LABs } in 1972 .
<h2> Worth about C Programming </h2>
- Oracle is written in C .
- MySQL is written in C .
- Unix oprating system is developed in C .
<h2>C Keywords and Identifiers </h2>
 <h3>Character set in c </h3>
    Character is alphabets , letters  and some Character .
    Example :- A ,a , '1' etc .
    blank apace is also character .
 <h3> C keywords </h3>
Keywords are predefined, reserved words used in programming that have special meanings to the compiler.

```
auto        double      int         struct
break       else        long        switch
case        enum        register    typedef
char        extern      return      union
continue    for         signed      void
do          if          static      while
default     goto        sizeof      volatile
const       float       short       unsigned
```
> <h3> C Identifiers </h3>
Identifier refers to name given to entities such as variables, functions, structures etc.
```
int serialNumber ;
double universityRollnumber ;
```
Here  **serialNumber** and **universityRollnumber** are indentifiers .

> <h3>Rules for naming identifiers </h3>
- A valid identifier can have letters (both uppercase and lowercase letters), digits and underscores.
- The first letter of an identifier should be either a letter or an underscore.
- You cannot use keywords like int, while etc. as identifiers.
- There is no rule on how long an identifier can be. However, you may run into problems in some compilers if the identifier is longer than 31 characters.

---------------------------------------------
<h2>Variables and Data Types</h2>

- Variable is just like a container .
```
int player = 11 ;
char symbol = '$ ' ;
float length = 5.50 ; 
double money = 444.4 ;
```
int , char , float and double is Data type .

<h2>Input and Output </h2>
 <h3>C Output</h3>

printf is use for output on screen .
```
#include <stdio.h>    
int main()
{ 
    printf("Welcome in GSOC'21 ");
    return 0;
}
```
output 
```
Welcome in GSOC'21
```
Number/Integer output
``` 
#include <stdio.h>
int main()
{
    int Num = 5;
    printf("Number = %d", Num);
    return 0;
}

```
Output 
```
Number = 5
```

Float and double Output

```
#include <stdio.h>
int main()
{
    float number1 = 13.5;
    double number2 = 12.4;

    printf("number1 = %f\n", number1);
    printf("number2 = %lf", number2);
    return 0;
}

```

<h3> Some Formate specifier </h3>

- %d format specifier to print int types .
- %f format specifier to print float type .
- %c format specifier to print char types .
- %lf format specifier to print double types etc .
 

<h2>Arithmetic Operators </h2>
<table>
  <tr>
    <th>Operator</th>
    <th>Meaning of Operator</th>
  </tr>
  <tr>
    <td> + </td>
    <td>Adition </td>
    
  </tr>
  <tr>
    <td> - </td>
    <td>Subtraction</td>
    
  </tr>
  <tr>
    <td> * </td>
    <td>Multiplication</td>
    
  <tr>
    <td> / </td>
    <td>Division</td>
    
  </tr>

 
</table>
Sample code 

```
// Working of arithmetic operators
#include <stdio.h>
int main()
{
    int a = 9,b = 4, c;
    
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);
    
    return 0;
}
```
<h3>Increment and Decrement Operators</h3>

C programming has two operators increment ++ and decrement -- to change the value of an operand (constant or variable) by 1 .

```
#include <stdio.h>
int main()
{
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;

    printf("++a = %d \n", ++a);
    printf("--b = %d \n", --b);
    printf("++c = %f \n", ++c);
    printf("--d = %f \n", --d);

    return 0;
}

```
<h2> Assignment Operators </h2>

An assignment operator is used for assigning a value to a variable. The most common assignment operator is = .

<table>
  <tr>
    <th>Operator</th>
    <th>Example</th>
    <th>Same as</th>
  </tr>
  <tr>
    <td> = </td>
    <td> a=b </td>
    <td> a=b </td>
  </tr>
  <tr>
    <td> += </td>
    <td>a+=b</td>
    <td>a=a+b</td>
  </tr>
  <tr>
    <td>-=</td>
    <td>a-=b</td>
    <td>a=a-b</td>
  </tr>
  <tr>
    <td>*=</td>
    <td>a*=b</td>
    <td>a=a*b</td>
  </tr>
  <tr>
    <td>/=</td>
    <td>a/=b</td>
    <td>a=a/b</td>
  </tr>
  <tr>
    <td>%=</td>
    <td>a%=b</td>
    <td>a=a%b</td>
  </tr>
 
 
</table>

Sample code 
```
#include <stdio.h>
int main()
{
    int a = 5, c;

    c = a;      // c is 5
    printf("c = %d\n", c);
    c += a;     // c is 10 
    printf("c = %d\n", c);
    c -= a;     // c is 5
    printf("c = %d\n", c);
    c *= a;     // c is 25
    printf("c = %d\n", c);
    c /= a;     // c is 5
    printf("c = %d\n", c);
    c %= a;     // c = 0
    printf("c = %d\n", c);

    return 0;
}
```
<h2> Relational Operators</h2>
A relational operator checks the relationship between two operands. If the relation is true, it returns 1; if the relation is false, it returns value 0.
<table>
  <tr>
    <th>Operator</th>
    <th>Meaning of Operator</th>
    <th>Example</th>
  </tr>
  <tr>
    <td>== </td>
    <td>Equal to </td>
    <td> 9 == 5 is evaluated to 0 </td>
  </tr>
 <tr>
    <td> ></td>
    <td>Greater than </td>
    <td>7 > 2 is evaluated to 1 </td>
  </tr>
 
 <tr>
    <td>< </td>
    <td> Less than </td>
    <td> 5 < 3 is evaluated to 0</td>
  </tr>
 
 <tr>
    <td>!= </td>
    <td> Not equal to </td>
    <td> 2 != 7 is evaluated to 1</td>
  </tr>
 
 <tr>
    <td>>= </td>
    <td> Greater than or equal to </td>
    <td>5 >= 3 is evaluated to 1 </td>
  </tr>
 
 <tr>
    <td><= </td>
    <td>Less than or equal to </td>
    <td> 5 <= 3 is evaluated to 0 </td>
  </tr>
 
 
</table>

```
#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10;

    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);

    return 0;
}
```
<h2>Logical Operators </h2>

An expression containing logical operator returns either 0 or 1 depending upon whether expression results true or false. 
<table>
  <tr>
    <th>Operator</th>
    <th>Meaning</th>
    <th>Example</th>
  </tr>
  <tr>
    <td>&&</td>
    <td>Logical AND. True only if all operands are true</td>
    <td>If c = 5 and d = 2 then, expression ((c==5) && (d>5)) equals to 0.</td>
  </tr>
  <tr>
    <td>||</td>
    <td>Logical OR. True only if either one operand is true</td>
    <td>If c = 5 and d = 2 then, expression ((c==5) || (d>5)) equals to 1.</td>
  </tr>
  <tr>
    <td> ! </td>
    <td>Logical NOT. True only if the operand is 0 </td>
    <td>If c = 5 then, expression !(c==5) equals to 0.</td>
  </tr>
</table>


```
#include <stdio.h>
int main()
{  int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);

    return 0;
}

```

<h2>Logical Operators </h2>

During computation, mathematical operations like: addition, subtraction, multiplication, division, etc are converted to bit-level which makes processing faster and saves power.

<table>
  <tr>
    <th>Operators</th>
    <th>Meaning of operators</th>
  </tr>
  <tr>
    <td> & </td>
    <td> Bitwise AND </td>
    
  </tr>
   <tr>
    <td> | </td>
    <td> Bitwise OR </td>
    
  </tr>
   <tr>
    <td> ^ </td>
    <td> Bitwise exclusive OR </td>
    
  </tr>
   <tr>
    <td> ~ </td>
    <td> Bitwise complement </td>
    
  </tr>
   <tr>
    <td> << </td>
    <td> Shift left </td>
    
  </tr>
  <tr>
    <td> >> </td>
    <td> Shift right </td>
    
  </tr>

</table>


<h2>sizeof operator </h2>
The sizeof is a unary operator that returns the size of data (constants, variables, array, structure, etc).

Example 
```
#include <stdio.h>
int main()
{
int a;
float b;
double c;
char d;
printf("Size of int=%lu bytes\n",sizeof(a));
printf("Size of float=%lu bytes\n",sizeof(b));
printf("Size of double=%lu bytes\n",sizeof(c));
printf("Size of char=%lu byte\n",sizeof(d));

return 0;
}

```
--------------------------------------
<h2>if Statement </h2>

```
#include <stdio.h>
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("You entered %d.\n", number);
    }

    printf("The if statement is easy.");

    return 0;
}
``` 
<h2>if else Statement </h2>

```
#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // True if the remainder is 0
    if  (number%2 == 0) {
        printf("%d is an even integer.",number);
    }
    else {
        printf("%d is an odd integer.",number);
    }

    return 0;
}

```
<h2> Loop </h2>
> <h3>for loop</h3>

```
#include <stdio.h>

int main() {
  int i;

  for (i = 1; i < 11; ++i)
  {
    printf("%d ", i);
  }
  return 0;
}
````
> <h3>while loop</h3>

```
// Print numbers from 1 to 5

#include <stdio.h>
int main() {
  int i = 1;
    
  while (i <= 5) {
    printf("%d\n", i);
    ++i;
  }

  return 0;
}
```
> <h3>do...while loop </h3>

```
#include <stdio.h>
int main() {
  double number, sum = 0;
  do {
    printf("Enter a number: ");
    scanf("%lf", &number);
    sum += number;
  }
  while(number != 0.0);

  printf("Sum = %.2lf",sum);

  return 0;
}
```

----------------------------------------

<h2>User-defined functions </h2>

```
#include <stdio.h>
int addNumbers(int a, int b);         // function prototype

int main()
{
    int n1,n2,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = addNumbers(n1, n2);        // function call
    printf("sum = %d",sum);

    return 0;
}

int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    return result;                // return statement / value
}
````
--------------------------------------

<h2> Arrray </h2>

Array is contain same data type of value in continues memory block .


```
#include<stdio.h>
int main(){
    int i;
    int mark[5]= {23,33,22,6,7,88};
    for(i=0;i<5;++i){
        printf("%d "mark[i]);
    }
    return 0;
}
```

Array Input/Output

```
#include <stdio.h>

int main() {
  int values[5];

  printf("Enter 5 integers: ");
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");
  for(int i = 0; i < 5; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}
```

----------------------------------
<h2>Pointers</h2>

Pointer is a special variable . it is contain addresh of memory block .

```
#include <stdio.h>
int main()
{
  int var = 5;
  printf("var: %d\n", var);
  printf("address of var: %p", &var);  
  return 0;
}
```

Pointer example

```
#include <stdio.h>
int main()
{ int *ptr;
  int var = 5;
  *ptr=&var;
  printf("var: %d\n", var);
  printf("address of var: %p", &var);
  printf("var *ptr : %d\n", *ptr );  
  return 0;
}
```

Working of Pointers


```
#include <stdio.h>
int main()
{
   int* pc, c;
   
   c = 22;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);               
   
   pc = &c;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc);   
   
   c = 11;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc);   
   
   *pc = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); 
   return 0;
}
```
---------------------------------------

<h2>Strings</h2>
In C programming, a string is a sequence of characters terminated with a null character \0 .
```
#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}
```
> <h3>fgets() and puts() </h3>

```
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  
    printf("Name: ");
    puts(name);   
    return 0;
}
```
