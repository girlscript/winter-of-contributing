# Solving Recurrence Relation Using Substitution Method With Example
> The substitution method for solving recurrences entails two steps.
1) Guess the form of solution.
2) Use mathematical induction to find the constants and show that the solution works.

> The name comes from the substitution of the guessed answer for the function when the
inductive hypothesis is applied to smaller values. This method is powerful, but it obviously
can be applied only in cases when it is easy to guess the form of the answer.

> The substitution method can be used to establish either upper or lower bounds on a recurrence. As an example, let us determine an upper bound on the recurrence.

<br /> 

**Solve the recurrence relation:**
T(n) = 2T($\lfloor n/2 \rfloor$)+n

> **Step1:** Guess the solution of above recurrence is T(n)=O(nlog(n)). Our method is to prove this- **T(n) <= cnlogn**.

> **Step2:** We start by assuming that this is true for $\lfloor n/2 \rfloor$.<br />
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; T $\lfloor n/2 \rfloor$   <= cnlogn <br />
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 
   <= 2cn $\lfloor n/2 \rfloor$ log $\lfloor n/2 \rfloor$ +n <br />
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 
                            <= cn log $\lfloor n/2 \rfloor$ +n <br />
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 
                             = cn log n-cn+n <br />
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 
                             = cn log n-c1*n <= cn log n 
 
> **Step3:** It also requires to show that it is true for boundary. <br />
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  T(n) <= cn log n where n=1; <br />
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  T(1)=1 ->running time constant <br />
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  T(n) <= cn log n  -> T(1) <= c1*log 1 <br />
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  T(1)=0 , It contradicts so n0 $\neq$ 1 <br />



> **Step4:** n0>=2 (holds true) ; n=2 , n=3 <br />
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  T(2) =2T(n/2)+n <br/>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  =2T(1)+2  :- T(1)=1 <br />
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  =2+2=4 <br />
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  T(n)<=cn log n <br />
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  &nbsp;4 <= cn log n <br />
  Any choice of c will be true because 4 <= c2*log 2 <br />
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; **c>=2** <br />
  Any choice of c>=2 & n0>=1 it holds true. <br />
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  T(n)=O(n log n) , hence solution is correct.

<br />

  **Changing Variable**

  > T(n) = 2T( $\sqrt{n}$ ) + logn <br />
    Rename m=logn ; n = $2^m$  <br />
    T($2^m$ ) = 2T($2^m/2$) + mlog2 <br />
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
     = 2T($2^m/2$) + m  &nbsp;&nbsp; :- log 2 = 1 <br />
    Rename T($2^m$) = S(m) <br />
    **S(m) = 2S($m/2$) + m** <br />
    Now change back the variables <br />
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
    m = log n <br />
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
    **O(log n(log(log m)))**

    

