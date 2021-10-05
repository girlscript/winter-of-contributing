<h1>Lexicographically smallest and the largest anagrams of S1 such that it contains the string S2 as a substring</h1>
<p>Given two strings <b>S1</b> and <b>S2</b>, find the lexicographically smallest and the largest anagrams of <b>S1</b> such that it contains the string <b>S2</b> as a substring.</p>
<h2>Example:</h2>
<pre>
<code>
Let suppose our
input is: S1 = “hheftaabzzdr”, S2 = “earn” 
Our Output will be: abd<b>earn</b>fhzz, zzhf<b>earn</b>dba
Explanation: 
The smallest anagram of the given string S1 with S2 as a substring is “abdearnfhzz” 
The largest anagram of the given string S1 with s2 as a substring is “zzhfearndba”l
</code>
</pre>
<p><b>Naive Approach:</b> The simplest approach is to find all possible anagrams of S1 and check if any of those anagrams contain S2 as a substring or not. If yes, then find the lexicographically smallest and the largest among them.</p>
<p><b>Efficient Approach:</b> The idea is to first generate the lexicographically smallest anagram character by character and then find the lexicographically largest anagram by reversing the smallest anagram except for the substring which contains S2. Below are the steps:<p>
<ol>
  <li>Initialize a map M and store the frequency of each character present in S1</li>
  <li>Maintain a Set S which stores the distinct characters present in S1.</li>
  <li>Decrease the frequency of characters of S1 from M which are already present in S2.</li>
  <li>Initialize an empty string res which will store the lexicographically largest anagram.</li>
  <li>Iterate over the set S, if the first character of string S2 is encountered while traversing the set values, check if the second distinct character of S2 is greater than the current character of Set. If so, then add all the characters of S2 to res.</li>
  <li>Otherwise, keep on iterating the Set and add the characters to res.</li>
</ol>  
