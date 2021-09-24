/* Problem Statement:
    Given an array of n integers, your task is to count the number of subarrays having sum x.

 Input :
    The first input line has two integers n and x: the size of the array and the target sum x.
    The next line has n integers a1,a2,…,an: the contents of the array.

 Output :
    Print one integer: the required number of subarrays.

 Constraints : 
    1 ≤ n ≤ 2 * 10^5
    -10^9 ≤ x,ai ≤ 10^9

 Example :
    Input :
    5 7
    2 -1 3 5 -2

    Output : 
    2
*/

//CODE : 
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
typedef long long int lli;
int main(){
    lli n, k;
    cin >> n >> k;
    vector<lli> arr;
    lli temp;

    for(int i=0; i<n; i++){
        cin >> temp;
        arr.push_back(temp);
    }

    map<lli,lli> mp;

    mp[0] = 1;
    lli ans=0,currsum=0;
    for(int i=0; i<n; i++){
        currsum += arr[i];
        if(mp[currsum-k]){
            ans+=mp[currsum-k];
        }
        mp[currsum]++;
    }
    cout << ans;
}
