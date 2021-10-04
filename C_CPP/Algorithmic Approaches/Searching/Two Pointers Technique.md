# Two Pointers Technique 

<!-- ## Definition -->

Two pointers technique is an easy and effective technique typically used for searching pairs in a sorted array.

## Basic Idea 🧠

As the name suggest, this method involves two pointers to save time and space. 
Here, we indicate pointers as array indexes.

The idea here is to iterate in two different parts of the array simultaneously to get the answer faster.

## Implementation 💡

### Example : 

Given a sorted array A (sorted in ascending order), having N integers, find if there exists any pair of elements (A[i], A[j]) such that their sum is equal to X.

![5gwoc](https://user-images.githubusercontent.com/75165587/133954370-bd138665-ba40-445e-b64f-d77b314c4afa.png)

### Step 1: 
We first define two pointers, where the first pointer points to the first element of the array and the second pointer points to the last element of the array 

```C++
    int pointer1 = 0;  
    int pointer2 = n-1;
```

### Step 2: 
We add the values kept at both the pointers.

```C++
    arr[pointer1] + arr[pointer2]
```

### Step 3: 
If their sum is equal to X, then we return the true (indicating that there are two numbers in the array which sums to X)

```C++
    if(arr[pointer1] + arr[pointer2] == X){
            return true; 
        }
```


### Step 4: 
If their sum is smaller than X, then we shift the left pointer to the right

```C++
    else if(arr[pointer1] + arr[pointer2]<X){
            pointer1++; 
        }
```


### Step 5:
If their sum is greater than X then we shift the right pointer to left
We keep moving the pointers until we get the sum as X

```C++
    else if(arr[pointer1] + arr[pointer2]>X){
            pointer2--; 
        }
```

### Step 6:
Incase, if both the pointers in the process points to the same element, this means that there are no two elements in the array that sums to X, and hence we would return false;

```C++
   return false; //this means there exist no two elements present in the array which sums up to X
```

## Code 💻
### Run the below code to see how two pointers technique works 🤖
```C++
#include <bits/stdc++.h>
using namespace std;

bool two_pointer_technique(int arr[],int n,int X){
    int pointer1 = 0; //index of the first element 
    int pointer2 = n-1; //index of the last element 
    while(pointer1<pointer2){
        if(arr[pointer1] + arr[pointer2] == X){
            return true; //this means that there are two elements present in the array which sums up to X
        }else if(arr[pointer1] + arr[pointer2]>X){
            pointer2--; //since the sum is greater than the required sum 
        }else{
            pointer1++; //since the sum is less than the required sum 
        }
    }return false; //this means there exist no two elements present in the array which sums up to X
}

int main(){
    int arr[] = {10, 20, 35, 50, 75, 80};
    int n = sizeof(arr)/sizeof(arr[0]); 
    int X = 70;
    if(two_pointer_technique(arr,n,X)){
        cout<<"There are two elements in the array which sums up to "<<X;
    }else{
        cout<<"There aren't two elements in the array which sums up to "<<X;
    }

    return 0;
}
```
⏰ The Time Complexity is O(N) 

##   A question may arise that, where all can we use this technique ? 💬

###  These are some of the examples where we can use Two Pointers Technique : 📖

Find the closest pair from two sorted arrays

Find the pair in array whose sum is closest to x

Find all triplets with zero sum

Find a triplet that sum to a given value

Find a triplet such that sum of two equals to third element

Find four elements that sum to a given value
