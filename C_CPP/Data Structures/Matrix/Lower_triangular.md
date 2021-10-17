# Lower Triangular Matrix

 In the mathematics, a triangular matrix is a special kind of *square matrix* and  a square matrix is called **Lower Triangular** if all the elements above the diagonal are **0**. 
 
 ![lower triangular](https://imgur.com/dNyIBpt.jpg)

 *ref :google images*

## In lower triangular matrix A[i][j] where i=row and j=column :
* If i is less than j then A[i][j] is 0
* For i greater than or equal to j then A[i][j] is non-zero value.

## Row Major Mapping & Column Major Mapping
  The matrix given below is a 5X5 matrix and it can be stored in a 2D array, but it is not a good choice to store such large memory in array because of its high memory consumption due to the storage of unwanted zeros. 

  So,what we can do ,is finding more efficient way of storing only the non-zero values in a 1D array and at the time of displaying the matrix we can just display zero as std output.
 
![matrix](https://imgur.com/3UXFTdg.jpg)

- Number of Non-zero elements = n(n+1)/2
- Number of zeros =n*n - n(n+1)/2= n(n-1)/2

 Such a matrix can be implemented in an optimized manner:
- Row Major Mapping
-  Column Major Mapping
### **Row Major Mapping** :
Mapping all the non-zero elements in an Array row wise,lets say A[].

![row major](https://imgur.com/tLFJySY.jpg)

**NOTE**: Here non-zero elements are present at:
```
A[i][j]=i*(i-1)/2+(j-1)
```

### **Column Major Mapping** :
Mapping all the non-zero elements in an Array row wise,lets say A[].

![column major](https://imgur.com/6mgaXmq.jpg)

**NOTE**: Here non-zero elements are present at:
```
A[i][j]=n*(n-1)-(j-1)*(j-2)/2 + (i-j)   //n is the order of matrix
```

## Program for Creating Lower Triangular Matrix using Row Major Mapping
```cpp
#include <iostream>
using namespace std;
struct Matrix{
    int *A;
    int n;
};
 //function to Set the elements of Lower Triangular 
void SetR(struct Matrix *m,int i,int j,int x){   
    if(i>=j){ 
        m->A[i*(i-1)/2+j-1]=x;
    }
}
//function to Get the element at a specified position
int GetR(struct Matrix m,int i,int j){       
    if(i>=j){
        return m.A[i*(i-1)/2+j-1];
    }
    else{
        return 0;
    }
}
//function to display the contents of a Lower triangular Matrix
void DisplayR(struct Matrix m){          
    int i,j;
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            if(i>=j){cout<<m.A[i*(i-1)/2+j-1]<<" ";}
            else{cout<<0<<" ";}
        }
        cout<<endl;
    }
}

int main(){
    struct Matrix m;
    int i,j,x;
    cout<<"Enter the dimension ";
    cin>>m.n;
    m.A=new int[m.n*(m.n+1)/2];
    cout<<"Enter all the elements"<<endl;
    //note : this Array will take all the input values but Set function will set the values at required index to only at the lower part of the matrix and Display funciton will display the upper part values of matrix as 0.
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            cin>>x;
            SetR(&m,i,j,x);
        }
        cout<<endl;
    }
    DisplayR(m);
    cout<<GetR(m,1,1);}

```   
## Program for Creating Lower Triangular Matrix using Column Major Mapping
 ```cpp    
    
#include <iostream>
using namespace std;
struct Matrix{
    int *A;
    int n;
};
 //function to Set the elements of Lower Triangular    
void SetC(struct Matrix *m,int i,int j,int x){  
    if(i>=j){
        m->A[m->n*(j-1)-(j-2)*(j-1)/2+(i-j)]=x;
    }
}
//function to Get the element at a specified position
int GetC(struct Matrix m,int i,int j){           
    if(i>=j){
        return m.A[m.n*(j-1)-(j-2)*(j-1)/2+(i-j)];
    }
    else{
        return 0;
    }
}
//function to display the contents of a Lower triangular Matrix
void DisplayC(struct Matrix m){           
    int i,j;
    for(i=1;i<=m.n;j++){
        for(j=1;j<=m.n;j++){
            if(i>=j){cout<<m.A[m.n*(j-1)-(j-2)*(j-1)/2+(i-j)]<<" ";}
            else{cout<<0<<" ";}
        }
        cout<<endl;
    }
}
int main(){
    struct Matrix m;
    int i,j,x;
    cout<<"Enter the dimension ";
    cin>>m.n;
    m.A=new int[m.n*(m.n+1)/2];
    //note : this Array will take all the input values but Set function will set the values at required index only at the upper part of the matrix and Display funciton will display the lower part values of matrix as 0.
    cout<<"Enter all the elements"<<endl;
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            cin>>x;
            SetC(&m,i,j,x);
        }
        cout<<endl;
    }
    DisplayC(m);
    cout<<GetC(m,1,1);}
}
```


