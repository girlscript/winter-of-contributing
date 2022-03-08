# A - Frog 1
## Problem Statement

There are **N** stones, numbered *1,2,…,N*. For each **i** &nbsp;*(1≤i≤N)*, the height of Stone i is h<sub>i</sub>​.

There is a frog who is initially on Stone 1. He will repeat the following action some number of times to reach Stone N:

- If the frog is currently on Stone i, jump to Stone i+1 or Stone i+2. Here, a **cost of ∣hi​−hj​∣** is incurred, where j is the stone to land on.

Find the minimum possible total cost incurred before the frog reaches Stone N.

#### <u>Constraints</u>
1. All input values are integers.
2. 2≤N≤10<sup>5</sup>
3. 1≤hi​≤10<sup>4</sup>

#### <u>Sample Input</u>
4   
10 30 40 20

#### <u>Sample Output</u>
30

---

## Hint
Simply write a recursive solution to the problem and memoize it. Take care that the frog does not go over the last stone.

---

## Explanation

We have to find the minimum cost in a sequence of moves where, in one move, the frog can go either 1 step forward, or 2 steps forward. Let us declare variables **onejump** and **twojump** to calculate the costs.

The minimum cost for jumping 1 stone in the i<sup>th</sup> jump: 

``` Java
onejump = Math.abs(arr[i+1]-arr[i]) + foo(arr, i+1);
```

The minimum cost for jumping 2 stones in the i<sup>th</sup> jump: 

``` Java
twojump = Math.abs(arr[i+2]-arr[i]) + foo(arr, i+2);
```

Finally, we find the minimum of the two jumps and return it.

Note: If, in a particular sequence of jumps, the frog crosses over the N stones, then that sequence is discarded by making the cost maximum.

``` Java
if(i>=arr.length)
    return Integer.MAX_VALUE;
```

The full code excerpt is as follows:
```Java
import java.util.*;
import java.io.*;

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
    
    static long dp[];

    static long foo(int[] arr, int i)
    {
        if(i==(arr.length-1))
            return 0;
        if(i>=arr.length)
            return Integer.MAX_VALUE;
        if(dp[i]!=-1)
            return dp[i];
        long onejump, twojump;
        onejump = twojump = Integer.MAX_VALUE;
        if((i+1)<arr.length)
            onejump = Math.abs(arr[i+1]-arr[i]) + foo(arr, i+1);
        if((i+2)<arr.length)
            twojump = Math.abs(arr[i+2]-arr[i]) + foo(arr, i+2);
        return dp[i] = Math.min(onejump, twojump);
    }
    
    public static void main(String[] args) {
        FastReader reader = new FastReader();
        int n = reader.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++)
            arr[i] = reader.nextInt();
        dp = new long[n];
        for(int i = 0; i < n; i++)
            dp[i] = -1;
        long res = foo(arr, 0);
        System.out.println(res);
    }
}
```