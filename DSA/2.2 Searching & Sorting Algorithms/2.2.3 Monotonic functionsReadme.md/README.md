## Introduction to Monotonic Functions:

    Functions are known as monotonic if they are either increasing or decreasing in their entire domain->
    
    • increasing if x1 <x2 implies f(x1)≤f(x2)
    • decreasing if x1 <x2 implies f(x1)≥f(x2),
    • If x1 < x2 and F(x1) < F(x2) then function is known as increasing function or strictly increasing function.
    • If x1 < x2 and F(x1) > F(x2) then function is known as decreasing function or strictly decreasing function.
    
    Examples of increasing functions:
    f(x) = 2x + 3, f(x) = log x, f(x) = e^x
   ![image](https://user-images.githubusercontent.com/66017717/136340525-b3d9c138-94f3-415f-9140-5dffd04bd478.png)
   ![image](https://user-images.githubusercontent.com/66017717/136339603-c8a41dc3-c260-4e51-adcf-42c34f73f99d.png)

    Examples of decreasing functions:
    f(x) = e^(-x), f(x) = x3−4x, y = -3x/4 + 7
   ![image](https://user-images.githubusercontent.com/66017717/136342671-3decbc10-cb19-4fc4-a1ba-8ee8beccd38e.png)


## Monotonic functions in Binary Search:
   
    • Binary search only works for searching elements in a sorted array.
    • It works for the reason that array itself is monotonic ( either increasing or decreasing ). 
    • So, if you are a particular position, you can make a definite call whether the answer lies in the left part of the position or the right part of it.
    • It is done by repeatedly dividing the search interval into halves. 
    • Begin with an interval covering the whole sequence, if the value of the search key is less than the item in the middle of the interval(ie the middle element), 
      then search in the left half of the interval otherwise search in the right half. 
    • Repeatedly check until the value is found or you reached the end of interval. 

  Pseudocode for Binary Search:
   
     Step 1: Start
     Step 2: Input Sorted array in "a[]" and element to be searched in "x" and size of array in "size"
     Step 3: Initialize low=0, high=size-1
     Step 4: Repeat until low>=high
        Step 4.1: mid=(low+high)/2
        Step 4.2: If a[mid] is equal to x,
                    then, print index value of mid and Goto step 6
                Else
                    If a[mid]<x
                        low=mid+1 //to move to right part of the array i.e search space reduced to [mid+1, high] 
                    else
                        high=mid-1 //to move to left part of the array i.e search space reduced to [0, mid-1] 
      Step 5: Print x not found in the list
      Stop 6: Stop

      Similar thing can be done with monotonic functions ( monotonically increasing or decreasing ) as well.
      Lets say we have f(x) which increases when x increases.

      So, given a problem of finding x so that f(x) = p, I can do a binary search for x.

      At any instance,
      1. if f(current_position) > p, then I will search for values lower than current_position.
      2. if f(current_position) < p, then I will search for values higher than current_position
      3. if f(current_position) = p, then I have found my answer.


## Monotonic functions in Bisection Method:

![image](https://user-images.githubusercontent.com/66017717/136343665-2a765581-5734-48ab-9605-132b1c22df35.png)


    ⦿ The bisection method is a root-finding method that applies to any continuous functions(monotonic) for which one knows two values with opposite signs. 
    ⦿ The method consists of repeatedly bisecting the interval defined by these values and then selecting the subinterval in which the function changes sign, 
       and therefore must contain a root.
    ⦿ It is a very simple and robust method, but it is also relatively slow. 
    ⦿ Because of this, it is often used to obtain a rough approximation to a solution which is then used as a starting point for more rapidly converging methods.
    ⦿ The method is also called the interval halving method,the binary search method,or the dichotomy method.
    ⦿ The method is applicable for numerically solving the equation f(x) = 0 for the real variable x, 
       where f is a continuous function defined on an interval [a, b] and where f(a) and f(b) have opposite signs. 
    ⦿ In this case a and b are said to bracket a root since, by the intermediate value theorem, 
       the continuous function f must have at least one root in the interval (a, b).

  
    Iterative Steps:
    1. Calculate c, the midpoint of the interval, c = (a + b)/2.
    2. Calculate the function value at the midpoint, f(c).
    3. If convergence is satisfactory (that is, c - a is sufficiently small, or |f(c)| is sufficiently small), return c and stop iterating.
    4. Examine the sign of f(c) and replace either (a, f(a)) or (b, f(b)) with (c, f(c)) so that there is a zero crossing within the new interval.

   Psuedocode for Bisection method:
   
     INPUT: Function f, 
       endpoint values a, b, 
       tolerance TOL, 
       maximum iterations NMAX
     CONDITIONS: a < b, 
            either f(a) < 0 and f(b) > 0 or f(a) > 0 and f(b) < 0
     OUTPUT: value which differs from a root of f(x) = 0 by less than TOL
 
     N ← 1
     while N ≤ NMAX do // limit iterations to prevent infinite loop
       c ← (a + b)/2 // new midpoint
       if f(c) = 0 or (b – a)/2 < TOL then // solution found
        Output(c)
        Stop
       end if
       N ← N + 1 // increment step counter
       if sign(f(c)) = sign(f(a)) 
         then a ← c 
       else
         b ← c // new interval
       end while
     Output("Method failed.") // max number of steps exceeded

   Example:
  
    Suppose that the bisection method is used to find a root of the polynomial.
   ![image](https://user-images.githubusercontent.com/66017717/136345376-e102f292-6940-4913-b14a-6b1d294441d2.png)

    First, two numbers a and b have to be found such that f(a) and f(b) have opposite signs. 
    For the above function, a=1 and b=2 satisfy this criterion, as
   
   ![image](https://user-images.githubusercontent.com/66017717/136345920-b3ee6973-48a3-4231-8de3-0dd48e874bf0.png)
             and
   ![image](https://user-images.githubusercontent.com/66017717/136345977-acf7aea7-5c9a-4b30-995f-70c5eabd858c.png)

    Because the function is continuous, there must be a root within the interval [1, 2].
    In the first iteration, the end points of the interval which brackets the root are a=1 and b=2, so the midpoint is
   ![image](https://user-images.githubusercontent.com/66017717/136346930-a36fcf99-a59f-45db-9231-89e89faa0f56.png)
    
    The function value at the midpoint is.
   ![image](https://user-images.githubusercontent.com/66017717/136346477-94e6d29c-6865-41c9-8d11-d7c086e05063.png)

    Because f(c) is negative, and f(a) is also negative(i.e same sign) therefore value of a is replaced with c
    for the next iteration to ensure that f(a) and f(b) have opposite signs. 
    As this continues, the interval between a and b will become increasingly smaller, converging on the root of the function.
    
    Iteration               a{n}	            b{n}	    c{n}	       f(c{n})
    1	                1	            2	            1.5	              −0.125
    2	                1.5	            2	            1.75	      1.6093750
    3	                1.5	            1.75	    1.625	      0.6660156
    4	                1.5	            1.625	    1.5625	      0.2521973
    5	                1.5	            1.5625	    1.5312500	      0.0591125
    6	                1.5	            1.5312500	    1.5156250	     −0.0340538
    7	                1.5156250	    1.5312500	    1.5234375	      0.0122504
    8	                1.5156250	    1.5234375	    1.5195313	     −0.0109712
    9	                1.5195313	    1.5234375	    1.5214844	      0.0006222
    10	                1.5195313	    1.5214844	    1.5205078	     −0.0051789
    11	                1.5205078	    1.5214844	    1.5209961	     −0.0022794
    12	                1.5209961	    1.5214844	    1.5212402	     −0.0008289
    13	                1.5212402	    1.5214844	    1.5213623	     −0.0001034
    14	                1.5213623	    1.5214844	    1.5214233	      0.0002594
    15	                1.5213623	    1.5214233	    1.5213928	      0.0000780

    After 13 iterations, it becomes apparent that there is a convergence to about 1.521: a root for the polynomial.
    The main motivation to use the bisection method is that over the set of continuous functions, 
    no other method can guarantee to produce an estimate c(n) to the solution c that in the worst case has an
   ![image](https://user-images.githubusercontent.com/66017717/136348388-7438c396-7595-47e4-ab9f-f9190419ffed.png)
       absolute error with less than n(1/2) iterations
       where
   ![image](https://user-images.githubusercontent.com/66017717/136348438-7ea6b4c7-551d-4863-8a62-4aba46110745.png)


