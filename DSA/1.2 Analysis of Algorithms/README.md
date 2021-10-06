# ANLAYSIS OF ALGORITHM

Algorithm analysis is an important part of computational complexity theory, which provides theoretical estimation for the required resources of an algorithm to solve a specific computational problem. Most algorithms are designed to work with inputs of arbitrary length. Analysis of algorithms is the determination of the amount of time and space resources required to execute it.

<img src="https://lastmomenttuitions.com/wp-content/uploads/2019/08/AOA.jpg" width="500" height="300">
Image Reference:- https://lastmomenttuitions.com/course/analysis-of-algorithm/


Usually, the efficiency or running time of an algorithm is stated as a function relating the input length to the number of steps, known as **time complexity**, or volume of memory, known as **space complexity**.

## THE NEED FOR ANALYSIS

Algorithms are often quite different from one another, though the objective of these algorithms are the same. For example, we know that a set of numbers can be sorted using different algorithms. Number of comparisons performed by one algorithm may vary with others for the same input. Hence, time complexity of those algorithms may differ. At the same time, we need to calculate the memory space required by each algorithm.

Analysis of algorithm is the process of analyzing the problem-solving capability of the algorithm in terms of the time and size required (the size of memory for storage while implementation). However, the main concern of analysis of algorithms is the required time or performance. Generally, we perform the following types of analysis:-

* **Worst Case :-** The maximum number of steps taken on any instance of size **a**.
* **Best Case :-** The minimum number of steps taken on any instance of size **a**.
* **Average case :-** An average number of steps taken on any instance of size **a**.
* **Amortized :-** A sequence of operations applied to the input of size **a** averaged over time.

# METHODOLOGY OF ANALYSIS
To measure resource consumption of an algorithm, different strategies are used.

* **Asymptotic Analysis :-**
  
  The asymptotic behavior of a function **f(n)** refers to the growth of **f(n)** as **n** gets large. 
  
  We typically ignore small values of **n**, since we are usually interested in estimating how slow the program will be on large inputs.
  
  A good rule of thumb is that the slower the asymptotic growth rate, the better the algorithm. Though it’s not always true.

  For example, a linear algorithm  ![](http://www.sciweavers.org/upload/Tex2Img_1632299111/render.png)  is always asymptotically better than a quadratic one,  ![](http://www.sciweavers.org/upload/Tex2Img_1632299209/render.png) .
  
* **Solving Recurrence Equations :-**  

  A recurrence is an equation or inequality that describes a function in terms of its value on smaller inputs. Recurrences are generally used in divide-and-conquer paradigm.
  
  Let us consider **T(n)** to be the running time on a problem of size **n**.
  
  If the problem size is small enough, say **n < c** where **c** is a constant, the straightforward solution takes constant time, which is written as **θ(1)**. If the division of the problem yields a number of sub-problems with size   ![](http://www.sciweavers.org/upload/Tex2Img_1632300145/render.png).
                                                                       
  To solve the problem, the required time is **a.T(n/b)**. If we consider the time required for division is **D(n)** and the time required for combining the results of sub-problems is **C(n)**, the recurrence relation can be represented as −

     ![](http://www.sciweavers.org/upload/Tex2Img_1632302119/render.png)
  
  A recurrence relation can be solved using the following methods −
  
  * **Substitution Method:-**  In this method, we guess a bound and using mathematical induction we prove that our assumption was correct.
  *  **Recursion Tree Method:-** In this method, a recurrence tree is formed where each node represents the cost.
  *  **Master’s Theorem:-** This is another important technique to find the complexity of a recurrence relation.
  
## Amortized Analysis

Amortized analysis is generally used for certain algorithms where a sequence of similar operations are performed.
* Amortized analysis provides a bound on the actual cost of the entire sequence, instead of bounding the cost of sequence of operations separately.
* Amortized analysis differs from average-case analysis; probability is not involved in amortized analysis. Amortized analysis guarantees the average performance of each operation in the worst case.

It is not just a tool for analysis, it’s a way of thinking about the design, since designing and analysis are closely related.

## Aggregate Method

The aggregate method gives a global view of a problem. In this method, if **n** operations takes worst-case time **T(n)** in total. Then the amortized cost of each operation is **T(n)/n**. Though different operations may take different time, in this method varying cost is neglected.

## Dynamic Table

If the allocated space for the table is not enough, we must copy the table into larger size table. Similarly, if large number of members are erased from the table, it is a good idea to reallocate the table with a smaller size.

Using amortized analysis, we can show that the amortized cost of insertion and deletion is constant and unused space in a dynamic table never exceeds a constant fraction of the total space.

# ASYMPTOTIC NOTATIONS

Execution time of an algorithm depends on the instruction set, processor speed, disk I/O speed, etc. Hence, we estimate the efficiency of an algorithm asymptotically.

Time function of an algorithm is represented by **T(n)**, where **n** is the input size.

Three notations are used to calculate the running time complexity of an algorithm:

* **Big-oh notation:-** Big-oh is the formal method of expressing the upper bound of an algorithm's running time. It is the measure of the longest amount of time. The function f (n) = O (g (n)) [read as "f of n is big-oh of g of n"] if and only if exist positive constant c and such that
  ![](http://www.sciweavers.org/upload/Tex2Img_1632303318/render.png) for ![](http://www.sciweavers.org/upload/Tex2Img_1632303383/render.png) in all case
  
  Hence, function g(n) is an upper bound for function f(n), as g(n) grows faster than f(n)
  
  ![](https://static.javatpoint.com/tutorial/daa/images/daa-asymptotic-analysis-of-algorithm.png)

* **Omega () Notation:-** The function f(n) = Ω(g(n)) [read as "f of n is omega of g of n"] if and only if there exists positive constant c and ![](http://www.sciweavers.org/upload/Tex2Img_1632303654/render.png) such that
![](http://www.sciweavers.org/upload/Tex2Img_1632303751/render.png) for all n, ![](http://www.sciweavers.org/upload/Tex2Img_1632303983/render.png)

  ![](https://static.javatpoint.com/tutorial/daa/images/daa-asymptotic-analysis-of-algorithm2.png)

* **Theta (θ):-**  The function f (n) = θ (g (n)) [read as "f is the theta of g of n"] if and only if there exists positive constant k1, k2 and k0 such that
   
   ![](http://www.sciweavers.org/upload/Tex2Img_1632304447/render.png) for all n, ![](http://www.sciweavers.org/upload/Tex2Img_1632303983/render.png)
  
   ![](https://static.javatpoint.com/tutorial/daa/images/daa-asymptotic-analysis-of-algorithm3.png)
   
The Theta Notation is more precise than both the big-oh and Omega notation. The function f(n) = θ(g(n)) if g(n) is both an upper and lower bound.
