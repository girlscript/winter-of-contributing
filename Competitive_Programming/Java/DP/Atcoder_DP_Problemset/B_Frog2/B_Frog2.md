# B - Frog 2
## Problem Statement

There are **N** stones, numbered *1,2,…,N*. For each **i** &nbsp;*(1≤i≤N)*, the height of Stone i is h<sub>i</sub>​.

There is a frog who is initially on Stone 1. He will repeat the following action some number of times to reach Stone N:

- If the frog is currently on Stone i, jump to **one of the following: Stone i+1,i+2,…,i+K**. Here, a **cost of ∣hi​−hj​∣** is incurred, where j is the stone to land on.

Find the minimum possible total cost incurred before the frog reaches Stone N.

#### <u>Constraints</u>
1. All input values are integers.
2. 2≤N≤10<sup>5</sup>
3. 1≤K≤100
4. 1≤hi​≤10<sup>4</sup>

---

## Hint
Similar to **Task A - Frog 1** we have to go over all K possiblities at the i<sup>th</sup> rock and pick the one with the minimum cost among them. Make sure *i+k* does not exceed *N*. 

---

## Explanation

To find the minimum cost among all K possibillities, we need a for loop:
```Java
for(int j = i+1; j <= i+k ; j++)
```
We will continue the for loop untill we cross N, and keep track of the minimum.
```Java
if(j>=arr.length)
    break;
min = Math.min(min, Math.abs(arr[j]-arr[i])+foo(arr,j,k));
```
Finally we return the minimum.

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
    
    static int dp[];

    static int foo(int[] arr, int i, int k)
    {
        if(i==(arr.length-1))
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int min = Integer.MAX_VALUE;
        for(int j = i+1; j <= i+k ; j++)
        {
            if(j>=arr.length)
                break;
            min = Math.min(min, Math.abs(arr[j]-arr[i])+foo(arr,j,k));
        }
        return dp[i] = min;
    }
    
    public static void main(String[] args) {
        FastReader reader = new FastReader();
        int n = reader.nextInt();
        int k = reader.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++)
            arr[i] = reader.nextInt();
        dp = new int[n];
        for(int i = 0; i < n; i++)
            dp[i] = -1;
        long res = foo(arr,0,k);
        System.out.println(res);
    }
}
```