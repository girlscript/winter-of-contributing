# Hollow Rhombus Pattern

### CODE:

``` cpp
#include <iostream>
using namespace std;

int main()
{
      int n;
      cout<<"Enter the size of the hollow rhombus (rows and columns)";
      cin>>n;                                              // No. of rows or columns or rhombus of size n
      for (int i=1; i<=n; i++)
      {   
          for (int j=1; j<=n-i; j++)
          {
              cout<<" ";                                  // For the no. of columns are less than or equal to the (size of rhombus-i) we print spaces
          }                
          for (j=1; j<=n; j++)
          {
              if (i == 1 || i == n)                      // We print stars in the first or last row
              {
                  cout<<"*";
              }
              else if (j == 1 || j == n)                // We print stars in the first or last column         
              {
                  cout<<"*";
              }
              else
              { 
                  cout<<" ";                           // Otherwise, we print spaces
              }
          }
          cout<<endl;                                 // To skip to a new line after one iteration
      }
      return 0;
}
```
### OUTPUT:
![image](https://user-images.githubusercontent.com/89743157/136667434-c6476f7d-cb84-4e8f-913a-5a6b19150faf.png)
