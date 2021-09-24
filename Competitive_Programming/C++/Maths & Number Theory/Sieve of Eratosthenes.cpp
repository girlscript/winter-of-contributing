#include<bits/stdc++.h>
using namespace std;
void sieve(int n){
    vector<bool>prime(n+1,true);       //boolean type vector to keep track of prime numbers, true for prime, false for composite
    prime[0]=false;                    //0 is neither prime nor composite
    prime[1]=false;                    //1 is composite
    for(int i=2; i<=n; i++){                       //iterating from 2 to n
        if(prime[i] && (long long)i*i<=n){         //if i'th number is prime then mark all its multiples as false(composite)
            for(int j=i*i; j<=n; j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=0;i<n+1;i++){                     //print the primes
        if(prime[i]){
            cout<<i<<" ";
        }
    }                                      //Time Complexity:O(n*log(log(n)))
}                                          //Space Complexity:O(n)
int main(){
    int t;                                 //number of test cases
    cin>>t;
    while(t--){
        int n;
        cin>>n;                           //we have to find prime numbers till "n"
        sieve(n);                         //function call
        cout<<"\n";
    }
    return 0;
}