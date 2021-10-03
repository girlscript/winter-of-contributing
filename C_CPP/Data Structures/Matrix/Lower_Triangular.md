# Lower Triangular Matrix

 A square matrix is called **lower triangular** if all the entries above the main diagonal are zero. 
 
 ![lower triangular](https://imgur.com/dNyIBpt.jpg)

 *ref :google images*

## In lower triangular matrix A[i][j] :
* If i is less than j then A[i][j] is 0
* For i greater than or equal to j then A[i][j] can be either non-zero or non-zero.

## Row Major Mapping & Column Major Mapping
  5X5 matrix given below can be stored in a 2D array, but when it comes to matrices of large size, it is not a good choice because of its high memory consumption due to the storage of unwanted 0s. 
 
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

## Program for Creating Lower Triangular Matrix using Column Major Mapping
```cpp
#include <iostream>
using namespace std;
struct Matrix{
    int *A;
    int n;
};
void SetR(struct Matrix *m,int i,int j,int x){   //for creating Lower Triangular
    if(i>=j){ 
        m->A[i*(i-1)/2+j-1]=x;
    }
}
int GetR(struct Matrix m,int i,int j){       //for getting the element at that position
    if(i>=j){
        return m.A[i*(i-1)/2+j-1];
    }
    else{
        return 0;
    }
}
void DisplayR(struct Matrix m){          //for displaying the matrix
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
## Program for Creating Lower Triangular Matrix using Row Major Mapping
 ```cpp    
    
#include <iostream>
using namespace std;
struct Matrix{
    int *A;
    int n;
};
    
void SetC(struct Matrix *m,int i,int j,int x){  //for creating Lower Triangular
    if(i>=j){
        m->A[m->n*(j-1)-(j-2)*(j-1)/2+(i-j)]=x;
    }
}
int GetC(struct Matrix m,int i,int j){           //for getting the element at that position
    if(i>=j){
        return m.A[m.n*(j-1)-(j-2)*(j-1)/2+(i-j)];
    }
    else{
        return 0;
    }
}
void DisplayC(struct Matrix m){             //for displaying the matrix
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

Refrences :

* [GeeksForGeeks](www.geeksforgeeks.org)

* [Udemy](www.udemy.com)
