## **Basic problems on array**
## 1.Print the marks obtained by a student in four subjects.

code in c++

```c++
#include<iostream>
using namespace std;
int main()
{
    int arr[ ]={20,40,60,80};       //initialize an array 
    cout<<"Marks obtained by a student in four subjects are: ";   
    for(int i=0;i<4;i++)            //we are traversing the array using for loop start from i=0 to i=3
    {
        cout<<arr[i]<<" ";
       
    }
}
```
Output
```
  Marks obtained by a student in four subjects are: 20 40 60 80 
```
Time complexity of above code is O(n)

 code in c
```c
#include<stdio.h>
int main()
{
    int arr[ ]={20,40,60,80};        //initialize an array 
    printf("Marks obtained by a student in four subjects are:");
    for(int i=0;i<4;i++)  
    {
        printf("%d ",arr[i]);           //we are traversing the array using for loop start from i=0 to i=3
        
    }
}
```
Output
```
  Marks obtained by a student in four subjects are: 20 40 60 80 
```
Time complexity of above code is O(n)

## 2.Write a program to find the largest element of an array.

code in c++
```c++
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size of array: "<<endl;
  cin>>n;                                               //taking the size of array from user
  int arr[n];
  cout<<"Enter the elements of array"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];                                       //taking the elements of array from user
  }
  int max=arr[0];                                      //storing first element of array in max variable
  for(int i=1;i<n;i++){
    if(arr[i]>max){      
      max=arr[i];                                     //if current element is greater than max then max=current element
    }
  }
    cout<<"The largest element of array: "<<max;
}
```
Output
```
Enter the size of array: 
5
Enter the elements of array
5 6 7 8 9
The largest element of array: 9
```
Time complexity of above code is O(n)
<br>
code in c
```c
#include<stdio.h>
int main()
{
    printf("Enter the size of the array:\n");  
    int n;
    scanf("%d",&n);                                    //taking the size of array from user
    int arr[n];
    printf("Enter the Element of the array:\n");
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);                           //taking the elements of array from user
    }
  int max=arr[0]                                        //storing first element of array in max variable
    for(int i=0;i<n;i++){
        if(arr[i]>=max)
        max=arr[i];                                       //if current element is greater than max then max=current element
    } 
    printf("The largest element of array: %d",max);
}
```
Output
```
Enter the size of array: 
5
Enter the elements of array
5 6 7 8 9
The largest element of array: 9

```
Time complexity of above code is O(n)

## 3.Write a program to find the smallest element of an array.

code in c++
```c++
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size of array: "<<endl;
  cin>>n;                                               //taking the size of array from user
  int arr[n];
  cout<<"Enter the elements of array"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];                                       //taking the elements of array from user
  }
  int min=arr[0];                                      //storing first element of array in min variable
  for(int i=1;i<n;i++){
    if(arr[i]<min){      
      min=arr[i];                                     //if current element is smallerer than min then min=current element
    }
  }
    cout<<"The smallest element of array: "<<min;
}
```
Output
```
Enter the size of array: 
5
Enter the elements of array
5 6 7 8 9
The smallest element of array: 5
```
Time complexity of above code is O(n)
<br>
code in c
```c
#include<stdio.h>
int main()
{
    printf("Enter the size of the array:\n");  
    int n;
    scanf("%d",&n);                                    //taking the size of array from user
    int arr[n];
    printf("Enter the Element of the array:\n");
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);                           //taking the elements of array from user
    }
  int min=arr[0]                                        //storing first element of array in min variable
    for(int i=0;i<n;i++){
        if(arr[i]<min)
        min=arr[i];                                       //if current element is smaller than min then min=current element
    } 
    printf("The smallest element of array: %d",min);
}
```
Output
```
Enter the size of array: 
5
Enter the elements of array
5 6 7 8 9
The smallest element of array: 5
```
Time complexity of above code is O(n)
