#include<bits/stdc++.h>
using namespace std;
void sieve(int n){
    //boolean type vector to keep track of prime numbers, true for prime, false for composite
    vector<bool>prime(n+1,true);       
    prime[0]=false;                    
    prime[1]=false;                   
    for(int i=2; i<=n; i++){    
        //if i'th number is prime then mark all its multiples as false(composite)
        if(prime[i] && (long long)i*i<=n){         
            for(int j=i*i; j<=n; j+=i){
                prime[j]=false;
            }
        }
    }
    //print the primes
    for(int i=0;i<n+1;i++){                     
        if(prime[i]){
            cout<<i<<" ";
        }
    }                                      
}                                          
int main(){
    //number of test cases
    int t;                                
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //we have to find prime numbers till "n"
        sieve(n);                         
        cout<<"\n";
    }
    return 0;
}
