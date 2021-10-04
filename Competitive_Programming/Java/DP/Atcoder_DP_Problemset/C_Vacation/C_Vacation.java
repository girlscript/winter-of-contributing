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