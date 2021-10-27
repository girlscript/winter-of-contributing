
Problem Statment :- 1. You are given a number n, representing the size of array a.
                    2. You are given n numbers, representing the height of bars in a bar chart.
                    3. You are required to find and print the area of largest rectangle in the histogram.
                    
Algorithm :-     1.  Create two array of same size of main array , one of them will store next smaller element in right , name it nsr[arr.length] and another array 
                    which will store next smaller element in left name it nsl[arr.length].
                
                 2. Create a stack and with the help of stack fill next smaller element in nsr[]array and nsl[]array . when you got next smaller element in both side for each                          element.
                
                 3.  Initilize ans=0 .
                 4 . Iterate main array from index 0 to length-1 , and find maximum of (ans , arr[i] * (nsr[i]-nsl[i]-1));
                 5 . ans will be the maximum element , update you ans with maximum value.
                 6. Print your ans , that will be the maximum area in given Histogram.
               
Time Complexity:-  O(N).
Space Complexity:- O(N).

Test Case1 :-    arr= {6, 2, 5, 4, 5, 1, 6}
                 ans = 12
                 
Test Case2 :-    arr= {3 , 6 , 8 , 5 , 3}
                 ans = 15. 
                 
Program: -     

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
    
    
Source :- PepCoading.

        
