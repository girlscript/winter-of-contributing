###Greedy Algorithm:-###

A greedy algorithm is an algorithmic strategy that picks the best solution at the moment without regard for consequences. It makes the best optimal choice at each small stage with the goal of this eventually leading to a globally optimum solution.It picks the best immediate output, but does not consider the big picture, hence it is considered greedy.


##Types of Problems:-##
1)Minimization Problem: Getting a solution to a problem is easy, given that all the conditions are met. However, when this problem demands a minimum result, it is then called a Minimization Problem.
2)Maximization Problem: A problem that demands the maximum result is known as the maximization problem.
3)Optimization Problem: A problem is called an optimization problem when it requires either minimum or maximum results.

##Types of Solutions:-##
1)Feasible Solution: Now, when a problem arises, we have many plausible solutions to this problem. Yet, taking into consideration the condition set on that problem, we choose solutions that satisfy the given condition. Such solutions that help us get results meeting the given condition is called a Feasible Solution.
2)Optimal Solution: A solution is called optimal when it is already feasible and achieves the objective of the problem; the best result. This objective could either be the minimum or maximum result. The point here to be noticed is that any problem will only have one optimal solution.

##Some of the standard Greedy Algorithms are as follows:-##
*#Activity Selection Problem#
In this problem we are given a set of activities, along with the starting and finishing time of each activity, find the maximum number of activities performed by a single person assuming that a person can only work on a single activity at a time.

*#Graph Coloring Problem#
Graph coloring (also called vertex coloring) is a way of coloring a graph’s vertices such that no two adjacent vertices share the same color. This post will discuss a greedy algorithm for graph coloring and minimize the total number of colors used.

*#Job Sequencing Problem with Deadlines#
In this problem we are given a set of tasks with deadlines and total profit earned on completing a task, find maximum profit earned by executing the tasks within the specified deadlines. Assume that a task takes one unit of time to execute, and it can’t execute beyond its deadline. Also, only a single task will be executed at a time.

*#Find minimum platforms needed to avoid delay in the train arrival#
In this problem we are given a schedule containing the arrival and departure time of trains in a station, find the minimum number of platforms needed to avoid delay in any train’s arrival.

*#Huffman Coding Compression Algorithm#
Huffman coding (also known as Huffman Encoding) is an algorithm for doing data compression, and it forms the basic idea behind file compression. This post talks about the fixed-length and variable-length encoding, uniquely decodable codes, prefix rules, and Huffman Tree construction.

*#Single-Source Shortest Paths — Dijkstra’s Algorithm#
In this problem we are given a source vertex `s` from a set of vertices `V` in a weighted graph where all its edge weights `w(u, v)` are non-negative, find the shortest path weights `d(s, v)` from source `s` for all vertices `v` present in the graph.

*#Kruskal’s Algorithm for finding Minimum Spanning Tree#
In this problem we are given an undirected, connected and weighted graph, construct a minimum spanning tree out of it using Kruskal’s Algorithm.

*#Shortest Superstring Problem#
In this problem we are given a list of strings where no string is a substring of another, find the shortest string that contains each string in the list as a substring.


##Greedy Algorithm Applications:-##
Though greedy algorithms don’t provide correct solution in some cases, it is known that this algorithm works for the majority of problems. However, greedy algorithms are fast and efficient which is why we find it’s application in many other most commonly used algorithms such as:

1)Dijkstra’s Algorithm: This algorithm is the most famous graph traveral one that is used for finding the shortest path between nodes in a graph.
2)Minimal Spanning Tree (MST): This algorithm is widely used in Cluster Analysis, Handwriting recognition and Image segmentation.
3)Huffman Coding: This is the most common algorithm in the field of data compression. It analyzes a given message and based on the frequencies of the characters present in the message, a variable-length code for each symbol is assigned.


##References:-##
https://www.geeksforgeeks.org/greedy-algorithms/
https://medium.com/techie-delight/top-7-greedy-algorithm-problems-3885feaf9430
https://www.interviewbit.com/courses/programming/topics/greedy-algorithm/