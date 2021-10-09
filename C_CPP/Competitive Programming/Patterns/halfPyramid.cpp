//  Half Pyramid Pattern
// *   
// * * 
// * * *
// * * * *
// * * * * *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number of rows :- ";
    cin>>n;
     
     for (int i = 1; i <= n; i++)
     {
         for (int j = 1; j <= i; j++)
         {
            cout<<"*"<<" ";
         }
         cout<<endl;
     }
     
    
}