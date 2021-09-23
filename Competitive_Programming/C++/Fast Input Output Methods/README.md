While doing Competitive Programming, you might face a situation where your code would be logically fine and the Time complexity would also look good for the given constraints but still you'll get TLE (Time Limit Execeeded). 

So, What's the PROBLEM?

Normally the input and output methods that we use i.e., cin and cout respectively, for C++ takes a lot of time when considering the constraints of these online Competitive Programming platforms and these can cause TLE when the given input is quite large. You must have came across this statement while doing Competitive Programming:
"Warning: Large I/O data, be careful with certain languages (though most should be OK if the algorithm is well designed)".

So, What's the SOLUTION?

You can use scanf/printf instead of using cin/cout which will consume less time but there's another way to achieve the same results. You just have to include the given two lines in your main() function:

ios_base::sync_with_stdio(false);
cin.tie(NULL);

Remember, these two lines should come before any other code in your main() function.

So, What's the LOGIC behind?

ios_base::sync_with_stdio(false);
This line desynchronize the C C++ standard streams. By default, all standards streams are synchronized which allows us to mix the C and C++ input/output styles. But after including this line, independent buffers are created for the C and C++ which might create some issues but as far as Competitive Programming is concerned they are best to use.

cin.tie(NULL);
This line unties the cin from cout. What does that even mean? By default, cin is tied to cout means that the output would be flushed (i.e., visible on the console) before taking any input from the user but after including this line the flushing part is skipped.

So, Do you have even one example for this situation or it's all in the thoery?

https://www.codechef.com/problems/PRIGAME
https://codeforces.com/contest/1574/problem/C

Try, solving these problems and once you reach to the final optimized algorithm which satisfy the given constraints. Submit them without including those two lines and you'll witness the difference.

For your convinence I'm giving you the solution of the first problem (Codechef Problem) but do try the second one yourself!
https://www.codechef.com/viewsolution/51480675 -> This solution doesn't include those two lines and hence it gives TLE for most of the test cases.
https://www.codechef.com/viewsolution/51480699 -> This solution is exact same as above but it includes those two lines and hence it smoothly pass all the test cases.

PRO TIP: Use "\n" instead of endl because endl is slower than "\n" because it forces a flushing stream, which is usually not necessary.





