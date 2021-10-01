/* 
Binary Number System is a number system which uses only two digits 0 and 1.
Decimal Number System uses 10 digits from 0 to 9 to perform all the operations.
Example : 101101 in binary can be converted to decimal as 
101101 = 1*(2^0) + 0*(2^1) + 1*(2^2) + 1*(2^3) + 0*(2^4) + 1*(2^5)
       = 45
   :: 101101 = 45
*/
 //To convert a number from Binary to Decimal Number System
#include<iostream>
using namespace std;

int BinaryToDecimal(int n)
{ int ans = 0;       // to store the final answer generated from the conversion of Binary to Decimal
  int x = 1;

  while(n > 0)
   { int y = n % 10;
     ans += x * y;
     x *= 2;
     n /= 10;
   }
  return ans;
}

int main()
{ int n;
  cin >> n;
  cout << BinaryToDecimal(n) << endl;
    
 return 0;
}
