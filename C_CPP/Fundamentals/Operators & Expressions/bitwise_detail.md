# Some useful results based on bitwise operator
1. To check i<sup>th</sup> bit is set or unset :- if (n&(1<<pos)==0) condition is true then the bit at position "pos" is unset.<br>
2. To set i<sup>th</sup> bit in a given number :- n=n|(1<<i).<br>
3. To unset i<sup>th</sup>bit in a given number :- n&(~(1<<i)).<br>
4. To remove last set bit in a given number :- n&(n-1). 
5. To check if a number is a power of 2 :- n&(n-1)==0  if this condition is true then the number is a power of 2.
6. To count number of setbits in a given number :-
```  
   while(n){ 
        if(n&1) 
           count++;
        n=n>>1;
   }
```
7. To generate subset of a given set (bitmasking):-
```
#include<bits/stdc++.h>
using namespace std;

int main()
{   int n,x;
    cin>>n;
    vector<int>v1;
    for(int i=0 ; i<n ; i++){           
       cin>>x;
       v1.emplace_back(x);               //taking inputs in the array
    }
  
    for(int i=0 ; i<(1<<n) ; i++)
    { for(int j=0 ; j<n ; j++){
         if(i&(1<<j))
           cout<<v1.at(j)<<" ";
       }
      cout<<endl;
    } 
    return 0;
}
```
this is based on the logic that of binary representation of numbers , if in the binary representation of number the bit is set at a position let say "j" then we are printing the element of the array at the index "j".<br>
8. To print the element in sorted order in a time and space complexity of O(1):-
```
#include <bits/stdc++.h>
using namespace std;
int main()
{  long long int x=0;
   int num,y,count=0;
   do
   {  cout<<"enter the number\t";
      cin>>num;
      x|=(1<<num);
      cout<<"press 1 to enter more data\t";
      cin>>y;
   } while (y==1);
   //to print all the elements in sorted order
   cout<<endl;
   while(x){
       if(x&1)
         cout<<count<<" ";
       x>>=1;
       count++;
   }
   return 0;
}
```
to implement this logic we are simply set the bit the the position given by user as input . we have taken long long int whose size is 8 bytes (64 bits) so the we have large renage of input (from 0 to 64).