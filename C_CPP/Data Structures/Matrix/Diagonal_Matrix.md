# Diagonal Matrix

A diagonal matrix is a matrix in which the entries outside the main diagonal are all zero.Elements of the main diagonal can either be zero or nonzero .An example of a 3×3 diagonal matrix is:

![diagonal matrix](https://imgur.com/rSR0Frx.jpg)

Here , A[i][j]=0 (if i not equal to j)

## C++ Program For Diagonal Matrix
```cpp
#include <iostream>
using namespace std;
struct diagonal{
    int A[8];
    int n;
} m;
void Set(struct diagonal *m,int i,int j,int x){   //for creating diagonal matrix
    if(i==j){
        m->A[i-1]=x;
    }
}  
int Get(struct diagonal m,int i,int j){         //for getting the element at any position of the matrix
    if(i==j){
        return m.A[i-1];
    }else{
        return 0;
    }
}
int Display(struct diagonal m){                //for displaying Diagonal Matrix
    int i,j;
    for(i=0;i<m.n-1;i++){
        for(j=0;j<m.n-1;j++){
            if(i==j)cout<<m.A[i]<<" ";
            else{cout<<0<<" ";}
        }
        cout<<endl;
    }
}
int main(){
    struct diagonal m;
    m.n=4;
    Set(&m,1,1,5);
    Set(&m,2,2,8);
    Set(&m,3,3,9);
    Display(m);
    cout<<"Element present :"<<Get(m,1,1);
    return 0;
}
```
OUTPUT
```cpp
5 0 0 
0 8 0 
0 0 9
Element present :5
```

## Complexity Analysis:  

* Time Complexity: O(n2). 
As there is a nested loop involved so the time complexity is squared.

* Auxiliary Space: O(1). 
As no extra space is occupied.

Similarly we can create Diagonal Matrix of n x n order :

![diagonal matrix](https://imgur.com/oAqGcve.jpg)