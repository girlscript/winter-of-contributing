![image](https://user-images.githubusercontent.com/66017717/135300257-0669ebd0-a22c-4cc0-aa37-837b4c86390c.png)

     Given an array of positive and negative numbers, arrange them such that all negative integers appear before all 
     the positive integers in the array without using any additional data structure like a hash table, arrays, etc. 
     The order of appearance should be maintained.

     Input :  arr[] = [12, 11, -13, -5, 6, -7, 5, -3, -6]
     Output : arr[] = [-13, -5, -7, -3, -6, 12, 11, 6, 5]

     Input :  arr[] = [-12, 11, 0, -5, 6, -7, 5, -3, -6]
     Output : arr[] =  [-12, -5, -7, -3, -6, 0, 11, 6, 5]


   Brute Approach - 
	
    • Is to use another array. 
	
    • We copy all elements of original array to new array. 
	
    • We then traverse the new array and copy all negative and positive elements back in original array one by one. 
   
    Time Complexity : O(n)     
    Auxiliary space : O(n) 

   Code

    void rearrangeElements(int arr[], int n){
    // Create temprorary array
    int temp[n];
    // Traversal array and store +ve element first
    int j = 0; // index of temp array
    for (int i = 0; i < n ; i++)
        if (arr[i] >= 0 )
            temp[j++] = arr[i];
 
    // Store -ve element in temp array
    for (int i = 0 ; i < n ; i++)
        if (arr[i] < 0)
            temp[j++] = arr[i];
          // Copy contents of temp[] to arr[]
    memcpy(arr, temp, sizeof(temp));
    }
    
    
  Optimize Approach using C++ STL -

	• In c++ STL, There is an inbuilt function std::sort().
	•  We can modify the comp() function to obtain the desired result. 
	• As we have to place negative numbers first and then positive numbers. We also have to keep zero’s(if present) between positive and negative numbers.
	• The comp() function in this code rearranges the given array in the required order.
	•  Here in bool comp(int a, int b),for every element in arr[] comp() function will be called in this way where element ‘a’ is of j-th index and element ‘b’ is of i-th index, and j>i ( i.e a appears after b).
	• The comp() function returns true only in these conditions
		i.  "a" is smaller than be "b".
		ii.  "a" equals 0 and "b" is positive or "a" is negative and "b" equals 0.
	• If the comp() return true then swap will be done.
	• It is really faster because the inbuilt sort function uses introsort.

       Time Complexity : O(nlogn)     
       Auxiliary space : O(1) 

   Code

    #include <bits/stdc++.h>
    using namespace std;
 
    bool comp(int a, int b){
    // swap not needed
    if((a > 0 && b > 0) || (a < 0 && b < 0) || (a > 0 && b < 0 ))
    return false;
    // swap not needed
    if((a == 0 && b < 0) || (a > 0 && b == 0))
    return false;
    // swap needed
    if(a < 0 && b > 0)
    return true;
    // swap needed
    if((a == 0 && b > 0) || (a < 0 && b == 0))
    return true;
    }
 
    void rearrange(int arr[], int n)
    {
    sort(arr, arr + n, comp);
    }
 
    int main()
    {
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    for (int i = 0; i < n; i++)
        cout << " " << arr[i];
          return 0;
     }

    Output: 
    -12 -13 -5 -7 -3 -6 11 6 5

   Other Approaches

      1.  Modified Partition Process of Quick Sort 
          Time Complexity : O(n)         Auxiliary space : O(n)

          We can reverse the order of positive numbers whenever relative order is changed. 
          This will happen if there are more than one positive element between last negative number in left subarray and 
          current negative element.

          Current Array :- [Ln, P1, P2, P3, N1, .......]
          Here, Ln is the left subarray contains only negative elements.

          P1, P2, P3 are the positive numbers
          N1 is the negative number that we want to move at correct place.
          If difference of indices between positive number and negative number is greater than 1,
	
          i. Swap P1 and N1, we get [Ln, N1, P2, P3, P1, ......]
          ii. Rotate array by one position to right, i.e. rotate array [P2, P3, P1], we get [Ln, N1, P1,   P2, P3, ......]
       
       
      2.  Modified Insertion Sort  
          Time Complexity : O(n)           Auxiliary space : O(1) 

          Loop from i = 1 to n - 1.
          a) If the current element is positive, do nothing.
          b) If the current element arr[i] is negative, we 
          insert it into sequence arr[0..i-1] such that 
          all positive elements in arr[0..i-1] are shifted 
          one position to their right and arr[i] is inserted
          at index of first positive element.
     
     
     3.  Optimized Merge Sort 
         Time Complexity : O(n log n)          Auxiliary space : O(log n) 
      
         While merging two sorted halves say left and right, we need to merge in such a way that negative part of left and right 
         sub-array is copied first followed by positive part of left and right sub-array.

