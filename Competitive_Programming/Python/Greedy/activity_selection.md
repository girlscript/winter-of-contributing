# Activity Selection Problem Using Greedy Approach

An <b>activity selection</b> is the problem of scheduling a resource among several competing actvities.

Here, we will use the <b>greedy approach</b> to address this problem.

```
Greedy Algorithm - It is an algorithmic strategy that makes the best optimal choice at each small stage which will eventually lead to an optimum solution for the entire problem. It always picks the best immediate output unlike dynamic approach which takes all the test cases into consideration.
```

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

While choosing activities, we need to keep in mind that two activities i and j are compatible if the half-open interval <b>[s<sub>i</sub> >= f<sub>j</sub>)</b> or <b>[s<sub>j</sub> >= f<sub>i</sub>)</b>.

So, here firstly we will choose the activity P and compare the finish time of activity P with the next activity Q. As the start time of Q and R is less than the finish time of P, so we will not choose those activities. Now, the start time of S is greater than the finish time of P i.e. 5 > 4, so S can be chosen after P.

Likewise, as you can see in the below table, activities W and Z will be chosen after S.

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

<b>O(nlogn)</b>, if the input activities are not sorted.

<b>O(n)</b>, if input activities are sorted.

## Applications:

```
1. It is used for the scheduling multiple competing events in a room.
2. It can also be used to schedule the manufacturing of multiple products on the same machine, where each product has its own production timelines.
3. It is one of the most well-known generic problems used in Operations Research for dealing with real-life business problems.
```

### Thank You! I hope now you can implement the activity selction problem on your own.
