# Dynamic Memory Deallocation  

The object created by 'new', i.e. the memory allocated for certain variable, by 'new' operator has to be deallocated once its purpose os over. This is done by the 'delete' operator. 'delete' operator destroys the created object to release the memory space for furture use. 'delete' is a keyword in C++.  

The general syntax is as follows:  

## **a. The general syntax to deallocate the memory dynamically allocated to store a single integer is:**  
```C++
delete <pointer_variable>;
```  
where,  
`delete` -> operator which deallocated the memory alloocated by new, back to the free store.  
`pointer_variable` -> variable of some data type which holds the starting address of the previously allocated dynamic memory block for a single integer.  

Here;s a program below explaining the same:  
```C++
#include<iostream>
using namespace std;
int main()
{
   int *p;
   p = new int;
   *p = 20;
   cout << "The value = " << *p << endl;
   delete p;
   return 0;
}
```  

### *Output*  
> The value = 20  

Here in the program, the statement  
```C++
delete p;
```  
deallocated the memory allocated to the program with the help of new operator.  

## **b. The general syntax to deallocate the memory dynamically allocated for an array is:**  
```C++
delete[] <pointer_variable>;
```  
where,  
`delete` -> operator used to deallocate the memory allocated by "new" operator back to the free store.  
`[]` -> indices that, the memory has to be deallocated for an array.  
`pointer_variable` -> pointer variable which holds the starting address of the total block previously dynamically allocated memory block for an array.  

Here's a program below explaining the same:  
```C++
#include<iostream>
using namespace std;
int main()
{
   int *p, i, n;
   cout << "Enter the value of n" << endl;
   cin >> n;
   p = new int[n];
   for(i = 0 ; i < n ; i++)
   {
      cout << "Enter the values one by one" << endl;
      cin >> p[i];
   }
   for(i = 0 ; i < n ; i++)
   {
      cout << "The numbers entered are " << endl;
      cout << p[i] << endl;
   }
   delete [] p;  //deallocating memory occupied by an integer array 
   return 0;
}
```  

## **c. The general syntax to deallocate the memory dynamically allocated for a class object is:**  
```C++
delete <pointer_variable>;
```
where,  
`delete` -> operator used to deallocate the memory allocated by "new" operator back to the free store.  
`pointer_variable` -> pointer variable of abstract data type(class name), i.e. type of the class object which holds the starting address of the total block previously dynamically allocated memory block for an object.  

Here's a program below explaining the same:  
```C++
#include<iostream>
using namespace std;
class A
{
   private:
      int a;
      int b;
   public:
      void get_data(int, int);
      void put_data();
};
void A :: get_data(int x, int y)
{
    a = x;
    b = y;
}
void A :: put_data()
{
   cout << "The value of a = " << a << endl;
   cout << "The value of b = " << b << endl;
}
int main()
{
   A *ptr;
   ptr = new A;
   ptr->get_data(5,6);
   ptr->put_data();
   delete ptr;
   return 0;
}
```  

### *Output*  
> The value of a = 5  
> The value of b = 6    
