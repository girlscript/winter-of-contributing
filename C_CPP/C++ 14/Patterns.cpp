#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of Rows: ";
    cin>>n;
     
    int i, j, k;
    //upper half
    for(i=0; i<n; i++){
        for(j=0; j<(2*n); j++){
            if(i>=j)
            cout<<"*";             //left
            else 
            cout<<" ";

            if(i>=(2*n -1)-j)      //right
            cout<<"*";
            else
            cout<<" ";    
        }
        cout<<endl;
    }

    //bottom half
    for(i=0; i<n; i++){

        for(j=0; j<(2*n); j++){
            if((i+j)<=n-1)               //left
            cout<<"*";
            else
            cout<<" ";

            if((i+n)<=j)                 //right
            cout<<"*";
            else
            cout<<" ";
         }
        cout<<endl;
    }
    return 0;
}