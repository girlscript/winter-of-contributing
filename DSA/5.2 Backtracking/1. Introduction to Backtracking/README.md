# Introduction to Backtracking

A backtracking algorithm is a problem-solving algorithm that uses a brute force approach for finding the desired output.
Its a systematic way of trying out different sequences of decisions until we find one that "works." 
We can say that the backtracking is needed to find all possible combination to solve an optimization problem.

- The term backtracking suggests that if the current solution is not suitable, then backtrack and try other solutions. Thus, recursion is used in this approach. 
- It is used to solve problems that have multiple solutions.


## State Space Tree:

A space state tree is a tree that represents all the possible states (solution or nonsolution) of the problem from the root as an initial state to the leaf as a terminal state.

![space-tree](https://user-images.githubusercontent.com/70436834/143566976-410157f7-e52a-49dd-8557-2bf75f336d3b.png)

- Each non-leaf node in a tree is a parent of one or more other nodes (its children)
- Each node in the tree, other than the root, has exactly one parent

## Algorithm:

![algo](https://user-images.githubusercontent.com/70436834/143566992-f017ec07-02d4-4302-a10b-6a8c85bfd03b.png)

## Example:

**Problem**: You want to find all the possible ways of arranging 2 boys and 1 girl on 3 benches. 
**Constraint**: Girl should not be on the middle bench.
**Solution**: There are a total of 3! = 6 possibilities. We will try all the possibilities and get the possible solutions. We recursively try all the possibilities.

All the possibilities are:

![all-poss](https://user-images.githubusercontent.com/70436834/143567019-bb20efaa-19ed-4562-871d-7248c78e8ac8.png)

The following state space tree shows the possible solutions.

![space-sol](https://user-images.githubusercontent.com/70436834/143567031-d98dcf8a-b680-4926-af64-8c9e0592edf0.png)


## Backtracking Applications:

- Solving Sudoku
- m-Coloring Problem
- To find all Hamiltonian Paths present in a graph.
- To solve the N Queen problem.
- Maze solving problem.
- Solving cryptarithmetic Puzzles

##
#### References:
https://www.javatpoint.com/backtracking-introduction
https://www.programiz.com/dsa/backtracking-algorithm
