# EGG DROPPING USING RECURSION

### CODE:
 
``` cpp
// we wish to know which stories in a no_of_floor -story building are safe to drop eggs from, 
// and which will cause the eggs to break on landing. We make a few assumptions:
// An egg that survives a fall can be used again. 
// A broken egg must be discarded. 
// The effect of a fall is the same for all eggs. 
// If an egg breaks when dropped, then it would break if dropped from a higher floor. 
// If an egg survives a fall then it would survive a shorter fall. 
// It is not ruled out that the first-floor windows break eggs, nor is it ruled out that the 36th-floor do not cause an egg to break.
// If only one egg is available and we wish to be sure of obtaining the right result, the experiment can be 
// carried out in only one way. Drop the egg from the first-floor window; if it survives, drop it from the 
// second-floor window. Continue upward until it breaks. 
// THE TASK IS TO FIND MINIMUM NUMBER OF TRIALS IN WORST CASE TO FIND WHICH FLOORS ARE SAFE FOR DROPPING EGG
// problem statement is taken from geeksforgeeks

#include<bits/stdc++.h>
using namespace std;

int min_trial_using_recursive_method(int no_of_eggs, int no_of_floors)
{
     // if only one floor is present or no floor is present then simply return the current no_of_floor
    if (no_of_floors == 1 || no_of_floors == 0)// base case
        return no_of_floors;
 
    // if we have only one egg present with us then return no_of_floors as we will try at each floor
    // base case
    if (no_of_eggs == 1)
        return no_of_floors;
 
    int ans = INT_MAX, x, res;
 
    // now we consider all possible cases, dropping eggs from first floor to (no_of_floor)th floor
    for (x = 1; x <= no_of_floors; x++) {
        // max of the two cases is taken as we are considering trials in worst case
        // first case is when the egg breaks when dropped, second case is when egg doesnot breaks
        res = max(min_trial_using_recursive_method(no_of_eggs - 1, x - 1),min_trial_using_recursive_method(no_of_eggs, no_of_floors - x));
        if (res < ans)
            ans = res;
    }
    return ans + 1;
}
vector<vector<int>> memo(500, vector<int> (500, -1));
// I have taken size of vector as 500, it can be changed as per requirement!
int min_trial_using_memoized_recursive_method(int no_of_eggs, int no_of_floors)
{
    // if we have already calculated the min trials for given no_of_floor and no_of_eggs
    if(memo[no_of_eggs][no_of_floors] != -1) { return memo[no_of_eggs][no_of_floors];}
     
    // if only one floor is present or no floor is present then simply return no_of_floor
    if (no_of_floors == 1 || no_of_floors == 0)
      return no_of_floors;
    
    // if only one egg is present then return no_of_floor as then we will try at each floor
    if (no_of_eggs == 1)
      return no_of_floors;
 
    int ans = INT_MAX, x, res;
 
    for (x = 1; x <= no_of_floors; x++) {
        // max of the two cases is taken as we are considering trials in worst case
        // first case is when the egg breaks when dropped, second case is when egg doesnot breaks
      res = max(min_trial_using_memoized_recursive_method(no_of_eggs-1, x-1),min_trial_using_memoized_recursive_method(no_of_eggs, no_of_floors - x));
      if (res < ans)// update answer if res is less than ans
        ans = res;
    }
     
    memo[no_of_eggs][no_of_floors] = ans+1;
    // returning the no of trials required for given no_of_egg and no_of_floor
    return memo[no_of_eggs][no_of_floors];
}
 
int min_trial_using_tabulation_method(int no_of_eggs,int no_of_floor)
{
    int eggFloor[no_of_eggs + 1][no_of_floor + 1];
    int res;
    int i, j, x;
     // if only one floor is present or no floor is present then number of trial will be number of floor
    for (i = 1; i <= no_of_eggs; i++) {// base case
        eggFloor[i][1] = 1;
        eggFloor[i][0] = 0;
    }
    //when only one egg is present then min trials will be number of floor as then we will try at each floor
    for (j = 1; j <= no_of_floor; j++)// base case
        eggFloor[1][j] = j;
    //filling the rest part of the table with optimal substructure property
    for (i = 2; i <= no_of_eggs; i++) {
        for (j = 2; j <= no_of_floor; j++) {
            eggFloor[i][j] = INT_MAX;
            for (x = 1; x <= j; x++) {
                // max of the two cases is taken as we are considering trials in worst case
                // first case is when the egg breaks when dropped, second case is when egg doesnot breaks
                res = 1 + max( eggFloor[i - 1][x - 1], eggFloor[i][j - x]);
                if (res < eggFloor[i][j])
                    eggFloor[i][j] = res;// if current result is less than previous one, then update it
            }
        }
    }
    // eggFloor[no_of_eggs][no_of_floor] holds minimum number of trials for given no_of_floors and no_of_eggs
    return eggFloor[no_of_eggs][no_of_floor];
}
int main()
{
    int no_of_floor, no_of_eggs;
    // taking inputs for number of eggs and floors present initially
    cout<<"enter no of eggs : ";
    cin>>no_of_eggs;
    cout<<"enter no of floors: "; 
    cin>>no_of_floor;
    cout<<"min trial using recursion = "<<min_trial_using_recursive_method(no_of_eggs,no_of_floor)<<"\n";
    cout<<"min trial by dynamic programming using memoization = "<<min_trial_using_memoized_recursive_method(no_of_eggs,no_of_floor)<<"\n";
    cout<<"min trial by dynamic programming using tabulation = "<<min_trial_using_tabulation_method(no_of_eggs,no_of_floor)<<"\n";
    return 0;
}

// TIME COMPLEXITY FOR SIMPLE RECURSION IS EXPONENTIAL, IT CAN BE MINIMIZED USING MEMOIZATION! 
// AUXILIARY SPACE OF O(NO_OF_EGG * NO_OF_FLOOR) IS NEEDED WHEN WE USE DYNAMIC PROGRAMMING
// TIME COMPLEXITY IS O(NO_OF_EGG * NO_OF_FLOOR * NO_OF_FLOOR) WHEN DYNAMIC PROGRAMMING IS USED
```
