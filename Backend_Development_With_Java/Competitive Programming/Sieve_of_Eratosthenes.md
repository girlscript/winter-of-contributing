# Sieve of Eratosthenes

## History
<img align="right" src="https://th.bing.com/th/id/OIP.4kqnrxjGzdYHhoU9lQz3qQHaHU?pid=ImgDet&rs=1" width=20% height=20%>

- This algorithm was published in the early 2nd cent. CE Nicomachus of Garesa's book [Introduction to Arithmetic](https://archive.org/details/NicomachusIntroToArithmetic) by a Greek mathematician Eratosthenes of Cyrene. 

- **Eratosthenes of Cyrene** was not just a mathematician. He is known as the 'Founder of Geography' and was very much into reading, writing poems etc.   

- **Sieve of Eratosthenes** is an ancient but infallible method for identifying prime numbers upto a given limit. 

## Flow chart
![Flowchart_Sieve](https://user-images.githubusercontent.com/51737416/135764107-9adc6b83-9c3c-4401-9bb7-0296e844c3d4.png)

## Implementation

### Include all the header files required
```cpp
#include<iostream> 
using namespace std; 
```
### Define the function that computes the list of Prime numbers in that given range
```cpp
void Sieve(bool *prime, int N)
{
  int i,j;
  \\Mark all ODD numbers as true, i.e, 'prime'
  for(i=3;i<=N;i+= 2) 
    prime[i] = true; 
  \\Starting from i*i, mark all multiples of i*i as false, i.e, 'non-prime'
  for(i=3;i<=N;i+=2)
    for(j=i*i;j<=N;j=j+i) 
      prime[j] = false; 
  \\Mark 2 as true since it is a prime number
  prime[2] = true; 
  \\1 is neither prime nor composite. Thus mark it as false.
  prime[0] = prime[1] = false; 
}
```
### Define the main() function
```cpp
int main()
{
  \\Input the maximum range upto which prime numbers should be found. 
  int N;
  cout<<"Enter the upper limit 'N': ";
  cin>>N; 
  int i;
  \\To start, initialize all array elements as false
  bool prime[N] = {false}; 
  \\Function call
  Sieve(prime,N); 
  \\Print the list of prime numbers
  cout << "\nPrime numbers up to " << N << " are:" << endl; 
  for(i=0;i<=N;i++)
    if(prime[i] == true) 
      cout<<i<<" "; 
  return 0;
}
```
## Output
```
Enter the upper limit 'N': 100
Prime numbers up to 100 are:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
```
## Time complexity
- The above implementation takes a time complexity of: **O(n*log(log(n)))**

## Limitations
- Practically not possible to use the algorithm for higher values of 'N'.
