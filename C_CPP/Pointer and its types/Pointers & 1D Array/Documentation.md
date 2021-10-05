<h1> Pointers and One-Dimensional Arrays </h1>

<p>

The elements of a 1D array are stored in consecutive memory locations. In C programming, we can access a 1D array element using pointers expressions.

Following are the main points for understanding the relationship of pointers with 1D arrays -

1. Elements of an array are stored in ```consecutive memory locations```.

2. The name of an array is a constant pointer that points to the ```zeroth element``` of the array, i.e., it stores the address of the ```zeroth element```, also known as the ```base address``` of array.

3. According to pointer arithmetic, when a pointer variable is incremented, it points to the ```next location of its base type```.

</p><br>

<h2> <u>Memory Arrangement and Representation of 1D Array -</u> </h2>
<p>

Elements of a 1D array are stored in ```consecutive memory locations```. If we create a 1D array of ```n``` elements, there will be a ```consecutive memory allocation``` for ```n``` elements. The name of the array will be a ```constant pointer``` that will point to the address of ```zeroth element``` or ```base address```.

For example -
```C
int a[10];
```

This will create a ```1D array``` for ```10``` element of type ```int``` in the memory. The elements will be assigned ```consecutive memory locations```.

<br>

![Diagram1](https://user-images.githubusercontent.com/87887741/134401544-9df57d72-3160-496e-bdaf-c82afb88b2f6.png)

</p><br>

<h2> <u>Allocation of memory for the elements of a 1D array using pointer -</u> </h2>

<p>

Suppose we want to create a 1D array of integer type of size ```m``` in C language. This basically means we need ```consecutive memory allocation``` for ```m``` elements. Therefore, we can use ```malloc()``` function provided by ```stdlib.h``` header file to generate memory for ```m``` elements. Since ```malloc()``` function return a pointer to the ```base address``` of allocated memory, we have to store that in a ```pointer variable```, so that we can access the allocated memory using that ```pointer variable```.

<br>

```C
int *iptr;
iptr = (int *)malloc(m * sizeof(int));
```
    
<br>

This will allocate ```consecutive memory``` for ```m``` elements and returns a ```pointer``` to the ```base address``` of allocated memory, which will be assigned to pointer variable ```iptr```.

<br>

![Diagram2](https://user-images.githubusercontent.com/87887741/134401665-e19d460f-209b-4839-8b57-28769eacc5b3.png)

</p><br>

<p>

<h2> <u>Accessing elements of a 1D array using pointer -</u> </h2>

Suppose we want to access the ```i-th``` element of a 1D array (assuming index number is starting from 0) of size ```m```.

On applying ```pointer arithmetic and dereferencing``` we can see that the expression ```(ptr+i)``` denotes the
address of ```i-th``` element of array and the expression ```*(ptr+i)``` denotes the value of ```i-th``` element of array (Just refer to the above diagram for better visualisation).

So, if we have a pointer pointing to the ```zeroth``` element of a 1D array, then we can access the elements of array by applying ```pointer arithmetic and dereferencing```.

<br>

```C
for(int i = 0; i < m; i++)
{
    // Printing address and value of elements of a 1D array of size m
    printf("%u --> %d", (iptr + i), *(iptr + i));

    printf("\n");
}
```

<br>

<em><strong>
- This relationship of pointer and 1D array is used in ```dynamic array``` and while ```sending array to functions```.
</strong></em>

</p><br><hr>

<h2><u> Below is the implementation of above explained concept using C language - </u></h2>

<p>

```C
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m;

    printf("Input size:\n");
    printf("\n");

    printf("m --> ");
    scanf("%d", &m);

    // Pointer to store base addredd of allocated memory
    int *iptr;

    // Allocating memory for m elements of 1D array
    iptr = (int *)malloc(m *sizeof(int));

    printf("\n");

    printf("Input %d elements:\n", m);
    printf("\n");

    // Loop to read elements as input from user
    for(int i = 0; i < m; i++)
    {
        // Accessing address of element a[i] using pointer arithemetic
        scanf("%d", (iptr + i));
    }

    printf("\n");

    printf("1D Array is:\n");
    printf("\n");

    // Loop to print 1D array
    for(int i = 0; i < m; i++)
    {
        // Accessing element by dereferencing the address of element a[i]
        printf("%d\t", *(iptr + i));
    }

    printf("\n");
    return 0;
}
``` 
</p>

<h2><u> Output - </u></h2>

<p>

```CPP
Input dimensions:

m --> 10

Input 10 elements:

10 11 12 13 14 15 16 17 18 19

1D Array is:

10      11      12      13      14      15      16      17      18      19
```
</p>
