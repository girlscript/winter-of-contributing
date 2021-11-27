# Array Rotation some O(n) problems

## Left Rotation in array
<hr>
Let there be a array arr = {33,2,9,1,57}.We have to left rotate the array, i.e resulting array should become arr = {2,9,1,57,33}

Note: Left rotation means counter-clockwise rotation.

### Solution:
  We would solve this problem with the following steps:
  - store the first variable in a temporary variable. 
  - shift the remaining element towards left with a for loop. 
  - replace last position with temporary variable containg first element.

![array](https://github.com/arjyo851/winter-of-contributing/blob/DSA-rotation/DSA/1.1%20Arrays/Problem1.jpg)
### Implementation(C++):

```c++
#include<iostream.h> // header
using namespace std;
int main(){
 int arr[] = {33,2,9,1,57};
 int n = sizeof(arr)/sizeof(arr[0]);
  int temp = arr[0];//store first element
    for(int i=0;i<n;i++){
        arr[i] = arr[i+1]; 
        // shift remaing elements
    }
    arr[n-1] = temp;
    //print 
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
```


## Rotations required to sort array
<hr>
We have to find the number of rotation required to sort array.

Example array : arr[]={6,7,3,4,5}

### Solution:
To solve this problem we must find the position (k) of the lowest numeral in the array. This position (k) will tell us the number of anti-clockwise rotations required for the lowest numeral to take the first position in the sorted array. In our example 3 is the lowest numeral which occupies the position k = 2. So we would perform 2 anti-clockwise rotations.

![problem](https://github.com/arjyo851/winter-of-contributing/blob/DSA-rotation/DSA/1.1%20Arrays/problem2.drawio.png)


### Implemetation(C++)

```c++
#include<iostream.h>
using namespace std;
int main(){
 int arr[]={6,7,3,4,5};
 int n = sizeof(arr)/sizeof(arr[0]);
 int small_pos;
 //To find the smallest number and return it's index
 for(int i =0;i<n;i++){
     if(arr[i]<arr[i+1]){
         small_pos = i;
     }
 }
 cout<<i;
return 0;
}
```


## Elements at index i after k rotations
<hr>
We have to find the element at index i after k rotations in the array.

Example array: arr[] = {5,2,12,1}

### Solution:

We can solve this problem by applying k left rotations  and then find the i<sup>th</sup> element

### Implementation
```c++
#include<iostream.h>
using namespace std;
int main(){
int k,i;
cin>>k>>i;
int arr[] = {5,2,12,1};
int n = sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<k;i++){
    //refer to 1st question for these steps
    int temp = arr[0];
    for(int i=0;i<n;i++){
        arr[i] = arr[i+1]; 
    }
    arr[n-1] = temp;
}
cout<<"The ith element is:"<<arr[i];

return 0;
}

