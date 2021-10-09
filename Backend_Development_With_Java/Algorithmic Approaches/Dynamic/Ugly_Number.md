# **Ugly Numbers Using Dynamic Programming**
## Dynamic Programming(DP)
Dynamic Programming is basicaly an optimization over recursion. In this we store the results of subproblems so that we don't have to recompute it each and every time we encounter it.
Whenever there is some recursive function which has repeated calling for same parameters/inputs, DP can be used to reduce the time complexity and optimize the solution.

## Ugly Numbers
Ugly numbers are the numbers whose prime factors are 2,3 or 5 only. So, the first 8 ugly numbers will be: 1, 2, 3, 4, 5, 6, 8, 9. Conventionally, 1 is included.
Here, the task is to find the nth ugly number where n is given by user.

In the solution for this problem we will use an array named as "ugly" which will store n ugly numbers and at last we will return element at (n-1)th position which will be the required answer or we can say the nth ugly number.

## Code of Ugly Numbers in C++.
```
/*
Ugly numbers are the numbers whose prime factors are 2,3 or 5 only.
First 8 ugly numbers will be: 1, 2, 3, 4, 5, 6, 8, 9.
Given a number n, we have to find nth ugly number.
In this we will use dynamic approach to get the result.
*/

#include <bits/stdc++.h>
using namespace std;

//Function to return nth ugly number
int ugly(int n)
{
    //Declaring vector which will store n ugly numbers
    vector<int> ugly(n);

    //First ugly number will be 1
    ugly[0]=1;

    //Initializing indices which will keep track of which element to consider next
    int i2=0,i3=0,i5=0;

    //1 is included in ugly numbers
    int count=1;

    while(count<n)
    {
        //Calculating possibilities for next ugly number
        int next2 = ugly[i2] * 2;
        int next3 = ugly[i3] * 3;
        int next5 = ugly[i5] * 5;

        //Taking minimum of those possibilities
        int x = min(next2,next3);
        int next = min(x,next5);

        //Incrementing indices accordingly
        if(next==next2)
            i2++;
        if(next==next3)
            i3++;
        if(next==next5)
            i5++;

        //Storing the ugly number which we got, in the vector
        ugly[count++] = next;    
    }
    
    //Returning the nth ugly number from vector
    return ugly[n-1];
}

int main()
{
    //Getting value of n from user
    cout << "Enter value of n: ";
    int n;
    cin >> n;

    //Calling the ugly function and printing nth ugly number
    cout << "Ugly number is: " << ugly(n);
    
    return 0;
}
/*
Time Complexity: O(n)
Space Complexity: O(n)

Output:
Enter value of n: 10
Ugly number is: 12

Enter value of n: 150
Ugly number is: 5832

Enter value of n: 15
Ugly number is: 24
*/
```
