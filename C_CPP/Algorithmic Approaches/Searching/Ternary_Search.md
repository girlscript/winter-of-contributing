# **Ternary Search Algorithm in C++**
## What is ternary search?
*Ternary search* is a searching technique in which we find an element in  an array using **Divide and Conquer Algorithm** . It is similar to binary search. In binary search we divide the array into two parts but in ternary search we divide the array in three parts and then search the element and return its index as output. For performing Ternary Search,  **array should be sorted**.  
### Example :
Array[ ]={1, 5, 6, 8, 10}

Element to be searched : 8

Output : 3     

Since, element 8 is present at index 3.

lets understand with an example ,

![alt text](https://cdn-codespeedy.pressidium.com/wp-content/uploads/2019/09/ternary-search-300x90.jpg)

**Image Reference : Google**

Here , array has 7 element , i.e, n = 7. And we have to search 14.

let's initialise l = 0 and r = n-1. then we divide the array into three parts by finding two midpoints.

mid1 = l + (r-l)/3 

mid1=0+(6-0)/3 =2

mid2 = r – (r-l)/3 

mid2=6 -(6-0)/3 = 4

Now we check if 14 is present at mid1 or not , if it is present then we return mid1. Otherwise we check if 14 is present at mid 2 , if it is present then we return mid2.

If 14 is not present at both the mid then  we check whether  14 is less than the element at mid1. Then we change r to r=mid1-1  and then serach the element from l=0 to mid1-1.

Otherwise , we check whether 14 is greater than the element at mid2. If yes, then we change l to l=mid2+1 and then search  14 from l=mid2+1 to r.

If the element is present between mid1 and mid2 then we change our r and l.

l = mid1 + 1;

 r = mid2 - 1;

and then find the element.

**Time complexity of Ternary Search is log3(N).***

 

We can solve this algorithm either by recursion or by iterative approach.
 ## Code of Ternary Search  in c++ (Iterative Approach)
 ```c++
 #include <iostream>
using namespace std;
 
// Function for Ternary Search
int ternarySearch(int l, int r, int key, int ar[])
 
{
    while (r >= l) 
    {
        int mid1 = l + (r - l) / 3; //finding mid1
        int mid2 = r - (r - l) / 3; //finding mid2
 
        // Check if key is present at any mid
        if (ar[mid1] == key) {
            return mid1;
        }
        if (ar[mid2] == key) {
            return mid2;
        }
        //if element to be searched is not present in mid then we will check in which region it is present
 
        if (key < ar[mid1]) {
 
            // The key lies in between l and mid1
            r = mid1 - 1;
        }
        else if (key > ar[mid2]) {
 
            // The key is in between mid2 and r
            l = mid2 + 1;
        }
        else {
 
            // The key is in between mid1 and mid2
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }
    return -1; // If the element is not present in array
}
 
// Driver code
int main()
{
    int l, r, ans ,key,n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cin>>key;
 
    // Starting index
    l = 0;
 
    // Ending index
    r = n-1;
 
  ans = ternarySearch(l, r, key, ar);
  cout << ans<< endl;
 }
 ```
 ### Input:
 n=5

 arr[ ]={1, 2, 3, 4, 5}

 key=3

 ### Output :
 2

 ## Code of Ternary Search  in c++ (Recursive Approach)
 ```c++
 #include <bits/stdc++.h>
using namespace std;
 
// Function for Ternary Search
int ternarySearch(int l, int r, int key, int ar[])
{
    if (r >= l) {
 
        int mid1 = l + (r - l) / 3; //find mid1
        int mid2 = r - (r - l) / 3; //find mid2
 
        // Check if key is present at any mid
        if (ar[mid1] == key) {
            return mid1;
        }
        if (ar[mid2] == key) {
            return mid2;
        }
 
    //if element to be searched is not present in mid then we will check in which region it is present
        if (key < ar[mid1]) {
 
            // The key lies in between l and mid1
            return ternarySearch(l, mid1 - 1, key, ar); //recursive call
        }
        else if (key > ar[mid2]) {
 
            // The key lies in between mid2 and r
            return ternarySearch(mid2 + 1, r, key, ar); //recursive call
        }
        else {
 
            // The key lies in between mid1 and mid2
            return ternarySearch(mid1 + 1, mid2 - 1, key, ar);
        }
    }
 
    // if element is not present in array
    return -1;
}
// Driver code
int main()
{
    int l, r, ans ,key,n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cin>>key;
 
    // Starting index
    l = 0;
 
    // Ending index
    r = n-1;
 
  ans = ternarySearch(l, r, key, ar);
  cout << ans<< endl;
 }
 ```
 ### Input:
 n=6

 arr[ ]={1, 2, 3, 4, 5, 6}

 key=5

 ### Output :
 4

 **NOTE :** We generally use Binary search for searching the elementin an array. 

    In binary search, there are 2log 2 n + 1 comparisons in worst case.

    In ternary search, there are 4Log 3 n + 1 comparisons in worst case.  
  
  Therefore, the number of comparision of ternary search is more than binary search. So Binary Search is more efficient then Ternary Search.
