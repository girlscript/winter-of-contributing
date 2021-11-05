<h1 align="center">📝NP-Completeness</h1>
<p><b>NP-complete problem</b>, any of a class of computational problems for which no efficient solution algorithm has been found. Many significant computer-science problems belong to this class—e.g., the traveling salesman problem, satisfiability problems, and graph-covering problems.</p>
<p>A problem is called <b>NP (nondeterministic polynomial)</b> if its solution can be guessed and verified in polynomial time; nondeterministic means that no particular rule is followed to make the guess. If a problem is NP and all other NP problems are polynomial-time reducible to it, the problem is NP-complete.</p>
<div align="center">
    <img alt="NP" src="https://upload.wikimedia.org/wikipedia/commons/thumb/a/a0/P_np_np-complete_np-hard.svg/450px-P_np_np-complete_np-hard.svg.png">
</div>
*<b><i>Source:</i></b> https://www.geeksforgeeks.org/np-completeness-set-1/
<h2>What are NP, P, NP-complete and NP-Hard problems?</h2>
<p><b>P</b> is set of problems that can be solved by a deterministic Turing machine in Polynomial time.</p>
<p><b>NP</b> is set of decision problems that can be solved by a Non-deterministic Turing Machine in Polynomial time. P is subset of NP (any problem that can be solved by deterministic machine in polynomial time can also be solved by non-deterministic machine in polynomial time).
Informally, NP is set of decision problems which can be solved by a polynomial time via a “Lucky Algorithm”, a magical algorithm that always makes a right guess among the given set of choices.</p>
<p><b>NP-complete</b> problems are the hardest problems in NP set.  A decision problem L is NP-complete if:</p>
<ol type="1">
  <li>L is in NP (Any given solution for NP-complete problems can be verified quickly, but there is no efficient known solution).</li>
  <li>Every problem in NP is reducible to L in polynomial time (Reduction is defined below).</li>
</ol>
<h3>A problem is NP-Hard if it follows property 2 mentioned above, doesn’t need to follow property 1. Therefore, NP-Complete set is also a subset of NP-Hard set.</h3>
<div align="center">
    <img width=500 alt="NP-hard" src="https://www.baeldung.com/wp-content/uploads/sites/4/2020/03/P-NP-NP_Hard-NP-Complete-1-1-1024x783.png">
</div>
*<b><i>Source:</i></b> https://www.baeldung.com/cs/p-np-np-complete-np-hard
<h4>Decision vs Optimization Problems</h4>
<p>NP-completeness applies to the realm of decision problems. It was set up this way because it’s easier to compare the difficulty of decision problems than that of optimization problems.   In reality, though, being able to solve a decision problem in polynomial time will often permit us to solve the corresponding optimization problem in polynomial time (using a polynomial number of calls to the decision problem). So, discussing the difficulty of decision problems is often really equivalent to discussing the difficulty of optimization problems.</p>
<h4>What is Reduction?</h4>
<p>The class of NP-complete problems consists of a set of decision problems (languages) (a subset of the class NP) that no one knows how to solve efficiently, but if there were a polynomial time solution for even a single NP-complete problem, then every problem in NP would be solvable in polynomial time.</p>
<div align="center">
    <img width=700 alt="Reduction" src="https://images.downey.io/diagrams/3SAT-to-IndependentSet-1.png">
</div>
*<b><i>Source:</i></b>https://downey.io/notes/omscs/cs6515/np-reduction-steps/
<h4>How to prove that a given problem is NP complete?</h4>
<p>From the definition of NP-complete, it appears impossible to prove that a problem L is NP-Complete.  By definition, it requires us to that show every problem in NP is polynomial time reducible to L.   Fortunately, there is an alternate way to prove it.   The idea is to take a known NP-Complete problem and reduce it to L.  If polynomial time reduction is possible, we can prove that L is NP-Complete by transitivity of reduction (If a NP-Complete problem is reducible to L in polynomial time, then all problems are reducible to L in polynomial time).</p>

