/* Problem Statement:
    You have to process n tasks. 
    Each task has a duration and a deadline, and you will process the tasks in some order one after another.
    Your reward for a task is d−f where d is its deadline and f is your finishing time.
    (The starting time is 0, and you have to process all tasks even if a task would yield negative reward.)

    What is your maximum reward if you act optimally?

 Input :
    The first input line has an integer n: the number of tasks.
    After this, there are n lines that describe the tasks. 
    Each line has two integers a and d: the duration and deadline of the task.


 Output :
    Print one integer: the maximum reward.

 Constraints : 
    1 ≤ n ≤ 2 * 10^5
    1 ≤ a,d ≤ 10^6

 Example :
    Input :
        3
        6 10
        8 15
        5 12
    Output : 
        2
*/

// CODE : 

#include<iostream>
#include<algorithm>
#include<vector>
typedef long long int lli;
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <pair<int,int>> vec;
 
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        vec.push_back(make_pair(a,b));
    }
 
    sort(vec.begin(),vec.end());
 
    lli ans=0,curr=0; 
    for(int i=0;i<n;i++){
        curr+= vec[i].first;
        ans += vec[i].second -curr;
    }
    cout << ans;
}
