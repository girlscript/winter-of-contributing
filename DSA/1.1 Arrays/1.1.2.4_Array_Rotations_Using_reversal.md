# **Array Rotation**

## **What is Array Rotation ?**  
   Array Rotation simply means shifting the array elements by one positon to the left or right of the array for certain number of times. An array can be rotated to the left(clockwise) or to the right (anti-clockwise) to the given number of positions.  

   <p float="left">
    <img src="https://github.com/hatrix-temp/Images/blob/main/left_rotate.jpg?raw=true" width="600" height="300" />
    <img src="https://github.com/hatrix-temp/Images/blob/main/right_rotate.jpg?raw=true" width="600" height="300" /> 
   </p>
 
   <br>
     
- ## **Left Rotation :** 
    Let's consider an array **arr** with **N** integer items stored in it and **r(rotating factor)**
    be the number of times the array should rotated towards the left side of the array, then the reversal algorithm can be applied as follows,
    - Split the array into two parts A = arr[0...r-1] and B = arr[r...n-1].
    - Reverse the array items of part A from position 0 to r-1.
    - Reverse the array items of part B from position r to n-1.
    - Now, reverse the entire resulting array to get the left rotated array.    
     <br> 

    ### **Agorithm :**
    ```
    rotate(arr[], r, n)
        reverse(arr[], 0, r-1) 
        reverse(arr[], r , n-1)
        reverse(arr[], 0, n-1)
    ```
    ### **Example :**
    let the array be arr = [1,2,3,4,5] r=2 and n=5.  
    **A** = [0...r-1] = [1,2]  
    **B** = [r...n-1] = [3,4,5]  
      
    - Step 1 - Reverse array **A** and we get **arr** = [2,1,3,4,5]  
    - Step 2 - Reverse array **B** and we get **arr** = [2,1,5,4,3]  
    - Step 3 - Reverse the whole array **arr** and we get **arr** = [3,4,5,1,2]   

    <br>  

    <img src="https://github.com/hatrix-temp/Images/blob/main/array_rotate.jpeg?raw=true" width="600" height="300">

    ### **Implementation of the above approach :**  
    ```cpp
        /* C++ program for reversal algorithm
           of Left array rotation */
        #include <bits/stdc++.h>
        using namespace std;
  
        /* Function to left rotate arr[] of size n by d */
        void leftRotateArray(int arr[], int r, int n)
        {
            /* in case the rotating factor is greater than 
               or equal to array length */
            r = r % n;

            if (r == 0)
                return;
            
            //reversing the first part of the array
	        reverse(arr + 0, arr + r);
	        //reversing the second part of the array
	        reverse(arr + r, arr + n);
	        //reversing the whole array
	        reverse(arr + 0, arr + n)
        }
  
        void printArray(int arr[], int size)
        {
            for (int i = 0; i < size; i++)
                cout << arr[i] << " ";
        }
  
        int main()
        {
            int n, i ,r;
            cin>>n;
            int arr[n];

            for(i = 0; i < n; i++)
                cin>>arr[i];
            cin>>r;// r is the rotaing factor
  
            // Function calling
            leftRotateArray(arr, r, n);
            printArray(arr, n);
  
            return 0;
        }
    ```
  <br>

- ## **Right Rotation :**  
  Let's consider an array **arr** with **N** integer items stored in it and **r(rotating factor)**
  be the number of times the array should rotated towards the left side of the array, then the reversal algorithm can be applied as follows,  
    - Split the array into two parts A = arr[0...n-r-1] and B = arr[n-r...n-1].
    - Reverse the array items of part A from position 0 to n-r-1.
    - Reverse the array items of part B from position n-r to n-1.
    - Now, reverse the entire resulting array to get the left rotated array.    
     <br> 
     
    ### **Agorithm :**
    ```
    rotate(arr[], r, n)
        reverse(arr[], 0, n-r-1) 
        reverse(arr[], n-r , n-1)
        reverse(arr[], 0, n-1)
    ```
    ### **Example :**
    let the array be arr = [1,2,3,4,5] r=2 and n=5.  
    **A** = [0...n-r-1] = [1,2,3]  
    **B** = [n-r...n-1] = [4,5]  
      
    - Step 1 - Reverse array **A** and we get **arr** = [3,2,1,4,5]  
    - Step 2 - Reverse array **B** and we get **arr** = [3,2,1,5,4]  
    - Step 3 - Reverse the whole array **arr** and we get **arr** = [4,5,1,2,3]  

    <br>

    <img src="https://github.com/hatrix-temp/Images/blob/main/array_right_rotate.jpg?raw=true" width="600" height="300">
    
    ### **Implementation of the above approach :**  

    ```cpp
        /* C++ program for reversal algorithm
           of Right array rotation */
        #include <bits/stdc++.h>
        using namespace std;
  
        /* Function to right rotate arr[] of size n by d */
        void rightRotateArray(int arr[], int r, int n)
        {
            /* in case the rotating factor is greater than 
               or equal to array length */
            r = r % n;

            if (r == 0)
                return;
            
            //reversing the first part of the array
            reverse(arr + 0, arr + n - r);
            //reversing the second part of the array
            reverse(arr + n - r, arr + n);
            //reversing the whole array
            reverse(arr + 0, arr + n);
        }
  
        void printArray(int arr[], int size)
        {
            for (int i = 0; i < size; i++)
                cout << arr[i] << " ";
        }
  
        int main()
        {
            int n, i ,r;
            cin>>n;
            int arr[n];

            for(i = 0; i < n; i++)
                cin>>arr[i];
            cin>>r;// r is the rotaing factor
  
            // Function calling
            rightRotateArray(arr, r, n);
            printArray(arr, n);
  
            return 0;
        }
    ```
<br>

## **Time Complexity :**  
Reversing an array takes **O(n)** time, where n = number of elements to be reversed. Reversal algorithm makes 3 calls to the reverse function and takes **O(r) + O(n-r) + O(n)** time(where r is the rotating factor), which is upper bounded by **O(n).** 

>Hence the time complexity is **O(N)** , i.e, **Linear Time Complexity.**

<br>

## **Space Complexity :**  
The elements are reversed in place without any extra space being used.

>Hence, the space complexity is **O(1).**
