// print 0-1 patten
/*
1
0 1        
1 0 1      
0 1 0 1    
1 0 1 0 1 
*/
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n,i,j,sum;
    cout<<"Enter number of rows:-";
    cin>>n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j<= i; j++)
        {
            if ((i+j)%2 == 0)
            {
               cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
        
    }
    
}