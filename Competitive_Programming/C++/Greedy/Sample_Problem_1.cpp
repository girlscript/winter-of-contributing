/*
Problem Statement : 
    Recently, Petya learned about a new game "Slay the Dragon". As the name suggests, the player will have to fight with dragons. 
    To defeat a dragon, you have to kill it and defend your castle.
    To do this, the player has a squad of 𝑛 heroes, the strength of the 𝑖-th hero is equal to 𝑎𝑖.
    According to the rules of the game, exactly one hero should go kill the dragon, all the others will defend the castle.
    If the dragon's defense is equal to 𝑥, then you have to send a hero with a strength of at least 𝑥 to kill it. 
    If the dragon's attack power is 𝑦, then the total strength of the heroes defending the castle should be at least 𝑦.
    The player can increase the strength of any hero by 1 for one gold coin. This operation can be done any number of times.
    There are 𝑚 dragons in the game, the 𝑖-th of them has defense equal to 𝑥𝑖 and attack power equal to 𝑦𝑖. 
    Petya was wondering what is the minimum number of coins he needs to spend to defeat the 𝑖-th dragon.

    Note that the task is solved independently for each dragon (improvements are not saved).

    Input :
    The first line contains a single integer n (2 ≤ n ≤ 2 * 10^5) — number of heroes.
    The second line contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (1 ≤ 𝑎𝑖 ≤ 10^12), where 𝑎𝑖 is the strength of the 𝑖-th hero.
    The third line contains a single integer 𝑚 (1 ≤ 𝑚 ≤ 2 * 10^5) — the number of dragons.
    The next 𝑚 lines contain two integers each, 𝑥𝑖 and 𝑦𝑖 (1 ≤ 𝑥𝑖 ≤ 10^12; 1 ≤ 𝑦𝑖 ≤ 10^18) — defense and attack power of the 𝑖-th dragon.

    Output:
    Print 𝑚 lines, 𝑖-th of which contains a single integer — the minimum number of coins that should be spent to defeat the 𝑖-th dragon.

    Example :
    Input :
    4
    3 6 2 3
    5
    3 12
    7 9
    4 14
    1 10
    8 7

    Output : 
    1
    2
    4
    0
    2

    Link to the Problem  : https://codeforces.com/contest/1574/problem/C
*/

// CODE : 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int lli;
int main(){
    lli n;
    cin >> n;
    vector<lli> vec;
    lli temp,sum=0;
    for(int i=0;i<n;i++){
        cin >> temp;
        vec.push_back(temp);
        sum+=temp;
    }
    lli m;
    cin >> m;
    lli x,y;
    sort(vec.begin(),vec.end());
    lli ans=0 , ans1=0;
    for(int i=0; i<m; i++){
       cin >> x >> y;
       ans=0,ans1=0;
       lli upp = upper_bound(vec.begin(), vec.end(), x) - vec.begin();
       if(upp==n)
       upp--;
       if(vec[upp]<x)
       ans += x-vec[upp];
 
       if(sum-vec[upp]<y)
       ans += y-sum+vec[upp];
 
       if(upp>0 && vec[upp-1]<x)
       ans1 += x - vec[upp-1];
 
       if(upp>0 && sum-vec[upp-1]<y)
       ans1 += y-sum+vec[upp-1];
 
 
       if(upp>0)
       cout<<min(ans1,ans)<<endl;
       else
       cout<<ans<<endl;
    }
}