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

### 4. What is a socket?
A socket is used to make connection between two applications. Endpoints of the connection are called socket.

### 5. What is kernel? Define monolithic kernel?
- Kernel is the core and most important part of a computer operating system which provides basic services for all parts of the OS.
- A monolithic kernel is a kernel which includes all operating system code is in single executable image.

### 6. What do you mean by a process?
An executing program is known as process. There are two types of processes:

- Operating System Processes
- User Processes

### 7. What are the different states of a process?
Different states of process:

- **New Process** : In this state, a process is just created.
- **Running Process** : In this state, the CPU starts working on the process’s instructions.
- **Waiting Process** : In this state, the process cannot run because it just waits for some event to occur
- **Ready Process** : In this state, the process has all resources available that are required to run but it waits to get assigned to a processor because CPUs are not working currently on instructions passed by the process.
- **Terminated Process** : In this state, the process is completed I.e., the process has finished execution.

### 8. What is the difference between process and program?
A program while running or executing is known as a process.

### 9. What is the use of paging in operating system?
Paging is used to solve the external fragmentation problem in operating system. This technique ensures that the data you need is available as quickly as possible.

### 10. Explain demand paging?
Demand paging is a method that loads pages into memory on demand. This method is mostly used in virtual memory. In this, a page is only brought into memory when a location on that particular page is referenced during execution. The following steps are generally followed:

- Attempt to access the page.
- If the page is valid (in memory) then continue processing instructions as normal.
- If a page is invalid then a page-fault trap occurs.
- Check if the memory reference is a valid reference to a location on secondary memory. If not, the process is terminated (illegal memory access). Otherwise, we have to page in the required page.
- Schedule disk operation to read the desired page into main memory.
- Restart the instruction that was interrupted by the operating system trap

### 11. What is virtual memory?
Virtual memory is a very useful memory management technique which enables processes to execute outside of memory. This technique is especially used when an executing program cannot fit in the physical memory. It can be managed in two common ways by OS i.e., paging and segmentation. It acts as temporary storage that can be used along with RAM for computer processes.

### 12. What is thrashing?
Thrashing is a phenomenon in virtual memory scheme when the processor spends most of its time in swapping pages, rather than executing instructions.

### 13. What do you mean by process synchronization?
Process synchronization is basically a way to coordinate processes that use shared resources or data. It is very much essential to ensure synchronized execution of cooperating processes so that will maintain data consistency. Its main purpose is to share resources without any interference using mutual exclusion. There are two types of process synchronization:

- Independent Process
- Cooperative Process
### 14. What is different between main memory and secondary memory?
- Main memory: Main memory in a computer is RAM (Random Access Memory). It is also known as primary memory or read-write memory or internal memory. The programs and data that the CPU requires during the execution of a program are stored in this memory.
- Secondary memory: Secondary memory in a computer are storage devices that can store data and programs. It is also known as external memory or additional memory or backup memory or auxiliary memory. Such storage devices are capable of storing high-volume data. Storage devices can be hard drives, USB flash drives, CDs, etc. 

### 15. What is thread in OS?
Thread is a path of execution that is composed of a program counter, thread id, stack, and set of registers within the process. It is a basic unit of CPU utilization that makes communication more effective and efficient, enables utilization of multiprocessor architectures to a greater scale and greater efficiency, and reduces the time required in context switching. It simply provides a way to improve and increase the performance of applications through parallelism. Threads are sometimes called **lightweight processes** because they have their own stack but can access shared data. 

Multiple threads running in a process share: Address space, Heap, Static data, Code segments, File descriptors, Global variables, Child processes, Pending alarms, Signals, and signal handlers. 

Each thread has its own: Program counter, Registers, Stack, and State.

<!-- ### 16.  -->
