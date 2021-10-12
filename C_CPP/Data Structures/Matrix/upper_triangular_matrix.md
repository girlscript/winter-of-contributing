# UPPER TRIANGULAR MATRIX

## Definition 
The upper triangular matrix is a square matrix in which has all the elements below the main diagonal is 0.
The upper triangular matrix is also called as right triangular matrix
![Screenshot (333)](https://user-images.githubusercontent.com/68144616/136906781-ebb52ab3-b280-4397-a38c-880790a1cdcc.png)
**Example** :  

  1  2  3  4  
  0  6  2  1   
  0  0  3  4  
  0	 0  0  1   
 


   ## Properties Of Upper Triangular Matrix (from wikipedia)
-	if we add two upper triangular matrix ,then the resultant matrix itself will be an upper triangular matrix  
             **A + B =C**   
	  if A and B are upper triangular matrix then C will also be a `upper` triangular Matrix.  
-	If we multiply two upper triangular matrix ,then the resultant matrix itself will be an upper triangular matrix    
            **A*B=C**  
	   if A and B are upper triangular matrix then C will also be a `upper` triangular Matrix.
-	The inverse of upper triangular matrix remains `upper` triangular matrix  
             **A<sup>-1</sup> = C**  
	 if A is upper triangular matrix then C will also be a `upper` triangular Matrix.  
-	The transpose of upper triangular matrix  is lower triangular matrix    
         **A<sup>T</sup>=C**  
	  if A is upper triangular matrix then C will be a `lower` triangular Matrix.  
-	If we multiply any scalar quantity to an upper triangular matrix ,then the matrix remains upper triangular matrix  
             **k.A= C**  
	      if A is upper triangular matrix then C will also be a `upper` triangular Matrix.  
	      

  ## CODE
 ```   
 cpp

 #include<bits/stdc++.h>

using namespace std;
void change_to_upper_triangular_matrix(int m[4][4]){

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			if(i>j) m[i][j]=0;  //as we know for i>j  which will be below the diagonal will be equal to 0
	}
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("outputt.txt", "w", stdout);
#endif

  int m[4][4]={{1,2,3,5},
  {2,5,6,1},
  {7,8,8,10},
  {4,5,1,0}
  };
  cout<<"Entered matrix"<<endl;
  cout<<endl;

//since,upper triangular matrix is always a square matrix

//printing the matrix before conversion
  for(int i=0;i<4;i++)
  {
  	for(int j=0;j<4;j++)
  		cout<<m[i][j]<<" ";
  	cout<<endl;
  }

//calling the function which will transform the matrix into upper triangular matrix
  change_to_upper_triangular_matrix(m);

//After converting to upper triangular matrix print the matrix
   cout<<"Upper triangular  matrix"<<endl;
  cout<<endl;


  for(int i=0;i<4;i++)
  {
  	for(int j=0;j<4;j++)
  		cout<<m[i][j]<<" ";
  	cout<<endl;
  }

return 0;
}
 ```

**OUTPUT**

Entered matrix

1 2 3 5  
2 5 6 1  
7 8 8 9  
4 5 1 1  

Upper triangular  matrix

1 2 3 5  
0 5 6 1  
0 0 8 9  
0 0 0 1  


