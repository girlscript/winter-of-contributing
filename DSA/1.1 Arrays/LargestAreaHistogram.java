package Stack_Queue;
import java.util.*;
import java.io.*;
/*
https://leetcode.com/problems/largest-rectangle-in-histogram/
1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing the height of bars in a bar chart.
3. You are required to find and print the area of largest rectangle in the histogram.

e.g.
for the array [6 2 5 4 5 1 6] -> 12
Sample Input

7
6
2
5
4
5
1
6

Sample Output

12
 */
public class LargestAreaHistogram {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = Integer.parseInt(br.readLine());
        }



        int[] nsr = new int[n];
        int[] nsl = new int[n];

        Stack<Integer> s = new Stack<>();
        for(int i = arr.length-1 ; i>=0 ; i--){
            //Pop All Smaller element.
            while(s.size() > 0 && arr[s.peek()] >= arr[i]){
                s.pop();
            }

            //update Ans
            if(s.size() == 0) {
                nsr[i] = arr.length;
            }else{
                nsr[i] = s.peek();
            }
            // Push current index in stack.
            s.push(i);
        }

        s = new Stack<>();
        for(int i =0 ; i< arr.length ; i++){
            //Pop All Smaller element.
            while(s.size() > 0 && arr[s.peek()] >= arr[i]){
                s.pop();
            }

            //update Ans
            if(s.size() == 0) {
                nsl[i] = -1;
            }else{
                nsl[i] = s.peek();
            }
            // Push current index in stack.
            s.push(i);
        }

        int ans = 0;
        for(int i = 0 ; i<arr.length ; i++){
            ans = Math.max(ans , arr[i] * (nsr[i]-nsl[i]-1));
        }
        System.out.println(ans);
    }
}
/*

 Stack<Integer> st = new Stack<>();
        int max =0;

        st.push(-1);

        for(int i=0;i<=heights.length;i++){
            int val = i==heights.length? 0:heights[i];

            while(st.peek() >=0 && heights[st.peek()] >= val){
                int h = heights[st.pop()];
                int start = st.peek();
                max = Math.max(max, h*(i-start-1));
            }
            st.push(i);
        }

        return max;


 */