#include <iostream>  //basic header files and begin of code
using namespace std;
/* 
    The finding of gcd using reccursive repeat of division algorithim
    is called Euclidean Algorithm.

    Division algorithim:
                    a = qb + r , where 0[less than or equal]<=r < b

    Finding the gcd of 81 and 57 by the Euclidean Algorithm:
                        81 = 1(57) + 24
                        57 = 2(24) + 9
                        24 = 2(9) + 6
                        9 = 1(6) + 3
                        6 = 2(3) + 0.
    
    EQUATION:
        for every gcd(a,b)=r ;there exist integers p and s so that :
                    p(a)+s(b)=r

    By reversing this algorithim we can find p and s.

    The reversing can be optimised by using auxillary computations as we
    go forward in Eucledean Algorithm.This is called Extended Euclidean algorithm.

    For more details about the mathematics: 
    http://www-math.ucdenver.edu/~wcherowi/courses/m5410/exeucalg.html#:~:text=The%20gcd%20of%20two%20integers,until%20the%20remainder%20is%200.&text=It%20is%20well%20known%20that,s(b)%20%3D%20r.

*/
int gcdExtended(int a, int b, int *x, int *y)
{
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
 
    int x1, y1;         //store backtracking datas
    int gcd = gcdExtended(b%a, a, &x1, &y1);   //call by reference to update backtrack datas recursively
    //updation or backup for back tracking  
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}
 
// Driver Code
int main()
{
    int x, y, a , b ;
    cin>>a>>b;          //input by user
    int g = gcdExtended(a, b, &x, &y); //function recurtion initialization
    cout << "GCD(" << a << ", " << b<< ") = " << g << endl; //output 
    return 0;
}
//code inspiration:https://www.geeksforgeeks.org/euclidean-algorithms-basic-and-extended/