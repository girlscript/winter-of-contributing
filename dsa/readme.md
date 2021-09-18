INTRODUCTION:-

An array is a linear data structure which is used to store data of same data type.
In c++ its declaration is like:
           data_type array_name[size];
    for example:-
           char ch[100];  (it is an array of char data type of size 100)
In array a contiguous block of memmory is allocated to store data. To access the data of the element of an array simply we have to
derefference the base address + index of the element(this will be discussed in detailed later).To access the elements of an array
each element is given an index. for example:-
    arr[10];  //where arr is the name of the array and 10 is the size of the array 
array name gives the address of the first element. for example :-
let base address of an array arr[100] is 100 , then arr gives the address of the first element
similarly arr+1 gives address of second element . To access the element stored at given memory location we simply have to derefference it
  *(arr+1)=arr[1]=*(1+arr)=1[arr]  

DIFFERENT WAYS OF INITIALIZATION OF ARRAY IN C++:-
 
1. Static initialization:-  size of array is declared at compile time. for example:-
                                  int arr[100];
                                  int arr[5]={1,2,3,4,5};
                                  int arr[5]={1,2,3};      // arr[3]=arr[4]=0 by default
2. Dynamic initialization:- dize of array is declared during run time
                                  int n;
                                  cin>>n;
                                  int a[n];
STL:-

To use some of the inbuilt function in c++ standard templat library you should include "array.h" header file.
array is also declared as :-
     arr<int,6>;
some inbuild function to perform operation on array are:
 1. at() :- This function is used to access the elements of array. 
 2. get() :- This function is also used to access the elements of array. 
 3. operator[] :- This is similar to C-style arrays. This method is also used to access array elements. 
above listed functions are used to access the elements of the array
for example:-
#include<iostream>
#include<tuple> // for get()
#include<array> 
using namespace std;
int main()
{
    // Initializing the array elements
    array<int,5> ar = {10,20,30,40,50};
 
    // Printing array elements using at()
    cout << "The array elements are (using at()) : ";
    for ( int i=0; i<5; i++)
    cout << ar.at(i) << " ";
    cout << endl;
 
    // Printing array elements using get()
    cout << "The array elements are (using get()) : ";
    cout << get<0>(ar) << " " << get<1>(ar) << " ";
    cout << get<2>(ar) << " " << get<3>(ar) << " ";
    cout << get<4>(ar) << " " ;
    cout << endl;
 
    // Printing array elements using operator[]
    cout << "The array elements are (using operator[]) : ";
    for ( int i=0; i<5; i++)
    cout << ar[i] << " ";
    cout << endl;
 
    return 0;
}
output:-
The array elements are (using at()) : 10 20 30 40 50 
The array elements are (using get()) : 10 20 30 40 50 
The array elements are (using operator[]) : 10 20 30 40 50 

  4. back() :- This returns the last element of array.
  5. front() :- This returns the first element of array. 

In the above program :-
  arr.back(); return 50 and arr.front(); will return 10
 
  6. size() :- It returns the number of elements in array.
In the above program arr.size(); will return 5     
  



     
