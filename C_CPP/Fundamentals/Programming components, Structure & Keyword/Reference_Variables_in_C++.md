<h1 align="center">Reference Variables</h1>

<h2><em>What is a Variable</em></h2>

> <em>A <strong>Variable</strong> is a name that can be used to store values. These values can be changed during execution of the program. A variable can take different values,
  but only one at a time. Every variable has an assosiated data type and the data type of the variable decides what values it can take.</em>
  
<hr><br>

<h2><em>What is a Reference Variable</em></h2>

<em>
  
In C++, we generally use ```2``` types of variables based upon their declaration -

- <strong>Normal Variables</strong>
  - A <strong>normal variable</strong> is a location in memory that can hold a value. For example, when we declare a variable as an integer,
  it is allocated 4 bytes of memory to store an integer value.<br>
  
  - These variables are declared just by specifying the data type and giving a valid name.</em>

    ```C
    Example:
    
    int i;      // a normal variable of type int
    long l;     // a normal variable of type long
    float f;    // a normal variable of type float
    double d;   // a normal variable of type double
    ```

<br>
<em>
  
- <strong>Pointer Variables</strong>
  - A <strong>Pointer variable</strong> points to another variable. That is, a pointer variable holds the <strong>memory address</strong> of another variable.
  
  - These variables are declared by specifying the data type, giving a valid name and putting a ```asterisk(*)``` before the name of the varieble
  and after specifying the data type.
  
  - The ```asterisk(*)``` indicates that a pointer is being declared rather than a normal variable.</em>
  
    ```C
    Example:
    
    int *iptr;      // a pointer variable of type int
    long *lptr;     // a pointer variable of type long
    float *fptr;    // a pointer variable of type float
    double *dptr;   // a pointer variable of type double
    ```

</em><br>

  <em>But in C++, we have one more type of variable called as - <strong>Reference Variable.</strong></em>

> <em>A <strong>reference Variable</strong> provides an alias (or alternative name) for a previously defined variable.
  For example, if we make the variable <strong>```sum```</strong> a reference to another variable <strong>```total```</strong>,
  it basically means that the sum and the total are representing a single variable and can be used interchangeably.<br><br>
  Analogus to pointers, These variables are declared by specifying the data type, giving a valid name and putting a ```ampersand(&)``` before the name of the varieble
  and after specifying the data type.</em>
  
  <em>So let us go ahead and discuss more about this new type of variable.</em>

<hr>

&nbsp;
[`↑ Go to Top`](#reference-variables)&nbsp; &nbsp;
[`↑ Reference Variables`](#what-is-a-reference-variable)&nbsp; &nbsp;
[`↓ Syntax & Rules`](#declaration-syntax-and-rules-for-a-reference-variable)&nbsp; &nbsp;
[`↓ Reference Variables & Pointers`](#reference-variables--pointers)&nbsp; &nbsp;
[`↓ Application of Reference Variables`](#application-of-reference-variables)

<hr><br>
  
<h2><em>Declaration Syntax and Rules for a Reference Variable</em></h2>

<em>

  A <strong>Reference Variable</strong> is declared as follows:</em>
  
  ```
  Syntax:
  
  data-type & Reference-Variable-Name = Actual-Variable-Name;
  ```
  
  ```C
  Examples:

  int a = 100;
  int &refTo_a = a;

  int b = 50;
  int &refTo_b = b;
  ```
<em>In the above examples, ```refTo_a``` & ```refTo_b``` are reference variables for ```a``` and ```b``` respectively.</em>

<br><em>
  
Now, if we notice the syntax of declaration of <strong>Reference Variable</strong>, it is declared as well as initialised by a variable to for which it is a refrence.
But in the above two types of variables, we just the variables and it is correct. So what does this mean !

This basically signifies an important point about <strong>Reference Variables</strong>, that differs from any other type of variable.
A <strong>Reference Variable</strong> cannot be ```NULL```.</em>

> <em>A <strong>Reference Variable</strong> must be initialised at the time of declaration. This establishes a relationship between a <strong>Reference Variable</strong>
  and the data object to which it is refrencing.</em>
  
<br>
  
```C
Example:

int a = 5;
int &refTo_a = a;  // This syntax is OKAY, since we are declaring as well as initialising a refernce variable

int b = 10;
int &refTo_b;     // This syntax is NOT OKAY, since we are declaring, but not initialising a reference variable.
```

<em>The declaration of reference variable ```refTo_b``` will give an error as:</em>
```
'refTo_b' declared as reference but not initialized
```
  
<br><em>
  
  Now, analogus to pointer declaration, we use ```ampersand(&)``` before the name of the varieble and after specifying the data type.
  This ```ampersand(&)``` indicates that it is a reference variable.</em>
  
  > <em>Here, ```ampersand(&)``` is not an address operator. Rather, it is used to specify that a <strong>Reference Variable</strong> is being declared.</em>
  
  
<br><em>
  Example related to <strong>Reference Variable</strong>:</em>
  
  ```C
  #include<iostream>
  using namespace std;

  int main()
  {
      int total = 100;      // Normal variable of type int
      int & sum = total;    // Reference variable for 'total'

      cout << "Original total --> "<< total << endl;
      cout << "Original sum   --> "<< sum << endl;

      cout << endl;

      total += 50;          // Updating 'total'
      cout << "'total' is increased by a value of '50'" << endl << endl;

      cout << "Updated total --> "<< total << endl;
      cout << "Updated sum   --> "<< sum << endl;

      cout << endl;

      sum = 500;            // Updating 'sum'
      cout << "'sum' is assigned a value equals to '500'" << endl << endl;

      cout << "Updated total --> "<< total << endl;
      cout << "Updated sum   --> "<< sum << endl;
    
      cout<<"\n";
      return 0;
  }
  ```
  ```
  Output:
  
  Original total --> 100
  Original sum   --> 100

  'total' is increased by a value of '50'  

  Updated total --> 150
  Updated sum   --> 150

  'sum' is assigned a value equals to '500'

  Updated total --> 500
  Updated sum   --> 500
  ```
  
<br><em>
  In the above example, we can see that changes in <strong>Normal Variable</strong> are reflected in <strong>Reference Variable</strong> also and
  changes in <strong>Reference Variable</strong> is also reflected in <strong>Normal Variable</strong>.
  Therefore, now we can understand that both <strong>Normal Variable</strong> and <strong>Reference Variable</strong>
  represents a single variable and can be used interchangeably, as defined earlier.</em>
  
<hr>

&nbsp;
[`↑ Go to Top`](#reference-variables)&nbsp; &nbsp;
[`↑ Reference Variables`](#what-is-a-reference-variable)&nbsp; &nbsp;
[`↑ Syntax & Rules`](#declaration-syntax-and-rules-for-a-reference-variable)&nbsp; &nbsp;
[`↓ Reference Variables & Pointers`](#reference-variables--pointers)&nbsp; &nbsp;
[`↓ Application of Reference Variables`](#application-of-reference-variables)

<hr><br>

<h2><em>Reference Variables & Pointers</em></h2>

<em>
  Let us discuss some differences between a <strong>Pointer Variable</strong> & a <strong>Reference Variable</strong>.</em>
  
  <br><em>
  Whenever we declare a <strong>Peference Variable</strong>, a memory address is assigned to it, depending upon the type of the pointer.
  But when a <strong>Reference Variable</strong> is decalred, it always represented by the memory address of the variable, to which it is referencing.
  That is, no separate memory is allocated to a <strong>Reference Variable</strong>.
  
  That is why, we can declare a ```NULL``` pointer, but we can't declare a ```NULL``` <strong>Reference Variable</strong>. Because, it will not be assigned any memory,
  rather it will represent a memory address that is already assigned.</em>
  
  <p align="center">
    <img src="https://user-images.githubusercontent.com/87887741/135336848-5cf2de9c-7791-4d9a-93cb-8f8c8e3dceb0.png" height="500">
  </p>

  <br><em>
  Let us understand it with an example code:</em>
  
  ```C
  #include<iostream>
  using namespace std;

  int main()
  {
      int a = 500;
      int &refTo_a = a;
    
      int *ptrTo_a = &a;

      cout << "The value of 'a' --> " << a << endl;
      cout << "The value of 'refTo_a' --> " << refTo_a << endl << endl;
    
      cout << "The value 'ptrTo_a' is pointing to --> " << (*ptrTo_a) << endl;

      cout << endl;

      cout << "The address of 'a' --> " << (&a) << endl;
      cout << "The address of 'refTo_a' --> " << (&refTo_a) << endl << endl;
    
      cout << "The address of 'ptrTo_a' --> " << (&ptrTo_a) << endl;

      cout<<"\n";
      return 0;
  }
  ```
  ```
  Output:
  
  The value of 'a' --> 500       
  The value of 'refTo_a' --> 500 
  
  The value 'ptrTo_a' is pointing to --> 500 

  The address of 'a' --> 0x61ff08
  The address of 'refTo_a' --> 0x61ff08
  
  The address of 'ptrTo_a' --> 0x61ff04
  ```
  
  <br><em>
  So, if we notice in the above example, a <strong>Pointer Variable</strong> has a different address,
  whereas the <strong>Refernce Variable</strong> has the same memory address as the variable has that it is refrening to.
  
  Therefore, unlike pointers, a <strong>Refernce Variable</strong>does not take up new memory, rather refer to already allocated memory.</em>
  
  <br><br><em>
  Another main difference between a <strong>Pointer Variable</strong> and <strong>Refernce Variable</strong> is that,
  If we assign a different address (address of different variable) to a <strong>Pointer Variable</strong>, it will then points to that variable, without changing anything
  in older variable to which it was pointing.
  
  But, if we try to assign a different variable to a <strong>Reference Variable</strong>, it will also change the value of original variable.
  Basically, it will replace the value of original variable (that it was refrering to) with the value of new variable assigned to it.
  
  Let us understand this difference with a example:</em>
  
  ```C
  Example 1:

  #include<iostream>
  using namespace std;
  
  int main()
  {
      int a = 500;
      int b = 250;

      int *ptr = (&a);

      cout << "Value of a --> " << a << endl;
      cout << "Value 'ptr' is pointing to --> " << (*ptr) << endl;

      cout << endl;
      ptr = (&b);

      cout << "Value of a --> " << a << endl;
      cout << "Value 'ptr' is pointing to --> " << (*ptr) << endl;

      cout<<"\n";
      return 0;
  }
  ```
  ```
  Output:
  
  Value of a --> 500
  Value 'ptr' is pointing to --> 500

  Value of a --> 500
  Value 'ptr' is pointing to --> 250
  ```
  
  <br>
  
  ```C
  Example 2:

  #include<iostream>
  using namespace std;

  int main()
  {
      int a = 500;
      int b = 250;

      int &ref = a;

      cout << "Value of a --> " << a << endl;
      cout << "Value of 'ref' --> " << ref << endl;

      cout << endl;
      ref = b;

      cout << "Value of a --> " << a << endl;
      cout << "Value of 'ref' --> " << ref << endl;

      cout<<"\n";
      return 0;
  }
  ```
  ```
  Output:
  
  Value of a --> 500    
  Value of 'ref' --> 500

  Value of a --> 250    
  Value of 'ref' --> 250
  ```
  
  <br><em>
  Notice the outputs of above two examples.
  
  In Example 1, when we changed the <strong>Pointer Variable</strong> from ```a``` to ```b```, it does not affected the value of ```a```, just started pointing to a new variable
  ```b```.
  But, in Example 2, when we changed the <strong>Reference Variable</strong> from ```a``` to ```b```, it changed the value of ```a``` as well.
  The value of ```a``` now becomes the value of ```b```.</em>
  
  <br><em>
  
  Therefore, from above examples, we can see that how a <strong>Reference Variable</strong> is totally different from <strong>Pointer Variable</strong>
  and how it is related to the original variable with which it is initialized.</em>
  
  <hr>

&nbsp;
[`↑ Go to Top`](#reference-variables)&nbsp; &nbsp;
[`↑ Reference Variables`](#what-is-a-reference-variable)&nbsp; &nbsp;
[`↑ Syntax & Rules`](#declaration-syntax-and-rules-for-a-reference-variable)&nbsp; &nbsp;
[`↑ Reference Variables & Pointers`](#reference-variables--pointers)&nbsp; &nbsp;
[`↓ Application of Reference Variables`](#application-of-reference-variables)
  
  <hr><br>
  
  
  <h2><em>Application of Reference Variables</em></h2>
  
  <em>A major application of <strong>Reference Variables</strong> is in ```Passing arguments to a function by reference```.
  This method is also known as ```Call by Reference``` method.</em>
  
  <br><em>
  Consider the example below:</em>
  
  ```C
  #include<iostream>
  using namespace std;

  void function(int &x)     // uses reference
  {
      x += 10;              // x is incremented by 10, so also a
      return;
  }

  int main()
  {
      int a = 10;
      cout << "a --> " << a << endl;

      function(a);          // function call
      cout << "a --> " << a << endl;

      return 0;
  }
  ```
  ```
  Output:
  
  a --> 10
  a --> 20
  ```
  
  <br><em>
  In the above example, when we call ```function(a)```, the following initialization occurs:</em>
  
  ```
  int &x = a
  ```
  
  <em>Thus, ```x``` here acts as <strong>Reference Variables</strong> and thus becomes an alias to ```a``` after execution of ```function(a)```.</em>
  
   <p align="center">
    <img src="https://user-images.githubusercontent.com/87887741/135339843-bd1ec891-3cb2-4f4a-ad05-0a8345b58cbd.png" width="400">
  </p>
  
  <br>
  
  > <em>The ```Call by Reference``` method is very useful in ```Object Oriented Programming```, since it allows manipulation of objects by reference.<br><br>
  Also, the <strong>Reference Variables</strong> works well not only with built-in data types, but also with user defined data-types such as
  ```Structures``` and ```Classes```. References works wonderfully well with these user defined data types.
  Therefore, it is a very useful variable type in C++ Programming language.</em>
  
  <hr>

&nbsp;
[`↑ Go to Top`](#reference-variables)&nbsp; &nbsp;
[`↑ Reference Variables`](#what-is-a-reference-variable)&nbsp; &nbsp;
[`↑ Syntax & Rules`](#declaration-syntax-and-rules-for-a-reference-variable)&nbsp; &nbsp;
[`↑ Reference Variables & Pointers`](#reference-variables--pointers)&nbsp; &nbsp;
[`↑ Application of Reference Variables`](#application-of-reference-variables)
  
  <hr>
