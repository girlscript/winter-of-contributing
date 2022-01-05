#include<bits/stdc++.h>  // This is a single header file which includes all the header files required

using namespace std;  // instead of using std everywhere we define it as namespace 

#define loop(i,a,b) for(int i=a;i<=b;i++) // The for loop now can be written as loop(i,a,b)

#define ll long long  // instead of typing long long each time we can just type ll

#define ull unsigned long long  // instead of typing unsigned long long each time we can just type ull

#define pii pair<int,int>  // We can just write pii to define a pair of integers

#define mp make_pair // While using maps and pair ints we can simply write it as mp instead of make_pair

#define vi vector<int>  // we use vectors many times so we use this macro and define it as vi

#define vc vector<char>  // this is for char vector

#define vs vector<string>  // this is for vector of strings

#define vpii vector<pii>  // this is for vector of pair ints which is mainly used in greedy problems

#define pb push_back  // for vectors it becomes handy writing just vector.pb()

#define pop pop_back  // similar to push_back

#define ff first  // while using pairs it is easy to use ff instead of writing first every time

#define ss second  // similar to first in pair

#define print(a) loop(i,0,a.size()-1) cout<<a[i]<<((i<a.size()-1) ? " " : "\n"); // it is used to print a vector or an array
// without writing a loop every time and it also prints a new line after the last element



void solve(){   // here in this function we can write the solution to a given problem in CP 
    
}


int main(){
    ios_base::sync_with_stdio(false);  // It is used to reduce buffers and improve the running time of the program
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE  // itis used to take input from file and write output to a file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t=1;  // take the test cases and run the solve function that many times
    cin>>t;
    while(t--) solve();
    return 0;
} 






