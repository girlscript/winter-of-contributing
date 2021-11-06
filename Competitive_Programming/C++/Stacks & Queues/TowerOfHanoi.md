# Tower of Hanoi

## Problem

Given 3 rods and 'N' number of disks. The objective of the puzzle is to shift the entire stack of 'N' disks from one rod to another rod following three given rules:

1. Only one disk can be moved at a time.
2. Only the uppermost disk from one stack can be moved on to the top of another stack or an empty rod.
3. Larger disks cannot be placed on the top of smaller disks.

The puzzle starts with disks sorted in ascending order of size from top to bottom.

## Approach

To solve this problem, a recursive aproach using three **stacks** is adopted.

To move 'N' disks from one rod to another, minimum **2^𝑁−1** steps will be required. Auxilliary space used is only the middle rod.

Consider N = 3. The entire stack is present in the first rod.

1. The smallest uppermost disk is shifted from rod 1 to 3.

2. The next uppermost disk from rod 1 is shifted to rod 2.

3. The smallest disk placed on rod 3 is shifted back on to the top of rod 2.

4. Now the largest disk 3 is shifted from rod 1 to the destination rod 3.

5. The smallest uppermost disk from rod 2 is shifted to rod 1 .

6. Now the only disk in rod 2 is easily put onto rod 3.

7. Finally, the smallest disk from rod 1 is put in rod 3.

Here an example GIF is shown with 4 disks (N = 4). It displays all the steps to follow to take the stack of disks from first rod to the third.

<img src= "https://www.hackerearth.com/blog/wp-content/uploads/2016/12/Tower-of-hanoi.gif">

*Picture Credit: HackerEarth*

## Algorithm

Consider function: `Disks(int n, Tower origin, Tower destination, Tower buffer)`

1. If n <= 0
2. Then, return.
3. Else move top n - 1 disks from origin to buffer, using destination as a buffer.
4. Move top from origin to destination.
5. Move top n - 1 disks from buffer to destination, using origin as a buffer.

## Code

```C++
#include <iostream> 
#include <string>
using namespace std; 
  
void TowerOfHanoi(int n, string from_tower, string to_tower, string aux_tower)  
{  
    if (n == 1)  
    {  
    cout << "Move disk 1 from rod " << from_tower <<  " to rod " << to_tower<<endl;  
    return;  
    }  
    TowerOfHanoi(n - 1, from_tower, aux_tower, to_tower);  
    cout << "Move disk " << n << " from rod " << from_tower << " to rod " << to_tower << endl;  
    TowerOfHanoi(n - 1, aux_tower, to_tower, from_tower);  
}  
  

int main()  
{  
    int n = 3; // Number of disks  
    TowerOfHanoi(n, "Start", "End", "Mid");  
    return 0;  
}  
```

## Output

```md
Move disk 1 from rod Start to rod End
Move disk 2 from rod Start to rod Mid
Move disk 1 from rod End to rod Mid
Move disk 3 from rod Start to rod End
Move disk 1 from rod Mid to rod Start
Move disk 2 from rod Mid to rod End
Move disk 1 from rod Start to rod End
```

## Complexity Analysis

* Time Complexity: O(2^n)
* Space Complexity: O(n)
