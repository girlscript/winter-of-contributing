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
