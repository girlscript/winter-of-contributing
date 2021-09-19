#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define T int tt; cin >> tt; while(tt--)
#define infLoop while(true)
#define fora(i, a, n) for(ll i = a; i <= n; i++)
const int M = 1e9+7;

void fastio(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
int main() {
    fastio();
    int tc=0;
    T{
      int n;cin>>n;
      int res[n];
      string s;cin>>s;
      ll previ=0;
      fora(i, 0, n-1){
        if (s[i]=='0')
            continue;
        fora(j, previ,i)
            res[j] = min(abs(previ-j),abs(i-j));
        previ=i;
      }
      //fix end 0 blk
      if (previ != n-1)
        fora(i, previ+1, n-1){
            res[i] = abs(i-previ);
        }
      //fix start 0 blk
        int z=0;
        for( ; s[z]!='1'; z++);
        fora(i, 0, z)
            res[i] = z-i;

      ll count = 0;
      fora(i, 0, n-1)
        count += res[i];
        tc++;
          cout<<"Case #"<<tc<<": "<<count<<endl;
    }
    
	return 0;
}