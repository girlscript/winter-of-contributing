# Spiral Matrix

# For storing elements of array in spiral matrix
A matrix that stores elements of given array in spiral manner i.e. the numbers are stored sequentially as you go around the edges starting from top left corner of the matrix, spiraling inwards.

## Sample Input:
```
3 3
1 2 3 4 5 6 7 8 9
```

## Output:
```
1 2 3
8 9 4
7 6 5
```
## Explanation
![ht](https://user-images.githubusercontent.com/75174930/137589746-f5361d23-f361-4036-88c9-8377529fad45.jpeg)

#### Code 💻
```CPP
#include <bits/stdc++.h>
using namespace std;
int main()
{
	//we take input for size of matrix from user
	int n,m;
	cin>>n>>m;
	//We create an array for storing elements of matrix
	int array[n*m];
	//we create a matrix of size nxm(n rows, m columns) for storing and printing the elements of array in spiral form
	int spiral[n][m];
	
	/*
	This is implemented using nested for loop. One outer loop runs n times, and four inner loops run in a spiral manner.
	Storing starts from top left and moves rightwards(until there is no space for storing),
	downwards, leftwards, and lastly upwards.
	This pattern is repeated, and elements are stored from array to matrix, from the outer boundary to inner space.
	*/
	
	//now we take input from user
	for(int i=0;i<n*m;i++)
	{
		cin>>array[i];
	}
	int index=0;
	for(int x=0;x<n;x++)
	{
		//if statements used here ensures that we never exceed size of array(n*m) and store garbage values
		if(index>=n*m)
		{
			break;
		}
		for(int col=x;col<=m-x-1;col++)
		{
			spiral[x][col]=array[index];
			index=index+1;
		}
		if(index>=n*m)
		{
			break;
		}
		for(int row=x+1;row<=n-x-1;row++)
		{
			spiral[row][m-x-1]=array[index];
			index=index+1;
		}
		if(index>=n*m)
		{
			break;
		}
		for(int col=m-x-2;col>=x;col--)
		{
			spiral[n-x-1][col]=array[index];
			index=index+1;
		}
		if(index>=n*m)
		{
			break;
		}
		for(int row=n-x-2;row>=x+1;row--)
		{
			spiral[row][x]=array[index];
			index=index+1;
		}
	}
	//we will now print the spiral matrix
	for(int row=0;row<n;row=row+1)
	{
		for(int col=0;col<m;col=col+1)
		{
			cout<<spiral[row][col]<<" ";
		}
		//we switch to new line after each row gets printed
		cout<<endl;
	}
	return 0;
}
```


# For returning elements of matrix in spiral order
An array that holds elements of given matrix in spiral order i.e. the numbers are copied sequentially as you go around the edges starting from top left corner of the matrix, spiraling inwards.


## Sample Input:
```
3 4
1 2 3 4
5 6 7 8
9 10 11 12
```

## OUTPUT:
```
1 2 3 4 8 12 11 10 9 5 6 7
```
## Explanation
![spiral_array](https://user-images.githubusercontent.com/75174930/137590236-26daf094-aebd-422d-9def-0cf04d07cebb.jpg)

#### Code 💻
```CPP
#include <bits/stdc++.h>
using namespace std;
int main()
{
	//we take input for size of matrix from user
	int n,m;
	cin>>n>>m;
	//we create a matrix of size nxm(n rows, m columns)
	int matrix[n][m];
	//We create an array for storing and printing elements of matrix in spiral order
	int array[n*m];
	
	/*
	This is implemented using nested for loop. One outer loop runs n times, and four inner loops run in a spiral manner.
	Copying starts from top left and moves rightwards(until there is no element for copying),
	downwards, leftwards, and lastly upwards.
	This pattern is repeated, and elements are stored from matrix to array, from the outer boundary to its inner space.
	*/
	
	//now we take input from user in matrix
	for(int row=0;row<n;row=row+1)
	{
		for(int col=0;col<m;col=col+1)
		{
			cin>>matrix[row][col];
		}
	}
	int index=0;
	//outer loop runs n times
	for(int x=0;x<n;x++)
	{
	    //if statements used here ensures that we never exceed size of array(n*m)
	    if(index>= m*n)
	    {
	        break;
	    }
	    //for traversing from top left to rightwards
	    for(int col=x;col<=m-x-1;col++)
	    {
		array[index]=matrix[x][col];
		index=index+1;
	    }
	    if(index>= m*n)
	    {
	        break;
	    }
	    //for traversing from top right to downwards
	    for(int row=x+1;row<=n-x-1;row++)
	    {
	    	array[index]=matrix[row][m-x-1];
		index=index+1;
	    }
	    if(index>= m*n)
	    {
	        break;
	    }
	    //for traversing from bottom right to leftwards
	    for(int col=m-x-2;col>=x;col--)
	    {
	    array[index]=matrix[n-x-1][col];
	    index=index+1;
	    }
	    if(index>= m*n)
	    {
	        break;
	    }
	    //for traversing from bottom left to upwards
	    for(int row=n-x-2;row>=x+1;row--)
	    {
		array[index]=matrix[row][x];
		index=index+1;
	    }
	}
	//we will now print the array
	for(int i=0;i<n*m;i++)
	{
		cout<<array[i]<<" ";
	}
	return 0;
}
```

