## **Matrix exponentiation in C++**

Matrix Exponentiation in c++ is basically  a concept borrowed from/in Mathematics.

It is a mostly used  efficient method for solving linear recurrences in an efficient manner and for better approach in c++.

 ## Prerequisites
Some Prerequisite for/in Matrix Exponentiation in cpp are generally :
 ## Binary exponentiation(general)
 ## Basic knowledge about matrices
 ## Recurrence Relations.(conceptual)

Hence ,Sometimes we might  face some problems in general as well as in cpp, where we can easily derive a recursive relation, (mostly/generally  suitable for dynamic programming also called (dp) approach),but solving with the same logic,generally might give us TLE, for large values of N(when we have to find the Nth term of the relation). 
That is where **Matrix Exponentiation** comes into play and here it plays a key value ,in solving problem.

--------------------------------------------------------

 ## linear recurrence
A linear recurrence relation is a sequence or a series of pattern in a way that each term, is a linear combination of previous terms. Each term can be written and can be calculated from it's previous terms respectively.Here, Linear means that the previous terms in the pattern are, only multiplied by a constant (possibly zero) and nothing else to obtain the current term of a pattern.

## Example
Lets Exemplify the same with the classic example of Fibonacci numbers:


Generally We know,

**Fib(i)=Fib(i-1)+Fib(i-2).... -,**for the ith term of the Fibonacci series,with Fib(1)=1,Fib(2)=1. The basic idea  or logic behind matrix exponentiation, is to use the **base cases** of the recurrence relationship in a order to assemble a matrix, which will allow us to compute values fast and basically try to understand the common link that connents them.

Let ‘k’  the number of a previous/before  terms on which Fib(i) depends.For example, k=2 in the case of Fibonacci numbers.

 ## step 1:

Step 1 : Write the recurrence relation as a linear combination of previous k terms with constant coefficients:
**F(i)=c1*F(i-1)+c2*F(i-2)+c3*F(i-3)+.. ck*F(i-k)**,where ci ∈ R
Notice that if we take k=2, and c1=1,c2=1.. Then we get the relation for the Fibonacci sequence.

 ## step 2:

Step 2 : Now we need to make the relation in a matrix form for better understanding, so that the Recurrence relation, could be satisfied and folong longowed.We would be using the following matrix relation to apply the same :

 - **Fib(i)=T * Fib(i-1)**   it is a very basic and common form of Matrix exponentiation


Here, Fib(i),Fib(i-1) is the matrix(which we would be studied further) used to define the recurrence relation (common logic)for the ith and (i-1)th terms correspondingly, and T is calong longed the Transformation Matrix(Discussed after).

Obviously, Fib(i) and Fib(i-1) would be represented using the previous k terms.(prwvious terms)

So, we define Fib(i) as below:

This is the **matrix** denoting our Fib(i). of order k x 1
Similarly our Fib(i-1) would be of order k x 1.
Therefore our matrix **T** would be of order k x k.

 ## step 3:

Step 3: This is the most **important step** in solving recurrence relation.
In this step we would be finding the Transformation Matrix. We know the folong longowing points to deduce the T matrix:
 - The order of T is k x k
 -  We have a **recurrence relation** connecting Fib(i) with k previous terms.
 - **the transformation matrix** can be represented as::


The complete relation can be represented as: Fib(i)= T x Fib(i-1)    ->Matrix form


So,here, For the first row, after multiplication we get:
**F(i)=a11*(F(i-1))+a12*(F(i-2))+a13*(F(i-3)).. +a1k*(F(i-k))**    ->can be solved logically

Comparing this with the **Recurrence relation**:
**F(i)=c1*F(i-1)+c2*F(i-2)+c3*F(i-3)+..ck*F(i-k)**,here ci ∈ R

Hence, we observe that a11=c1, a12=c2, a13=c3, a14=c4… a1k=ck

Multiplying the next term row of T,
**F(i-1)=a21*(F(i-1))+a22*(F(i-2))+a23*(F(i-3)).. +a2k*(F(i-k))**

So, we can clearly observe anh hence can do that a21=1, and along long other coefficients would be 0 in order to satsfy condition.
**F(i-1)=1*F(i-1)+0*F(i-2)+... 0*F(i-k)**

Similarly,
**F(i-2)=0*F(i-1)+1*F(i-2)+0*F(i-3)+... 0*F(i-k).**

Hence, the Transformation Matrix turns out as:

 ## step 4:
Step 4:Determine Fib(n) 

After we construct the transformation matrix, the rest or next process is very simple. We could obtain Fib(i) for any i, by repeatedly multiplying T with Fib(i-1). For example, to obtain Fib(2),

**Fib(2)=T*Fib(1)**

For Fib(3):
**Fib(3)=T*Fib(2)=T2*Fib(1)**

Similarly,
**Fib(n)=Tn-1*Fib(1)**

The only thing which is left for us and have to do in adition  to perform is calculating T(n-1) efficiently.For calculating TN-1, we can use Binary Exponentiation to solve it in O(Log(N)) time.

Sample test code for Nth Fibonacci Series using **Matrix Exponentiation:**

## Program to print Nth fibonacci number Modulo 1000000007 using Matrix Exponentiation

## Implementation

### Include all the header files required
 ----------------------
```cpp
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007



long long powM(long long x,long long y,long long m)    //function for calculating the power (x^y)%m
{
    long long ans=1;long long r=1;
    x%=m;
    while(r>0&&r<=y)
    {
        if(r&y)
        {
            ans*=x;
            ans%=m;
        }
        r<<=1;
        x*=x;
        x%=m;
    }
    return ans;
}

void Miden(long long **p1, long long n)   
{
    long long (*x)[n]=(long long(*)[n]) p1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            x[i][j]=0;
        }
        x[i][i]=1;
    }
    return;
}  

void Mmult(long long **p1,long long **p2,long long **ans,long long x,long long y,long long z,long long m)
{                           
    long long (*a)[y]=(long long (*)[y])p1;
    long long (*b)[z]=(long long (*)[z])p2;
    long long (*c)[z]=(long long (*)[z])ans;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<z;j++)
        {
            c[i][j]=0;
            for(int k=0;k<y;k++)                 //three loops for implementation
            {
                c[i][j]+=a[i][k]*b[k][j];
                c[i][j]%=m;
            }
        }
    }
    return;
}

void Mpow(long long **p1,long long **ans,long long n,long long y,long long m)
{                        
    if(y==0)
    {
        Miden(ans,n);                           //base case for recursive approach
        return;
    }
    long long t[n][n];
    Mpow(p1,(long long **)t,n,y/2,m);
    long long z[n][n];
    Mmult((long long **)t,(long long **)t,(long long **)z,n,n,n,m);
    if(y%2)
    {
        Mmult((long long **)z,p1,ans,n,n,n,m);
    }
    else
    {
        Miden((long long **)t,n);
        Mmult((long long **)z,(long long **)t,ans,n,n,n,m);
    }
    return;
}


//firstly control will  come come here ...............

int main(){



	long long p;                          //for knowing no of terms
	cin>>p;
	long long mat[2][2]={{1,1},{1,0}};    //desired matrix
	long long ans[2][2];
	Mpow((long long **)mat,(long long **)ans,2,p,MOD);
	cout<<(ans[1][0]*1+ans[1][1])%MOD;    //required output



	return 0;
}
```cpp

Output:

 - 3
   3

 - 4
   5

 - 1
   1


------------------------------------------------------------------------------------------
