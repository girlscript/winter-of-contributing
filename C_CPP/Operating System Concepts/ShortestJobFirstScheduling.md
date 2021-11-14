# Shortest Job First Scheduling 

- Shortest Job First scheduling works on the process with the shortest burst 
time or duration first.
- This is the best approach to minimize waiting time.

## Implementation of SJF Scheduling
```C
// C program 
#include <stdio.h>

void runProcess(int arr[], int bt[], int n, float* avg_wt, float* avg_tat){
    float total_wt, total_tat;
    int current_time, count=0, end, temp[20];

    // duplicating burst time - bt array
    for(int i=0; i<n; i++){
        temp[i] = bt[i];
    }

    bt[19] = __INT_MAX__;
    for(current_time=0; count<n; current_time++){
        int smallest = 19;
        for(int i = 0; i < n; i++){
            //checking for processes which are available for execution
            if(arr[i] <= current_time && bt[i] < bt[smallest] && bt[i] > 0){  
                smallest = i;
            }
        }
        bt[smallest]--;
        
        //if the process completed its execution
        if(bt[smallest] == 0){
            count++;
            end = current_time + 1;
            
            //adding waiting time of current process to total waiting time
            total_wt = total_wt + end - temp[smallest] - arr[smallest];  

            //adding turnaround time of current process to total turnaround time
            total_tat = total_tat + end - arr[smallest];
        }
    }
    *avg_wt = total_wt/n; 
    *avg_tat = total_tat/n;
}
 
int main(){
    /*
      the arrays
        bt - for burst time
        arr - for arrival time
        p  - for process id
        wt - for waiting time
        tat - for turnaround time
    */
    int bt[20], arr[20], n, total_tat = 0;
    float avg_wt, avg_tat;

    printf("Enter number of Process: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Process %d:-\n", 1+i);
        printf("Enter Arrival Time: ");
        scanf("%d", &arr[i]);
        printf("Enter Burst Time: ");
        scanf("%d", &bt[i]);
    }
    
    printf("Given Data:-\n");
    printf("Process ID\tArrival Time\tBurst Time\n");
    for (int i = 0; i < n; i++){
        printf("%d\t\t%d\t\t%d\n", i+1, arr[i], bt[i]);
    }

    runProcess(arr, bt, n, &avg_wt, &avg_tat);

    printf("Final Result...");
    printf("\nAverage Waiting Time: %.2f\n", avg_wt);
    printf("Average Turnaround Time: %.2f\n", avg_tat);
}
``` 

## Output
```
Enter number of Process: 4
Process 1:-
Enter Arrival Time: 0
Enter Burst Time: 6
Process 2:-
Enter Arrival Time: 1
Enter Burst Time: 4
Process 3:-
Enter Arrival Time: 3
Enter Burst Time: 5
Process 4:-
Enter Arrival Time: 5
Enter Burst Time: 3
Given Data:-
Process ID      Arrival Time    Burst Time
1               0               6
2               1               4
3               3               5
4               5               3

Final Result...
Average Waiting Time: 4.25
Average Turnaround Time: 8.75
```