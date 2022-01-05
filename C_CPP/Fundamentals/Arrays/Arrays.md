# Arrays in CPP

An Array is a sequential collection(container) of same type of elements.The elements are stored in contiguous(continuous) memory locations and the elements of the array can be accessed using the indexes. Arrays can be used to store data types such as int, float ,char etc., and also derived data types such as pointes and structures.

The important point to note here is that indexing in arrays starts from 0 and goes upto size-1.

## Representation of an Array:

Let's suppose you want to store the marks of 10 students in a subject in an array. The array would be represented as:

![Array Representation](https://user-images.githubusercontent.com/63473496/134768711-11fbd8d7-beb4-4c54-85ab-1d5a5ff43f3d.png)

In the above figure,

The numbers 0 to 9 represents array indexes.<br/>
Length of the array is : 10<br/>
First Index is: 0<br/>
Last Index is : 9 (length of the array -1)<br/>

## Need for Arrays

Let's assume that we have been given the task of storing marks of 100 students somewhere. Now creating 100 variables to store the marks of each student would make it difficult to manage the variables, this is where Arrays come handy. We can store large number of items in a single variable only.

## Array Declaration in CPP

### Syntax for declaring an array
<br/>

**datatype array_name[size]** 
<br/>

```
int a[5];
```

**Array Declaration by specifying size**<br/>

```
int a[3];  // Array declaration by specifying size

int n;
cin>>n;
int b[n]; // Array declaration by user defined size

```

**Initialization of Arrays**

```
int a1[5] = {1,2,3,4,5} // The Declaration and Initialization of array is done in the same line


int a2[3] = {}; // Declaration of an array of size 3. Note that here all the elements are intialized to 0.

```

###  Array as input from the user
```
int n;
cin>>n;          // Taking user-input for size of array

int a[n];       // Declaration of Array through user-defined size

for(int i = 0;i<n;i++){
    cin>>a[i];            // Taking array elements as input from user
}

```

## Accessing Array Elements

We can access array elements using indexes. <br/>

Let's say you have an array of 5 integers and you want to access the first element of the array and store it somewhere.<br/>

This is how accessing of array elements takes place:<br/>
```
int a[5] = {7,9,6,5,4};

int first = a[0];        // the variable named first now contains 7

cout << first;        // 7

```

## Key Points about Arrays

1. The size of the array can never be negative.
2. Array elements are accessed using index values.
3. Array indexing starts from 0 and goes till size-1.
4. Do not specify negative values as index values.
5. Insertion and Deletion are costly operations since we need to manage the whole array for each insertion/deletion.


