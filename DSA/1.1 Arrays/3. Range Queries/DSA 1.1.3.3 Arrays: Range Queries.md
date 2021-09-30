# Difference Arrays

As we can grab the definition from the name itself “difference array” which says this is a type of array which contains differnece of something.


So the next question arises ,whose difference?


The answer to this is that it consist the difference of the adjacent element present in the original array.So difference array is the array which contains the difference of the adjacent elements of the former array to which it belongs or from where it is extracted

It is the inverse of prefix sum array where we need to add the adjacent elements of the original array.

## Prefix Sum Array  Code structure:-

```
void prefix_sum_array(int c, int* A, int n, int* P)
{
    P[0] = c;
    for (int i = 0; i < n; i++)
        P[i+1] = P[i] + A[i];
}

```

The same work can be done by simple array structure explained as follows:-

![alt_txt](https://github.com/Ayushi2811/Project-on-Data-structure/blob/master/cna.jpg)

To make the same logic work in O(1) time complexity,we use range update queries with the help of difference arrays.

![alt_txt](https://github.com/Ayushi2811/Project-on-Data-structure/blob/master/Screenshot%202021-09-23%20163652.jpg)

The best application of difference arrays is observed in range update queries code which is explained as follow:

```
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: ";
    //inserting orignal array from the user:-
    for(int i=0;i<n;i++)
    cin>>a[i];
//initialising differnce array 'd' with zeroes in all places:-
    int d[n]={0};
    //creating differnce array:-
    for(int i=0;i<n;i++)
    {
        if(i==0)
            d[i]=a[i];
        else
        {
            d[i]=a[i]-a[i-1];
        }
    }

    int l;
    int r ;
    int value;
    //inserting the range and the value ehre we need to do the desired changes:-
    cout<<"Enter left,right,value: ";
    cin>>l>>r>>value;
    //updating the queries with value:-
    d[l] = d[l]+value;
    d[r+1] = d[r+1] - value;
    
    // find the prefix sum array of difference array
cout<<"Result: ";
   for(int i=0;i<n;i++)
  {
        if(i==0)
        {a[i]=d[i]; cout<<a[i]<<" ";}
        else
        {
            a[i]=d[i]+d[i-1];
            d[i]=d[i]+d[i-1];
            cout<<a[i]<<" ";
     }
     //we got the desired result:-

  }
  cout<<endl;
  return 0;
}
    
```

## Output
![alt_txt](https://github.com/Ayushi2811/Project-on-Data-structure/blob/master/Screenshot%202021-09-23%20110450.jpg)


