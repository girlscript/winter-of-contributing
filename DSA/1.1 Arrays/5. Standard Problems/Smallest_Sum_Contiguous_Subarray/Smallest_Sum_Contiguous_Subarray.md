## **Smallest Sum Contiguous Subarray**


**Problem Statement:** For a given array with 'n' elements, find the sum of the elements of the contiguous subarray having the smallest sum.

### for eg: 

In the array [3,-4,2,-3,-1,7,5]

![array sum mimimum](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/xa2bxdz0fs7e716al1pk.png)


## Brute force approach:

The naive approach for the problem would be to consider all the subarrays of different sizes and then find their sum. The subarray having the smallest sum would be the answer.

## Efficient approach:

The idea is to use similar approach as Kadane's algorithm.


**Algorithm:**


     smallest_contiguous_sum(arr, n)
        Initialise current_min=Int_max
        Intialise min_best=Int_max

        for i=0 to n-1
            if current_min > 0
            current_min= arr[i]

            else
                current_min +=arr[i]

            best_min = min(current_min,best_min)   


 
### Code in JAVA:

    import java.util.*;
    public class Kadane's_min {
    //main method
    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);

        int n=in.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=in.nextInt();
        }
        System.out.println("Smallest sum: "+ smallest_contiguous_subarray(arr, n ));

    }
    //method to find the smallest contiguous subarray
    public static int smallest_contiguous_subarray(int arr[], int n)
    {
        // initializing the current minimum and the best minimum to INT.Max_value(2147483647)
        int current_min= Integer.MAX_VALUE;
        int best_min= Integer.MAX_VALUE;

        for(int i=0; i<n; i++)
        {
            //if the current min is positive adding it would lead to sum greater than before
            if(current_min>0)
                current_min=arr[i];

            //else we can add the value to min adding
            else
                current_min += arr[i];

            //update the value of best_min
            best_min=Math.min(current_min,best_min);


        }
        return best_min;
        }
    } 

![Alt Text](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/eg83izfudt0vt4fmep1w.png)


**Time complexity:** O(n)

**Auxiliary Space:**
O(1)


> Another approach would be to change each arr[i] to -arr[i] and then apply Kadane's algorithm. The answer then would be the negetive of this sum. 



 **Reference:**
  - Documentation -
 <a href="https://www.geeksforgeeks.org/smallest-sum-contiguous-subarray/"> Geeks For Geeks</a>









        
