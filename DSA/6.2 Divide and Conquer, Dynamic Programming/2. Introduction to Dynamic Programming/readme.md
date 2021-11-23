# Introduction to Dynamic Programming

## Dynamic Programming

Dynamic programming is a technique that breaks the problems into sub-problems, and saves the result for future purposes so that we do not need to compute the result again. The subproblems are optimized to optimize the overall solution is known as optimal substructure property. The main use of dynamic programming is to solve optimization problems. Here, optimization problems mean that when we are trying to find out the minimum or the maximum solution of a problem. The dynamic programming guarantees to find the optimal solution of a problem if the solution exists.
The definition of dynamic programming says that it is a technique for solving a complex problem by first breaking into a collection of simpler subproblems, solving each subproblem just once, and then storing their solutions to avoid repetitive computations.

## How does the dynamic programming algorithm work?

* It breaks down the complex problem into simpler subproblems.
* It finds the optimal solution to these sub-problems.
* It stores the results of subproblems (memoization). The process of storing the results of subproblems is known as memorization.
* It reuses them so that same sub-problem is calculated more than once.
* Finally, calculate the result of the complex problem.

## Approaches of dynamic programming:

* Top-down approach
* Bottom-up approach

## Top-down approach
The top-down approach follows the memorization technique, while bottom-up approach follows the tabulation method. Here memorization is equal to the sum of recursion and caching. Recursion means calling the function itself, while caching means storing the intermediate results.

## Bottom-up approach
The bottom-up approach is also one of the techniques which can be used to implement the dynamic programming. It uses the tabulation technique to implement the dynamic programming approach. It solves the same kind of problems but it removes the recursion. If we remove the recursion, there is no stack overflow issue and no overhead of the recursive functions. In this tabulation technique, we solve the problems and store the results in a matrix.
