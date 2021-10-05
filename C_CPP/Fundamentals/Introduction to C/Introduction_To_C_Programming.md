### Since, i have learned C as the first language of my career in Technology, i would like to share my learnings and hope you choose this as yours! 💯

## Facts about C Programming Language
Let us talk about some general facts:

- The  American  National  Standards  Institute (ANSI)  had formalized the C language.
You know what this is an important step for a language to be recognised for future use and generation. 👍

Secondly,
- C was invented to write UNIX operating system. Linux OS, PHP, and MySQL are written in C. 
- C has been written in assembly language.

#### What else? Umm, let's talk about features of C Language

## Features of C Programming Language
The most important features which i think makes C Language as the most supported language for the initial stage is:
- Easily extensible.
- Highly portable
- Efficient and fast
- C is a robust language with a rich set of built-in functions and operators.
- C is a collection of C library functions; we can also create our function and add it to the C library.

#### Woahhh! These features are quite fascinating :) Isn't it?
 So, lets talk about Advantages of C language 

## Advantages of C Programming Language
- C is the building block for many other programming languages.
- As talked above, it is highly portable.
- The  modular  structure  makes  code  debugging,  maintenance,  and testing easier.

#### All the features and advantages talked above are enough to choose C Language as the initial step of the ladder of success in Tech.

#### AS a coin has two sides, similarly a language also has pros and cons!

Now, lets talk about some disadvantages of C Language

## Disadvantages of C Programming Language 
As compared to other language in today's era, i know it becomes a little difficult to digest these disadvantages but these do not cover the advantages of C Language at all.

- C does not provide Object Oriented Programming (OOP) concepts whereas C++ supports OOPS.
-  There are no concepts of Namespace in C.
- C does not provide binding or wrapping up of data in a single unit. 
- C does not provide Constructor and Destructor.

#### Don't be sad or dishearted! Still C Language has a lot to learn🥇


## Syntax and Semantics
####  A program that is syntactically correct is not necessarily logically (semantically) correct

- The _syntax rules_ of a language define how we can put together symbols, reserved words, and identifiers to make a valid program.
- The _semantics_ of a program statement define what that statement means (its purpose or role in a program)

## Errors
**A program can have three types of errors**

#### Compile-time errors
The compiler will find syntax errors and other basic problems.
- [x] If compile-time errors exist, an executable version of the program is not created.

#### Run-time errors
A problem can occur during program execution.

**EXAMPLE:** Such as trying to divide by zero, which causes a program to terminate abnormally.

#### Logical errors
A program may run, but produce incorrect results, perhaps using an incorrect formula or logic.


#### I guess this is enough! We have talked a lot about C Language.
Lets now see the basic syntax and all other concepts in C

## C Basic Syntax
### Tokens in C
A token is either a keyword, an identifier, a constant, a string literal, or a symbol.
For example, the following C statement consists of five tokens- 

                      
				 printf("Welcome to Girlscript Winter Of Contributing! \n");  
				 
				 
The individual tokens after breaking this above code into different statements will be - 



				 printf 
				 
				 (
				 
				 "Welcome to Girlscript Winter Of Contributing! \n"
				 
				 ) 
				 
				 ; 
				
				 
### Semicolon
In a C Program, the semicolon is a statement terminator. That is, each individual statement must be ended with a semicolon terminator. It indicates the end of one logical entity.
				
				
						printf("Welcome to Girlscript Winter Of Contributing! \n");
						return 0;


### Comments 
Comments are likely helping text in your C program and they are ignored by the compiler.

#### YES! You might wonder something written on the screen isn't compiled by the compiler and has not appeared as the output on the screen. Woahhh! 
Comments are for your own convinience. You can write them anywhere, anytime as your small notes or hidden information.

**//** Single line comment

**/*** Demostration of Multiline comment ***/**

### Identifier
A C identifier is a name used to identify a variable, function, or any other user-defined item. An identifier starts with a letter A to Z, a to z, or an underscore **'_'** followed by zero or more letters, underscores, and digits(0 to 9).

C does not allow punctuation characters such as @, $, and % within identifiers.

C is a **case-sensitive** programming language.
 
Thus, **Girlscript** and **girlscript** are two different identifiers in C. Here are some examples of acceptable identifiers:
Some examples:
- girlscript 
- open_source
- gwoc_2021
- thisyear2021	
- _gwoc	 
- gWOC
						
### Keywords
Keywords are the reserved words in C. These reserved words may not be used as constants or variables or any other identifier names. List of **32** keywords are:

Some common and mostly used keywords are:

- int		
- else	
- long	
- switch	
- char		
- return		
- float	
- continue	
- for	
- double	
- void	
- sizeof	
- do	
- if		
- while

#### NOTE:
### Whitespace
Whitespace is the term used in C to describe blanks, tabs, newline characters and comments. Whitespace separates one part of a statement from another.

## C Data Type
C provides various types of data-types which allow the programmer to select the appropriate type for the variable to set its value.

The data-type in a programming language is the collection of data with values having fixed meaning as well as characteristics. Some of them are an integer(int), floating point(float), character(char), etc.

**ANSI C provides three types of data types:**

1. *Primary(Built-in) Data Types:*

void, int, char, double, float, char*, int*, etc.

2. *Derived Data Types:*

Array, References, and Pointers.

3. *User Defined Data Types:*

Structure, Union, and Enumeration.


Usually, programming languages specify the range values for given data-type and storage size(in bits) which they a acquire in a given architecture. The storage sizes might differ in different programming languages and architecture.

#### Declaration:
				int	age ; // 12
				char	letter ; // k
				float	height,width; // 19.5,23.08

# 1byte = 8 bits
	
## Data Type and Variable declaration in C 
					
       					#include<stdio.h>
					int  main()
					{
					int  a	  =	4000;	//  positive  integer  data  type
					float  b  =	5.2324;	//  float  data  type
					char  c   =     'Z';	//  char  data  type
					long  d	  =	41657;	//  long  positive  integer  data  type
					long  e	  =	-21556;	//  long -ve  integer  data  type
					int  f	  =	-185;	// -ve  integer  data  type
					short  g  =	130;	//  short +ve  integer  data  type
					short  h  =	-130;	//  short -ve  integer  data  type
					double  i =	4.1234567890;	//  double  float data  type
					float j	  =	-3.55;	// float data type
					};
					
## sizeof()
sizeof() operator can use to get the exact size of a type or a variable on a particular platform.

				#include<stdio.h>
				#include<limits.h>
				int main()
				{
				printf("Storage  size  for  int  is: %d\n",  sizeof(int));
				printf("Storage size for  char  is: %d\n",  sizeof(char));
				return	0;
				};
				
## Output: 
			
				Storagr size for int is:2
				Storagr size for char is:1
			
				
	
	
