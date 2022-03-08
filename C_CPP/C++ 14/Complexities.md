In general, how can you determine the running time of a piece of code? The answer is that it depends on what kinds of statements are used.

1. Sequence of statements :-

   statement 1;
   statement 2;
   ...
   statement k;

The total time is found by adding the times for all statements:

total time = time(statement 1) + time(statement 2) + ... + time(statement k)

If each statement is "simple" (only involves basic operations) then the time for each
statement is constant and the total time is also constant: O(1). In the following examples, assume the statements are simple unless noted otherwise.

2. if-then-else statements :-
   if (condition) {
   sequence of statements 1
   }
   else {
   sequence of statements 2
   }
   Here, either sequence 1 will execute, or sequence 2 will execute. Therefore, the
   worst-case time is the slowest of the two possibilities: max(time(sequence 1),
   time(sequence 2)). For example, if sequence 1 is O(N) and sequence 2 is O(1) the
   worst-case time for the whole if-then-else statement would be O(N).

3. for loops
   for (i = 0; i < N; i++) {
   sequence of statements
   }
   The loop executes N times, so the sequence of statements also executes N times.
   Since we assume the statements are O(1), the total time for the for loop is N \* O(1),
   which is O(N) overall.
4. Nested loops
   First we'll consider loops where the number of iterations of the inner loop is
   independent of the value of the outer loop's index. For example:
   for (i = 0; i < N; i++) {
   for (j = 0; j < M; j++) {
   sequence of statements
   }
   }
   The outer loop executes N times. Every time the outer loop executes, the inner loop
   executes M times. As a result, the statements in the inner loop execute a total of N

- M times. Thus, the complexity is O(N \* M). In a common special case where the
  stopping condition of the inner loop is j < N instead of j < M (i.e., the inner loop also
  executes N times), the total complexity for the two loops is O(N").
  Now let's consider nested loops where the number of iterations of the inner loop
  depends on the value of the outer loop's index. For example:
  for (i = 0; i < N; i++) {
  for (j = i+1; j < N; j++) {
  sequence of statements
  }
  }
  Now we can't just multiply the number of iterations of the outer loop times the
  number of iterations of the inner loop, because the inner loop has a different
  number of iterations each time. So let's think about how many iterations that inner
  loop has. That information is given in the following table:
  Value of i Number of iterations of inner loop
  0 N
  1 N-1
  2 N-2
  ... ...
  N-2 2
  N-1 1
  So we can see that the total number of times the sequence of statements executes
  is: N + N-1 + N-2 + ... + 3 + 2 + 1. the total is O(N").

5. Statements with function/method calls:
   When a statement involves a function/method call, the complexity of the
   statement includes the complexity of the function/method call. Assume that you
   know that function/method f takes constant time, and that function/method g
   takes time proportional to (linear in) the value of its parameter k. Then the
   statements below have the time complexities indicated.
   f(k); // O(1)
   g(k); // O(k)
   When a loop is involved, the same rule applies. For example:
   for (j = 0; j < N; j++) {
   g(N);
   }
   has complexity (N"). The loop executes N times and each function/method call g(N)
   is complexity O(N)
