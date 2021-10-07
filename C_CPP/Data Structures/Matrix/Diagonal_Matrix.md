# Diagonal Matrix

A diagonal matrix is a matrix in which the entries outside the main diagonal are all zero.Elements of the main diagonal can either be zero or nonzero .An example of a 3×3 diagonal matrix is:

![diagonal matrix](https://imgur.com/rSR0Frx.jpg)

As stated above, a diagonal matrix is a matrix in which all off-diagonal entries are zero.

 That is, the matrix A with n columns and n rows is diagonal if
for every i, j belongs to {1,2,....n} , i is not equal to j ,A[i][j]=0  [where i = row index and j= column index].

However, the main diagonal entries are unrestricted.

A diagonal matrix is at the same time:

- Upper triangular;

- Lower triangular.
      

## C++ Program For Diagonal Matrix
```cpp
#include <iostream>
using namespace std;
struct diagonal{
    int A[8];
    int n;
} m;

//function to Set the values of Diagonal Matrix at the Diagonal indices (i=j)
void Set(struct diagonal *m,int i,int j,int x){  
    if(i==j){
        m->A[i-1]=x;
    }
}  

//funciton to Get the element at the specified index
int Get(struct diagonal m,int i,int j){         
    if(i==j){
        return m.A[i-1];
    }else{
        return 0;
    }
}

//funcition to Display the Diagonal Matrix
int Display(struct diagonal m){                
    int i,j;
    for(i=0;i<=m.n-1;i++){
        for(j=0;j<=m.n-1;j++){
            if(i==j)cout<<m.A[i]<<" ";
            else{cout<<0<<" ";}
        }
        cout<<endl;
    }
}
int main(){
    struct diagonal m;
    m.n=4;          //Diagonal matrix of Order 4
    Set(&m,1,1,5);     
    Set(&m,2,2,8);
    Set(&m,3,3,9);
     Set(&m,4,4,10);
    Display(m);
    cout<<"Element present :"<<Get(m,1,1);
    return 0;
}
```
OUTPUT
```cpp
5 0 0 0
0 8 0 0
0 0 9 0
0 0 0 10
Element present :5
```

## Complexity Analysis:  

* Time Complexity: O(n2). 
As there is a nested loop involved so the time complexity is squared.

* Auxiliary Space: O(1). 
As no extra space is occupied.

Similarly we can create Diagonal Matrix of n x n order :

![diagonal matrix](https://imgur.com/oAqGcve.jpg)