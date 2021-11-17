# NP Completeness
**NP completeness** is Computational Complexity Theory. NP Complete problem are set of decision problem. This solution can be verified in *polynomial time*. It is solved in polynomial time on **non-deterministic** Turing Machine. If problem **P** is **NP** is **NP-Complete** if other problem in **NP** can be transformed into **P** in *polynomial time.* This topic is for researching.
## Polynomial-Time Reductions
- If **L1 ≤P L2** and **L2 ∈ P,** then **L1 ∈ P**
- If **L1≤P L2** and **L2∈ NP,** then **L1∈ NP**




| Polynomial Time     | Eponetial Time (NP)       |
| --------------------| --------------------------|
| Header              | Title              |
| Linear Search -O(n)	|O/I Knap Sock -O(2n)|
|Binary Search- O(log(n))|	Travling SO- O(2n)|
|Insertion sort- O(n2)|	Sum of Subset- O(2n)|
|Merge Sort- O(n log n)|	Graph Coloring- O(2n)|
|Matrix Maltiplication- O(n3)|	Hamintoliyan Cycle- O(2n)  |   

-----------------------------------------
## NP Hard 
- **L** is **NP-Hard** if for all **L ∈ NP** and **L ≤PL** is *polynomial time* **NP** problem in solvable in polynomial time. **NP** problem solvable in polynomial time (Lucky algorithm).
- A language **L** is called **NP-hard** if for every **L' ∈ NP**, we have **L' ≤P L.**
- A language in **L** is called **NP-complete** if **L** is **NP-hard** and **L ∈ NP.**
- The class **NPC** is the set of **NP-complete** problems.


## NP Complete

- **L** is **N** complete if **L ∈ NP** and **L** is *NP-Hard* if any NP-Complete problem is solvable in *Polynomial Time*, Then every *NP-Complete* is also solvable ***Polynomial Time.***
- If a problem is **NP-complete,** then under the assumption that **P ≠ NP,** there cannot be an efficient algorithm for it.
- In a sense, **NP-complete** problems are the hardest problems in **NP**.
- All known NP-complete problems areenormously hard to solve:

      - All known algorithms for NP-complete problems run in worst-case exponential time
      - Most algorithms for NP-complete problems are infeasible for reasonably-sized inputs.

--------------------------------------------
## Consequences of solution
### **P=NP**
>- **P=NP** could have stunning practical consequence if the proof leads to efficient methods for solving some important problem in **NP**
>- The potential consequences,  both positive or negative arise since various *NP-complete* problems are fundamental in many fields.
>- Proof is not lead to practical algorithms for *NP Complete* problem.

## **P≠NP**
>- **P≠NP** would piratical Computational benefit of a proof that **P=NP.** 
>-  It can't be solve many problemse efficiently.
>- **P≠NP** still leave open the average-case-complexity of the problem in **NP.*

## Reduction formulla 
![NP-Completeness1](https://user-images.githubusercontent.com/75454756/142078484-b1b0e86d-8c3c-41d9-a6d7-5cf55cf5f169.png)


-------------------

## References:


- [wikipedia]( https://en.wikipedia.org/wiki/NP-completeness#:~:text=In%20computational%20complexity%20theory%2C%20a,by%20trying%20all%20possible%20solutions.)

- [geeksforgeeks](https://www.geeksforgeeks.org/np-completeness-set-1/)

- [MIT OpenCourseWare](https://www.youtube.com/watch?v=moPtwq_cVH8&t=1755s)

