# Euclid Algorithm

## GCD 
Greatest common divisor (GCD) of two nonzero integers a and b is the greatest positive integer d such that d is a divisor of both a and b.

### Explaination:
1. Initially gcd is equal to 1, as in all nonzero numbers the common divisor is 1.
2. Check among the both the numbers (a and b) which is minimum, as the gcd will be less than or equal to the minimum number.
3. Iterate in reverse order, and the number that divides both the numbers completely will be the gcd.   
```C++
#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int gcd=1;
  int a,b;
  int n;
  cin>>a;        // number 1
  cin>>b;       // number 2
  if(a>b)       // finding minimum among number 1 and number 2
    n=b; 
  else 
    n=a; 
  for(int i=n;i>0;i--)     
  { 
    if(a%i==0 && b%i==0) 
      {
          gcd=i;
          break;
        } 
   }
   cout<<" The GCD of "<<a<<" and "<<b<<" : "<<gcd;
   return 0;
}
```

>Time Complexity:  O(n)
>
>where n is the minimum of two numbers.  

<br>
The disadvantage in this way of finding is that in competitive programming, this can result in TLE (Time Limit Exceeded). and GCD is a common sub question, which can be used in a problem and if this will add O(n) times then the code efficiency decrease.
<br><br>

## Euclid Algorithm - GCD IN O(log(min(a, b))) Time Complexity
<br>
1. In this Algorithm, we donot need to check id a>b or b>a , both will produce the correct result .
2. The iteration will be done till a (1st number) doesnot become 0, base case.
3. At every iteration a is stores by b mod a and b stores a.


``` C++
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
  int gcd=1;
  int a,b;
  int n;
  cin>>a;   //number 1
  cin>>b;   //number 2
  cout<<" The GCD of "<<a<<" and "<<b<<" : "<<gcd(a,b);
  return 0;
}
```
> Time Complexity :
>
> O(log(min(a, b)))

The complexity is O(log (min(a,b))) , as at every iteration (b % a) is done till a becomes 0 , this will take logarithmic time and it will depend on the minimum of the two element.

This method helps us to solve gcd problem efficiently.
