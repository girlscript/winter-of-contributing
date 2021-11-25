# Bubble Sort
Bubble sort is the simplest algorithm/technique which is used for sorting elements in an array, either in ascending or descending order.
In this technique, we iterate from the first element till the last element in the array, and compare adjacent elements with eachother. The element with higher value, is sorted out in its respective place in the array. 

## C++ Code:
```c++
#include<bits/stdc++.h>
using namespace std;

int main (){

   int i, j, temp, count = 0; // count variable counts the number of iterations made to sort the list completely in ascending order.
   int a[10] = {100, 40, 97, 34, 1, 53, 67, 27, 19, 10}; // initialising array
   cout << "Elements in the array: " << endl;
   for(i = 0; i < 10; i++){
      cout << a[i] << "\t";
   }
   cout << endl;
   
   //bubble sorting begins
   
   for(i = 0; i < 10; i++){
    for(j = i+1; j < 10; j++){ // j starts from the next element for comparison.
      if(a[j] < a[i]) { // swapping values here if previous value is less than the current value.
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
    }
   count++;
   }
   //bubble sort ends.
   cout << "Array elements after sorting: " << endl;
   for(i = 0; i < 10; i++){
     cout << a[i] << "\t";
   }
   cout << endl;
   cout << "Number of iterations made to sort the list completely: " << count << endl;
   return 0;
   }
   ```
   For elements to be sorted in descending order only one minor change needs to be made inside the "if" statement of inner loop condition:
   
   ```c++
if(a[j] > a[i])
  ```
  
   ## Output:
   (Ascending order)
   ![image](https://user-images.githubusercontent.com/75472177/134164877-095ced7e-ea29-4120-a30a-09fa33ce8425.png)
   
   (Descending order)
   ![image](https://user-images.githubusercontent.com/75472177/134165046-c419a5c6-1f03-46f0-9c13-a419b40271ac.png)
   
## Time Complexity of Bubble Sorting:
In the first iteration we make (N-1) comparisons, in the second iteration we make (N-2) comparisons and so on. Therefore, the total number of comparisons made can be given by -

 
 Sum = (N-1) + (N-2) + (N-3) + .... + 2 + 1 
 
 Sum = N(N-1) / 2 
 
 
  = O(n^2) 
  
  
Hence the worst-case time complexity is O(n^2). 

When the input array is already sorted, that becomes the best-case time complexity. Hence the best-case time complexity of bubble sort is O(n).
  
## Space Complexity of Bubble Sorting:
This algorithm requires only one additional memory space for the temp variable while swapping. Hence the space complexity for bubble sort algorithm is O (1).


## Stability of Bubble Sorting:

Stability of a sorting algorithm means that- when two instances with equal values appear in the same order in the sorted output as they appear in the array as given by the user. Hence, Bubble Sort is stable as only adjacent element swaps occur.

For eg:
Suppose we have a list of 3 3-letter words-
- cat
- bat
- can

If we sort the list by just the first letter of each word then a stable-sort would produce-
- bat
- cat
- can

In bubble sort the relative position of cat and can will stay same as it was in the input. An unstable sort may have theire relative positions interchanged.

## Adaptivity of Bubble Sorting:

If the order of the elements to be sorted, of an input array affects the time complexity of a sorting algorithm, then that algorithm is called an “Adaptive” sorting algorithm.
Bubble sort is adaptive as it gives O(n) estimation if input is already sorted.
