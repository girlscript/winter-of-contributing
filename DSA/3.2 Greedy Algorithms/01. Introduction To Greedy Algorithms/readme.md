# Greedy Algorithm

## What is Greedy Algorithm?

A greedy algorithm is an approach for solving a problem by selecting the best option available at the moment. It doesn't worry whether the current best result will bring the overall optimal result.

The algorithm never reverses the earlier decision even if the choice is wrong. It works in a top-down approach.

This algorithm may not produce the best result for all the problems. It's because it always goes for the local best choice to produce the global best result.

However, we can determine if the algorithm can be used with any problem if the problem has the following properties:
* Greedy Choice Property
* Optimal Substructure

## Greedy Choice Property:
If an optimal solution to the problem can be found by choosing the best choice at each step without reconsidering the previous steps once chosen, the problem can be solved using a greedy approach. This property is called greedy choice property.

## Optimal Substructure
If the optimal overall solution to the problem corresponds to the optimal solution to its subproblems, then the problem can be solved using a greedy approach. This property is called optimal substructure.

## What Are Greedy Algorithms Used For?
Greedy algorithms are quick. A lot faster than the two other alternatives (Divide & Conquer, and Dynamic Programming). They’re used because they’re fast.
Sometimes, Greedy algorithms give the global optimal solution everytime. Some of these algorithms are:
* Dijkstra’s Algorithm
* Kruskal’s algorithm
* Prim’s algorithm
* Huffman trees

## Example

 <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/d/da/Greedy_algorithm_36_cents.svg/420px-Greedy_algorithm_36_cents.svg.png">

 Greedy algorithms determine the minimum number of coins to give while making change. These are the steps most people would take to emulate a greedy algorithm to represent 36 cents using only coins with values {1, 5, 10, 20}. The coin of the highest value, less than the remaining change owed, is the local optimum.

## Proof of correctness

Greedy algorithms are often used to solve optimization problems: you want to maximize or minimize some quantity subject to a set of constraints. For example:<br>
- Maximize the number of events you can attend, but do not attend any overlapping events.<br>
- Minimize the number of jumps required to cross the pond, but do not fall into the water.<br>
- Minimize the cost of all edges chosen, but do not disconnect the graph.
When you are trying to write a proof that shows that a greedy algorithm is correct, you often need<br>
to show two different results. First, you need to show that your algorithm produces a feasible solution, a solution to the problem that obeys the constraints. For example, when discussing the<br>
frog jumping problem, we needed to prove that the series of jumps the greedy algorithm found actually gave a legal path across the pond. Next, you need to show that your algorithm produces an<br>
optimal solution, a solution that maximizes or minimizes the appropriate quantity.
It's usually much easier to prove feasibility than to prove optimality, and in lecture we've routinely<br>
hand-waved our way through this. When writing up a formal proof of correctness, though, you shouldn't skip this step.<br> Typically, these proofs work by induction, showing that at each step, the
greedy choice does not violate the constraints and that the algorithm terminates with a correct solution.<br>
As an example, here is a formal proof of feasibility for Prim's algorithm. In lecture, we saw that
the general idea behind the proof was to show that the set T of edges added to the MST so far
form a spanning tree of the set S. The proof uses the fact that a tree is a connected graph where
|E| = |V| – 1 to show that after we add an edge crossing the cut (S, V – S), the set T must be a tree
because it has the right number of edges and is still connected.
Here is how we might formalize this:<br>
2 / 4
#### Theorem (Feasibility): Prim's algorithm returns a spanning tree.<br>
#### Proof:
We prove by induction that after k edges are added to T, that T forms a spanning tree of S. As a base case, after 0 edges are added, T is empty and S is the single node {v}.<br> Also, the set S is connected by the edges in T because v is connected to itself by any set of edges. Therefore, T connects S and satisfies |T| = |S| - 1, so T is a spanning tree of S.<br> For the inductive step, assume the claim is true after k edges are added. If at this point S = V, the algorithm terminates, and since T is a spanning tree of S, T is a spanning tree of V, as required. Otherwise, S ≠ V, so the algorithm proceeds for another iteration. Prim's algorithm selects an edge (u, v) crossing the cut (S, V – S) and then sets S to S { ∪ v} and T to T {( ∪ u, v)} Since at the start of the iteration T was a spanning tree for S, it connected all nodes in S. Therefore, all nodes in S are still connected to one another, and v is now connected to all nodes in S { ∪ v}, since it is connected to u and u is connected to all nodes in S. Finally, note |T {( ∪ u, v}| = |S| – 1 + 1 = |S| = |S { ∪ v}| – 1, so T {( ∪ u, v)} is a spanning tree for S { ∪ v}, so the claim holds after k + 1 edges have been added.
