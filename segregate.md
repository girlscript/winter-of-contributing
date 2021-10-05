Given an array A[], write a function that segregates even and odd numbers. <br/>
The functions should put all even numbers first, and then odd numbers. <br/>


EXAMPLE-

Input  = {12, 34, 45, 9, 8, 90, 3} <br/>
Output = {12, 34, 8, 90, 45, 9, 3} <br/>


ALGORITHM-  <br/>

1-Initialize two index variables left and right:  <br/>
            left = 0,  right = size -1            <br/>
2-Keep incrementing left index until we see an even number.<br/>
3-Keep decrementing right index until we see an odd number.<br/>
4-If left < right then swap arr[left] and arr[right].<br/>

IMPLEMENTATION--  <br/>

 C++ program to segregate even and odd elements of array <br/><hr/>

#include <iostream>         <br/>
using namespace std;        <br/>
 
void swap(int *a, int *b)            <br/>
{
    
    int temp = *a;                      
    *a = *b;                             
    *b = temp;                            
}

 
void segregateEvenOdd(int arr[], int size)             
{
    
    int left = 0, right = size-1; 
    while (left < right)
    {
        
        while (arr[left] % 2 == 0 && left < right)
            left++;
 
        
        while (arr[right] % 2 == 1 && left < right)
            right--;
 
        if (left < right)
        {
            /* Swap arr[left] and arr[right]*/
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}
 

 

int main()
{
    int arr[] = {12, 34, 45, 9, 8, 90, 3};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
 
    segregateEvenOdd(arr, arr_size);
 
    cout <<"Array after segregation ";
    for (i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
 
    return 0;
}



OUTPUT-  <br/>
            Array after Segregation 12 34 90 8 9 45 3     <br/>

TIME COMPLEXITY- O(n)     <br/>