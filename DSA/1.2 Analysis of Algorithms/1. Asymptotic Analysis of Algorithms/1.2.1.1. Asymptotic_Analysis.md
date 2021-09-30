# Asymptotic Analysis of Algorithms


### 🤔 What is Asymptotic Analysis?
Asymptotic Analysis is the general methodolgy for studying how the algorithms perform in terms of their running time and space required. It is used to determine an algorithm's **efficiency**, taking into consideration the best case, average case and the worst case inputs. 
In asymptotic notations, we derive the complexity of algorithms on the basis of size of the input. In simple words, it helps us determine **how the running time (or space) would be affected as the input size goes on increasing**. </br>

Remember: **Time complexity is NOT EQUAL TO running time of the algorithm !**

It is important because: 
- Takes into account **all possible inputs**.
- Allows one to evaluate the efficiency of an algorithm **independently of the hardware (processors, memory,etc) and software (operating system, IDE, etc)** used for testing the algorithm.
- It allows us to **compare** the performances of different algorithms so that we can choose the most efficient one.

The analysis is simplified by getting rid of the details which may be present because of specific implementation and hardware characteristics. 
Constants are ignored, lower order terms are dropped and large values are rounded off.  </br> 
e.g. i) 4n^3 ≈ n^3  ii) n^4 +n^2 +5 ≈ n^4  iii) 1,90,000,102 ≈ 1,90,000,000 </br> 

### Asymptotic Notations:

The limiting behavior of the algorithm is expressed using the following notations: </br>
Consider 2 functions f(n) and g(n) over non-negative integers. Let n be the input size. </br>

**Ο(n)**: (Big-O) Is the **upper bound** of an algorithm's running time and measures how long an algorithm can possibly take to complete a given operation in **worst case**. It denotes 
the **longest amount of time** that the algorithm can take to complete. The time complexity is commonly expressed using big O notation.</br> </br>
We can say that f(n)=O(g(n)) if there exist constants c (c>0) and n0 such that f(n)<= c.g(n) for all values of n>=n0. </br>
<img src="https://user-images.githubusercontent.com/73184612/133728569-778d6caf-fd4f-4324-a132-a9da9ee971ee.jpg" height=200 width=230> </br>
e.g.
- if T(n) = 3n^3 + 2n + 7 , T(n) = O(n^3)
- if f(n)= logn and g(n)= 2nlogn, we can say that f(n) = O(g(n))
- For a polynomial function f(n)= a0 + a1.n + a2.n^2 + a3.n^3 +… + am.n^m  where am>0, **f(n)= O(n^m) and also O(n^(m+k))** where k>=0

---

**Ω(n)**: (Big-Omega) Is the **lower bound** of an algorithm's running time and measures how long an algorithm can possibly take to complete a given operation in **best case**. It denotes 
the **least amount of time** that the algorithm will take to complete.</br></br>
We can say that f(n)=Ω(g(n)) if there exist constants c (c>0) and n0 such that f(n)>= c.g(n) for all values of n>=n0. </br>
<img src="https://user-images.githubusercontent.com/73184612/133729425-be39fafc-6797-4077-9cc9-9338a1a04e0e.jpg" height=200 width=230> </br>
e.g.
- if T(n) = 5n^3 + n  , T(n) = Ω(n)
- if f(n)= n^3 and g(n)= log(logn), we can say that f(n) = Ω(g(n))
- For a polynomial function f(n)= a0 + a1.n + a2.n^2 + a3.n^3 +… + am.n^m  where am>0, **f(n)= Ω(n^m) and also Ω(n^(m-k))** where k>=0
---

**Θ(n)**: (Theta) Is charting both the upper and lower running time boundaries, with the **average case scenario** express as the average between each border. The theta notation bounds a function from above and below, so it defines exact asymptotic behavior.</br>
We can say that f(n)=θ(g(n)) if there exist constants c1, c2 and n0 such that c1.g(n) <= f(n) <= c2.g(n) for all n>=n0. </br>
f(n)=θ(g(n)) if and only if f(n)= O(g(n) and f(n)= Ω(g(n)) for all n > n0. </br>
<img src="https://user-images.githubusercontent.com/73184612/133730353-70e2bad8-fd9b-4427-ac19-60c76bda644f.jpg" height=200 width=230> </br>
e.g.
- if T(n) = 6n +7  , T(n) = θ(n)
- if f(n)= 5n^3 and g(n)= 9n^3, we can say that f(n) = θ(g(n))
- For a polynomial function f(n)= a0 + a1.n + a2.n^2 + a3.n^3 +… + am.n^m  where am>0, **f(n)= θ(n^m)**
---

### Order of growth of functions:

![Runningtime](https://user-images.githubusercontent.com/73184612/133728219-97718a7c-0b75-4f9c-9557-3fc3c92d1ef6.jpg)

### List of some common time complexities ordered by slowest to fastest growing:
| Name | Running time | Example Algorithms |
| ----------- | ----------- | ----------- |
| Constant | O(1) | Finding the median value in a sorted array of numbers, Finding sum of first N natural numbers, Push/Pop operations in stack |
| Log-logarithmic | O(log logn) | |
| Logarithmic | O(log n) | Binary Search, insertion in an AVL tree (average case) |
| Linear | O(n) | Finding the smallest or largest item in an unsorted array, Linear Search | 
| Linearithmic | O(n log n) | Merge sort, Heap sort, Quick sort (best case) | 
| Quadratic | O(n^2) | Bubble sort, Selection sort, Traversal of 2D array | 
| Cubic | O(n^3) | Naive multiplication of two n×n matrices, Calculating partial correlation | 
| Exponential | O(2^n) | Traveling salesman problem using dynamic programming, Matrix chain multiplication with brute-force search | 
| Factorial | O(n!) |Traveling salesman problem with brute-force search |

Note: 
- Constant time complexity means that the running time is independent of the input size. It always remains the same, no matter how large or small the input is.
- For the logarithmic terms, the base of the logarithm doesn’t matter; changing bases is the equivalent of multiplying by a constant, which doesn’t change the order of growth.
- All exponential functions belong to the same order of growth regardless of the base of the exponent.
---

### Comparison of functions:
Many of the relational properties of real numbers apply to asymptotic comparisons as well. 

| Property | Description (with e.g.) | Holds for Notations
| --------- | -------- | --------- |
| Transitivity | If g is upperbound of f, and h is upperbound of g then h is upperbound of f. f(n) = O(g(n)) and g(n) = O(h(n)), then f(n) = O(h(n)) | O (Big O), Ω (Big Omega), Θ (Theta), o (small o), ω (small omega) |
| Reflexivity | Function f is an upperbound/lowerbound of itself. f(n) = O(f(n)), f(n) = Ω(f(n)) | O (Big O), Ω (Big Omega), Θ (Theta) |
| Symmetry | f(n) = θ(g(n)) if and only if g(n) = θ(f(n)) | Only for θ (theta) |
| Transpose Symmetry | f(n) = O(g(n)) if and only if g(n) = Ω(f(n)), f(n) = o(g(n)) if and only if g(n) = ω(f(n)) | O (Big O), Ω (Big Omega), o (small o), ω (small omega) |
| Trichotomy | For any two real numbers a and b, exactly one of the following must hold true: a < b, a = b, or a > b | Does not hold for asymptotic notations |

Because of the properties that hold for asymptotic notations, one can draw an analogy between the asymptotic comparison of two functions f and g and the comparison of two real numbers a and b:
- f(n) = O(g(n))  -->    a <= b
- f(n) = Ω(g(n))  -->    a >= b
- f(n) = θ(g(n))  -->    a = b
- f(n) = o(g(n))  -->    a < b
- f(n) = ω(g(n))  -->    a > b

</br>
</br>
</br>
References and image sources: </br>
https://www.geeksforgeeks.org/analysis-algorithms-big-o-analysis/
https://www.cse.iitd.ac.in/~mausam/courses/col106/autumn2017/lectures/02-asymptotic.pdf </br>
https://en.wikipedia.org/wiki/Time_complexity </br>
https://www.bigocheatsheet.com/ </br>
http://staff.ustc.edu.cn/~csli/graduate/algorithms/book6/chap02.htm
