//Write a C program to implement Bubble Sort. Print output of all Passes.


/*What is Bubble Sort??
-->Bubble sort is a sorting algorithm that compares two adjacent elements and 
swaps them until they are not in the desired order.
*/
#include<stdio.h>

void bubble(int arr[], int num)
{
    int  temp;

    printf("\nThe input provided : ");
    for (int k = 0; k < num; k++) 
    {
        printf("%3d", arr[k]);
    }

    for (int i = 1; i < num; i++)
        {
            for (int j = 0; j < num - 1; j++) 
                {
                    if (arr[j] > arr[j + 1]) 
                        {
                            temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                }

        printf("\nAfter pass %d :\t ", i);
        for (int k = 0; k < num; k++) 
        {
            printf("%4d", arr[k]);
        }
        }
}
void main() 
{
    int arr[50], num;

    printf("\nEnter number of elements :\n");
    scanf("%d", &num);

    printf("\nEnter array elements :\n");
    for (int i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    bubble(arr, num);
}