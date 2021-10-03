# **_Operating System Concepts: Non-Preemptive Scheduling_**

# **OVERVIEW**

In non pre-emptive scheduling, once the Cpu is assigned to a process, the process keeps the CPU until it either terminates or switches to the waiting state.

This method of scheduling was used by Windows 3.x

### Let us discuss some non pre-emptive scheduling algorithms in detail:

# **FIRST COME FIRST SERVE (FCFS)**

### Scheduling Criteria: Arrival time

### Mode: Non preemptive

Here, the Cpu is allocated on first come first serve basis, i.e, the process that requests Cpu first is allocated the CPU first. It can be managed using a First-in First-out(FIFO) queue.

## Code: [click here for code!](fcfs.cpp)

## OUTPUT:

![output](fcfs_output.png)

## Advantages:

1. It is simple to understand.
2. Easier to implement.

## Disadvantages:

1.  Average Waiting time can be high.

2.  FCFS exhibits **CONVOY EFFECT**. If a process having a high Burst time comes first, all the other processes have to wait for it to finish even if they have a lower burst time and are already in the ready queue.
    This slows down the operating system.

            For example:

             Process    Burst Time

               p1           10
               p2            1
               p3            1

            Here, the sequence of execution will be p1,p2 and p3 so, Waiting times would be 0, 10 and 11 respectively.
            Therefore, average waiting time= 21/3= 7ms

            Whereas, if the sequence of execution was p3, p2, p1 the waiting times would be 0,1,and 2 respectively.
            Therefore, avg WT = 3/3= 1ms.

3.  Not suitable for file sharing operating systems, where it is important for users to get CPU at regular intervals.

# **SHORTEST JOB FIRST (SJF)**

### **_Scheduling Criteria: Arrival time_**

### **_Mode: Non preemptive_**

Here,the CPU is assigned to the process in the queue which has the shortest Burst Time. In case the Burst times of 2 processes are same, CPU is assigned to the processes that arrived first, i.e on first come first serve basis.
It can be used for jobs running in batches such that their run times are known beforehand.

## Code:[click here for code!](sjf.cpp)

## OUTPUT:

![output](sjf_output.png)

## Advantages:

1. It provides a minimum average waiting time. It is a type of greedy algorithm.
2. Useful in long term scheduling.

## Disadvantages:

1. It cannot be used with short-term scheduling because determining the length of the next CPU burst time is not possible in that.

2. It may cause starvation if shorter processes keep coming.

# **Priority Scheduling(Non-preemptive)**

### **_Scheduling Criteria: Priority_**

### **_Mode: Non preemptive_**

Here, each process has a priority associated with it. The processes are scheduled according to their arrival times. If the processes have the same arrival time, then the CPU is assigned to the process with the highest priority.

    Note: There is no predefined rule if a lower number denotes higher or lower priority. It depends on the system. For ex- In some systems 0 denotes the highest priority while in some systems it may denote the lowest probability.

## Code:

## OUTPUT:[click here for code!](priority.cpp)

![output](priority_output.png)

## Advantages:

1. It is good when some processes have higher priority than others because here, such processes dont need to wait in the queue for a long time.

## Disadvantages:

1. If the processes with higher priority keep arriving, then the lower priority processes might staarve and their waiting time would become considerably high.

2. Might cause indefinite blocking or starvation.
