# Activity Selection Problem Using Greedy Approach

An <b>activity selection</b> is the problem of scheduling a resource among several competing actvities.

Here, we will use the <b>greedy approach</b> to address this problem.

<b>Greedy Algorithm - It is an algorithmic strategy that makes the best optimal choice at each small stage which will eventually lead to an optimum solution for the entire problem. It always picks the best immediate output unlike dynamic approach which takes all the test cases into consideration.</b>


## Working:

### Solution Approach:

```
1. Firstly, do the sorting of all activities based on their finishing time.
2. Select the first activity from the sorted list of activities and print it.
3. Repeat the same process for the remaining activities.
```

### Example:

Consider the following list of activities, where the second column represents different activities and the third column represents (start_time, finish_time).

<img src='https://user-images.githubusercontent.com/65852362/141511389-d8de0ade-398f-45eb-9356-9698b68f3b04.png'>

While choosing activities, we need to keep in mind that two activities i and j are compatible if the half-open interval <b>[s<sub>i</sub> >= f<sub>j</sub>)</b> or <b>[s<sub>j</sub> >= f<sub>i</sub>)</b>. Here s<sub>i</sub> and s<sub>j</sub> represenets the start time of activity i and  j repectively while, f<sub>i</sub> and f<sub>j</sub> represents the finishing time of activity i and j respectively.

<b>Note: Here, we will always choose the first activity after sorting the activities as per the finishing time(in this case the activities are already sorted as per their finishing time</b>). 
    
So, here firstly we will choose the activity P and compare the finish time of activity P with the next activity Q. As the start time of Q and R is less than the finish time of P, so we will not choose those activities. Now, the start time of S is greater than the finish time of P i.e. 5 > 4, so S can be chosen after P. 

After we will choose S, the finishing time of S i.e. 7 will be compared with the starting time of succeeding activity i.e. T. But as the starting time of T i.e. 3 is less than 7, so we can't choose T-activity after S. Also, the starting times of activities U and V are also less than the finishing time of S, so we can't include activities U and V in the solution set. Now, as you can see in the below table, the starting time of activity W i.e. 8 is greater than the finishing time of S, so there will be no conflict if we start activity W, after S.

Now, we will compare the finishing time of W with its succeeding activities in the table. As, you can see the starting time of X and Y i.e. 8 and 2 respectively, is less than the finishing time of W which is 11. Now, comes the last activity Z, the starting time of Z which is 12, is less than the finishing time of W which is 11. Thus, we can include Z in the solution set as there will be no time-limit conflict in selecting activity Z after W. Thus, we choose the activitties in this order: <b>P, S, W, Z</b>

<img src='https://user-images.githubusercontent.com/65852362/141511442-3d4cb0f6-f6ca-45cb-97b9-590f5a842088.png'>

So, the final solution set A will be {P, S, W, Z}.

## Algorithm:

```
Activity-Selection(Activity, start, finish)
    Sort Activity by finish times stored in finish
    Selected = {Activity[1]}
    n = Activity.length
    j = 1
    for i = 2 to n:
        if start[i] ≥ finish[j]:
            Selected = Selected U {Activity[i]}
            j = i
    return Selected
```

## Implementation in Python:

```
def SolutionSet(arr, n):
    selected = []
      
    # Sort jobs according to finish time
    activity_list.sort(key = lambda x : x[1])
      
    # The first activity always gets selected
    i = 0
    selected.append(arr[i])
  
    for j in range(1, n):
        
      '''If this activity has start time greater than or
         equal to the finish time of previously selected
         activity, then select it'''
      if arr[j][0] >= arr[i][1]:
          selected.append(arr[j])
          i = j
    return selected
  
# Input Set of activities
activity_list = [[1, 4], [0, 6], [5, 7], [3, 8],[5, 9], [8, 11]]

# Applying function 'SolutionSet' by passing activity_list and length of it as parameters
selected_activities = SolutionSet(activity_list, len(activity_list))

# printing the obtained output.
print("Following activities are selected :")
print(selected_activities)
```

### Output:

```
Following activities are selected :
[[1, 4], [5, 7], [8, 11]]
```

## Time complexity:

The time-complexity will be <b>O(nlogn)</b>, if the input activities are not sorted. Here, <b>n</b> will be the time-complexity of activity-selection algorithm as there is only one for-loop running from 1 to n and <b>logn</b>, will be time-complexity of the sorting algorithm.

So, the complexity will be <b>O(n)</b>, if input activities are sorted.

## Applications:

1. It is used for the scheduling multiple competing events in a room.
2. It can also be used to schedule the manufacturing of multiple products on the same machine, where each product has its own production timelines.
3. It is one of the most well-known generic problems used in Operations Research for dealing with real-life business problems.

### Thank You! I hope now you can implement the activity selction problem on your own.
