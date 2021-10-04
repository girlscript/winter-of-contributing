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