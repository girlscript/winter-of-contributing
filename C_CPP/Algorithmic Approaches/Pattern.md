# Pattern in C 👨‍💻
Pattern programs are nothing but patterns consisting of numbers, alphabets or symbols in a particular form. These kinds of pattern programs can be solved easily using loop condition.
## Example:💡
There are various patterns in C language like star pattern, number patterns, and character patterns. In this section, we are going to discuss only Number and Star patterns.
| Index        | Types |
| ----------- | ----------- |
| 1.       | Number Patterns    |
| 2.       | Star Patterns    |



---

## 📌NUMBER PATTERNS📄
 * ### Pattern 1 [Pascal Triangle]:
 ![pascal](https://user-images.githubusercontent.com/87390353/135294713-6f11bdb1-34ad-47ec-9a5c-3181528fe377.jpg)
 
 ### 🖊Code:
 ``` 
 #include<stdio.h>
int main()
{
    int i,j,num=1,n,k;
    printf("Enter the number of rows: ");
    scanf("%d",&n);    
    for (i=0;i<n;i++){  
        for (k=i;k<n;k++){ 
            printf("  ");
        }
        for (j=0;j<=i;j++){ 
            if (j==0||i==j)
                num=1;
            else
                num=num*(i-j+1)/j;
        printf("   %d",num); 
        }
        printf("\n");
    } 
    return 0;
 }
 ```
 ---

 * ### Pattern 2:
![num2](https://user-images.githubusercontent.com/87390353/135296627-9c64d253-916a-4651-95f9-00311d8675c3.jpg)

### 🖊Code:
```
#include<stdio.h>
void main()
{int i,k,j;
for(i=1;i<=4;i++)
  {k=i;
  
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

 * ### Pattern 3:
![num3](https://user-images.githubusercontent.com/87390353/135321692-e385113a-ad45-43ea-8cce-c382d0b3f234.jpg)

### 🖊Code:
```
#include<stdio.h>
void main()
{
	int l,i,j;
	printf("Enter the line number:");
	scanf("%d",&l);
	for(i=1;i<=l;i++)
{
	for(j=1;j<=i;j++)
	printf("%d",i);
	printf("\n");
}
}
```
---

 * ### Pattern 4:
 ![num4](https://user-images.githubusercontent.com/87390353/135322196-d67aacef-bcd9-4b3e-8f89-51850ec04251.jpg)
 
 ### 🖊Code:
 ```
  #include<stdio.h>
  void main()
{
  int i,j,k;
  for(i=1;i<=5;i++)
  {k=1;
   for(j=1;j<=5;j++)
   { if(j<=i)
      {printf("%d",k);
       k=1-k;
      }
   else
     printf(" ");
   }
     printf("\n");
 }
}
 
 ```
 ---

 * ### Pattern 5:
 ![num5](https://user-images.githubusercontent.com/87390353/135322532-d08b19db-f807-4d91-bbd3-38a6ced676b8.jpg)
 
 ### 🖊Code:
 ```
 #include<stdio.h>
void main()
{int i,k,j;
for(i=1;i<=4;i++)
  {k=1;
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
 ---
 
## 📌STAR PATTERNS📄
* ### Pattern 1:
![pattern_5](https://user-images.githubusercontent.com/87390353/135323734-c5f9b102-a837-4181-a9ee-6414475cfdbf.jpg)

### 🖊Code:
```
#include<stdio.h>
void main()
{int j,i;
  for(i=1;i<=5;i++)
 {for(j=1;j<=4;j++)
  {if (j>=6-i&&j<=10-i)
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
![pattern_4](https://user-images.githubusercontent.com/87390353/135324071-67c4495f-d85b-443c-bbb4-9c64fc86bfb4.jpg)

### 🖊Code:
```
#include<stdio.h>
void main()
{
  int i,j;
  for(i=1;i<=6;i++)
    {
     for(j=1;j<=11;j++)
        if(j>=7-i&&j<=5+i)


        printf("*");


        else
        printf(" ");
        printf("\n");

}
}
```
---
* ### Pattern 3:
![pattern_3](https://user-images.githubusercontent.com/87390353/135325654-645df4a3-4b7f-4100-920a-fd74f7b30a6a.jpg)

### 🖊Code:
```
#include<stdio.h>
void main()
{int i,j,k=0;
  for(i=1;i<=7;i++)
 {
     (i<=4?k++:k--);
  for(j=1;j<=7;j++)
  {if(j>=5-k&&j<=3+k)
    printf("*");
  else
    printf(" ");
  }
    printf("\n");
 }
}

```
---
* ### Pattern 4:
![pattern_2](https://user-images.githubusercontent.com/87390353/135326627-5d91cd14-1719-4d20-a148-d71e2b3522c5.jpg)

## 🖊Code:
```
#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=5;i++)
 {
 for(j=1;j<=9;j++)
 
   {  if(j<=6-i||j>=4+i)
   printf("*");
else
   printf(" ");
   }
   printf("\n"); 
 }
}

```
---
* ### Pattern 5:
![pattern_1](https://user-images.githubusercontent.com/87390353/135326959-c05ef3d9-7772-427d-a76d-21c686b628ba.jpg)

### 🖊Code:
```
#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=5;i++)
 {
 for(j=1;j<=9;j++)
   {  if(j<=i||j>=10-i)
   printf("*");
else
   printf(" ");
   }
   printf("\n"); 
 }
}
```
## Happy Learning😊✨

