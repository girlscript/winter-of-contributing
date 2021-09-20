#include<iostream>                             //header files
using namespace std;
void nextgreaterelement(int arr[],int n)                //function definition
{
    int next,i,j;
    for(int i=0;i<n;i++)
    {
        next=-1;                              //declare a new variable
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                next=arr[j];
                break;
            }
        }
        cout<<arr[i]<<"_ _"<<next<<endl;      //print greater element
    }
}
int main()                                    //function decleartion
{
   int arr[]={10,12,20,4};                     //given array
    int n=sizeof(arr)/sizeof(arr[0]);
    nextgreaterelement(arr,n);                          // function call
    return 0;
}
