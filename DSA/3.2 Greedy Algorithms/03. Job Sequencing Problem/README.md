# Job Sequencing Problem

It is one of the famous greedy problems. This problem consists of n jobs each associated with a deadline and profit.


## Problem Statement:

In job sequencing problem, the objective is to find a sequence of jobs, which is completed within their deadlines and gives maximum profit.
We will earn profit only when job is completed on or before deadline.


## Points to Remember:

- In this problem we have n jobs j1, j2, … jn each has an associated deadline d1, d2, … dn and profit p1, p2, … pn.

- Profit will only be awarded or earned if the job is completed on or before the deadline.

- We assume that each job takes unit time to complete.

- The objective is to earn maximum profit when only one job can be scheduled or processed at any given time.


## Solution:

**Solution 1:**

A Simple Solution is to generate all subsets of given set of jobs and check individual subset for feasibility of jobs in that subset. Keep track of maximum profit among all feasible subsets. The time complexity of this solution is exponential.

This is a standard Greedy Algorithm problem. Following is algorithm.

- Sort all jobs in decreasing order of profit.

- Initialize the result sequence as first job in sorted jobs.

- Do following for remaining n-1 jobs

	If the current job can fit in the current result sequence without missing the deadline, add current job to the result. Else ignore the current job.


But above solution consumes a lot of time!! Hence go with below approach


**Soluton 2:**

- Let us consider, a set of n given jobs which are associated with deadlines and profit is earned, if a job is completed by its deadline. These jobs need to be ordered in such a way that there is maximum profit.

- It may happen that all of the given jobs may not be completed within their deadlines.

- Assume, deadline of ith job Ji is di and the profit received from this job is pi. Hence, the optimal solution of this algorithm is a feasible solution with maximum profit.

**Thus, D(i)>0 for 1⩽i⩽n**.

Initially, these jobs are ordered according to profit, i.e. **p1⩾p2⩾p3⩾...⩾pn**.

![algo](https://user-images.githubusercontent.com/70436834/143767058-66a468a8-8bc8-4eba-978a-279a87959714.png)



## Analysis:

In this algorithm, we are using two loops, one is within another. Hence, the complexity of this algorithm is **O(n^2)**.


### Example:

Let us consider a set of given jobs as shown in the following table. We have to find a sequence of jobs, which will be completed within their deadlines and will give maximum profit. Each job is associated with a deadline and profit.


![ex-problem](https://user-images.githubusercontent.com/70436834/143767075-bafefae3-02a4-4e0d-9953-1402b1427982.png)


### Solution:


![ex-sol](https://user-images.githubusercontent.com/70436834/143767086-8719183b-04b7-4fa3-99d9-474030bd316a.png)


From this set of jobs, first we select **J2**, as it can be completed within its deadline and contributes maximum profit.

- Next, J1 is selected as it gives more profit compared to J4.
- In the next clock, J4 cannot be selected as its deadline is over, hence J3 is selected as it executes within its deadline.
- The job J5 is discarded as it cannot be executed within its deadline.

Thus, the solution is the sequence of jobs **(J2, J1, J3)**, which are being executed within their deadline and gives maximum profit.

Total profit of this sequence is **100 + 60 + 20 = 180**.



##
#### References:
https://www.kodnest.com/free-online-courses/algorithm-2/lessons/job-sequencing-with-deadlines/
https://www.tutorialspoint.com/design_and_analysis_of_algorithms/design_and_analysis_of_algorithms_job_sequencing_with_deadline.htm
