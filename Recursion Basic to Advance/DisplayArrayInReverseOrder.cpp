/*
1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are required to print the elements of array from end to beginning each in a separate line.
4. For the above purpose complete the body of displayArrReverse function. Don't change the signature.

Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. 
The purpose of the question is to aid learning recursion and not test you.

Constraints

1 <= n <= 30
0 <= n1, n2, .. n elements <= 10

Sample Input

5
3
1
0
7
5

Sample Output

5
7
0
1
3
*/

#include<bits/stdc++.h>
using namespace std;
void display(int *arr , int idx , int n)
{
     if(idx >=n) return ;
     display(arr , idx+1 , n);
     cout<<arr[idx]<<endl;
}
int main()
{
     int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    display(arr, 0, n);

  return 0;
}