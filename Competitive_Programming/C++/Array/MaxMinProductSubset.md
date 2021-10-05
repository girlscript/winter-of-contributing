# Simple Greedy Problem 

<!-- ## Definition -->

Given an array of a certain length find the maximum and minimum product subset possible in the given array

- Here we shall take input of the respective array and work on it to get the respective values

Consider the following example to understand the problem statement
Example :

```
Input : arr[6] = {2,-1,7,9,0,3}

For minimum value:
Output : [2*-1*7*9*3] = -378

For maximum value :
Output : [2*7*9*3] = 378

Explanation : As we know a subset in an array is a possible combination of any of its elements here we get the stated combination giving the least possible value in case one and in case 2 excluding the negetive value and any value say here 0 to get the respective maximum value

```

## A Naive Approach💡

A brute force approach would be to generate all subsets of the array elements and looking for the possible maximum and minumum combination which is absolutely fine.

### Implementation of a code to generate the subsets in C++ :

```c++

void getsubsets(vector<int> &arr, vector<vector<int>> &temp_container, vector<int> &subsets, int position)
{
    //get each vector subset in the vector container
    temp_container.push_back(subsets);
    for (int i = position; i < arr.size(); i++)
    {

        //while iterating check whether to include/not include that element in the final set to be uploaded
        subsets.push_back(arr[i]);

        // recursive call to get the next element.
        getsubsets(arr, temp_container, subsets, i + 1);

        //If say we have to exclude some element it triggers a back-track by removing that element
        subsets.pop_back();
    }
    return;
}

```

### Important Points to note from the above algorithm :

    - As visible each element is check twice so basically 2 recursive calls for its inclusion/exculsion.

    - Considering the size of the given array which also increases the time taken.

    - Use of another vector in between the code.

    - With each subset of size say `i` getting called exactly equal to the number of elements in it thats comes out to be Summation of (i*nCi) = n*2^(n-1) 

### These parts increase both the time & space complexity of the whole program overall as :

- `⏰ Time Complexity : O(n*2^(n-1))`

- ` Space Complexity : O(n)`

Above explanation puts a clear picture how it would slow down the operation activity of the simple program.

## A Better Approach 💡

A better approach to the given statement would be to using fundamental principle of counting and simple math-theory on the elements and checking teh count of positive or negetive or zeros present in the array and hence proceeding with those use-cases and border-cases accordingly :

### For maximum product :

`Case 1:`

    If there are no negetive elements in the array then it is simply the product of all elements such that `array[index]>0`.

    Example :  arr[] = {2,6,4,5} = (2x6x4x5) = 240

`Case 2:`

    If there are some negetive elements in the array then we have some subcases to explore ahead.

    1.Say we have X negetive values present then if X is even then multiply them to the positive non zero values if any, consider this example for a better preview:

    Example : arr[] = {-2,-4,-1,-5,3,4,0} = 480

    2.  But say the frequencies of those X negetive values is odd then starts the real issue.

        Example : arr[] = {-2,-1,-5,-3,-7,4,6} = 2x-3x-5x-7x4x6 = 5040

        Here we have to select the closet even number to the frequency of negetive values that have highest absolute value each 
        here -2,-3,-5,-7 shall be an optimal choice.

### For minimum product :

`Case 1:`

    If there are no negetive elements in the array then it is simply printing the smallest element such that `array[index]>=0`, consider the following example .

    Example : arr[] = {2,6,4,5} = 2

`Case 2:`

    If there are some negetive elements in the array then we have some subcases to explore ahead
    1. Say we have X negetive values present then if X is odd then just blindly multiply them to the positive non zero values if any, consider the follwing example :

    Example : arr[] = {-2,-4,-1,-5,-3,4,0} = -480.

    2. But say the frequencies of those X negetive values is even then we have to select the closet even number to the frequency of negetive values that have highest absolute value each , consider the following example :

    Example : arr[] = {-2,-5,-3,-7,4,6} = -3x-5x-7x4x6 = 2520.

    Here , here -3,-5,-7 shall optimal choice.

## Implementation Of the new approach Code in C++ 💡:

```c++
//Function Takes in an array and its size as parameters

void maxmin_subset(int arr[], int n)
{
    //Takes in 2 counters and 2 product-calc to calculate the products respectively
    int maxval = INT64_MIN, countNegetives = 0, countZeros = 0, res_max = 1, res_min = 1;
    //iterates through the array
    for (int i = 0; i < n; i++)
    {
        //Check for zeros as we just requrire zeros for checking border cases below
        if (arr[i] == 0)
        {
            countZeros++;
        }
        else
        {
            //Checks for the negetives as the whole arithmetic revolves aroung count/magnitude of the negetive numbers
            if (arr[i] < 0)
            {
                countNegetives++;
                //Gets the negetive value with highest value
                maxval = max(maxval, arr[i]);
            }
            //Calculates & Stores the product of all elements except those of zeros
            res_max *= arr[i];
            res_min *= arr[i];
        }
    }
    //As for maximum value we require even number of negetive numbers removing the unnecesarry addon value
    if (countNegetives % 2 == 1)
    {
        res_max /= maxval;
    }
    //As for minimum value we require odd number of negetive numbers removing the unnecesarry addon value
    if (countNegetives % 2 == 0)
    {
        //Important check as computer takes in 0 as an even so its important to check for that as well as do a bordercase check
        (countNegetives != 0) ? (res_min /= maxval) : (res_min = 0);
    }
    //Evaluating Bordercases to get the right result
    if (countZeros == n || (countNegetives == 1 && (countZeros + countNegetives) == n))
    {
        res_max = 0;
    }
    //Printing the results
    printf("The maximum product subset : %d \n", res_max);
    printf("The minimum product subset : %d \n", res_min);
}

```

### Overall time and space complexities are as shown :


`⏰ Time Complexity: O(n)`

`Space Complexity: O(1)`

So, using the above we can solve the above said problem statement much more efficiently.
