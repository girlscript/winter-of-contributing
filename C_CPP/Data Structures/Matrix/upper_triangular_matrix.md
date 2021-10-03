# UPPER TRIANGULAR MATRIX

## Definition 
The upper triangular matrix is a square matrix in which has all the elements below the main diagonal is 0.
The upper triangular matrix is also called as right triangular matrix

**Example** :  

  1  2  3  4  
  0  6  2  1   
  0  0  3  4  
  0	 0  0  1   
 


   ## Properties Of Upper Triangular Matrix
-	if we add two upper triangular matrix ,then the resultant matrix itself will be an upper triangular matrix
-	If we multiply two upper triangular matrix ,then the resultant matrix itself will be an upper triangular matrix  
-	The inverse of upper triangular matrix remains upper triangular matrix
-	The transpose of upper triangular matrix  is lower triangular matrix
-	If we multiply any scalar quantity to an upper triangular matrix ,then the matrix remains upper triangular matrix

  ## CODE
 ```
 #include<bits/stdc++.h>

using namespace std;
void change_to_upper_triangular_matrix(int m[4][4]){

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			if(i>j) m[i][j]=0;
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


  for(int i=0;i<4;i++)
  {
  	for(int j=0;j<4;j++)
  		cout<<m[i][j]<<" ";
  	cout<<endl;
  }

  change_to_upper_triangular_matrix(m);

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

![Screenshot (317)](https://user-images.githubusercontent.com/68144616/135762009-59f9edea-a8fa-4568-87da-d8219f1c9390.png)
