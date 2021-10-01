/* 
Example : 101101 in binary can be converted to decimal as 
101101 = 1*(2^0) + 0*(2^1) + 1*(2^2) + 1*(2^3) + 0*(2^4) + 1*(2^5)
       = 45
   :: 101101 = 45
*/

#include<iostream>
using namespace std;

int BinaryToDecimal(int n)
{ int ans = 0;
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