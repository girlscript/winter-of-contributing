## Briefly explain the examples of approximation algorithms.

# Vertex cover problem, Travelling salesman problem, Set covering problem.

# LINK FOR THE APPROXIMATION ALGORITHMS :

[ https://drive.google.com/file/d/1GRBmjzjimjVBrWDr1NYz9gG4ohbsiSbW/view?usp=sharing ]

## BRIEF SUMMARY ON THE AUDIO CLIP :

Vertex cover problem , travelling salesman problem and set covering problem all these are NP HARD problem so these is no polynomial time solution to them . However there are few approximate algorithm to them which tend to give us the required solution under few assumptions that needs to be considered.

# 1. VERTEX COVER PROBLEM :

      Approximate algorithm : We have discussed a simple approximate algorithm adapted from  **CLRS book **. It involves choosing any one edge and adding its vertices to the result and removing vertices incident on them and move futher this way unless we cover all edges.
      Time Complexity : O(V+E)
         Since we are visiting every vertex and its child vertices (where vertices and edges are stored in adjacency list) only once.
      Space Complexity : O(V)
          Space required to keep track of visited vertices.

# 2. TRAVELLING SALESMAN PROBLEM :

      Approximate algorithm : We have discussed a  approximate algorithm which work only if the problem instance satisfies **Triangle-Inequality**. This algorithm is based on MST(Minimum spanning tree).
      Time Complexity : O(ElogV)
         Time complexity for building MST using prism algorithm where vertices are stored in adjacency list. Otherwise it would take O(V^2)
      Space Complexity : O(V)
          Space required to keep track of visited vertices.

# 3. SET COVERING PROBLEM :

       Approximate algorithm : We have discussed a **GREEDY** approximate algorithm to it where choosing a particular subset depends on the cost incurred per item.
      Time Complexity : O(logN)
         Where N is the number of elements.
      Space Complexity : O(1)
          No such extra space is required for the algorithm.
