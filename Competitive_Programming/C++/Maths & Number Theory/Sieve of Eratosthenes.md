# Sieve Of Eratosthenes
Sieve of Eratosthenes is a algorithm to find prime numbers in the range 1 to n, in time complexity of O(n*log(log(n))) and space complexity of O(n). The basic idea behind Sieve is that a number is said to be prime if it is not divided by any of the smaller prime numbers.
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
## Explanatation
Initially we assume all numbers from 2 to n as prime and mark them true. We start traversing from 2 to n and if any number is prime then we mark all its multiple as false (composite) starting from i*i because all smaller numbers that are multiples of i necessary also have a prime factor which is less than i and are already marked false. Here we've typecasted i² to 'long long' because it can easily overflow the type 'int'.

![credit:](https://javainterviewpoint.azureedge.net/wp-content/uploads/2020/08/Python-Sieve-of-Eratosthenes.png)image credit:JavaInterviewPoint.

**Time Complexity:O(n*log(log(n)))** \
**Space Complexity:O(n)**

### Input
>1                               
>20

### output
>2 3 5 7 11 13 17 19

