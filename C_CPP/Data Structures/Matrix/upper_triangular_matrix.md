# UPPER TRIANGULAR MATRIX

## Definition 
The upper triangular matrix is a square matrix in which has all the elements below the main diagonal is 0.
The upper triangular matrix is also called as right triangular matrix

**Example** :  

  1  2  3  4  
  0  6  2  1   
  0  0  3  4  
  0	 0  0  1   
 
![WhatsApp Image 2021-10-05 at 10 17 09](https://user-images.githubusercontent.com/68144616/135961835-c80c570a-1065-46f3-8107-6ef7fc41e40b.jpeg)

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

![Screenshot (317)](https://user-images.githubusercontent.com/68144616/135762009-59f9edea-a8fa-4568-87da-d8219f1c9390.png)
