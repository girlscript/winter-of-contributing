# FASCINATING PATTERNS

## 1.DIAMOND PATTERN

### CODE:

``` cpp
#include<iostream>
using namespace std;
int main()
{
    int i, j, rowNum, space;
    cout<<"Enter the Number of Rows: ";  //Size of Diamond
    cin>>rowNum;
    space = rowNum-1;
    for(i=1; i<=rowNum; i++)
    {
        for(j=1; j<=space; j++)                                    ////For Upper Half Of The Diamomd
            cout<<" ";
            space--;
        for(j=1; j<=(2*i-1); j++)
            cout<<"*";
            cout<<endl;
    }
    space = 1;
    for(i=1; i<=(rowNum-1); i++)
    {
        for(j=1; j<=space; j++)                                      //For Lower Half Of The Diamomd
            cout<<" ";
            space++;
        for(j=1; j<=(2*(rowNum-i)-1); j++)
            cout<<"*";
            cout<<endl;
    }
    cout<<endl;
    return 0;
}
```
### OUTPUT:
![image](https://user-images.githubusercontent.com/89743157/136801532-0e829a40-2048-46bc-b9fd-bdba703cb135.png)


## 2.BUTTERFLY PATTERN

### CODE:

``` cpp
#include <iostream>
using namespace std;

int main()
{
  int r, i, j;
  cout<<"Enter the height ";
  cin>>r;                             // This inputs the height of the butterfly or the no. of rows in the upper and lower halves
  
  for(i=1; i<=r; i++)
  {
    for(j=1; j<=i; j++)              // If the no. of columns are less than or equal to the no. of rows then we print stars
    cout<<"*";
    
    for(j=1; j<=2*(r-i); j++)       // Once the no. of columns are less than or equal to twice of the (height of the upper triangle -i) 
    cout<<" ";
    
    for(j=1; j<=i; j++)              // Creating the mirror image of the upper half of the butterfly
    cout<<"*";
    
    cout<<"\n";
  }
  for(i=r; i>=1; i--)                // Loop for the lower half of the butterfly 
  {
    for(j=1; j<=i; j++)              // If the no. of columns are greater than or equal to the no. of rows then we print stars
    cout<<"*";
      
    for(j=1; j<=2*(r-i); j++)         // Once the no. of columns are less than or equal to twice of the (height of the lower triangle -i)
    cout<<" ";
      
    for(j=1; j<=i; j++)              // Creating the mirror image of the lower half of the butterfly
    cout<<"*";
      
    cout<<"\n";
  }
  return 0;
}
```

### OUTPUT:
![image](https://user-images.githubusercontent.com/89743157/136817199-1ee87104-db6d-4883-8d63-e2cf03f47db7.png)


## 3.FLOYD'S TRIANGLE

### CODE:

``` cpp
#include <iostream>
using namespace std;

int main()
{
    int rows, number = 1;

    cout << "Enter number of rows of Floyd's Triangle to print: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; ++j)                    /* If the no. of columns are less than or equal to the no. of rows we go on
        {
            cout << number << " ";                                 printing the number and incrementing it each time*/
            ++number;
        }

        cout << endl;
    }

    return 0;
}
```

### OUTPUT:
![image](https://user-images.githubusercontent.com/89743157/136813258-021ac6d1-9b09-4f9a-a042-34961c30efa7.png)


## 4.Hollow Rhombus Pattern

### CODE:

``` cpp
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


## 5.INVERTED HALF PYRAMID

### CODE:

``` cpp
#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";       
    cin >> rows;                                    // No. of rows the user wants in the pyramid

    for(int i = rows; i >= 1; --i)                  // The condition differs from the usual case since we are descending
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";                          // If no. of columns are less than equal to the no. of rows we go on printing stars
        }
        cout << endl;                             // To skip to a new line
    }
    
    return 0;
}
```

### OUTPUT:
![image](https://user-images.githubusercontent.com/89743157/136815691-3324505c-72b0-4007-823f-1af48feac873.png)


## 6.Palindrome Pattern

### CODE:

``` cpp
#include <iostream>
using namespace std;

int main()
{
    int rows, count = 0, count1 = 0, k = 0;

    cout << "Enter the height of triangle ";
    cin >> rows;                                                          // It stores the height of palindrome which is eventually equal to no. of rows!
    for(int i = 0; i <= rows; ++i)
    {
        for(int space = 1; space <= rows-i; ++space)
        {
            cout << "  ";                                                  //Inserting spaces till (no. of rows - i)
            ++count;
        }

        while(k != 2*i-1)                                                  
        {
            if (count <= rows-1)
            {
                cout << i+k << " ";                                         // This code block represents numbers in ascending order forming a palindrome
                ++count;
            }
            else
            {
                ++count1;
                cout << i+k-2*count1 << " ";                                //Insert spaces till row no. i.e k is equal to 2*i-1
            }
            ++k;
        }
        count1 = count = k = 0;                                             // Initializing all the variables with zero i.e removing all the data stored in them!

        cout << endl;
    }
    return 0;
}
```

### OUTPUT:
![image](https://user-images.githubusercontent.com/89743157/136812337-4007474d-a694-4bc8-a70c-2080f00e42e7.png)


## 7.PASCAL'S TRIANGLE

### CODE:

``` cpp
#include <iostream>
using namespace std;

int main()
{
    int rows, coef = 1;                                    // coef is a counter variable to perform the pascal's triangle function

    cout << "Enter number of rows: ";
    cin >> rows;                                           // No. of rows the user wants to input

    for(int i = 0; i < rows; i++)
    {
        for(int space = 1; space <= rows-i; space++) 
            cout <<"  ";                                    // Adding spaces till columns are less than or equal to the (no. of rows - i)

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)                          // Base case
                coef = 1;                                   
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;                                     // To skip to the other row
    }

    return 0;
}
```

### OUTPUT:
![image](https://user-images.githubusercontent.com/89743157/136814379-d57ebd48-ef14-4c85-97f7-c896be022076.png)

