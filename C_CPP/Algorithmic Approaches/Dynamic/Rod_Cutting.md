# Rod Cutting Problem

A simple problem that we can solve using the concept of Dynamic Programming is the Rod Cutting Problem.

**Problem Statement**: Given a rod of length n inches and a table of prices p <sub>i</sub>

## Code in C++:

```cpp

    //Rod-Cutting Problem Using Dynamic Programming

    #include <iostream>
    using namespace std;

    int main(){
        int n;
        cin>>n;
        int price[n+1];
        price[0]=0;

        for(int i=1;i<=n;i++){
            cin>>price[i];
        }

        int res[n+1][n+1];
        for(int i=0;i<=n;i++){
            res[i][0]=0;
            res[0][i]=0;
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j>=i){
                    res[i][j]=max(res[i-1][j],price[i]+res[i][j-i]);
                }
                else{
                    res[i][j]=res[i-1][j];
                }
            }
        }

        cout<<"Maximum Profit: "<<res[n][n];
        return 0;
    }

```
