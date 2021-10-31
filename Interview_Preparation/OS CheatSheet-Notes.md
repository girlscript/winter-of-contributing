# Operating System Cheat Sheet

### 1. Why is Operating System and why it is important?
OS is the most essential and vital part of a computer without which it is considered useless. It enables an interface or acts like a link for interaction between computer software that is installed on OS and users. It also helps to communicate with hardware and also maintains balance among hardware and CPU. It also provides services to users and a platform for programs to run on.

### 2. Functions of OS:
- Memory and Processor Management
- Providing user interface to users
- File Management and Device Management
- Scheduling of resources and jobs
- Error Detection
- Security

### 3. Types of OS:
- Batched OS (Example: Payroll System, Transactions Process, etc.)
- Multi-Programmed OS (Example: Windows O/S, UNIX O/S, etc.)
- Timesharing OS (Example: Multics, etc.)
- Distributed OS (LOCUS, etc.)
- Real-Time OS (PSOS, VRTX, etc.)

### 4. What is a socket? What are the different types of sockets?
A socket is used to make connection between two applications. Endpoints of the connection are called socket.  
There are basically four types of sockets as given below:

- Stream Sockets
- Datagram Sockets
- Sequenced Packet Sockets
- Raw Sockets

### 5. What is kernel? Define monolithic kernel?
- Kernel is the core and most important part of a computer operating system which provides basic services for all parts of the OS.
- A monolithic kernel is a kernel which includes all operating system code is in single executable image.

### 6. Functions of Kernel:

- It is responsible for managing all computer resources such as CPU, memory, files, processes, etc.
- It facilitates or initiates the interaction between components of hardware and software.
- It manages RAM memory so that all running processes and programs can work effectively and efficiently.
- It also controls and manages all primary tasks of the OS as well as manages access and use of various peripherals connected to the computer.
- It schedules the work done by the CPU so that the work of each user is executed as efficiently as possible.

### 7. What do you mean by a process?
An executing program is known as process. There are two types of processes:

- Operating System Processes
- User Processes

### 8. What are the different states of a process?
Different states of process:

- **New Process** : In this state, a process is just created.
- **Running Process** : In this state, the CPU starts working on the process’s instructions.
- **Waiting Process** : In this state, the process cannot run because it just waits for some event to occur
- **Ready Process** : In this state, the process has all resources available that are required to run but it waits to get assigned to a processor because CPUs are not working currently on instructions passed by the process.
- **Terminated Process** : In this state, the process is completed I.e., the process has finished execution.

### 9. What is the difference between process and program?
A program while running or executing is known as a process.

### 10. What is the use of paging in operating system?
Paging is used to solve the external fragmentation problem in operating system. This technique ensures that the data you need is available as quickly as possible.

### 11. Explain demand paging?
Demand paging is a method that loads pages into memory on demand. This method is mostly used in virtual memory. In this, a page is only brought into memory when a location on that particular page is referenced during execution. The following steps are generally followed:

- Attempt to access the page.
- If the page is valid (in memory) then continue processing instructions as normal.
- If a page is invalid then a page-fault trap occurs.
- Check if the memory reference is a valid reference to a location on secondary memory. If not, the process is terminated (illegal memory access). Otherwise, we have to page in the required page.
- Schedule disk operation to read the desired page into main memory.
- Restart the instruction that was interrupted by the operating system trap

### 12. What is virtual memory?
Virtual memory is a very useful memory management technique which enables processes to execute outside of memory. This technique is especially used when an executing program cannot fit in the physical memory. It can be managed in two common ways by OS i.e., paging and segmentation. It acts as temporary storage that can be used along with RAM for computer processes.

### 13. What is thrashing?
Thrashing is a phenomenon in virtual memory scheme when the processor spends most of its time in swapping pages, rather than executing instructions.

### 14. What do you mean by process synchronization?
Process synchronization is basically a way to coordinate processes that use shared resources or data. It is very much essential to ensure synchronized execution of cooperating processes so that will maintain data consistency. Its main purpose is to share resources without any interference using mutual exclusion. There are two types of process synchronization:

- Independent Process
- Cooperative Process
### 15. What is different between main memory and secondary memory?
- Main memory: Main memory in a computer is RAM (Random Access Memory). It is also known as primary memory or read-write memory or internal memory. The programs and data that the CPU requires during the execution of a program are stored in this memory.
- Secondary memory: Secondary memory in a computer are storage devices that can store data and programs. It is also known as external memory or additional memory or backup memory or auxiliary memory. Such storage devices are capable of storing high-volume data. Storage devices can be hard drives, USB flash drives, CDs, etc. 

### 16. What is thread in OS?
Thread is a path of execution that is composed of a program counter, thread id, stack, and set of registers within the process. It is a basic unit of CPU utilization that makes communication more effective and efficient, enables utilization of multiprocessor architectures to a greater scale and greater efficiency, and reduces the time required in context switching. It simply provides a way to improve and increase the performance of applications through parallelism. Threads are sometimes called **lightweight processes** because they have their own stack but can access shared data. 

Multiple threads running in a process share: Address space, Heap, Static data, Code segments, File descriptors, Global variables, Child processes, Pending alarms, Signals, and signal handlers. 

Each thread has its own: Program counter, Registers, Stack, and State.

### 17. What is Reentrancy?
Reentrant is simply a function in which various clients can use and shares a single copy of a program during a similar period. This concept is generally associated with OS code and does not deal with concurrency. It has two major functions:

- Program code cannot change or modify itself.
- Local data for every client process needs to be stored in different disks.

### 18. What is a Scheduling Algorithm? Name different types of scheduling algorithms?
A scheduling algorithm is a process that is used to improve efficiency by utilizing maximum CPU and providing minimum waiting time to tasks. It simply deals with the problem of deciding which of outstanding requests is to be allocated resources. Its main aim is to reduce resource starvation and to ensure fairness amongst parties that are utilizing the resources. In simple words, it is used to allocate resources among various competing tasks.  
**Types of Scheduling Algorithms**

   ![Scheduling Algorithms](https://cdn.guru99.com/images/1/121119_0541_Schedulinga1.png)
   
### 19. Briefly explain FCFS?
FCFS stands for First Come First Serve. In the FCFS scheduling algorithm, the job that arrived first in the ready queue is allocated to the CPU and then the job that came second and so on. FCFS is a non-preemptive scheduling algorithm as a process that holds the CPU until it either terminates or performs I/O. Thus, if a longer job has been assigned to the CPU then many shorter jobs after it will have to wait.

### 20. What is the RR scheduling algorithm?
A round-robin scheduling algorithm is used to schedule the process fairly for each job a time slot or quantum and interrupting the job if it is not completed by then the job comes after the other job which is arrived in the quantum time that makes these scheduling fairly.

- Round-robin is cyclic in nature, so starvation doesn’t occur
- Round-robin is a variant of first come, first served scheduling
- No priority, special importance is given to any process or task
- RR scheduling is also known as Time slicing scheduling

### 21. What is the difference between paging and segmentation?
**Paging**: It is generally a memory management technique that allows OS to retrieve processes from secondary storage into main memory. It is a non-contiguous allocation technique that divides each process in the form of pages.  
**Segmentation**: It is generally a memory management technique that divides processes into modules and parts of different sizes. These parts and modules are known as segments that can be allocated to process.

### 22. What is the difference between multitasking and multiprocessing OS?
|Multitasking                               |                    Multiprocessing |
| ---                                       |                       ----         |
| It performs more than one task at a time using a single processor.| It performs more than one task at a time using multiple processors.|
| In this, the number of CPUs is only one.| In this, the number of CPUs is more than one.|
| It is more economical. | 	It is less economical. |
| It is less efficient than multiprocessing. | It is more efficient than multitasking. |
| It allows fast switching among various tasks. | It allows smooth processing of multiple tasks at once. |
| It requires more time to execute tasks as compared to multiprocessing. | It requires less time for job processing as compared to multitasking. |

### 23. Explain zombie process?
Zombie process, referred to as a defunct process, is basically a process that is terminated or completed but the whole process control block is not cleaned up from the main memory because it still has an entry in the process table to report to its parent process. It does not consume any of the resources and is dead, but it still exists. It also shows that resources are held by process and are not free.

### 24. What is starvation and aging in OS?
- **Starvation**: It is generally a problem that usually occurs when a process has not been able to get the required resources it needs for progress with its execution for a long period of time. In this condition, low priority processes get blocked and only high priority processes proceed towards completion because of which low priority processes suffer from lack of resources. 

- **Aging**: It is a technique that is used to overcome the situation or problem of starvation. It simply increases the priority of processes that wait in the system for resources for a long period of time. It is considered the best technique to resolve the problem of starvation as it adds an aging factor to the priority of each and every request by various processes for resources. It also ensures that low-level queue jobs or processes complete their execution.

### 25. What is a deadlock?  
Deadlock is a situation when two or more processes wait for each other to finish and none of them ever finish.  Consider an example when two trains are coming toward each other on the same track and there is only one track, none of the trains can move once they are in front of each other.  A similar situation occurs in operating systems when there are two or more processes that hold some resources and wait for resources held by other(s).

### 26. What are the four necessary and sufficient conditions behind the deadlock?
These are the 4 conditions:  

1) **Mutual Exclusion Condition**: It specifies that the resources involved are non-sharable.

2) **Hold and Wait Condition**: It specifies that there must be a process that is holding a resource already allocated to it while waiting for additional resource that are currently being held by other processes.

3) **No-Preemptive Condition**: Resources cannot be taken away while they are being used by processes.

4) **Circular Wait Condition**: It is an explanation of the second condition. It specifies that the processes in the system form a circular list or a chain where each process in the chain is waiting for a resource held by next process in the chain.

### 27. What is Banker’s algorithm?
The banker’s algorithm is a resource allocation and deadlock avoidance algorithm that tests for safety by simulating the allocation for predetermined maximum possible amounts of all resources, then makes an “s-state” check to test for possible activities, before deciding whether allocation should be allowed to continue.

### 28. What is Belady’s Anomaly? 
Bélády’s anomaly is an anomaly with some page replacement policies were increasing the number of page frames results in an increase in the number of page faults. It occurs with First in First Out page replacement is used. 

### 29.  What is RAID structure in OS? What are the different levels of RAID configuration?
RAID (Redundant Arrays of Independent Disks) is a method used to store data on Multiple hard disks therefore it is considered as data storage virtualization technology that combines multiple hard disks. It simply balances data protection, system performance, storage space, etc. It is used to improve the overall performance and reliability of data storage. It also increases the storage capacity of the system and its main purpose is to achieve data redundancy to reduce data loss. 

**Different levels of RAID**

- RAID 0 - Stripped Disk Array without fault tolerance

- RAID 1 - Mirroring and duplexing

- RAID 2 - Memory-style error-correcting codes

- RAID 3 - Bit-interleaved Parity

- RAID 4 - Block-interleaved Parity

- RAID 5 - Block-interleaved distributed Parity

- RAID 6 - P+Q Redundancy

### 30. What is fragmentation?  
Processes are stored and remove from memory, which makes free memory space, which is too little to even consider utilizing by different processes.  Suppose, that process is not ready to dispense to memory blocks since its little size and memory hinder consistently stay unused is called fragmentation. This kind of issue occurs during a dynamic memory allotment framework when free blocks are small, so it can’t satisfy any request.

### 31. How many types of fragmentation occur in Operating System?
There are two types of fragmentation:

- **Internal fragmentation**: It is occurred when we deal with the systems that have fixed size allocation units.
- **External fragmentation**: It is occurred when we deal with systems that have variable-size allocation units.

### 32. What is spooling?  
Spooling refers to simultaneous peripheral operations online, spooling refers to putting jobs in a buffer, a special area in memory, or on a disk where a device can access them when it is ready. Spooling is useful because devices access data at different rates.

### 33. What is caching?  
The cache is a smaller and faster memory that stores copies of the data from frequently used main memory locations. There are various different independent caches in a CPU, which store instructions and data. Cache memory is used to reduce the average time to access data from the Main memory. 

### 34. What is the difference between logical address space and physical address space?  
Logical address space specifies the address that is generated by CPU. On the other hand physical address space specifies the address that is seen by the memory unit.

### 35. What do you mean by Semaphore in OS? Why is it used?
Semaphore is a protected variable or abstract data type that is used to lock the resource being used. The value of the semaphore indicates the status of a common resource.

There are two types of semaphore:

- Binary semaphores
- Counting semaphores

### 36. What is a binary Semaphore?
Binary semaphore takes only 0 and 1 as value and used to implement mutual exclusion and synchronize concurrent processes.

### 37. Difference between Binary Semaphore and Mutex?

|Binary Semaphore | Mutex |
|---              | ---   |
| It allows various process threads to get the finite instance of the resource until resources are available. | It allows various process threads to get single shared resource only at a time. |
| Its functions are based upon signaling mechanisms. | Its functions are based upon a locking mechanism. |
| Binary semaphores are much faster as compared to Mutex. | Mutex is slower as compared to binary semaphores |
| It is basically an integer. | It is basically an object. |

### 38. What is Context Switching?
Context switching is basically a process of saving the context of one process and loading the context of another process. It is one of the cost-effective and time-saving measures executed by CPU the because it allows multiple processes to share a single CPU. Therefore, it is considered an important part of a modern OS. This technique is used by OS to switch a process from one state to another i.e., from running state to ready state. It also allows a single CPU to handle and control various different processes or threads without even the need for additional resources.

### 39. What is difference between process and thread?
**Process**: It is basically a program that is currently under execution by one or more threads. It is a very important part of the modern-day OS.

**Thread**: It is a path of execution that is composed of the program counter, thread id, stack, and set of registers within the process.

### 40. What is the difference between preemptive and non-preemptive scheduling?
- In preemptive scheduling, the CPU is allocated to the processes for a limited time whereas, in Non-preemptive scheduling, the CPU is allocated to the process till it terminates or switches to waiting for state. 
 
- The executing process in preemptive scheduling is interrupted in the middle of execution when higher priority one comes whereas, the executing process in non-preemptive scheduling is not interrupted in the middle of execution and waits till its execution. 
 
- In Preemptive Scheduling, there is the overhead of switching the process from the ready state to running state, vise-verse, and maintaining the ready queue. Whereas the case of non-preemptive scheduling has no overhead of switching the process from running state to ready state. 
 
- In preemptive scheduling, if a high-priority process frequently arrives in the ready queue then the process with low priority has to wait for a long, and it may have to starve. On the other hand, in the non-preemptive scheduling, if CPU is allocated to the process having a larger burst time then the processes with small burst time may have to starve. 
 
- Preemptive scheduling attains flexibility by allowing the critical processes to access the CPU as they arrive into the ready queue, no matter what process is executing currently. Non-preemptive scheduling is called rigid as even if a critical process enters the ready queue the process running CPU is not disturbed. 
 
- Preemptive Scheduling has to maintain the integrity of shared data that’s why it is cost associative it which is not the case with Non-preemptive Scheduling.

### 41.What is the zombie process?
A process that has finished the execution but still has an entry in the process table to report to its parent process is known as a zombie process. A child process always first becomes a zombie before being removed from the process table. The parent process reads the exit status of the child process which reaps off the child process entry from the process table.

### 42. What are orphan processes?
A process whose parent process no more exists i.e. either finished or terminated without waiting for its child process to terminate is called an orphan process.

### 43. What is PCB?
The process control block (PCB) is a block that is used to track the process’s execution status. A process control block (PCB) contains information about the process, i.e. registers, quantum, priority, etc. The process table is an array of PCBs, that means logically contains a PCB for all of the current processes in the system.

### 44. What is Cycle Stealing?
**Cycle Stealing** is a method of accessing computer memory (RAM) or bus without interfering with the   CPU. It is similar to direct memory access (DMA) for allowing I/O controllers to read or write RAM without CPU intervention.

### 45. What is a dispatcher?
The dispatcher is the module that gives process control over the CPU after it has been selected by the short-term scheduler. This function involves the following:

- Switching context
- Switching to user mode
- Jumping to the proper location in the user program to restart that program

### 46. What are the goals of CPU scheduling?
- Max CPU utilization [Keep CPU as busy as possible]Fair allocation of CPU.
- Max throughput [Number of processes that complete their execution per time unit]
- Min turnaround time [Time taken by a process to finish execution]
- Min waiting time [Time a process waits in ready queue]
- Min response time [Time when a process produces first response]

### 47. What is a critical section?
When more than one processes access the same code segment that segment is known as the critical section. The critical section contains shared variables or resources which are needed to be synchronized to maintain consistency of data variables. In simple terms, a critical section is a group of instructions/statements or regions of code that need to be executed atomically such as accessing a resource (file, input or output port, global data, etc.).

### 48. Write the name of synchronization techniques?
- Mutexes
- Condition variables
- Semaphores
- File locks

### 49. What are the advantages of semaphores?
- They are machine-independent.
- Easy to implement.
- Correctness is easy to determine.
- Can have many different critical sections with different semaphores.
- Semaphores acquire many resources simultaneously.
- No waste of resources due to busy waiting.

### 50. What are the drawbacks of semaphores?
- Priority Inversion is a big limitation of semaphores.
- Their use is not enforced but is by convention only.
- The programmer has to keep track of all calls to wait and to signal the semaphore.
- With improper use, a process may block indefinitely. Such a situation is called Deadlock.

### 51. Define the term Bounded waiting?
A system is said to follow bounded waiting conditions if a process wants to enter into a critical section will enter in some finite time.

### 52. What are the solutions to the critical section problem?
There are three solutions to the critical section problem:

- Software solutions
- Hardware solutions
- Semaphores

### 53. Why do we use precedence graphs?
A precedence graph is a directed acyclic graph that is used to show the execution level of several processes in the operating system. It has the following properties also:

- Nodes of graphs correspond to individual statements of program code.
- An edge between two nodes represents the execution order.
- A directed edge from node A to node B shows that statement A executes first and then Statement B executes

### 54. Explain the resource allocation graph?
The resource allocation graph is explained to us what is the state of the system in terms of processes and resources. One of the advantages of having a diagram is, sometimes it is possible to see a deadlock directly by using RAG.

### 55. How to recover from a deadlock?
We can recover from a deadlock by following methods:

1. Process termination
- Abort all the deadlock processes
- Abort one process at a time until the deadlock is eliminated
2. Resource preemption
- Rollback
- Selecting a victim

### 56. What is seek time?
Seek Time: Seek time is the time taken to locate the disk arm to a specified track where the data is to be read or write. So the disk scheduling algorithm that gives minimum average seek time is better.

### 57. Producer Consumer Problem (aka Bounded-buffer Problem) ?
**Problem Statement** – We have a buffer of fixed size. A producer can produce an item and can place in the buffer. A consumer can pick items and can consume them. We need to ensure that when a producer is placing an item in the buffer, then at the same time consumer should not consume any item.

To solve this problem, we need two counting semaphores – Full and Empty. “Full” keeps track of number of items in the buffer at any given time and “Empty” keeps track of number of unoccupied slots.

**Initialization of semaphores** –  
~~~
mutex = 1  

Full = 0 // Initially, all slots are empty. Thus full slots are 0  

Empty = n // All slots are empty initially 
~~~

**Solution for Producer** –  
~~~
do{

//produce an item

wait(empty);
wait(mutex);

//place in buffer

signal(mutex);
signal(full);

}while(true)
~~~

When producer produces an item then the value of “empty” is reduced by 1 because one slot will be filled now. The value of mutex is also reduced to prevent consumer to access the buffer. Now, the producer has placed the item and thus the value of “full” is increased by 1. The value of mutex is also increased by 1 because the task of producer has been completed and consumer can access the buffer. 

**Solution for Consumer** – 
~~~
do{

wait(full);
wait(mutex);

// remove item from buffer

signal(mutex);
signal(empty);

// consumes item

}while(true)
~~~

As the consumer is removing an item from buffer, therefore the value of “full” is reduced by 1 and the value is mutex is also reduced so that the producer cannot access the buffer at this moment. Now, the consumer has consumed the item, thus increasing the value of “empty” by 1. The value of mutex is also increased so that producer can access the buffer now. 

### 58. Reader/Writer problem

- There is a shared piece of text and 2 types of process in accessing this text reader and writer.
- There is no clash between reader and reader therefore when a reader is inside critical section then other readers may get an only entry but when a write is inside critical section then neither the reader nor the writer gets an entry.
- Hence in the solution, we have used 3 resources a semaphore mutex for synchronization between writer and reader-writer.
- While read count (RC) is a simple integer variable which is given security by reading semaphore which works for synchronization between reader- reader.

Writer
~~~  
while(1)
{  
	wait(mutex)
	write
	signal(mutex)
}
~~~

Reader
~~~
while(1)
{  
	wait(Read)
	Rc = Rc + 1;
	
	if(Rc = = 1)
	{  
		wait (mutex)
	} 
	
	wait(Read)
	Rc = Rc-1
	
	if(Rc ==0)
	{ 
		signal(mutex)
	}
	
	signal(Read)
}
~~~

### 59. Dining Philosopher problem

**Problem Statement** – The Dining Philosopher Problem states that K philosophers seated around a circular table with one chopstick between each pair of philosophers. There is one chopstick between each philosopher. A philosopher may eat if he can pickup the two chopsticks adjacent to him. One chopstick may be picked up by any one of its adjacent followers but not both. This problem involves the allocation of limited resources to a group of processes in a deadlock-free and starvation-free manner.

~~~
Pi()
while(1)
{ 
	think
	P(s)
	Wait (chop-stick[i])
	Wait (chop-stick(i+1 % 5)
	V(s)
	Eat
	Signal( chop-stick[i]
	Signal (chop-stick(i+1 % 5)
	Think
}
~~~

### 60. The Critical Section Problem:
1. Critical Section – The portion of the code in the program where shared variables are accessed and/or updated.
2. Remainder Section – The remaining portion of the program excluding the Critical Section.
3. Race around Condition – The final output of the code depends on the order in which the variables are accessed. This is termed as the race around condition.  

A solution for the critical section problem must satisfy the following three conditions:

1. Mutual Exclusion – If a process Pi is executing in its critical section, then no other process is allowed to enter into the critical section.
2. Progress – If no process is executing in the critical section, then the decision of a process to enter a critical section cannot be made by any other process that is executing in its remainder section. The selection of the process cannot be postponed indefinitely.
3. Bounded Waiting – There exists a bound on the number of times other processes can enter into the critical section after a process has made request to access the critical section and before the requested is granted.

### 61. What is Page Fault:
A page fault is a type of interrupt, raised by the hardware when a running program accesses a memory page that is mapped into the virtual address space, but not loaded in physical memory.

### 62. Page Replacement Algorithms:
1. **First In First Out (FIFO)** –  

This is the simplest page replacement algorithm. In this algorithm, operating system keeps track of all pages in the memory in a queue, oldest page is in the front of the queue. When a page needs to be replaced page in the front of the queue is selected for removal.
For example, consider page reference string 1, 3, 0, 3, 5, 6 and 3 page slots. Initially, all slots are empty, so when 1, 3, 0 came they are allocated to the empty slots —> 3 Page Faults. When 3 comes, it is already in  memory so —> 0 Page Faults. Then 5 comes, it is not available in  memory so it replaces the oldest page slot i.e 1. —> 1 Page Fault. Finally, 6 comes,  it is also not available in memory so it replaces the oldest page slot i.e 3 —> 1 Page Fault.

2. **Optimal Page replacement** –  

In this algorithm, pages are replaced which are not used for the longest duration of time in the future.

Let us consider page reference string 7 0 1 2 0 3 0 4 2 3 0 3 2 and 4 page slots. Initially, all slots are empty, so when 7 0 1 2 are allocated to the empty slots —> 4 Page faults. 0 is already there so —> 0 Page fault. When 3 came it will take the place of 7 because it is not used for the longest duration of time in the future.—> 1 Page fault. 0 is already there so —> 0 Page fault. 4 will takes place of 1 —> 1 Page Fault. Now for the further page reference string —> 0 Page fault because they are already available in the memory.

Optimal page replacement is perfect, but not possible in practice as an operating system cannot know future requests. The use of Optimal Page replacement is to set up a benchmark so that other replacement algorithms can be analyzed against it.

3. **Least Recently Used (LRU)** –  

In this algorithm, the page will be replaced which is least recently used.
Let say the page reference string 7 0 1 2 0 3 0 4 2 3 0 3 2 . Initially, we have 4-page slots empty. Initially, all slots are empty, so when 7 0 1 2 are allocated to the empty slots —> 4 Page faults. 0 is already their so —> 0 Page fault. When 3 came it will take the place of 7 because it is least recently used —> 1 Page fault. 0 is already in memory so —> 0 Page fault. 4 will takes place of 1 —> 1 Page Fault. Now for the further page reference string —> 0 Page fault because they are already available in the memory.

### 63. Disk Scheduling:
Disk scheduling is done by operating systems to schedule I/O requests arriving for disk. Disk scheduling is also known as I/O scheduling.

1. **Seek Time**: Seek time is the time taken to locate the disk arm to a specified track where the data is to be read or write.
2. **Rotational Latency**: Rotational Latency is the time taken by the desired sector of disk to rotate into a position so that it can access the read/write heads.
3. **Transfer Time**: Transfer time is the time to transfer the data. It depends on the rotating speed of the disk and number of bytes to be transferred.
4. **Disk Access Time**: Seek Time + Rotational Latency + Transfer Time
5. **Disk Response Time**: Response Time is the average of time spent by a request waiting to perform its I/O operation. Average Response time is the response time of the all requests.

### 64. Disk Scheduling Algorithms:
1. **FCFS**: FCFS is the simplest of all the Disk Scheduling Algorithms. In FCFS, the requests are addressed in the order they arrive in the disk queue.
2. **SSTF**: In SSTF (Shortest Seek Time First), requests having shortest seek time are executed first. So, the seek time of every request is calculated in advance in a queue and then they are scheduled according to their calculated seek time. As a result, the request near the disk arm will get executed first.
3. **SCAN**: In SCAN algorithm the disk arm moves into a particular direction and services the requests coming in its path and after reaching the end of the disk, it reverses its direction and again services the request arriving in its path. So, this algorithm works like an elevator and hence also known as elevator algorithm.
4. **CSCAN**: In SCAN algorithm, the disk arm again scans the path that has been scanned, after reversing its direction. So, it may be possible that too many requests are waiting at the other end or there may be zero or few requests pending at the scanned area.
5. **LOOK**: It is similar to the SCAN disk scheduling algorithm except for the difference that the disk arm in spite of going to the end of the disk goes only to the last request to be serviced in front of the head and then reverses its direction from there only. Thus it prevents the extra delay which occurred due to unnecessary traversal to the end of the disk.
6. **CLOOK**: As LOOK is similar to SCAN algorithm, in a similar way, CLOOK is similar to CSCAN disk scheduling algorithm. In CLOOK, the disk arm in spite of going to the end goes only to the last request to be serviced in front of the head and then from there goes to the other end’s last request. Thus, it also prevents the extra delay which occurred due to unnecessary traversal to the end of the disk.

## References:
- https://www.geeksforgeeks.org/
- https://www.interviewbit.com/
- https://www.javatpoint.com/
