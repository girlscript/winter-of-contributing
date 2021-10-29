#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[100],num,i,n,found=0,pos=-1;//Declaring variables which we will gonna use for searching any particular value
    clrscr();//To clear the output screen
    printf("\nEnter the number of elements in the array:-");
    scanf("%d",&n);//Taking the total count of elements which we will enter in the array
    printf("\nEnter the elements:-");//Taking values from the user using for loop in the array.
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the number that has to be searched:-");//number to be searched
    scanf("%d",&num);

    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            found=1;//if founded then found=1,otherwise found=0
            pos=i;//To show the position of that number in the array
            printf("\n%d is found in the array at position=%d",num,i);
            break;
        }
    }
    if(found==0)//This means the number is not present in the array

    printf("\n%d does not exist in the array",num);
    getch();
    return 0;
}