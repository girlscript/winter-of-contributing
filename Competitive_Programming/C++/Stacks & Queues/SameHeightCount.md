# Simple Stack Problem
<!-- ## Definition -->
Given an array of specified length, each element represents the height of a student in queue. Two students 'a' and 'b' can see each other if there are no taller students standing between them. 

```
Example Input:  1 3 1 3 2 3 

Example Output: 0 2 0 2 0 2 

Explanation: Student 1 can't see anyone else, so cant't Student 3 and Student 5 as there is an adjacent student of height 3. Student 2 can see two students of height 3 and so can Student 4 and Student 6.
```
## A Naive Approach💡

A <b>brute force</b> approach to this solution would be to run a counter loop and for each index, traverse to the left and right of the array.

### Implementation of the code:

```c++
void sameHeightCount(int a[]){
    int n = a.length(); int b[n];  int count; 
    for(int i=0;i<n;i++){    // counting towards right
        count = 0;
        if(i<n-1){
            for(int j = i+1;j<n;j++){
            if(a[j]>a[i])
                break;
            if(a[j]==a[i]) // increment count update
            count++;
        }
      }
      if(i>0){
           for(int j = i-1;j>=0;j--){  //counting towards left
            if(a[j]>a[i])
                break;
            if(a[j]==a[i]) // increment count update
            count++;
        }
      }
      b[i] = count; // initializing output array
    }
    for(auto i: b)
      cout<<i<<" ";
}
```
As it is evident, for the outer loop, we traverse through the whole array towards left, towards right or both. Thus, if the length of the array is N, we iterate N<sup>2</sup> times.

<b>Time Complexity:- </b>  O(N<sup>2</sup>) <br>
<b>Space Complexity:- </b>  O(N)  <br>

The time complexity shows that for larger inputs of range 10<sup>6</sup>, the snippet is bound to fail for exceeded time limit.

## A Better Approach 💡

A better approach would be to implement <b>Stacks</b> in this problem. Much similar to the famous <b>Stock Span</b> problem,
using Stacks does away with the need for an extra iterative loop.

First we traverse from <b>left to right.</b> For each index we store the number of students with same height to the left provided there is no one with greater height in between.

We store the index of max height till the i<sup>th</sup> position in a Stack. For every arr[i]>= arr['top index of stack'], we pop them out as they are not required anymore <b>because they can't see anyone to their right or left(as greater height is adjacent).</b>

For every arr[i] = arr['top index of stack'], we increase <b>arr[i]=arr[S.top()]+1</b>, <br> 

This is so because for every visible person of same height, the i<sup>th</sup> person sees an extra person.

For Example while traversing left to right:-
<b>2</b>--> 1--> 1--> <b>2</b>--> 1--> 1--> <b>2</b>--> <b>2</b>  <br>

The fourth student sees only 1 student of height 2 towards his left.
The seventh student sees 1+1 students of height 2 towards his left and so on..

We implement this logic while traversing from right to left also and for each index add the number of visible person to the left and right.

Here's the code for a better understanding!

```c++
void sameHeightCount(int a[]){
    stack<int> S;// Stack stores the indices
   int n=a.length();
    int s[n]; // to store values left to right
    int x[n]; // to store values right to left
    int h[n]; // to store final values
s[0]=0;
S.push(0);
// LEFT TO RIGHT
for(int i=1;i<n;i++)
{
    s[i]=0;
    while(S.empty()==false && a[i]>=a[S.top()]){ // popping the indices out of the stack who's height is <= a[i]
    if(a[i]==a[S.top()])
    s[i]=s[S.top()]+1;  // One more than the previous same height student
    S.pop();
    }
    S.push(i);  //push the current index for future comparison with next height
}
// RIGHT TO LEFT
stack<int> P;// Stack stores the indices
  x[n-1]=0;
    P.push(n-1);
    for(int i=n-2;i>=0;i--)
    {  
        x[i]=0;
        
        while(P.empty()==false && a[i]>=a[P.top()]){  // popping the indices out of the stack who's height is <= a[i]
         if(a[i]==a[P.top()])
          x[i]=x[P.top()]+1; //One more than the previous same height student
        P.pop();
        }
        P.push(i);  //push the current index for future comparison with next height
    }
    for(int i=0;i<n;i++){
    h[i]=s[i]+x[i];  // Adding total visible students to the left and right
    cout<<h[i]<<" "; 
    }
}
```
It is clearly evident that the process takes three independant for loops, running till n. Thus our time complexity is way less than the previous approach. Thus it is of linear time complexity.


<b>Time Complexity:-</b> O(N). <br> 
Therefore, for larger inputs of 10<sup>7</sup> or more, it should work fine! <br>

<i>Thus we see a typical implementation of <b>Stacks</b> to bring it to Linear Time Complexity.</i>

