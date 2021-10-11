# Page Replacement Algorithms

In order to eliminate the drawbacks of contiguous memory allocation techniques, a memory management scheme called ***Paging*** is used.
This permits the physical address space (PAS) of a process to be non–contiguous.

- ### Page Reference String :
  Set of successive unique pages referred in a given list of Logical Addresses.
  
- ### Page Fault : 
  A page fault happens when a running program accesses a memory page that is mapped into the virtual address space, but not loaded in physical memory.

Since actual physical memory space is much smaller than virtual memory, page faults tend to happen. Triggered by a case of page fault, Operating System replaces one of the existing pages with the currently referenced page.

Choosing a victim page for replacement is a critical and timal decision. It needs to consider factor like how frequently the page is used & whether a page has been modified (*Dirty*) or not, in order to minimise page fault rate.

## Page Replacement Algorithms

### 1. First In First Out (FIFO)

- Based on arrival time.
- Selects the page that has been in memory the longest
- Example :-
  - **Reference String**:
  **7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2, 1, 2, 0, 1, 7, 0, 1**
  - **No. of Page Frames : 3**
  
  |   |   |   |   |H|   |   |   |   |   |   |H|H|   |   |H|H|   |   |   |
  |:-:|:-:|:-:|:-:|-|:-:|:-:|:-:|:-:|:-:|:-:|-|-|:-:|:-:|-|-|:-:|:-:|:-:|
  | 7 | 7 | 7 | 2 |-| 2 | 2 | 4 | 4 | 4 | 0 |-|-| 0 | 0 |-|-| 7 | 7 | 7 |
  |   | 0 | 0 | 0 |-| 3 | 3 | 3 | 2 | 2 | 2 |-|-| 1 | 1 |-|-| 1 | 0 | 0 |
  |   |   | 1 | 1 |-| 1 | 0 | 0 | 0 | 3 | 3 |-|-| 3 | 2 |-|-| 2 | 2 | 1 |

  - **No. of Page Faults : 15**

  Let us consider the same reference string but with :
  - **No. of Page Frames : 4**
  
  |   |   |   |   |H|   |H|   |H|H|   |H|H|   |   |H|H|   |H|H|
  |:-:|:-:|:-:|:-:|-|:-:|-|:-:|-|-|:-:|-|-|:-:|:-:|-|-|:-:|-|-|
  | 7 | 7 | 7 | 7 |-| 3 |-| 3 |-|-| 3 |-|-| 3 | 2 |-|-| 2 |-|-|
  |   | 0 | 0 | 0 |-| 0 |-| 4 |-|-| 4 |-|-| 4 | 4 |-|-| 7 |-|-|
  |   |   | 1 | 1 |-| 1 |-| 1 |-|-| 0 |-|-| 0 | 0 |-|-| 0 |-|-|
  |   |   |   | 2 |-| 2 |-| 2 |-|-| 2 |-|-| 1 | 1 |-|-| 1 |-|-|

  - **No. of Page Faults : 10**

### Belady's Anomaly
With increase in number of page frames to a process, the page fault rate also increases sometimes (in contrast to usual inversely proportional behaviour). Its called Belady's Anomaly.

- FIFO based policies suffer from "Belady's Anomaly"

### 2. Least Recently Used (LRU)

- Replaces the page in memory that has not been referenced for the longest time
- Does NOT suffer from Belady's Anomaly

  - **Reference String**:
  **7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2, 1, 2, 0, 1, 7, 0, 1**
  - **No. of Page Frames : 3**
  
  |   |   |   |   |H|   |H|   |   |   |   |H|H|   |H|   |H|   |H|H|
  |:-:|:-:|:-:|:-:|-|:-:|-|:-:|:-:|:-:|:-:|-|-|:-:|-|:-:|-|:-:|-|-|
  | 7 | 7 | 7 | 2 |-| 2 |-| 4 | 4 | 4 | 0 |-|-| 1 |-| 1 |-| 1 |-|-|
  |   | 0 | 0 | 0 |-| 0 |-| 0 | 0 | 3 | 3 |-|-| 3 |-| 0 |-| 0 |-|-|
  |   |   | 1 | 1 |-| 3 |-| 3 | 2 | 2 | 2 |-|-| 2 |-| 2 |-| 7 |-|-|

  - **No. of Page Faults : 12**

### 3. Optimal Page Replacement
  
- Keeps track of & predicts how frequently a page is going to be used & hence replace those pages which are NOT going to be used frequently.
- Least number of page faults among all algorithms
- Not implementable practically in real life scenario.
- Used mostly for benchmarking efficiency of other algorithms.
- Doesn't suffer from Belady's Anomaly

  - **Reference String**:
  **7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2, 1, 2, 0, 1, 7, 0, 1**
  - **No. of Page Frames : 3**
  
  
  |   |   |   |   |H|   |H|   |H|H|   |H|H|   |H|H|H|   |H|H|
  |:-:|:-:|:-:|:-:|-|:-:|-|:-:|-|-|:-:|-|-|:-:|-|-|-|:-:|-|-|
  | 7 | 7 | 7 | 2 |-| 2 |-| 2 |-|-| 2 |-|-| 2 |-|-|-| 7 |-|-|
  |   | 0 | 0 | 0 |-| 0 |-| 4 |-|-| 0 |-|-| 0 |-|-|-| 0 |-|-|
  |   |   | 1 | 1 |-| 3 |-| 3 |-|-| 3 |-|-| 1 |-|-|-| 1 |-|-|

  - **No. of Page Faults : 9**
  
### Output :

![Program Output Screenshot](https://user-images.githubusercontent.com/63473496/136800142-385ac77e-ca19-4da0-80ed-f12519150c9e.png)
