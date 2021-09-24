/*
Problem Statement : 
    We have a string S of length 2N.
    You are given Q queries on this string.
    In the i-th query, given three integers Ti, Ai, and Bi, do the following:
    if Ti=1: swap the Ai-th and Bi-th characters of S;
    if Ti=2: swap the first N characters and last N characters of S (the values Ai and Bi are not used).
    For example, if S is FLIP, this query makes it IPFL.
    Print the string S after processing all Q queries in the order they are given.

    Input :
    1 ≤ N ≤ 2 × 10^5
    S is a string of length 2N consisting of uppercase English letters.
    1 ≤ Q ≤ 3 × 10^5
    Ti is 1 or 2.
    If Ti = 1, 1 ≤ Ai < Bi ≤ 2N.
    If Ti = 2, Ai = Bi = 0.

    Output:
    Print the string S after processing the queries.

    Example :
    Input :
    2
    FLIP
    6
    1 1 3
    2 0 0
    1 1 2
    1 2 3
    2 0 0
    1 1 4


    Output : 
    ILPF

    Link to the Problem  : https://atcoder.jp/contests/abc199/tasks/abc199_c
*/

// CODE : 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int lli;
int main(){
    lli n,q;
    cin >> n;
    string s;
    cin >> s;
    cin >> q;
    lli t,a,b,cnt_flips=0;
 
    while(q--){
        cin >> t >> a >> b;
        a--,b--;
 
        if(t==2){
            cnt_flips++;
        }
        else{
            if(cnt_flips%2==1){
                if(a<n) a+=n;
                else if(a>=n){
                    a-=n;
                }
                if(b<n) b+=n;
                else if(b>=n) b-=n;
                swap(s[a],s[b]);
            }
            else{
                swap(s[a],s[b]);
            }
        }
    }
    if(cnt_flips%2==1){
        for(int i=n; i<2*n; i++){
            cout << s[i];
        }
        for(int i=0; i<n; i++){
            cout << s[i];
        }
    }
    else{
        cout << s;
    }
}