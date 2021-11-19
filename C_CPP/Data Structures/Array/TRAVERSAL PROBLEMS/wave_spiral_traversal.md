## WAVE TRAVERSAL USING 2D ARRAY

### PROBLEM
Suppose we have to visit a country and there are different monuments forming a matrix pattern on map as shown below.

```
1  2  3
4  5  6
7  8  9
```
we have to cover the following path (from 1 to 9) in order to visit all monuments
``` 
     ___
| 1 | 2 | 3 |
| 4 | 5 | 6 |
| 7 | 8 | 9 |
|___|   |___|
```
## ALGORITHM
1. First of all, enter the serial no. of all monuments .

2. From fig. we can see ,for all even value of column no. we are moving downwards and for odd values of column i.e. j ,we are moving upwards .

3. Apply for loop ,and write condition for odd and even according to above logic.

## CODE
```
#define col 3
#define row 3
#include<stdio.h>
int main()
{
 int i,j,mat[row][col];
 printf("enter matrix (%d*%d):\n",row,col);
 for(i=0;i<row;i++)// input values
        for(j=0;j<col;j++)
        scanf("%d",&mat[i][j]);
 for(j=0;j<col;j++)
  {
    if(j%2==0){
    for(i=0;i<row;i++)// for even value of column
 {
     printf("%d ->",mat[i][j]);
 }}
 else
   {
    for(i=row-1;i>=0;i--)// for odd value of column
    printf("%d ->",mat[i][j]);}}
return 0;
}
```
## INPUT
```
1  2  3  4  5  6  7  8  9
```
## OUTPUT
```
enter matrix(3*3):1
2
3
4
5
6
7
8
9
1->4->7->8->5->2->3->6->9->
```
In this way, we will get a roadmap to the places we have to visit.

## SPIRAL TRAVERSAL USING 2D ARRAY

Suppose we want to visit monuments by following a spiral path.
let's see the procedure.

The path (1 to 6) to be followed will look as follows:
``` 
     ______________
| 1 |  2    3     |
|   |             |
| 4 |  5    6     |
|   |______       |
| 7    8    9     |
|___ _________ __ |
```


## ALGORITHM

1. First of all enter the no of rows and columns and all the elements of matrix.
2. initialize the minimum and maximum values of rows and columns.
3. pathway for spiral motion
   
   - for moving from top to bottom ,increase row keeping column constant
   - for moving from left to right ,increase column keeping row constant
   - for moving from bottom to top ,decrease row keeping column constant
   - for moving from right to left ,decrease column keeping row constant

 4. we are considering count and tot here , to prevent the printing of middle elements twice (in case the middle monuments doesn't form close loop i.e. it forms straight line ,they will get printed twice ), each time element is printed , it is counted in count , after the condition is satisfied i.e. count exceeds tot  , it will stop.

## CODE
```
#include<stdio.h>
int main()
{
 int row,col;
 printf("enter no of rows :");
 scanf("%d",&row);// input row length
 printf("enter no of columns:");
 scanf("%d",&col);//input column length
 int i,j,mat[row][col],minr,minc,maxr,maxc;
 printf("enter matrix (%d*%d):\n",row,col);
 for(i=0;i<row;i++) //input values
        for(j=0;j<col;j++)
        scanf("%d",&mat[i][j]);
   minr=0;
   minc=0;
   maxr=row-1;
   maxc=col-1;
   int tot=row*col;
   int count=0;
   while(count<tot){
   for(i=minr;i<=maxr;i++)// print all values in column from up to bottom
   {
            printf("%d ->",mat[i][minc]);
            count++;}
     minc++;
  for(j=minc;j<=maxc;j++)// print values from left to right in row
  {
    printf("%d ->",mat[maxr][j]);
    count++;}
    maxr--;
   for(i=maxr;i>=minr;i--)// print values from bottom to top in column
   {
   printf("%d ->",mat[i][maxc]);
   count++;}
   maxc--;
   for(j=maxc;j>=minc;j--)// print values from right to left in row
   {
   printf("%d ->",mat[minr][j]);
   count++;}
   minr++;}
   return 0;
}
```
## INPUT
```
3  3
1  2   3  4  5  6   7  8  9
```
## OUTPUT
```
enter no. of rows:3
enter no. of columns:3
enter matrix(3*3):1
2
3
4
5
6
7
8
9
1->4->7->8->9->6->3->2->5->
```
