# Basic Patterns 
## 0-1 Pattern 
```cpp
// print 0-1 patten
/*
1
0 1        
1 0 1      
0 1 0 1    
1 0 1 0 1 
*/
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n,i,j,sum;
    cout<<"Enter number of rows:-";    //Input size of pattern 
    cin>>n;

    for (i = 1; i <= n; i++)           // Loop no of row times
    {
        for (j = 1; j<= i; j++)
        {
            if ((i+j)%2 == 0)           //if no of rows + no of columns % 2 == 0 print 1
            {
               cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";         //else print 0
            }
        }
        cout<<endl;   
    } 
}
```
##  Half Pyramid after 180 degree rotation
 ```cpp
//      *
//     **
//    ***
//   ****
//  *****
// ******
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number of rows :- ";           //input size of pyramid
    cin >> n;

    for (int i = 1; i <= n; i++)                    //loop no of rows times
    {
        for (int j = 1; j <= n; j++)                // loop for column
        {
            if (j <= n - i)                         //if column j is less than size(n) - no of single row (i)
            {
                cout << " ";
            }
            else                                    //else print *
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
```
## Half Pyramid using numbers(column number)
```cpp
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number of rows :- ";          //input size of pyramid
    cin >> n;
    for (int i = 1; i <= n; i++)                   //loop no of rows times
     {
         for (int j = 1; j <= i; j++)              //loop for column if column j is less than i 
         {
            cout<<j<<" ";                          //print column number j
         }
         cout<<endl;
     }
}
```
## Half Pyramid using numbers(row number)
```cpp
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6
// 7 7 7 7 7 7 7
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number of rows :- ";          //input size of pyramid
    cin >> n;
    for (int i = 1; i <= n; i++)                   //loop no of rows times
     {
         for (int j = 1; j <= i; j++)              //loop for column, if column j is less than i 
         {
            cout<<i<<" ";                          //print row no i
         }
         cout<<endl;
     }
}
```
## Inverted Half Pyramid using numbers
```cpp
// 1 2 3 4 5  
// 1 2 3 4
// 1 2 3
// 1 2
// 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number of rows :- ";        //input size of pyramid
    cin>>n;
    for (int i = n; i >= 1; i--)               //loop reverse from no of rowa to 1
    {
        for (int j = 1; j <= i ;j++)              //loop for column, if column j is less than i 
        {
            cout<<j<<" ";                         //print column no j 
        }               
        cout<<" "<<endl;
    }
} 
```
## Triangle pattern
```cpp
//         *
//        * *
//       * * *
//      * * * *
//     * * * * *
//    * * * * * *
//   * * * * * * *
//  * * * * * * * *
// * * * * * * * * *
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number of rows :- ";           //input size of triangle
    cin >> n;
    for (int i = 1; i <= n; i++)                    //loop no of rows time
    {
        for (int j = 1; j <= n; j++)                //loop for column 
        {
            if (j <= n - i)                     //if column no j is less than no of rows(n) - current row no (i)
            {
                cout << " ";                    //print space 
            }
            else
            {
                cout << "* ";                   //else print *
            }
        }
        cout << endl;
    }
}
```
## Triangle of Numbers
```cpp
/*       1     
        1 2    
       1 2 3   
      1 2 3 4  
     1 2 3 4 5
*/ 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number of rows :- ";           //input size of triangle
    cin >> n;
    for (int i = 1; i <= n; i++)                       //loop no of rows time
    {
        for (int j = 1; j <= n-i; j++)              //loop for column 
        {                                           //if column no(j) less than no of rows(n) - current row no(i) 
           cout<<" ";                               //print space
        }
        for (int j = 1; j<= i; j++)                  //if column no(j) less than current row no(i) 
        {
            cout<<j<<" ";                           //print j (column no)
        } 
        cout << endl;
    }
}
```
## Full Rectangle 
```cpp
// * * * *    
// * * * *    
// * * * *    
// * * * *
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter a number of rows :- ";         //input no of rows
    cin>>row;
    cout<<"enter a number of columns :- ";          //input no of columns
    cin>>col;
    for (int i = 1; i <= row; i++)                  //loop no of rows times
    {
        for (int j = 1; j <= col ;j++)             //loop no of column times
        {
            cout<<"*"<<" ";                         //print *
        }
        cout<<" "<<endl;
    }
}
```
## Half Pyramid 
```cpp
// *   
// * * 
// * * *
// * * * *
// * * * * *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number of rows :- ";         //input size of pyramid 
    cin>>n;
     for (int i = 1; i <= n; i++)              // loop no of rows times 
     {
         for (int j = 1; j <= i; j++)          //loop for column 
         {
            cout<<"*"<<" ";                    //print  *
         }
         cout<<endl;
     }     
}
```
## Hollow Rectangle 
```cpp
// * * * * *  
// *       *  
// *       *
// *       *
// * * * * *
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter a number of rows :- ";         //input no of rows
    cin>>row;
    cout<<"enter a number of columns :- ";         //input no of columns 
    cin>>col;
    for (int i = 1; i <= row; i++)              //loop no of row times
    {
        for (int j = 1; j <= col ;j++)          //loop no column times
        {
           if (i ==1 || i == row || j == 1 || j == col)         
           {
               cout<<"*"<<" ";              //print * in 1st and last column and 1st and last row
           }
           else{
               cout<<" "<<" ";              //else print space
           }
            
        }
        cout<<" "<<endl;
    }
    return 0;
}
  ```
## Hollow butterfly
```cpp
/*
*        * 
**      ** 
* *    * * 
*  *  *  * 
*   **   * 
*   **   * 
*  *  *  * 
* *    * * 
**      ** 
*        * 
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of rows:- ";              //no of rows in upper half and lower half
    cin>>n;

    for (int i = 1; i <= n; i++)        //upper half of butterfly
    {
        for (int j = 1; j <= i; j++)       //loop no of rows times Upper half's Left part 
        {
            if (j==1 || j==i)               // print * if current column(j) is equal to 1 or equal to current no. of row(i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for (int j = 1; j <= 2*n-2*i; j++)         //print space between left and right part of upper half
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)           //loop no of rows times Upper half's right part 
        {
            if (j==1 || j==i)               // print * if current column(j) is equal to 1 or equal to current no. of row(i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for (int i = n; i >= 1; i--)                    //lower half of butterfly Reverse the upper half
    {
        for (int j = 1; j <= i; j++)
        {
            if (j==1 || j==i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for (int j = 1; j <= 2*n-2*i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j==1 || j==i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }  
}
```
## Hollow diamond 
```cpp
/*
    *
   * *
 *     *
*       *
*       *
 *     *
  *   *
   * *
    *
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows :- ";       //input no of rows for upper hlaf and lower half of diamond
    cin>>n;

    for (int i = 1; i <= n; i++)            //loop no of rows time for upper half
    {
        for (int j = 1; j <= n-i ; j++)             //loop for columns to print space in start
        {
            cout<<" ";                              //print space
        }
        for (int j = 1; j <= 2*i-1; j++)            
        {
            if (j == 1 || j == 2*i-1)           // if column no (j) = 1 and 2*i-1 times
            {
                cout<<"*";                      //print *
            }
            else{                               //else print space
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    for (int i = n; i >= 1; i--)                //Reverse the loop for lower half
    {
        for (int j = 1; j <= n-i ; j++)         //loop for columns to print space in start
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            if (j == 1 || j == 2*i-1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }   
}
```
## Triangle Pyramid of Number
```cpp
 /*
    1 
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number of rows :- ";           //input no of rows 
    cin >> n;
    for (int i = 1; i <= n; i++)                        //loop no of rows times
    {
        for (int j = 1; j <= n; j++)            //loop for column 
        {
            if (j <= n - i)                 //if current column(j) is less than no of rows(n) - current row no(i)
            {          
                cout << " ";                //print space
            }
            else
            {
                cout <<i<<" " ;             //else print current row no.(i)
            }
        }
        cout << endl;
    }
}
```
## Rectangle Hollow Diamond
```cpp
/*
*********
**** ****
***   ***
**     **
*       *
*       *
**     **
***   ***
**** ****
*********
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows :- ";       //input size of rectangle
    cin>>n;
    
    for (int i = 1; i <= n; i++)        //loop no of rows times  for upper half
    {
        for (int j = 1; j <= n-i ; j++)         //loop for column left part of rectangle 
        {
            cout<<"*";                          //print *
        }
        for (int j = 1; j <= 2*i-1; j++)        //loop for printing diamond 
        {
            if (j == 1 || j == 2*i-1)              //if current no (j) is 1 or 2*i-1 times 
            {
                cout<<"*";                          //print *
            }
            else{
                cout<<" ";                      //else space
            } 
        }
        for (int j = 1; j <= n-i ; j++)         //loop for column right part of rectangle 
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = n; i >= 1; i--)                //Reverse loop for lower half
    {
        for (int j = 1; j <= n-i ; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            if (j == 1 || j == 2*i-1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        for (int j = 1; j <= n-i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }  
}
```
## Star Pattern
```cpp
/*
      * 
    * * *
  * * * * *
* * * * * * *
* * * * * * *
  * * * * *
    * * *
      *
*/

#include<iostream>

using namespace std;

int main(){

    int n ;
    cout<<"Enter no of rows:- ";            //enter no of rows for upper and lower part of star
    cin>>n;

    for (int i = 1; i <= n; i++)            //loop no of rows time for upper part
    {
        for (int j = 1; j <= n-i; j++)          //loop for printing space in left part 
        {
             cout<<"  ";
        }
        for ( int j = 1; j<= 2*i-1; j++)        //loop till current column no (j) less than 2* i -1
        {
            cout<<"*"<<" ";                     //print *
        }
    cout<<endl;
    }
    for (int i = n; i >= 1; i--)                //Reverse loop for lower part
    {
        for (int j = 1; j <= n-i; j++)
        {
             cout<<"  ";
        }
        for ( int j = 1; j<= 2*i-1; j++)
        {
            cout<<"*"<<" ";
        }
    cout<<endl;
    }   
}
```
## Zigzag
```cpp
/*
    *       *       *       *       *       *       *       *       *       *       *   
  *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   * 
*       *       *       *       *       *       *       *       *       *       *       *
*/
#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter no of stars:- ";       //input no of star to print
    cin>>n;

    for (int i = 1; i <=3 ; i++)        //loop for rows (3 times)
    {
        for (int j = 1; j <= n; j++)        //loop for column (we are to print one star in one column)
        {
            if ((i+j)%4 ==0 || i == 2 && (j%4) == 0)    //if current row no(i) + current column no(j)  = 0 or i equal to 2 and j%4 equal to 0 
            {
              cout<<"*";                        //print *
            }
            else
            {
                cout<<" ";                         //else space
            }
        }
        cout<<endl;   
    }
}
```

