# Rod Cutting Problem

A simple problem that we can solve using the concept of Dynamic Programming is the Rod Cutting Problem.  
Dynamic Programming can be used to solve **Optimization Problems** with overlapping sub-problems.We will discuss two variations of the Rod Cutting Problem and apply the concepts of Dynamic Programming to both problems.

## Problem Statement 1 :

Given a rod of length n inches and a table of prices p<sub>i</sub> for i=1,2,....,n determine the maximum revenue r<sub>n</sub> obtainable by cutting up the rod and selling the pieces.

## Understanding:

- We can cut up a rod of length n in 2<sup>n-1</sup> different ways, since we have an independent option of cutting or not cutting, at distance i inches from the left end.
- This is a **Price Maximization** Problem.
- Example:

  ```
  Input: n=5

  length   | 1   2   3   4   5
  -------------------------------
  price    | 2   5   7   8   6

  Output: 12

  Explanation: Maximum Value can be obtained by taking pieces of length 1, 2, 2 i.e, 2 + 5 + 5 = 12 or 2 and 3 i.e, 5 + 7 = 12

  ```

- The idea is pretty simple here. We have to cut the rot into pieces of i, n-i(recursively). But this will result in **overlapping subproblems**.
- A naive recursive solution is inefficient because it solves the same sub problems again and again and thereby has a time complexity of **O(2<sup>n</sup>)**.

## Approach Using Dynamic Programming:

- This problem has overlapping subproblems and an **optimal substructure** as it can be broken down into such smaller subproblems.
- We can solve this using the **Bottom-Up Dynamic Programming** Approach, which can be written by maintaining an array storing the result of every such subproblem using two nested loops so that we don't have to compute the value of an overlapping subproblem again.
- We can initialize res[i][j] to be the maximum cost obtained when rod of length i is cut into pieces of size<=i.
- Therefore, **res[i][j]=max(res[i-1][j],price[i]+res[i][j-i])**.

### Code in C++:

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
            cin>>price[i];  //Taking input for price array
        }

        int res[n+1][n+1];
        //Initializing the Result array to store values of subproblems
        for(int i=0;i<=n;i++){
            res[i][0]=0;
            res[0][i]=0;
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j>=i){
                    res[i][j]=max(res[i-1][j],price[i]+res[i][j-i]);    //Computing the Maximum Revenue
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

## Problem Statement 2:

Consider a modification of the rod-cutting problem in which in addition to a price p<sub>i</sub> for each rod, each cut incurs a fixed cost of c.The revenue associated with a solution is now the sum of the prices of the pieces minus the making costs.

### Approach:

- All conditions and approach remaining similar from the previous version of the problem, we now need to account for a fixed cost c on very iteration except when we reach j is less than i because those subproblems have already been computed.
- Now, we just have to make sure to subtract c and still choose the greater of the current best revenue.

### Code in C++:

```cpp

    #include <iostream>
    using namespace std;

    //Modified problem taking into account the fixed cost c for every cut

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
                    res[i][j]=max(res[i][j-1],price[i]+res[i][j-i]-(j-i)*c);    //Subtracting the fixed value c for each cut
                }
                else{
                    res[i][j]=res[i-1][j];
                }
            }
        }

        cout<<"Maximum Profit: "<<res[n][n];
        return 0;

```

## Time Complexity:

The running time of the bottom-up Dynamic Programming approach is **O(n<sup>2</sup>)**, due to its doubly nested loop structure. Thus, we can see that using Dynamic Programming concepts, we have significantly increased the efficency of the code.
