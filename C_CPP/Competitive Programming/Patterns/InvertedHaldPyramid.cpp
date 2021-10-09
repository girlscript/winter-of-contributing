// Print an Inverted Half pyramid
// * * * * *  
// * * * *
// * * *
// * *
// *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number of rows :- ";
    cin>>n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i ;j++)
        {
            /* code */
            cout<<"*"<<" ";
            
        }
        cout<<" "<<endl;
    }
    
}                                                                 