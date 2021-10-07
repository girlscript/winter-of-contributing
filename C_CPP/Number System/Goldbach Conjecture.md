# Goldbach Conjecture

Goldbach Conjecture states that every even counting number greater than 2 can be expressed as the sum of two odd prime numbers.

Example:

* 6=3+3
* 8=5+3
* 12=7+5
* 42=23+19

In this article, it will be shown how we can write any even whole number greater than 2 as the sum of two odd prime numbers.

    #include <bits/stdc++.h> 
    using namespace std;

    //The function isPrime() checks if a number is a prime number or not

    bool isPrime(int n) {
      int c = 0, i;
      for (i = 1; i <= n; i++) {
        if (n % i == 0) {
          c++;
        }
      }
        if (c == 2)
        return true;
        else 
        return false;
    }

    int main()
    {
        vector<int> vec;
        int i,j,num,count=0;
        cin>>num; // Input the number which has to be displayed as the sum of two primes
        for(i=1;i<=num;i++)         // This loop stores all the prime numbers lesser than num into the vector
        {
          if (isPrime(i)) {
            vec.push_back(i);
          }
        }

        for(i=0;i<vec.size();i++)
        {
            for(j=i+1;j<vec.size();j++)
            {
                if(vec[i]+vec[j]==num)
                {
                    count++;
                    cout<<num<<"="<<vec[i]<<"+"<<vec[j]<<"\n";
                }
            }
        }

        if(count==0)
        cout<<"Invalid Input!";
        else {
        cout<<"No. of Combinations possible= "<<count;
        }

        return 0;
    }
    
    
    
Since 4 is the only even number greater than two that requires the even prime 2 in order to be written as the sum of two primes, another form of the statement of Goldbach’s conjecture is that all even integers greater than 4 are Goldbach numbers.

