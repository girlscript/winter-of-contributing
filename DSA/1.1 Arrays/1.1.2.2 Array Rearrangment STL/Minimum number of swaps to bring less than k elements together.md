![image](https://user-images.githubusercontent.com/66017717/135299274-18b0801b-1a2a-478c-9b2d-d414663e6b1f.png)

        Input:  arr[] = {2, 1, 5, 6, 3}, 
                k = 3
        Output: 1
	    Explanation: Swap 5 and 3    
                     arr[] = {2, 1, 3, 6, 5}

        Input:  arr[] = {2, 7, 9, 5, 8, 7, 4}, k = 5
        Output: 2

  
   Brute force 
   
     Time Complexity - O(N2)
     • A simple solution is to first count all elements less than or equals to k. 
     • Now traverse for every sub-array and store the number of elements whose value is greater than k say eleToSwap. 
     • Find the minimum number of eleToSwap this will be the answer.


   Code

    int minSwap(int *arr, int n, int k){
    int cnt = 0;
    for(int i = 0; i < n; i++){
    if(arr[i] <= k)
    cnt++;  // count all numbers less than k
    }
    int eleToSwap = 0;
    for(int i = 0; i < cnt; i++){
        if(arr[i] > k)
        eleToSwap++;
    }
    
    int res = INT_MAX;
    for(int i = 0; i < n; i++){
    for(int j = i; j < cnt; j++){
    //count number of bad elements in the subarray
    if(arr[j] > k)
    eleToSwap++;
    //store the minimum no of bad elements in each subarray that will the answer
    res = min(res, bad); 
    }
    }
    return res;
    }

   
   
  Efficient Approach (Two pointer technique and Sliding Window)
        
	Time Complexity - O(N)
	1. Find count of all elements which are less than or equals to ‘k’. (cnt)
	2. Using two pointer technique for window of length ‘cnt’, each time keep track of how many elements in this range are greater than ‘k’. Let’s say the total count is ‘eleToSwap’.
	3. Repeat step 2, for every window of length ‘cnt’ and take minimum of count ‘eleToSwap’ among them. This will be the final answer.
	4. Also while checking in the current window of size cnt decrease the eleToSwap if a element was greater than or equal to k in the previous window.

   Code
   
    int minSwap(int *arr, int n, int k) {
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] <= k)
        cnt++;  // count all numbers less than k
    }
    //check how many numbers are greater than k 
    int eleToSwap = 0;
    for(int i = 0; i < cnt; i++){
        if(arr[i] > k)
        eleToSwap++;
    }
    //create window of cnt number of elements
    int res = min(eleToSwap, INT_MAX);
    for(int i = 0, j = cnt; j < n; i++,j++){
        //decrese the eleToSwap of the previous window
        if(arr[i] > k)
        eleToSwap--;
        //increment the eleToSwap in current window
        if(arr[j] > k)
        eleToSwap++;
        //Update the res to store minimum eleToSwap
        res = min(res, eleToSwap);
    }
    return res;
    }

    // Driver code
    int main() {

    int arr[] = {2, 1, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << minSwap(arr, n, k) << "\n";

    int arr1[] = {2, 7, 9, 5, 8, 7, 4};
    n = sizeof(arr1) / sizeof(arr1[0]);
    k = 5;
    cout << minSwap(arr1, n, k);
    return 0;
    }


