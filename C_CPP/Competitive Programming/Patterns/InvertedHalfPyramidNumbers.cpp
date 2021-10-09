// Half Pyramid using numbers
// 1 2 3 4 5  
// 1 2 3 4
// 1 2 3
// 1 2
// 1
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
            cout<<j<<" ";
        }
        cout<<" "<<endl;
    }
    
}                                                                 