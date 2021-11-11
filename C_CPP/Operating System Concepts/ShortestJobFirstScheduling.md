# Shortest Job First Scheduling 

- Shortest Job First scheduling works on the process with the shortest burst 
time or duration first.
- This is the best approach to minimize waiting time.

## Implementation of Non-Preemptive SJF Scheduling
```C
// C program 
#include <stdio.h>

//function to swap two integers
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    /*
      the arrays
        bt - for burst time
        p  - for process id
        wt - for waiting time
        tat - for turnaround time
    */
    int bt[20], p[20], wt[20], tat[20], n, total_tat = 0, total_wt = 0, minimum , temp, index;

    float avg_wt, avg_tat;

    printf("Enter number of Process: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        p[i] = i+1;
        printf("Process %d:-\n", p[i]);
        printf("Enter Burst Time: ");
        scanf("%d", &bt[i]);
    }
	
    //printing the given data
    printf("Given Case:-\n");
    printf("Process ID\tBurst Time\n");
    for (int i=0; i<n; i++)
        printf("%d\t\t%d\n", i+1, bt[i]);
    
    //sorting the processes based on burst time in ascending order using selection sort
    for (int i=0; i<n-1; i++){
        index = i;
        for (int j=i+1; j<n; j++)
            if(bt[j]<bt[index]){
                index = j;
            }  
        swap(&bt[i],&bt[index]);
        swap(&p[i],&p[index]);
    }

    wt[0] = 0;
    tat[0] = wt[0] + bt[0];
    total_tat += tat[0];
    for(int i=1; i<n; i++){
	/* waiting time of current process is equal to sum of waiting time and burst time of previous process */
        wt[i] =  bt[i-1]+wt[i-1];      

/* turnaround time of current process is equal to sum of waiting time and burst time of the process */    
	   tat[i] = bt[i]+wt[i]; 

        total_wt += wt[i];
        total_tat += tat[i];
    }

    printf("\nFinal Result\n");
    printf("Process ID Burst Time  Waiting Time  Turnaround Time\n");
    for(int i=0; i<n; i++)
        printf("%d\t\t%d\t\t%d\t\t%d\n", p[i], bt[i], wt[i], tat[i]);
    
    // average waiting time and turnaround time
    avg_wt=(float)total_wt/n;
    avg_tat=(float)total_tat/n;
    printf("\nAverage waiting time = %.2f", avg_wt);
    printf("\nAverage turn around time = %.2f ", avg_tat);
} 
``` 

## Output
```
Enter number of Process: 4
Process 1:-
Enter Burst Time: 21
Process 2:-
Enter Burst Time: 3
Process 3:-
Enter Burst Time: 6
Process 4:-
Enter Burst Time: 2
Given Case:-
Process ID      Burst Time
1               21
2               3
3               6
4               2

Final Result
Process ID Burst Time  Waiting Time  Turnaround Time
4               2               0               2
2               3               2               5
3               6               5               11
1               21              11              32

Average waiting time = 4.50
Average turn around time = 12.50
```