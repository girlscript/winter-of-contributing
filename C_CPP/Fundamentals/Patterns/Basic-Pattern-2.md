# Pattern in C 👨‍💻
Pattern programs are patterns containing alphabets, numbers, special characters in symmetrical or asymmetrical form. These programs can be solved using loop condition.
## Example:💡
There are several patterns in C language like star pattern, number patterns, and character patterns. In this section, we are going to discuss only :
* Number Pattern
* Star Pattern
---
## 📌NUMBER PATTERNS📄
 * ### Pattern 1:
![num2](https://user-images.githubusercontent.com/87390353/135296627-9c64d253-916a-4651-95f9-00311d8675c3.jpg)
### 🖊Code:
```c
#include<stdio.h>
void main()
{
int i,k,j;
//outer loop define
for(i=1;i<=4;i++)
  {
  k=i;  
//inner loop define
for(j=1;j<=7;j++)
 {
if(j>=5-i&&j<=3+i)
    {
        printf("%d",k);
        j<4?k++:k--;
    }
    else
        printf(" ");
 }
        printf("\n");
  }
}
```
 ---
 * ### Pattern 2:
 ![num5](https://user-images.githubusercontent.com/87390353/135322532-d08b19db-f807-4d91-bbd3-38a6ced676b8.jpg)
 ### 🖊Code:
 ```c
 #include<stdio.h>
void main()
{
  int i,k,j;
  //outer loop define[as the no of row is 4]
  for(i=1;i<=4;i++)
  {
   k=1;
   //inner loop define[as the no of coloumn is 7]
  for(j=1;j<=7;j++)
 {
  if(j>=5-i&&j<=3+i)
    {
        printf("%d",k);
        j<4?k++:k--;
    }
  else
        printf(" ");
 }
        printf("\n");
  }
}
```
 --- 
## 📌STAR PATTERNS📄
* ### Pattern 1:
![pattern_2](https://user-images.githubusercontent.com/87390353/135326627-5d91cd14-1719-4d20-a148-d71e2b3522c5.jpg)
## 🖊Code:
```c
#include<stdio.h>
void main()
{
int i,j;
//outer loop define
for(i=1;i<=5;i++)
 {
 //inner loop define
 for(j=1;j<=9;j++)
   { 
   if(j<=6-i||j>=4+i)
   printf("*");
else
   printf(" ");
   }
   printf("\n"); 
 }
}
```
---
* ### Pattern 2:
![pattern_1](https://user-images.githubusercontent.com/87390353/135326959-c05ef3d9-7772-427d-a76d-21c686b628ba.jpg)
### 🖊Code:
```c
#include<stdio.h>
void main()
{
int i,j;
//outer loop define
for(i=1;i<=5;i++)
 {
 //inner loop define
 for(j=1;j<=9;j++)
   {  
   if(j<=i||j>=10-i)
   printf("*");
else
   printf(" ");
   }
   printf("\n"); 
 }
}
```
## Happy Learning😊✨
