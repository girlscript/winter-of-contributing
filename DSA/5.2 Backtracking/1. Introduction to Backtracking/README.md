# Introduction to Backtracking

A backtracking algorithm is a problem-solving algorithm that uses a brute force approach for finding the desired output.

(The Brute force approach tries out all the possible solutions and chooses the desired/best solutions.)

- The term backtracking suggests that if the current solution is not suitable, then backtrack and try other solutions. Thus, recursion is used in this approach. 
- This approach is used to solve problems that have multiple solutions.


## State Space Tree:

A space state tree is a tree representing all the possible states (solution or nonsolution) of the problem from the root as an initial state to the leaf as a terminal state.


<div align="center">
<img src="images\space-tree.png">
</div>


## Algorithm:

<div align="center">
<img src="images\algo.png">
</div>

## Example:

**Problem**: You want to find all the possible ways of arranging 2 boys and 1 girl on 3 benches. 
**Constraint**: Girl should not be on the middle bench.
**Solution**: There are a total of 3! = 6 possibilities. We will try all the possibilities and get the possible solutions. We recursively try all the possibilities.

All the possibilities are:

<div align="center">
<img src="images\all-poss.png">
</div>

The following state space tree shows the possible solutions.

<div align="center">
<img src="images\space-sol.png">
</div>


## Backtracking Applications:

- To find all Hamiltonian Paths present in a graph.
- To solve the N Queen problem.
- Maze solving problem.
- The Knight's tour problem.



##
#### References:
https://www.javatpoint.com/backtracking-introduction