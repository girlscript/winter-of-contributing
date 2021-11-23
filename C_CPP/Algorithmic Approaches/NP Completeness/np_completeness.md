<h1>
<p align='center'> NP Completeness</p> </h1>
If a polynomial time algorithm exists for any of these problems, all problems in NP would be polynomial time solvable. These problems are called NP-complete. The phenomenon of NP-completeness is important for both theoretical and practical reasons. <br><br><br>

<p align='center'>
<img src="https://www.tutorialspoint.com/design_and_analysis_of_algorithms/images/np_hard.jpg"></p>

## What is NP?
NP is the set of alll decision problems (question with yes-or-no answer) for which the 'yes'-answers can be verified in polynomial time (O(n^k) where n is the problem size and k is a constant) by a deterministic turing machine. Polynomial time is sometimes used as the definition of fast or quickly.

## What is P?
P is the set of all decision problems which can be solved in polynomial time by a deterministic turing machine. Since it can solve in polynomial time, it can also be verified in polynomial time. Therefore P is a subset of NP.

## What is of NP-Completeness ?
A problem B that is in NP is also in NP-Complete if and only if every other problem in NP can be quickly (i.e. in polynomial time) transformed into x.

In other words a language B is NP-complete if it satisfies two conditions:-
1) B is in NP
2) Every problem in NP is reducible to B.
If a language satisfies the second property, but not necessarily the first one, the language B is known as NP-Hard
Informally, a search problem B is NP-Hard if there exists some NP-Complete problem A that Turing reduces to B.
The problem in NP-Hard cannot be solved in polynomial time, until P = NP. 

NP-complete problems are the hardest problems in the NP set. A decision problem L is NP-complete if: 
1) L is in NP  
2) Every problem in NP is reducible to L in polynomial time
If a problem is proved to be NPC, there is no need to waste time on trying to find an efficient algorithm for it.
Instead, we can focus on design approximation algorithm.

* <h3>NP-Complete Problems</h3>
Following are some NP-Complete problems, for which no polynomial time algorithm is known.
1) Determining whether a graph has a Hamiltonian cycle
2) Determining whether a Boolean formula is satisfiable, etc.

## What is NP-Hard?
NP-Hard are problems that are at least as hard as the hardest problems in NP. NP-Complete problems are also NP-Hard. However not all NP-hard problems are NP (or even a decision problem), despite having 'NP' as a prefix. That is the NP in NP-hard does not mean 'non-deterministic polynomial time.' 

* <h3>NP-Hard Problems</h3>
The following problems are NP-Hard
1) The circuit-satisfiability problem
2) Set Cover
3) Vertex Cover
4) Travelling Salesman Problem
