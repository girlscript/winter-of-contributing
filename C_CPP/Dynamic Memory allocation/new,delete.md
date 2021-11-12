In c++ language "new" nad "delete" keyword are used to allocate memory dynamically.
# New keyword
It is used to allocate memory dynamically . lets see an example for better understanding.<br>
```cpp
 int *p=new int;
```
In this example "p" is a pointer which will point to a memory location where we can store 4 byte data.<br>
lets see one more example.<br>
```cpp
 int *ptr=new int(17);
```
here "ptr" will point to a memory address and 17 will be stores there.
```cpp
 int *ptr=new int[10];
```
here "ptr" will point to a contiguous block of memory of size 10*4=40 byte.Actually ptr point to the base address of an array whose size is 10. To store data in this dynamically allocated memory block use the below code.
```cpp
 for(int i=0 ; i<10 ; i++)
    cin>>*(ptr+i);
```
lets see an example of user defined data type<br>
```cpp
struct student{
    int roll,marks;
}*node=new struct student;
```
here node will point to a memory location whose size is equal to the size of the user defined data type. To store data in this memory block "this" pointer is used.
```cpp
struct student *node=new struct student;
cin>>(node->roll);
cin>>(node->marks);
```
# Delete keyword
To delete the dynamically allocated block of memory "delete" keyword is used as compiler do not automatically delocate it . It is the responsibility of the programer to deallocate it . otherwise it will result in memory leakage.
```cpp
 delete node;
```

