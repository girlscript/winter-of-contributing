## **Strings**
#### Strings are one dimensional array of characters terminated by a null character '\0'
## Declaration 
#### char string_name[size];
## Methods to initialize a string:-
- char str[]="GirlScript";
- char str[11]="GirlScript";
- char str[]={'G','i','r','l','S','c','r','i','p','t','\0'};
- char str[11]={'G','i','r','l','S','c','r','i','p','t','\0'};

## Entering and Printing a string:-
```
#include<stdio.h>
#include<string.h>
int main()
{
    char str[26];
    printf("\n\n Enter a string:");
    scanf("%s",&str);
    printf("\n Entered string :%s",str);
    return 0;
}
```
**Output:-**

![image](https://user-images.githubusercontent.com/75535031/134954374-5b177507-15a8-4c35-a717-d17c9e73081e.png)

## Some important string functions in C
### All string functions are included in header file **#include<string.h>**

1. strlen()
2. strrev()
3. strlwr()
4. strupr()
5. strcpy()
6. strncpy()
7. strcat()
8. strncat()
9. strcmp()
10. strcmpi()
11. strchr()
12. strrchr()
13. strstr()


### 1. strlen() - It finds out the length of the string

### **syntax** - ```int strlen(char* str);```

Code:-
```
#include<stdio.h>
#include<string.h>
int main()
{
    printf("\n\n");
    char str[]="Girlscript";
    printf("Length of %s is :%d",str,strlen(str));
    printf("\n\n");
    return 0;
}
```


**Output:-**

![image](https://user-images.githubusercontent.com/75535031/134817421-8bd9576e-a425-4efa-977f-2b6f9615a631.png)


### 2. strrev() - It reverses a string

### **syntax** - ```char *strrev(char* str);```

Code:- 
```
#include<stdio.h>
#include<string.h>
int main()
{
    printf("\n\n");
    char str[]="Welcome!";
    printf("Original string:%s",str);
    printf("\n\nReversed string :%s",strrev(str));
    printf("\n\n");
    return 0;
}
```

**Output:-**

![image](https://user-images.githubusercontent.com/75535031/134817573-8a89722f-ce6b-4f1b-b085-730ab3a813a3.png)


### 3. strlwr() - It converts a string to lowercase 

### **syntax** - ```char *strlwr(char* str);```

Code:-
```
#include<stdio.h>
#include<string.h>
int main()
{
    printf("\n\n");
    char str[]="GirlScript";
    printf("Original string:%s",str);
    printf("\n\nString in lowercase :%s",strlwr(str));
    printf("\n\n");
    return 0;
}
```

**Output:-**

![image](https://user-images.githubusercontent.com/75535031/134817627-ccf5b726-9b34-40c8-b34e-0ced699647a3.png)

### 4. strupr() - It converts a string to uppercase

### **syntax** - ```char *strupr(char* str);```

Code:- 
```
#include<stdio.h>
#include<string.h>
int main()
{
    printf("\n\n");
    char str[]="GirlScript";
    printf("Original string:%s",str);
    printf("\n\nString in uppercase :%s",strupr(str));
    printf("\n\n");
    return 0;
}
```

**Output:-**

![image](https://user-images.githubusercontent.com/75535031/134817674-06b5f215-d90d-4f1e-a1f6-bdc536cf942e.png)

### 5. strcpy() - It copies source string to destination string

### **syntax** - ```char *strcpy(char* destination_str,char* source_str);```

Code:-
```
#include<stdio.h>
#include<string.h>
int main()
{
    printf("\n\n");
    char str1[]="GirlScript";
    char str2[20];
    printf("\n\nCopied String :%s",strcpy(str2,str1));
    printf("\n\n");
    return 0;
}
```

**Output:-**

![image](https://user-images.githubusercontent.com/75535031/134817737-54f6ef31-e8c9-4124-9e9f-05bf6b4675d0.png)

### 6.strncpy() - It copies first n characters of source string to destination string

### **syntax** - ```char *strncpy(char* destination_str,char* source_str,int n);```

Code:- 
```
#include<stdio.h>
#include<string.h>
int main()
{
    printf("\n\n");
    char str1[]="GirlScript";
    char str2[5];
    printf("\n\nCopied String upto 4 characters:%s",strncpy(str2,str1,4));
    printf("\n\n");
    return 0;
}
```

**Output:-**

![image](https://user-images.githubusercontent.com/75535031/134817866-706b606b-9194-4a9f-8547-57365d7ac8c8.png)

### 7.strcat() - It concatenates the 2 strings and returns the concatenated string

### **syntax** - ```char *strcat(char* str1,char* str2);```

Code:-
```
#include<stdio.h>
#include<string.h>
int main()
{
    printf("\n\n");
    char str1[]="Welcome to ";
    char str2[]="GirlScript";
    printf("\n\nConcantenated String:%s",strcat(str1,str2));
    printf("\n\n");
    return 0;
}
```

**Output:-**

![image](https://user-images.githubusercontent.com/75535031/134817937-e254bfe8-a66d-40b1-a2d9-a8f444b88080.png)

### 8.strncat() - It concatenates the first n characters of string 2 to string 1

### **syntax** - ```char *strncat(char* str1,char* str2,int n);```

Code:-
```
#include<stdio.h>
#include<string.h>
int main()
{
    printf("\n\n");
    char str1[]="Welcome to ";
    char str2[]="GirlScript Winter";
    printf("\n\nConcantenated String upto 10 characters:%s",strncat(str1,str2,10));
    printf("\n\n");
    return 0;
}
```

**Output:-**

![image](https://user-images.githubusercontent.com/75535031/134817988-a9644d7a-d134-4cf3-b781-e21f8da33800.png)

### 9.strcmp() - It compares the 2 strings

### **syntax** - ```int strcmp(char* str1,char* str2);```

strcmp() compares the two strings lexicographically which means that the comparison starts character by character starting from the first character until the characters in both strings are equal or a NULL character is reached.

If first character in both strings is equal, then it will check the second character, if this is also equal then it will check the third and so on
This process will be carried out until a character in either string is NULL or the characters are unequal.

It return:-
- 0 if 2 strings are equal
- negative value if str2 is greater
- positive value if str1 is greater

Code:-
```
#include<stdio.h>
#include<string.h>
int main()
{
    printf("\n\n");
    char str1[]="GirlScript";
    char str2[]="GirlScript";
    printf("\n\nStrcmp: %d",strcmp(str1,str2));
    printf("\n\n");
    return 0;
}
```


**Output:-**

![image](https://user-images.githubusercontent.com/75535031/134818120-c96ecd70-3581-4d3d-b684-11dcfc3b5217.png)

### 10.strcmpi() - It compares the 2 strings 

### **syntax** - ```int strcmpi(char* str1,char* str2);```

It is same as that of strcmp() instead the difference is that the strcmpi() in not case sensitive while strcmp() is case sensitive.

Code:- 
```
#include<stdio.h>
#include<string.h>
int main()
{
    printf("\n\n");
    char str1[]="GirlScript";
    char str2[]="girlscript";
    printf("\n\nStrcmpi: %d",strcmpi(str1,str2));
    printf("\n\n");
    return 0;
}
```

**Output:-**

![image](https://user-images.githubusercontent.com/75535031/134818205-dfd866c4-08e3-4d22-9c15-d71b861fe89b.png)

### 11.strchr() - It returns pointer to the first occurrence of the character in the string

### **syntax** - ```char *strchr(char* str,char ch);```

Code:- 
```
#include<stdio.h>
#include<string.h>
int main()
{
    printf("\n\n");
    char str[]="GirlScript Winter Of Contributing";
    printf("\n\nString after first occurence of %c : %s",'W',strchr(str,'W'));
    printf("\n\n");
    return 0;
}
```

**Output:-**

![image](https://user-images.githubusercontent.com/75535031/134818274-b4b53d5a-e07e-460a-9363-9e5396859d20.png)

### 12.strrchr() - It returns pointer to the last occurrence of the character in the string

### **syntax** - ```char *strrchr(char* str,char ch);```

Code:-
```
#include<stdio.h>
#include<string.h>
int main()
{
    printf("\n\n");
    char str[]="GirlScript Winter Of Contributing";
    printf("\n\nString after last occurence of %c : %s",'C',strrchr(str,'C'));
    printf("\n\n");
    return 0;
}
```

**Output:-**

![image](https://user-images.githubusercontent.com/75535031/134818308-81e6b8cc-c5b0-4299-8207-3bbc84a268a9.png)

### 13.strstr() - It is similar to strchr() instead it searches the entire string str2 in str1 instead of a single character

### **syntax** - ```char *strstr(char* str1,char* str2);```

Code:-

```
#include<stdio.h>
#include<string.h>
int main()
{
    printf("\n\n");
    char str[]="GirlScript Winter Of Contributing";
    printf("\n\nString after first occurence of %s : %s","Winter",strstr(str,"Winter"));
    printf("\n\n");
    return 0;
}
```

**Output:-**

![image](https://user-images.githubusercontent.com/75535031/134818346-8e0372d0-48ae-48e8-8505-70aa7e50ee66.png)
