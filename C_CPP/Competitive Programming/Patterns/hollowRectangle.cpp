// hollow rectangle 
// * * * * *  
// *       *  
// *       *
// *       *
// * * * * *
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
           if (i ==1 || i == row || j == 1 || j == col)
           {
               /* code */
               cout<<"*"<<" ";
           }
           else{
               cout<<" "<<" ";
           }
            
        }
        cout<<" "<<endl;
    }
    
    return 0;
}