# CHOLESKY METHOD

## CODE:

```cpp
#include<iostream>
#include <iomanip> 
#include<conio.h>
using namespace std;

const int MAX = 100;

void Cholesky_Decomposition(float matrix[][MAX],int n)
{
   float lower[4][4];
   memset(lower, 0, sizeof(lower));

   // Decomposing a matrix into Lower Triangular
   for (int i = 0; i < n; i++) {
       for (int j = 0; j <= i; j++) {
           float sum = 0;

           if (j == i) // summation for diagnols
           {
               for (int k = 0; k < j; k++)
                   sum += pow(lower[j][k], 2);
               lower[j][j] = sqrt(matrix[j][j] -
                   sum);
           }
           else {

               // Evaluating L(i, j) using L(j, j)
               for (int k = 0; k < j; k++)
                   sum += (lower[i][k] * lower[j][k]);
               lower[i][j] = (matrix[i][j] - sum) /
                   lower[j][j];
           }
       }
   }

   // Displaying Lower Triangular and its Transpose
   cout << setw(6) << " Lower Triangular"<< setw(30) << "Transpose" << endl;
   for (int i = 0; i < n; i++) {

       // Lower Triangular
       for (int j = 0; j < n; j++)
           cout << setw(6) << lower[i][j] << "\t";
       cout << "\t";

       // Transpose of Lower Triangular
       for (int j = 0; j < n; j++)
           cout << setw(6) << lower[j][i] << "\t";
       cout << endl;
   }
}

// Driver Code
int main()
{
   cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
   cout << "\t Cholesky Method\n";
   cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
   int n = 4;
  
   float matrix[][MAX] = { { 1,2,.5,1 },
                       { 2,5,0,-2 },
                       { .5,0,2.5,7.5} ,
                       { 1,-2,7.5,27} };
   cout << "\n=================================Input Matrix=====================\n";
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++)
           cout << setw(6) << matrix[i][j] << "\t";
       cout << "\n";
   }
   cout << endl;
   Cholesky_Decomposition(matrix, n);
   return 0;
}
```
