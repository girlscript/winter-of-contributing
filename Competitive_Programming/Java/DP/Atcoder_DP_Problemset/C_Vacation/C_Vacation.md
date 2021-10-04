# C - Vacation
## Problem Statement

Taro's summer vacation starts tomorrow, and he has decided to make plans for it now.

The vacation consists of
N days. For each **i (1≤i≤N)**, Taro will choose one of the following activities and do it on the i-th day:

> A: Swim in the sea. Gain <i>a<sub>i</sub></i>​ points of happiness.

> B: Catch bugs in the mountains. Gain <i>b<sub>i</sub></i>​ points of happiness.

> C: Do homework at home. Gain <i>c<sub>i</sub></i>​ points of happiness.

As Taro gets bored easily, he cannot do the same activities for two or more consecutive days.

Find the maximum possible total points of happiness that Taro gains.

#### <u>Constraints</u>
1. All input values are integers.
2. 1≤N≤10<sup>5</sup>
3. 1≤a<sub>i​</sub>,b<sub>i​</sub>,c<sub>i</sub>​≤10<sup>4</sup>

---

## Hint
Use a two dimensional DP. Try to find a recurrence relation to find the maximum possible points in the i<sup>th</sup> day performing the j<sup>th</sup> task. Lastly, find the maximum points after doing the last task for each combination.   

---

## Explanation

Let us make a **2 dimensional DP** where:

- The rows will be corresponding to the i values.
- The columns will correspond to the choice of activity made on the i<sup>th</sup> day.

Therefore, the dimensions of the DP will be **N x 4** 

Now, for each day, find the maximum possible points while choosing each activity available as the activity of the day. For each activity, choose the maximum possible points that can be gained from the other two activities from the previous day. The code will look something like this:

```Java
dp[i][1] = a[i-1] + Math.max(dp[i-1][2],dp[i-1][3]);

dp[i][2] = b[i-1] + Math.max(dp[i-1][1],dp[i-1][3]);

dp[i][3] = c[i-1] + Math.max(dp[i-1][1],dp[i-1][2]);
```

Remember, here dp[i][j] tell us **the maximum points that can be possibly scored if we take into consideration a total of *i days* and pick the *j<sup>th</sup>* activity as the activity for *i<sup>th</sup> day.**

Finally, we take maximum value from **dp[n][j]**, where *1<=j<=3*, and this is our answer.

*Note*: Remember to initialize the dp for the first day as follows: 

```Java
dp[1][1] = a[0];
dp[1][2] = b[0];
dp[1][3] = c[0];
```