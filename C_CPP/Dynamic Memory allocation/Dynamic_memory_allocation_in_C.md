# Dynamic Memory Allocation in C language

The memory which is allocated using the concept of Static Memory Allocation is fixed and the size cannot be increased or decreased during run time. Hence, in order to tackle this problem, we use the concept of Dynamic Memory Allocation.

As the name suggests, the method of allocating memory at the time of execution (during run time), is called Dynamic Memory Allocation. Here user has flexibility to allocate memory according to their needs.

Heap is the segment of memory where dynamic memory allocation takes place. Heap, is basically an area of memory, where memory is allocated or deallocated randomly.

The allocated memory can only be accessed through pointers.

## Built-in Functions

* malloc()
* calloc()
* realloc()
* free()

### malloc()

* malloc is a built-in function which is declared under the header file <stdlib.h>
* It is the abbreviation for "memory allocation". 
* It is used to dynamically allocate a single large block of contiguous memory according to the size specified by the user.
* Syntax:   
    <pre> ```int *q = (cast-type*)malloc(n * sizeof(cast-type))``` where n is the size as mentioned by the user. </pre>  
    
* It is necessary to type-cast because, malloc() simply allocates memory withtout knowing the type of the data, and returns a void pointer which can point to any type of data. Hence it is the programmer's responsibility to type-cast it to the appropriate type.
* On successfull memory allocation it returns a pointer which is pointing to the first byte of the allocated memory or else, if it fails, it returns the NULL pointer. 

#### Code:
```c++
#include<stdio.h>
#include<stdlib.h>

int main(){  

   int n, i, *q;    
   printf("\nEnter number of elements: ");    
   scanf("%d", &n);    

   q = (int*)malloc(n*sizeof(int));  //memory allocated using malloc() function. 
   if(q == NULL){    
      printf("\nError\n");    
      exit(0);    
   }    
   printf("\nEnter elements of array: \n");    
   for(i = 0; i < n; ++i){
      scanf("%d", q + i);    
   }    
   printf("\nElements have been allocated memory dynamically.\n");   
   for(i = 0; i < n; ++i){
      printf("%d ", *(q + i));  
   }    
   free(q);     
return 0;  
}
```

Output:

![image](https://user-images.githubusercontent.com/75472177/134559739-92413508-5bf6-428b-8510-36d5e7c27a65.png)

### calloc()

* calloc is a built-in function which is declared under the header file <stdlib.h>
* It is the abbreviation for "contiguous allocation". 
* It allocates multiple blocks of requested memory.
* Syntax:   
    <pre> ```q = (cast-type*)calloc(number, byte-size)```  </pre>  

* It initially initializes all bytes to zero and returns NULL if memory is not sufficient.    

#### Code

```C++
#include<stdio.h>  
#include<stdlib.h> 

int main(){  
   int n, i,*q;    
   printf("\nEnter number of elements:\n ");    
   scanf("%d", &n);   

   q = (int*)calloc(n, sizeof(int));  //memory allocated using calloc() function  
   if(q == NULL){    
      printf("\nerror\n");    
      exit(0);    
   }    

   printf("\nEnter elements of array:\n ");    
   for(i = 0; i < n; ++i){    
      scanf("%d", q + i);       
   }    
   printf("\nDynamically allocated memory.\n ");    
   for(i = 0; i < n; ++i){    
      printf("%d ", *(q+i));       
   }     
   free(q);    
return 0;  
}
```

Output:

![image](https://user-images.githubusercontent.com/75472177/134561239-bf83bc3e-80d3-4513-bc6d-55c4c00e05da.png)


### realloc()

* realloc is a built-in function which is declared under the header file <stdlib.h>
* It is the abbreviation for "re-allocation". 
* If memory allocation is insufficient while allocating using malloc() or calloc(), we can reallocate the memory by using realloc() function. In short, it changes the memory size.
* Syntax:   
    <pre> ```q = realloc(ptr, new-size) ```  </pre>  
 

#### Code

```c++
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
   char *s;

   /* Initial memory allocation */
   s = (char *) malloc(15);
   strcpy(s, "Hello");
   printf("Initial string = %s\n", s);

   /* Reallocating memory */
   s = (char *) realloc(s, 25);
   strcat(s, " World");
   printf("Final string = %s\n", s);

   free(s);
   
   return(0);
}
```
Output:

![image](https://user-images.githubusercontent.com/75472177/134562624-55d2b6ce-e3c2-4053-abe3-977313f0959d.png)

### free()

* As you have seen in previous code snippets, the memory occupied by malloc(), calloc(), or realloc() functions must be released by calling the free() function. Otherwise, it will keep consuming memory until the program gets over.
* Syntax:   
    <pre> ```free(q) ```  </pre>  




