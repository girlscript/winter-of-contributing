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

#### <u>Sample Input</u>
3  
10 40 70
20 50 80
30 60 90

#### <u>Sample Output</u>
210

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


The full code is as follows: 

```Java
import java.util.*;
import java.io.*;
import java.math.*;


public class Main {
    // For fast input output
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            try {
                br = new BufferedReader(new FileReader("input.txt"));
                PrintStream out = new PrintStream(new FileOutputStream("output.txt"));
                System.setErr(new PrintStream(new FileOutputStream("error.txt")));
                System.setOut(out);
            } catch (Exception e) {
                br = new BufferedReader(new InputStreamReader(System.in));
            }
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }

    // end of fast i/o code
    static StringBuilder str = new StringBuilder("");
    static long mod = 1000000007;
    
    static int search(ArrayList<Long> list, Long n)
    {
        int start = 0;
        int end = list.size()-1;
        while(start<= end)
        {
            int mid = start + (end-start)/2;
            if(list.get(mid)==n)
                return mid;
            else if(list.get(mid)<n)
                start = mid +1;
            else
                end = mid -1;
        }
        return start;
    }

    public static void main(String[] args) {
        FastReader reader = new FastReader();
        int n = reader.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];
        int[] c = new int[n];
        for(int i=0; i<n; i++)
        {
            a[i] = reader.nextInt();
            b[i] = reader.nextInt();
            c[i] = reader.nextInt();
        }
        int[][] dp = new int[n+1][4];
        dp[1][1] = a[0];
        dp[1][2] = b[0];
        dp[1][3] = c[0];
        for(int i=2; i<=n; i++)
        {
            dp[i][1] = a[i-1] + Math.max(dp[i-1][2],dp[i-1][3]);
            dp[i][2] = b[i-1] + Math.max(dp[i-1][1],dp[i-1][3]);
            dp[i][3] = c[i-1] + Math.max(dp[i-1][1],dp[i-1][2]);
        }
        int res = Math.max(dp[n][1], Math.max(dp[n][2], dp[n][3]));
        System.out.println(res);
    }   
}
```

