## Greedy Algorithms

We say that an algorithm is **greed** if it makes its decisions based only on what is best from the point of view of ‘local considerations’, with no concern about how the decision might affect the overall picture. The general idea is to start with an approximation, and then refine it in a series of steps. The algorithm is greedy in the sense that the decision at each step is based only on what is best for that next step, and does not consider how that will affect the quality of the final overall solution.

The two basic properties of optimal Greedy algorithms are:
1. Greedy choice property
2. Optimal substructure

### Greedy choice property

This property says that the globally optimal solution can be obtained by making a locally optimal solution (Greedy). The choice made by a Greedy algorithm may depend on earlier choices but not on the future. It iteratively makes one Greedy choice after another and reduces the given problem to a smaller one.

### Optimal substructure
A problem exhibits optimal substructure if an optimal solution to the problem contains optimal solutions to the subproblems. That means we can solve subproblems and build up the solutions to solve larger problems.

### Greedy Applications
* Sorting: Selection sort, Topological sort

* Priority Queues: Heap sort

* Huffman coding compression algorithm

* Prim’s and Kruskal’s algorithms

* Shortest path in Weighted Graph [Dijkstra’s]

* Coin change problem

* Fractional Knapsack problem

* Disjoint sets-UNION by size and UNION by height (or rank)

* Job scheduling algorithm

* Greedy techniques can be used as an approximation algorithm for complex problems

### Greedy Algorithm Advantages

Greedy algorithms have several advantages over other algorithmic approaches:

* **Simplicity:** Greedy algorithms are often easier to describe and code up than other algorithms.

* **Efficiency:** Greedy algorithms can often be implemented more efficiently than other algorithms.

### Greedy Algorithm Disadvantages

Greedy algorithms have some drawbacks:

* **Hard to design:** Once you have found the right greedy approach, designing greedy algorithms can be easy. However, finding the right approach can be hard.

* **Hard to verify:** Showing a greedy algorithm is correct often requires a nuanced argument.

### Example

For better understanding let us go through an example.

Given an array *F* with size *n*. Assume the array content *F[i]* indicates the length of the *ith* file and we want to merge all these files into one single file. Check whether the following algorithm gives the best solution for this problem or not?

**Algorithm:** Merge the files contiguously. That means select the first two files and merge them. Then select the output of the previous merge and merge with the third file, and keep going.

**Note:** Given two files A and B with sizes m and n, the complexity of merging is O(m + n).

**Solution:** This algorithm will not produce the optimal solution. For a counter example, let us consider the following file sizes array.

<p align="center"> F = {10,5,100,50,20,15} </p>

As per the above algorithm, we need to merge the first two files (10 and 5 size files), and as a result we get the following list of files. In the list below, 15 indicates the cost of merging two files with sizes 10 and 5.

<p align="center"> {15,100,50,20,15} </p>

Similarly, merging 15 with the next file 100 produces: **{115,50,20,15}**. For the subsequent steps the list becomes:

<p align="center"> {165,20,15}, {185,15} </p>

Finally,

<p align="center"> {200} </p>

The total cost of merging = Cost of all merging operations = 15 + 115 + 165 + 185 + 200 = 680.
To see whether the above result is optimal or not, consider the order: {5,10,15,20,50,100}. For this example, following the same approach, the total cost of merging = 15 + 30 + 50 + 100 + 200 = 395. So, the given algorithm is not giving the best (optimal) solution.

In the above problem, what is the best way to merge all the files into a single file?

**Solution:** Using the Greedy algorithm we can reduce the total time for merging the given files. Let us consider the following algorithm.

**Algorithm:**

 1. Store file sizes in a priority queue. The key of elements are file lengths.
 
 2. Repeat the following until there is only one file:
   
     a. Extract two smallest elements X and Y.
        
     b. Merge X and Y and insert this new file in the priority queue.
     
To check the above algorithm, let us trace it with the previous example. The given array is:

<p align="center"> F = {10,5,100,50,20,15} </p>

As per the above algorithm, after sorting the list it becomes: {5,10,15,20,50,100}. We need to merge the two smallest files (5 and 10 size files) and as a result we get the following list of files. In the list below, 15 indicates the cost of merging two files with sizes 10 and 5.

<p align="center"> {15,15,20,50,100} </p>

Similarly, merging the two smallest elements (15 and 15) produces: {20,30,50,100}. For the subsequent steps the list becomes:

<p align="center"> {50,50,100} // merging 20 and 30 </p>
  
<p align="center"> {100,100} // merging 20 and 30 </p>

Finally, 

<p align="center"> {200} </p>

The total cost of merging = Cost of all merging operations = 15 + 30 + 50 + 100 + 200 = 395. So, this algorithm is producing the optimal solution for this merging problem.

Time Complexity: O(nlogn) time using heaps to find best merging pattern plus the optimal cost of merging the files.
