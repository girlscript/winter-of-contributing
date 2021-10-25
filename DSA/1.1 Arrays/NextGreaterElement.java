package Stack_Queue;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import  java.util.*;
/*
Next Greater Element To The Right.
1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are required to "next greater element on the right" for all elements of array
4. Input and output is handled for you.

"Next greater element on the right" of an element x is defined as the first element to right of x having value greater than x.
Note -> If an element does not have any element on it's right side greater than it, consider -1 as it's "next greater element on right"
e.g.
for the array [2 5 9 3 1 12 6 8 7]
Next greater for 2 is 5
Next greater for 5 is 9
Next greater for 9 is 12
Next greater for 3 is 12
Next greater for 1 is 12
Next greater for 12 is -1
Next greater for 6 is 8
Next greater for 8 is -1
Next greater for 7 is -1
Sample Input
5
5
3
8
-2
7

Sample Output

8
8
-1
7
-1
 */
public class NextGreaterElement {
    public static void display(int[] a){
//        StringBuilder sb = new StringBuilder();
//
//        for(int val: a){
//            sb.append(val + "\n");
//        }
//        System.out.println(sb);

        System.out.println(Arrays.toString(a));
    }

    public static void main(String[] args) throws Exception {
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//
//        int n = Integer.parseInt(br.readLine());
//        int[] a = new int[n];
//        for(int i = 0; i < n; i++){
//            a[i] = Integer.parseInt(br.readLine());
//        }

        int[] a = {10,6,12,5,3,2,4,8,1};

        int[] ngr = nextGreaterright(a);
        int[] ngrsolve = solve(a);
        int[] ngl = nextGreaterleft(a);
        int[] nsr = nextSmallerright(a);
        int[] nsl = nextSmallerleft(a);
        display(ngr);
        display(ngrsolve);
        display(ngl);
        display(nsr);
        display(nsl);
    }

    // Next greater right.
    public static int[] nextGreaterright(int[] arr){
        int[] ans = new int[arr.length];
        Stack<Integer> s = new Stack<>();
        s.push(0);

        for(int i = 1 ; i<arr.length ; i++){
            while(s.size() > 0 && arr[s.peek() ]< arr[i]){
                ans[s.pop()] = arr[i];
            }
            s.push(i);
        }
        while (s.size() > 0){
            ans[s.pop()] = -1;

        }
        // solve
        return ans;
    }

    public static int[] solve(int[] arr){
        int[] ans = new int[arr.length];

        Stack<Integer> st = new Stack<>();

        for(int i = arr.length-1 ; i>=0 ; i--){
            //pop all smaller Element.
            while(st.size() > 0 && arr[st.peek()]< arr[i]){
                st.pop();
            }

            // Update ans
            if(st.size() == 0){
                ans[i] = -1;
            }else{
                ans[i] = arr[st.peek()];
            }

            // Push current index in the stack.
            st.push(i);
        }
        return ans;
    }

     // Next greater left.
     public static int[] nextGreaterleft(int[] arr){
         int[] ans = new int[arr.length];
         Stack<Integer> s = new Stack<>();
         s.push(arr.length-1);

         for(int i = arr.length-2 ; i>=0; i--){
             while(s.size() > 0 && arr[s.peek() ]< arr[i]){
                 ans[s.pop()] = arr[i];
             }
             s.push(i);
         }
         while (s.size() > 0){
             ans[s.pop()] = -1;

         }
         // solve
         return ans;
     }

     // Next smaller in right.
     public static int[] nextSmallerright(int[] arr){
         int[] ans = new int[arr.length];
         Stack<Integer> s = new Stack<>();
         s.push(0);

         for(int i = 1 ; i<arr.length ; i++){
             while(s.size() > 0 && arr[s.peek()]> arr[i]){
                 ans[s.pop()] = arr[i];
             }
             s.push(i);
         }
         while (s.size() > 0){
             ans[s.pop()] = -1;

         }
         // solve
         return ans;
     }

     // Next smaller left
    public static int[] nextSmallerleft(int[] arr){
        int[] ans = new int[arr.length];
        Stack<Integer> s = new Stack<>();
        s.push(arr.length-1);

        for(int i = arr.length-2 ; i>=0; i--){
            while(s.size() > 0 && arr[s.peek() ]> arr[i]){
                ans[s.pop()] = arr[i];
            }
            s.push(i);
        }
        while (s.size() > 0){
            ans[s.pop()] = -1;

        }
        // solve
        return ans;
    }

}
