
<h1 align="center">Looping Control Structures/Statements</h1>
<br>
<!----------------------------------------------INTRODUCTION------------------------------------------------------>

# **Introduction :**

In programming, sometimes we may need to use some part of our code for more than once. For example, let's say we want to print a statement for 5 times. This can be done in two ways:

- Iterative method:- By repeating the print statement for 5 times:
```jsx
#include <stdio.h>
  
int main()
{
    printf("Girlscript Winter of Contributing \n");
    printf("Girlscript Winter of Contributing \n");
    printf("Girlscript Winter of Contributing \n");
    printf("Girlscript Winter of Contributing \n");
    printf("Girlscript Winter of Contributing \n");

    return 0;
}
```
- Instead of repeating the same code multiple times, we can use loops. In loop, the statement will be written only once and will be excecuted multiple number of times. For example:-
```jsx
#include <stdio.h>

int main()
{   
    int i;
    for(i=1;i<=5;i++)
    {
     printf( "Girlscript Winter of Contributing \n");
    }
    
    return 0;
}
```
### ***Output :***
<img src="https://picc.io/-Oer_C8.png">
<p>&nbsp;</p>


<!----------------------------------------------TYPES------------------------------------------------------>
# **Types of Loops :**

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20191128194516/Cpp-loops.png" width="60%">
<p>&nbsp;</p>

## Based on the when the test condition is checked, there are two types of loops:
### **a) Entry Controlled Loops** :- Test Condition is checked before excecuting the body of loop. It is further divide into two types:<br>&nbsp;&nbsp;&nbsp;&nbsp;1) For Loop <br>&nbsp;&nbsp;&nbsp;&nbsp;2) While Loop
### **a) Exit Controlled Loops** :- Test Condition is checked after exceuting the body of loop. It is of only one  type: <br>&nbsp;&nbsp;&nbsp;&nbsp;1) do-while loop
<p>&nbsp;</p>
<img src="https://picc.io/gXijpmB.png" width="60%" height="60%">
<p>&nbsp;</p

<!----------------------------------------------FOR LOOP------------------------------------------------------>
# **For Loop :**
## ***Syntax:***
```jsx
for (initial value; condition; Updation ) 
{
  statements;
}
```
### ***Example :***
```jsx
//program to print the first 10 natural numbers

#include<stdio.h>
int main()
{
	int num;
	for(num=1;num<=10;num++)
	{
		printf("%d, ",num);		
	}
	return 0;
}
```
### ***Output :***
<img src="https://picc.io/xhtI6g6.png">
<p>&nbsp;</p>


<!----------------------------------------------WHILE LOOP------------------------------------------------------>
# **While Loop :**
## ***Syntax:***
```jsx
initialization;
while (condition)
{
   // statements
 
  updation;
}
```
### ***Example :***
```jsx
//program to print the statement "GWOC 2021" 5 times

#include<stdio.h>
int main()
{
  it num =1;
	while(num<=5)
  {
    printf("GWOC 2021\n");
  }

}
```
### ***Output :***
<img src="https://picc.io/GDF3iNU.png">
<p>&nbsp;</p>

<!----------------------------------------------DO WHILE LOOP------------------------------------------------------>
# **do-While Loop :**
## ***Syntax:***
```jsx
initialization;
do
{
   // statements

   updation;
} while (condition);
```
### ***Example :***
```jsx
//program to print the "Hello World" statement 5 times

#include<stdio.h>
int main()
{
	int num=1;	
	do	
	{
		printf("Hello World");
		num++;		
	}while(num<=5);
	return 0;
}
```
### ***Output :***
<img src="https://picc.io/dLdHe_f.png">
<p>&nbsp;</p>

<!----------------------------------------------NESTED LOOPS------------------------------------------------------>
# **Nested Loops :**
- Nesting of loops is the feature through which we can define a loop statement inside another loop statement. Any number of loops can be used inside another loop.

## **Nested For-Loop:**

### ***Syntax:***
```jsx
for( initialization; condition; updation ) {

   for( initialization; condition;updation ) {
      
      // Inner Loop statements
   }

   // Outer Loop statements
}
```
### ***Example :***
```jsx
//program to print a Square pattern

#include<stdio.h>
int main()
{
  int i,j,n=5;
  
  for(i=1;i<=5;i++) {
      
    for(j=1;j<=5;j++) {
        
      printf("* ");
      
    }
      printf("\n");
  }
 
}
```
### ***Output :***
```jsx
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
```
<p>&nbsp;</p>

## **Nested while-Loop:**

### ***Syntax:***
```jsx

initialization;
while(condition) {

   initialization;
   while(condition) {
      
      // Inner Loop statements
      Updation;
   }

   // Outer Loop Statements
   Updation;
}
```
### ***Example :***
```jsx
//program to print a number square pattern

#include<stdio.h>
int main()
{
  int i=1,j;
  
  while(i<=5) {

   j=1;
   while(j<=5) {
      
      printf("%d ",j);
      j++;
   }
   printf("\n");
   i++;
}
 
}
```
### ***Output :***
```jsx
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
```
<p>&nbsp;</p>

## **Nested do-while-Loop:**

### ***Syntax:***
```jsx

initialization;
do{
   initialization;
   do{
      
      // Inner Loop statements
      updation;
   }while(condition);
    
   // Outer Loop Statements
    updation;

}while(condition);

```
### ***Example :***
```jsx
//program to print a  right angled triangle pattern

#include<stdio.h>
int main()
{
  int i=1,j;
  do {
      j=1;
      do{
          
       printf("* ");
       j++;
       
      }while(j<=i);
      
      i++;
      printf("\n");
      
  }while(i<=5);
}
```
### ***Output :***
```jsx
*
* *
* * *
* * * *
* * * * *
```
<p>&nbsp;</p>
<!-------------------------------------------For-each Loops------------------------------------------------------>

# **For-Each Loop :**

- For-each loop is a control flow statement for traversing items in a collection. It is used to access elements of an array  without performing initialization. The working of foreach loops is to do something for every element rather than doing something n times.

- C doesnot support For-each loop but both c++ and java do.

### ***Example :***
```jsx
//program to trac=verse an array.

#include <iostream>
using namespace std;
  
int main()
{
    string gwoc[] = {"C/CPP", "Girlscript", "2021", "Opensource"};
  
    for (string a : gwoc)
        cout << a << endl;
}
```
### ***Output :***
```jsx
C/CPP
Girlscript
2021
Opensource
```
<p>&nbsp;</p

<!--------------------------------------MULTICONDITION LOOPS------------------------------------------------------>
# **Multi-Condition Loops :**

### ***Example :***
```jsx
//program to find the grade 

#include<stdio.h>
int main()
{
  int i,j,prd;
  
  for(i=1,j=9;i<=9,j>=1;i++,j--) {

      prd = i*j;
      printf("%d X %d = %d",i,j,prd);
      printf("\n");
      
    }
      
 }

 
```
### ***Output :***
```jsx
1 X 9 = 9
2 X 8 = 16
3 X 7 = 21
4 X 6 = 24
5 X 5 = 25
6 X 4 = 24
7 X 3 = 21
8 X 2 = 16
9 X 1 = 9
```
<p>&nbsp;</p>

### **Reference:**
- <a href="https://www.geeksforgeeks.org/">GeeksForGeeks</a>
- <a href="https://en.wikipedia.org/wiki/Foreach_loop#Syntax">Wikipedia</a>

### **Credits:**
- <a href="https://www.geeksforgeeks.org/">GeeksForGeeks</a>
- <a href="https://onlineclassnotes.com/what-are-entry-controlled-and-exit/">Online Class Notes</a>
- Images are hosted by <a href="https://picc.io/">picc.io</a>



