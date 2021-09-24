<b>While doing Competitive Programming, you might face a situation where your code would be logically fine and the Time complexity would also look good for the given constraints but still you'll get <i>TLE</i> (Time Limit Execeeded).</b> 
<br>
<h2> What's the PROBLEM?</h2>

Normally the input and output methods that we use i.e., cin and cout respectively, for C++ takes a lot of time when considering the constraints of these online Competitive Programming platforms and these can cause TLE when the given input is quite large. You must have came across this statement while doing Competitive Programming: <br>
<b><i>"Warning: Large I/O data, be careful with certain languages (though most should be OK if the algorithm is well designed)".</b></i>
<br>
<h2> What's the SOLUTION?</h2>

You can use <b>scanf/printf</b> instead of using <b>cin/cout</b> which will consume less time but there's another way to achieve the same results. You just have to include the given two lines in your <b>main()</b> function:

<h3>ios_base::sync_with_stdio(false); <br>
cin.tie(NULL);
</h3>
Remember, these two lines should come before any other code in your main() function.
<br>
<h2> What's the LOGIC behind?</h2>

<b>ios_base::sync_with_stdio(false);</b> <br><br>
This line desynchronize the C C++ standard streams. By default, all standards streams are synchronized which allows us to mix the C and C++ input/output styles. But after including this line, independent buffers are created for the C and C++ which might create some issues but as far as Competitive Programming is concerned they are best to use.

<b>cin.tie(NULL);</b> <br><br>
This line unties the cin from cout. What does that even mean? By default, cin is tied to cout means that the output would be flushed (i.e., visible on the console) before taking any input from the user but after including this line the flushing part is skipped.
<br>
<h2> Do you have even one example for this situation or it's all in the thoery?</h2>

https://www.codechef.com/problems/PRIGAME
<br>
https://codeforces.com/contest/1574/problem/C

Try, solving these problems and once you reach to the final optimized algorithm which satisfy the given constraints. Submit them without including those two lines and you'll witness the difference.

For your convinence I'm giving you the solution of the first problem (Codechef Problem) but do try the second one yourself!
https://www.codechef.com/viewsolution/51480675 -> This solution doesn't include those two lines and hence it gives TLE for most of the test cases. <br>
https://www.codechef.com/viewsolution/51480699 -> This solution is exact same as above but it includes those two lines and hence it smoothly passes all the test cases.
<br><br>
<h3>PRO TIP:</h3> Use "\n" instead of endl because endl is slower than "\n" because it forces a flushing stream, which is usually not necessary.





