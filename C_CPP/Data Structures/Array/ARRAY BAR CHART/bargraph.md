## BAR GRAPH USING ARRAYS

We know that we can do comparison of population,salaries of different countries etc. using bar graph. It will be more interesting to do the same thing using code. So,let's see, how to create a bar graph for comparing population of different countries using '*' and arrays.

## ALGORITM
1. First of all, enter the no. of countries to be compared and their population(in billion)

2. Find the maximum among the countries 

     - Suppose first memory block of array contains maximum value.
      - In for loop, we will compare second value with the supposed maximum value i.e. arr[0] .
      - The greater of the two will become maximum.
      - similarily the loop runs for other values and we will get maximum.

3. In for loop, i denotes row and j is denoting column .If value of i is less than or equal to j then put '*' there otherwise space . Follow the same procedure in each row until i=1.

## CODE
```C
#include<stdio.h>
int main()
{
    int arr[20],i,n,j,max;
    printf("enter no. of countries");
     scanf("%d",&n);
     printf("enter the population in billion of countries:");

    for(i=0;i<n;i++)//input values in each block of array
    {
        scanf("%d",&arr[i]);

    }

    max=arr[0];
    for(i=1;i<n;i++)//finding maximum
    {
        if(max<arr[i])
            max=arr[i];
    }

    /*procedure of making bar graph*/
     for(i=max;i>=1;i--)//checking each row and column for * 
     {for(j=0;j<n;j++){
            if(arr[j]>=i)
            printf("*\t");
     else
        printf("\t");
        }
        printf("\n");
        }


    return 0;
}
```

## SAMPLE INPUT
```
5
5 6 4 2 1
```
## SAMPLE OUTPUT
```
    *    
*   *   
*   *   *
*   *   * 
*   *   *   *
*   *   *   *   *
```    