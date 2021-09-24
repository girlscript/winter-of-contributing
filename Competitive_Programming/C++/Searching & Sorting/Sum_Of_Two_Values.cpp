/* Problem Statement:
    You are given an array of n integers, and your task is to find two values (at distinct positions) whose sum is x.

 Input :
    The first input line has two integers n and x: the array size and the target sum.
    The second line has n integers a1,a2,…,an: the array values.


 Output :
    Print two integers: the positions of the values. If there are several solutions, you may print any of them. 
    If there are no solutions, print IMPOSSIBLE.

 Constraints : 
    1 ≤ n ≤ 2 * 10^5
    1 ≤ x,ai ≤ 10^9

 Example :
    Input :
    4 8
    2 7 5 1

    Output : 
    2 4
*/

// CODE : 

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
typedef long long int lli;
int main(){
    lli n,x,a;
    cin >> n >> x;
    vector<lli> arr;
    vector<pair<lli,lli>> index;

    // Taking input in vector and storing their indices in a vector of pairs of number and their indiced before sorting;

    for(int i=0; i<n; i++){
        cin >> a;
        arr.push_back(a);
        index.push_back(make_pair(a, i));
    }

    sort(arr.begin(),arr.end());
    lli i = 0, j = n - 1;
    bool flag = false;

    while(i<j){
        if(arr[i] + arr[j] == x){
            flag = true;
            for(int p=0;p<n;p++){
                if(index[p].first==arr[i]||index[p].first==arr[j]){
                cout << index[p].second + 1 << " ";
                }
            }
            break;
        }
        else if(arr[i] + arr[j] > x){
            j--;
        }
        else{
            i++;
        }
    }
    if(flag == false){
        cout << "IMPOSSIBLE";
    }
}