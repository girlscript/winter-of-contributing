# Sieve Of Eratosthenes
Sieve of Eratosthenes is an algorithm to find prime numbers in the range 1 to n, in time complexity of `O(n*log(log(n)))` and space complexity of `O(n)`. The basic idea behind Sieve is that a number is said to be prime if it is not divisible by any of the smaller prime numbers.

## Pseudo Code:
>     sieve(int ){
>       let prime be a boolean vector, initially all set to true
>       mark 0 as false
>       mark 1 as false
>       for(i, starting from 2 till n){
>          if(prime[i] is true and i² is less then n){
>            for(j=i²,i²+i,i²+2i....till n){
>                    prime[j]=false
>              }
>            }
>          }
>        }
        
## Explanatation:
Initially we assume all numbers from 2 to n as prime and mark them true. We start traversing from 2 to n and if any number is prime then we mark all its multiple as false (composite) starting from i*i because all smaller numbers that are multiples of i necessary also have a prime factor which is less than i and are already marked false. Here we've typecasted i² to 'long long' because it can easily overflow the type 'int'.

## Source Code:
~~~cpp
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
~~~
![credit:](https://javainterviewpoint.azureedge.net/wp-content/uploads/2020/08/Python-Sieve-of-Eratosthenes.png)

### Input
>1                               
>20

### output
>2 3 5 7 11 13 17 19

**Time Complexity:O(n*log(log(n)))** \
**Space Complexity:O(n)**

# Sieve of Eratosthenes in Linear Time Complexity
Classic Sieve of Eratosthens normally takes `O(n*log(log(n)))` time to do the required task. But the above code for Sieve of Eratosthenes can be modified for a better linear runtime of `O(n)`. A problem with this algorithm is though the runtime decreases, memory consumtion increases. Thus this algorithm works best for numbers of order `10^7 or less`.

## Source Code
~~~cpp
void linear_sieve(int n){
    //is_prime is a boolean type vector
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i<=n;i++){
        if(is_prime[i]){
            //prime is vector to store all prime numbers separately
            prime.push_back(i);
            //lp array stores smallest prime factor
            //and a prime number is its own smallest prime factor
            lp[i]=i;
         }
         for(int j=0;j<prime.size() && i*prime[j]<=n && prime[j]<=lp[i];j++){
            lp[i*prime[j]]=prime[j];
            //mark all the multiples of 'i' as composites
            is_prime[i*prime[j]]=false;
         }
     }
 } 
 ~~~
 ## Explanatation
 This algorithm is relatively simple and allows us to factorize numbers up to n very fast since we know the smallest prime divisor so we can factorize any number 'i' in ~O(n)~.
 Now let us suppose we are processing a number 'i' and its smallest prime divisor is 'P', then we mark every number of the form i*(P1) where P1<=P as false that is composite and set their smallest prime divisor to P1. This way we'll be crossing out each number exactly once and the algorithm will work in linear time complexity.

##### image credit:javatutorialpoint
