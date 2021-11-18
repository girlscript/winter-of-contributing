## Odd-Even Sort 

Sorting is a process of arranging elements in a group in a particular order, i.e., ascending order, descending order, alphabetic order, etc.

Sorting a list of elements is a very common operation. A sequential sorting algorithm may not be efficient enough when we have to sort a huge volume of data. Therefore, parallel algorithms are used in sorting.

Parallel Algorithm : A parallel algorithm is an algorithm that can execute several instructions simultaneously on different processing devices and then combine all the individual outputs to produce the final result.

Odd Even Sort uses parallel algorithm which is based on bubble sort technique.
It is also known as Brick Sort .

- A Variation of Bubble sort which sorts a list through 2 phases,an odd phase and an even phase

- During the Odd Phase we perform a bubble sort on odd-indexed elements

- During the Even Phase we perform a bubble sort on Even-indexed elements

> Note : 
It is based on quote "INNOCENT UNTIL PROVEN GUILTY" i.e sorted until proven unsorted

## Algorithm :
```
1. Initialize a single variable, issorted(boolean) as false
2. While issorted is false:
   a. set issorted equal to true
   b. start at the first odd index of the list and tranverse until we are less than or equal to the last index minus 1 by a factor of 2
     - if the value at the index is greater than the value at the index+1 
       swap the value and set issorted to false

    c. start at the first odd index of the list and tranverse until we are less than or equal to the last index minus 1 by a factor of 2
     - if the value at the index is greater than the value at the index+1 
       swap the value and set issorted to false

       repeat the steps until issorted remains true
```
     



## Example
- let's consider the below list
     
| Index | 0 | 1 | 2 | 3 | 4 |
| ----- | - | - | - | - | - | 
| value | 8 | 9 | 2 | 4 | 6 |
    
## solution 

- set issorted=false;
- enter in while isorted is false loop 
- set issorted True
- step-1) perform on odd indexes;

   index[1] is greater than index[1+1=2] so swap and set issorted false
 
  but index[3] is not greater than index[3+1=2] so dont swap 
      when we increased index by 2 we cross the last index 
     | Index | 0 | 1 | 2 | 3 | 4 |
     | ----- | - | - | - | - | - | 
     | value | 8 | 2 | 9 | 4 | 6 |
    

- step-2) perform on even indexes;
      
    index[0] is greater than index[1+1=1] so swap and set issorted false(it is already false)
      
    but index[2] is not greater than index[2+1=3] so dont swap 
      when we increased index by 2 we cross are at last index
     | Index | 0 | 1 | 2 | 3 | 4 |
     | ----- | - | - | - | - | - | 
     | value | 2 | 8 | 9 | 4 | 6 |
    
- now entered in while again
     
    i.e in till issorted is false loop
     so set issorted to true;

- step 3)so again repeat step-1)
     perform on odd indexes;
     
     index[1] is not greater than index[1+1=2] so don't swap 

    index[3] is not greater than index[3+1=2] so don't swap 
      when we incresed index by 2 we cross the last index 
     
     | Index | 0 | 1 | 2 | 3 | 4 |
     | ----- | - | - | - | - | - | 
     | value | 2 | 8 | 9 | 4 | 6 |

- step-4)so again repeat step-2)

     perform on even indexes;
      
    index[0] is not greater than index[1+1=1] so don't swap 
      
    but index[2] is greater than index[2+1=3] so swap and set issorted to false
     
    when we increased index by 2 we cross are at last index

     | Index | 0 | 1 | 2 | 3 | 4 |
     | ----- | - | - | - | - | - | 
     | value | 2 | 8 | 4 | 9 | 6 |


- now entered in while again

   i.e in till issorted is false loop
     so set issorted to true;

- step 5)so again repeat step-1)
perform on odd indexes;

    index[1] is greater than index[1+1=2] so swap and set issortes to false

     but index[3] is greater than index[3+1=2] so swap and set issorted to false(it is already false)
      
    when we a index by 2 we cross the last index 
     
     | Index | 0 | 1 | 2 | 3 | 4 |
     | ----- | - | - | - | - | - | 
     | value | 2 | 4 | 8 | 6 | 9 |

- step-6)so again repeat step-2)

     perform on even indexes;
      
    index[0] is not greater than index[1+1=1] so don't swap 
      
    but index[2] is greater than index[2+1=3] so swap and set issorted to false(already false)
      
    when we increased index by 2 we cross are at last index

     | Index | 0 | 1 | 2 | 3 | 4 |
     | ----- | - | - | - | - | - | 
     | value | 2 | 4 | 6 | 8 | 9 |


- now entered in while again

    i.e in till issorted is false loop
     so set issorted to true;

- step 7)so again repeat step-1)
     perform on odd indexes;
      
    index[1] is not greater than index[1+1=2] so don't swap

    index[3] is not greater than index[3+1=2] so don't swap 
      
    when we increased index by 2 we cross the last index 
     
     | Index | 0 | 1 | 2 | 3 | 4 |
     | ----- | - | - | - | - | - | 
     | value | 2 | 4 | 6 | 8 | 9 |

- step-8)so again repeat step-2)

     perform on even indexes;
      
    index[0] is not greater than index[1+1=1] so don't swap 
      
    also index[2] is not greater than index[2+1=3] so don't swap 
     
     when we increased index by 2 we cross are at last index

     | Index | 0 | 1 | 2 | 3 | 4 |
     | ----- | - | - | - | - | - | 
     | value | 2 | 4 | 6 | 8 | 9 |

 - now issorted remains true
     
     so we exit from while loop
     and we got our sorted array.



##  A C++ Program to implement Odd-Even / Brick Sort 
```
#include<bits/stdc++.h> 
using namespace std; 
// A function to sort the algorithm using Odd Even sort 
void oddEvenSort(int arr[], int n) 
{ 
    bool isSorted = false; // Initially array is unsorted 
    while (!isSorted) 
    { 
        isSorted = true; 
        // Perform Bubble sort on odd indexed element 
        for (int i=1; i<=n-2; i=i+2) 
        { 
            if (arr[i] > arr[i+1]) 
             { 
                swap(arr[i], arr[i+1]); 
                isSorted = false; 
              } 
        } 
        // Perform Bubble sort on even indexed element 
        for (int i=0; i<=n-2; i=i+2) 
        { 
            if (arr[i] > arr[i+1]) 
            { 
                swap(arr[i], arr[i+1]); 
                isSorted = false; 
            } 
        } 
    } 
    return; 
} 
// A utility function ot print an array of size n 
void printArray(int arr[], int n) 
{ 
   for (int i=0; i < n; i++) 
       cout << arr[i] << " "; 
   cout << "\n"; 
} 
// Driver program to test above functions. 
int main() 
{ 
    int arr[] = {8,9,2,4,6}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    oddEvenSort(arr, n); 
    printArray(arr, n); 
    return (0); 
}
```

## Output

```2  4  6  8  9 ```


## Complexity
- Worst case time complexity: Θ(n*n)
- Average case time complexity: Θ(n*n)
- Best case time complexity: Θ(n)
- Space complexity: Θ(1)

## Common Implementation 
Odd-Even sort is mainly used on parallel processors with local interconnections for running local tasks


## References
- https://www.geeksforgeeks.org/odd-even-sort-brick-sort/
- https://iq.opengenus.org/odd-even-sort/
