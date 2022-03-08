/*
Problem Statement : 
    For a base number X, the product of multiplying it Y times is called X to the Y-th power and represented as pow(X,Y).
    For example, we have pow(2,3)=2×2×2=8.
    Given three integers A, B, and C, compare pow(A,C) and pow(B,C) to determine which is greater.

    Input:
    −10^9 ≤ A,B ≤ 10^9
    1 ≤ C ≤ 10^9
    All values in input are integers.

    Output:
    If pow(A,C)<pow(B,C), print <; if pow(A,C)>pow(B,C), print >; if pow(A,C)=pow(B,C), print =.

    Example :
    Input :
    3 2 4

    Output : 
    >

    Example 2:
    Input:
    -7 7 2

    Output : 
    =


    Link to the Problem  : https://atcoder.jp/contests/abc205/tasks/abc205_c
*/

// CODE : 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int lli;
int main(){
    lli a,b,c;
    cin >> a >> b >> c;
 
    if(c%2==0){
        if(abs(a) > abs(b)) cout << ">";
        else if(abs(a) < abs(b)) cout << "<";
        else cout << "=";
    }
    if(c%2==1){
        if(a>b) cout << ">";
        else if (a < b) cout << "<";
        else cout << "=";
    }
}