# Recursion using Tower of Hanoi
### Recursion is the process when function calls itself reapeatedly, until a given condition (called base case) is met. It can be called as a function of functions.
With the help of recursion, we can break or problem into smaller parts, and ease of solving complex problems increases.

Recursion involves 4 steps-
```
1. Expectation
2. Faith
3. Faith to expectation
4. Base case
```

* Expectation – This refers to the expectation that the problem statement has from our solution, the work that we need to do.
* Faith – This forms a very crucial step for our recursion. We believe that a smaller part of the problem will be automatically done/solved for us by recursion (by calling the same function, but passing smaller parameter to it), and we don’t need to worry about the logic or what is happening behind the scenes. We need to keep this faith.
* Faith to expectation – Now this step refers to how we can use our faith to fulfill the expectation of our problem. From our faith, we get a smaller part of our problem solved, and then we try to figure out how to use it to solve the bigger problem.
* Base case – The base case is the point in our function, at which we need to stop the function from calling itself recursively, by returning the answer or simply returning. This is required, otherwise our function goes on calling itself infinitely many times, and this gives error.

Armed with this knowledge of recursion, let’s understand this extremely well-known and enlightening problem - Tower of Hanoi.
```
1. There are 3 towers. Tower 1 has N disks, where N is a positive number. Tower 2 and 3 are empty.
2. The disks are increasingly placed in terms of size such that the smallest disk is on top and largest disk is at bottom.
3. You are required to print the instructions to move the disks from tower 1 to tower 2 using tower 3 following the rules
    - move 1 disk at a time.
    - never place a smaller disk under a larger disk.
    - you can only move a disk at the top.
```

Tower 1 is the source, tower 2 is the destination, and tower 3 is the helper.

Expectation is to move all the disks from tower 1 to tower 2, with the help of tower 3, in minimum number of moves, and following all the rules.
<br> Our faith is that our function knows how to shift top N-1 discs from one tower to another tower.<br> 
Faith to expectation is met by-
* move N-1 rods from source to helper (using destination tower as helper)
* move the last (N) rod from source to destination and print this instruction
* move those N-1 rods from helper to destination (using source as helper).

<br>Now at some point, N will become 0. No discs will be left in the source. When N=0, ie, there are no discs, we need to simply return without doing/moving/printing anything. This becomes our base case.

> The program involves 2 recursive calls, and the base case is when N=0, return without doing anything.

Thus, when our program wants to move N discs, it will first move N-1 discs. For this, it will move N-2 discs, for which it will move N-3 discs, and so on. At some point, it will have to move 0 discs, and here, function needs to return without doing anything.
