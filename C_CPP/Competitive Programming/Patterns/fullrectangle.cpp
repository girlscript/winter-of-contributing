// Full rectangle patten
// * * * *    
// * * * *    
// * * * *    
// * * * *
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter a number of rows :- ";
    cin>>row;
    cout<<"enter a number of columns :- ";
    cin>>col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col ;j++)
        {
            /* code */
            cout<<"*"<<" ";
            
        }
        cout<<" "<<endl;
    }
    
}