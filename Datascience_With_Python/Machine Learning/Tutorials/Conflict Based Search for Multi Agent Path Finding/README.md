<h1 align="left">Conflict based search for optimal multi-agent pathfinding</h1>


## Brief Summary:
A brief summary of what this entails:
* What is Multi-agent path finding?
* Sample code for MAPF
* Output of the code
* What is Conflict based search?
* Algorithm of Conflict based search

# Description:
## **Multi-Agent path finding:**
> Multi-agent path finding or in short refered to as MAPF is a problem for finding paths which are collision or obstacle free for a given set of agents.

## **Conflict based search:**

>Conflict based search or in short refered to as CBS is a multi-agent path finding algorithm.  CBS is a continuum of coupled and decoupled approaches.The uniqueness of CBS is that all low-level
searches are performed as single-agent searches. The performance of CBS depends on the structure of the problem.

# Practical applications of Multi-agent path finding(MAPF):
* Robotics.
* Video games.
* Vehicle routing/ Traffic Management.
* Warehouse management.
* Product assembly


# Purpose:
* To plan paths for multiple agents.
* To follow the key constraint that the agents do not collide with each other.
* To create a generalization of the single-agent path finding problem for k > 1 agents.
* To make sure that the cost of path is minimum.


# Advantages:

## MAPF(MULTI AGENT PATH FINDING):
* Agents operate in a known environment.
* It has Unique initial and final state.

## CONFLICT BASED SEARCH for MAPF:
* CBS breaks problems into large number of constrained single agent path finding problem to solve MAPF.
* The primary goal of CBS is to find paths that no longer have the constraints it previously chose. 
* Traditional search algorithms scale poorly in the number of agents.

## Example for Conflict Based Search: 
<img align = left>![image](https://user-images.githubusercontent.com/66793093/139477204-2b29892e-40da-4422-b62b-ed0ef524c20a.png)</img>
<img align = right>![image](https://user-images.githubusercontent.com/66793093/139477400-cefaeb8a-6a8a-4812-a829-95c406cb868a.png)</img>

The mice needs to get to their respective piece of cheese (Figure 1). The corresponding CT is shown in Figure 2.

* The root (R1) contains an empty set of constraints and the low level returns path P1 = <S1, A, C, G1> for agent a1 and path P2 = <S2, B, C, G2> for agent a2. Thus, the total cost of R1 is 6. R1 is then inserted into OPEN list and will be expanded next.

* When validating the two-agents solution , a conflict <a1, a2, C, 2> is found. As a result, R1 is declared as non-goal and it is split to generate two children to resolve the conflict . The left child U adds the constraint <a1, C, 2> while the right child V adds the constraint <a2, C, 2>.

* The low-level search is now invoked for U to find an optimal path for agent a1 that also satisfies the new constraint. For U, a1 must wait one time step either at S1 (or at A1) and the path < S1, A1, A1, C, G1 > is returned for a1. The path for a2, < S2, B1, C, G2 > remains unchanged for U. The total cost for the left child is now 7.

* Similarly, the right child V is generated, also with cost 7. Both children are added to OPEN list. In the final step U is chosen for expansion, and the underlying paths are validated. Since no conflicts exist, U is declared as a goal node and its solution is returned. 


# References:
* https://arxiv.org/pdf/2109.08299v1.pdf
* https://www.ijcai.org/proceedings/2019/0063.pdf
* https://www.ijcai.org/Proceedings/15/Papers/110.pdf
* http://idm-lab.org/bib/abstracts/papers/icaps18a.pdf
* https://doi.org/10.1016/j.artint.2014.11.006
