# File Handling in C


| Index                                                         |
| ------------------------------------------------------------- |
| [ What is a File ? ](#link1) |
| [What is File Handling ?](#link2)           |
| [Why File Handling ?](#link3)|
| [Types of files in C ](#link4)|
| [Different operations for File Handling in C](#link5)|
| [ Opening Modes in a text file ](#link6)           |
| [Closing a text file](#link7) |
|[ Reading and Writing a Text File](#link8)|
|[ Reading and Writing a Binary File](#link9)|



## What is a File ?  <a name="link1"></a>

A file is a space in a memory where data is stored in a sequence of bytes .

## What is File Handling ?<a name="link2"></a>

File handling in C refers to the of storing data in the form of input or output produced by running C programs in data files for future reference

## Why File Handling ?<a name="link3"></a>

- **Reusability:** It helps in conserving data or information generated when running the program. 
- **Saves time:** There are some programs that need loads of input from the user. You can simply access any a part of the code with the assistance of some commands. 
- **Portability:** You can simply transfer the contents of a file from one computing system to a different while not having to fret regarding the loss of knowledge.
## Types of files in C programming language <a name="link4"></a>

### **Text files :**

- includes files with .txt and .csv extensions

- Stores information in the form of ASCII characters internally

- simple to use and access

- easily readable

- large storage space

- does not provide any security

### **Binary files**

- .bin extension

- 0s and 1s i.e. collection of bytes

- occupies less storage space

- much easier to access

- more secure

## Different operations for File Handling in C <a name="link5"></a>

-  ` fopen() ` (with attributes as “a” or “a+” or “w” or “w++”) : Create a new file
- ` fopen() `   : open an existing file in your system
- `fclose()`  : Close a file
- `getc()` : Read characters from a line
- `putc()` : Write characters in a file
-  `scanf()` : Read a set of data from a file
- `fprintf()` : Write a set of data in a file
- `getw()` : Read an integral value from a file
- `putw()` : rite an integral value in a file
- `fseek()` : et a desired position in the file
- `ftell()`    : et the current position in the file
- `rewind()`  : et the position at the beginning point

## Opening Modes in a text file <a name="link6"></a>
```C
*fptr = FILE *fopen(const char *filename, const char *mode);
```
**fptr : pointer to the file that links the file and the program.*


**filename : name of the file.*

**mode : mode of openenig our file.*

**A file can be opened in the following modes  :**

|**MODE**|**FUNCTION**|
| :-: | :-: |
|r| open a text file in reading mode|
|w| open or create a text file in writing mode|
|a| open a text file in append mode|
|r+| open a text file in both reading and writing mode|
|w+| open a text file in both reading and writing mode|
|a+| open a text file in both reading and writing mode|
|rb| open a binary file in reading mode|
|wb| open or create a binary file in writing mode|
|ab| open a binary file in append mode|
|rb+| open a binary file in both reading and writing mode|
|wb+| open a binary file in both reading and writing mode|
|ab+| open a binary file in both reading and writing mode|

## Closing  a text file <a name="link7"></a>

use **fclose() function** 
```C
int fclose( FILE *fpointer);
```
  
returns:
   - 0  : if the file is closed successfully
   - EOF(end of file) : in case of any error while closing the file.

## Reading and Writing a Text File <a name="link8"></a>

Functions used to read and write 

- characters in a file : **getc()** , **putc()**

- set of data in a file : **fscanf()** , **fprintf()** 

use of fprintf
```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
char ch;
FILE *fpointer;
fpointer = fopen("C:\\file.txt","w"); 
if(fpointer == NULL)
{
printf("File does not exist.");
exit(0);
}
printf("Enter a character : ");
scanf("%c",&ch);
fprintf(fpointer,"%c",ch); 
fclose(fpointer);
return 0;
}
```
use of fscanf() example :
```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
char ch;
FILE *fpointer;
if ((fpointer = fopen("C:\\file.txt","r")) == NULL)
{
printf("File does not exist.");
exit(0);
}
fscanf(fpointer,"%c", &character);
printf("The character is: %c", ch);
fclose(fpointer);
return 0;
}
```


## Reading and Writing a Binary File  <a name="link9"></a>

- Done using fread() and fwrite() 
- Each take 4 arguements : data_address , data_size , number_of_data_items , file_pointer

Here are some examples :

program to read 
```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
int year =2021;
int i;
FILE *ptr;

ptr = fopen("filename.bin","rb"); 
if(!ptr)
{
printf("Error! The file does not exist.");
exit(0);
}
for(i = 0; i < 3; i++) 
{
fread(&e, sizeof(int),1 , ptr);
printf("%d\n",year);
}
fclose(pointer);
return 0;
}
```
Output:

2021

2021

2021


program to write
```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
char line[10000];
FILE *fpointer;
fpointer = fopen("filename.txt", "w");
if(fpointer == NULL)
{
printf("Error!");
exit(0);
}
printf("Enter a statement: ");
fgets(line,10000,stdin);
fprintf(fpointer,"%s", line);
fclose(fpointer);
return 0;
}
```
Whatever you write in "Enter the statement: " , will get written in your filename.txt file.
