# Banker's Algorithm 

Banker’s Algorithm is an algorithm which is used to avoid deadlock and allocate resources safely to each process in computer system. Also, It is used for deadlock detection. This algorithm tells if any system can go into deadlock or not, by analyzing currently allocated resources and resources required by the processes in future. This algorithm is called Banker's Algorithm because it is used in banking system so that banks never run out of money(balance)/resources and always be in safe state.

**For example-** 
- Banker's algorithm is used in banking system to check whether or not laon can be given. Suppose, there are 'n' number of account holders in a particular bank, and total money in their accounts is 'M'.   

- When a house loan is given by the bank, the software system subtracts the loan amount granted for purchasing a house from the total money ( M + Monthly Income Scheme + Fixed deposit + Gold, etc.) that the bank possess.   

- Bank only processes the house loan when the bank has sufficient money i.e It checks whether the difference is more than or not M. So that there is sufficient balance even if all account holders withdraw the money M simultaneously.   

## Data Structures used for implemention the Banker’s Algorithm
Let us assume that there are n processes and m resource types.   

1. Available
It is a 1-D array which represents/tells how many resources(or instances) of each type are currently available. If Available[j] = q, then there are q instances available, of resource type Rj.

2. Allocation
It is a 2-D array (n x m matrix) which represents/tells the number of resources of each type currently allocated to a process. If Allocation[i][j] = q, means q instances of resource type Rj is currently allocated to process Pi.

3. Max
It is a 2-D array (n x m matrix) which represents/tells the maximum number of instances of each resource type required by a process for its successful execution. If Max[i][j] = q, then the process Pi can request atmost q instances of resource type Rj.

4. Need
It is a 2-D array (n x m matrix) which represents/tells remaining instances of each resource type required for execution. If Need[i][j] = q, then process Pi may need q more instances of resource type Rj to complete its execution.

> Note:  Need[i][j] = Max[i][j] - Allocation [i][j], where i represents any process Pi and J represents resource type
Rj.   

## The Bankers Algorithm is a combination of the following two algorithms-

1. Request-Resource Algorithm
2. Safety Algorithm   

**Resource Request Algorithm-**
This algorithm checks the behaviour of the system, when a process makes request for resources of each type in form of a request matrix. And, Whenever a process makes a request for resources, it also checks if the resource can be alloted to process or not. 

Step-1: If Requesti <= Needi
Goto step (2) ; otherwise, raise an error condition, since the process has exceeded its maximum claim.

Step-2: If Requesti <= Available 
Goto step (3); otherwise, Pi must wait, since the resources are not available.   

Step-3: Have the system pretend to have allocated the requested resources to process Pi by modifying the state as 
follows- 
Available = Available – Requesti 
Allocation = Allocationi + Requesti
Needi = Needi – Request   
 
**Safety Algorithm-**
Once the resources are allocated, the new state formed may or may not be a safe state. So, the safety algorithm is applied to check whether the resulting state is a safe state or not, in other words- if the states follows the safe sequence or not.   

Step-1: Let Work and Finish be vectors of length ‘m’ and ‘n’ respectively. 
Initialization: Work = Available 
Finish[i] = false; for i=1, 2, 3, 4, 5, 6….n   

Step-2: Find an i such that both 
a) Finish[i] = false 
b) Needi <= Work 
if no such i exists goto step (4)    

Step-3: Work = Work + Allocation[i] 
Finish[i] = true 
goto step (2)   

Step-4: if Finish [i] = true for all i, then we can say that system is in safe state.   

## Banker's algorithm code-

```c

#include <stdio.h> 
int main() 
{ 
	// P0, P1, P2, P3, P4 are the names of Process

	int n, r, i, j, k; 
	n = 5; // Indicates the Number of processes 
	r = 3; //Indicates the Number of resources 
	int alloc[5][3] = { { 0, 5, 1 }, // P0 // This is Allocation Matrix 
						{ 3, 0, 1 }, // P1 
						{ 2, 0, 1 }, // P2 
						{ 2, 3, 2 }, // P3 
						{ 1, 1, 3 } }; // P4 

	int max[5][3] = { { 7, 6, 3 }, // P0 // MAX Matrix 
					{ 3, 2, 2 }, // P1 
					{ 8, 0, 2 }, // P2 
					{ 2, 1, 2 }, // P3 
					{ 5, 2, 3 } }; // P4 

	int avail[3] = { 2, 3, 2 }; // These are Available Resources 

	int f[n], ans[n], ind = 0; 
	for (k = 0; k < n; k++) { 
		f[k] = 0; 
	} 
	int need[n][r]; 
	for (i = 0; i < n; i++) { 
		for (j = 0; j < r; j++) 
			need[i][j] = max[i][j] - alloc[i][j]; 
	} 
	int y = 0; 
	for (k = 0; k < 5; k++) { 
		for (i = 0; i < n; i++) { 
			if (f[i] == 0) { 

				int flag = 0; 
				for (j = 0; j < r; j++) { 
					if (need[i][j] > avail[j]){ 
						flag = 1; 
						break; 
					} 
				} 

				if (flag == 0) { 
					ans[ind++] = i; 
					for (y = 0; y < r; y++) 
						avail[y] += alloc[i][y]; 
					f[i] = 1; 
				} 
			} 
		} 
	} 

	printf("The SAFE Sequence is as follows\n"); 
	for (i = 0; i < n - 1; i++) 
		printf(" P%d ->", ans[i]); 
	printf(" P%d", ans[n - 1]); 

	return (0); 

}

```

## Output-

The SAFE Sequence is as follows   
 P1 ->  P3 ->  P4 ->  P0 ->  P2 

## Advantages of banker's algorithm-

1. It can easily meet requirements of each process since it has various resources.   

2. The conditions like mutual-exclusion, pre-emption and hold-and-wait are permitted.   

3. To manage and control process requests for each resource type in the computer system, it helps operating system.   

4. The algorithm guarantees that resources will be allocated to each process in finite time.

## Disadvantages of banker's algorithm- 

1. Only fixed number of processes are allowed before algorithm executes, no new process can be initiated once algorithm starts its execution. And this is not possible in interactive systems.

2. Each process are expected to pedict and state the maximum number of resources required for their complete execution. 

3. Since it requires the number of processes to remain fixed, no resource may go down or opted out without the possibility of deadlock occuring, though whatever may be the reason. 

4. The number of resource requests can be allocated/granted in a finite time, but the finite amount of time can be 1 year. 

## References-

- [Javatpoint](https://www.javatpoint.com/bankers-algorithm-in-operating-system)   

- [Afteracademy](https://afteracademy.com/blog/what-is-bankers-algorithm)