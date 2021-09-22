// Solution for Array Range sum and Range product queries 


#include <bits/stdc++.h>

using namespace std;

 
 void preSum(int array[], int n, int prefixSum[])
    {
        prefixSum[0] = array[0];
        
        for (int i = 1; i < n; i++)
        {
            prefixSum[i] = array[i] + prefixSum[i - 1];
        }
    }
 
// Solution to Pre-Compute the sum for every query 
// Solution is implemented by prefix Sum
// prefix[i] will be storing sum of elements from the given array a[0] to a[i];
// to provide answer to our query(i,j) we'll return prefix[j]-prefix[i-1]
// for PrefixSum it's assumed that i<=j 


// This function Returns sum of elements in array[i..j]
int rangeSum(int i, int j, int preSum[])
{
    if (i == 0)
        return preSum[j];
 
    return preSum[j] - preSum[i - 1];
}


// Similarly like precomputing sum of elements we can just precompute product But do you think this will work? (edge-cases)
// So if any single element in our array turns out to be 0 so our product array will be containing 0 after that elements

// How to counter?

// to counter this case we will use another array to count number of zeros which will contain number of 0's the array has 
// upto index i


// if countzero[high]-countzero[lo]>0 then this is the condition where 0 is present in that range 
// so our answer will be 0 


// Time complexity wil be O(n) after traversing array thne O(1) per query recived 

void findProduct(int arr[], int lo[],int hi[], int n, int n1)
{
    long preProduct[n];
    int countZero[n];
 
    long prod = 1;  
 
 
    int count = 0;
    for (int i = 0; i < n; i++)
    {
 
 
        if (arr[i] == 0)
            count++;
        else
            prod *= arr[i];
 
         
        preProduct[i] = prod;
 
 
        countZero[i] = count;
    }
 
 
    for (int i = 0; i < n1; i++)
    {
        int l = lo[i];
        int u = hi[i];
 
        if (l == 1)
        {
 
            if (countZero[u - 1] == 0)
                cout << (preProduct[u - 1]) << endl;
            else
                cout<<0<<endl;
        }
 
        else  
        {
             
            if (countZero[u - 1] -
                countZero[l - 2] == 0)
                cout << (preProduct[u - 1] /
                         preProduct[l - 2]) << endl;
 
            else  
                cout << 0 << endl;
        }
    }
}
 


int main()
{
        int array[] = { 1, 2, 3, 4, 5 };
        int n = sizeof(array) / sizeof(array[0]);
     
        int prefixSum[n];
        preSum(array, n, prefixSum);
        cout << rangeSum(1, 3, prefixSum) << endl;      // will give output as 9
        cout << rangeSum(2, 4, prefixSum) << endl;      // will give output as 12


        int lo[] = {1, 2};              // will print 6
        int hi[] = {3, 2};              // will print 2
        findProduct(array, lo, hi,5,2);     
         

     
 
    return 0;
}
