# KMP Algorithm
KMP (Knuth–Morris–Pratt) algorithm is used to find if a pattern(P) is a substring of string(S). 
It uses degenerating property which makes use of pattern having the identical sub-patterns appear in the pattern more than once.
How it works is, we make a LPS table for the pattern, LPS is basically Longest proper prefix which is also a suffix. <br/><br/>
<hr>

Here is how we make LPS table:<br/><br/>
Consider a string "abcdabc"<br/>
Since the length of this string is 7, the length of the LPS array will also be 7.<br/> <br/>

The value of lps[0] is always 0. The reason behind this is that the longest proper prefix ending at index 0 is "" 
and the suffix(in this case) ending at index 0 is "a" and they don’t have anything in common i.e. the common string is "" which is of length 0 so lps[0]=0<br/><br/>

For lps[1], we consider proper prefix and suffix for string till index 1 i.e. we consider string "ab"<br/>
proper prefixes => "a"<br/>
suffixes => "b", "ab"<br/>
in this case, there is nothing common between proper prefix and suffix i.e. the common string is "" which is of length 0 so lps[1]=0<br/><br/>

For lps[2], we consider proper prefix and suffix for string till index 2 i.e. we consider string "abc"<br/>
proper prefixes => "a", "ab"<br/>
suffixes => "c", "bc", "abc"<br/>
in this case, there is nothing common between proper prefix and suffix i.e. the common string is "" which is of length 0 so lps[2]=0<br/><br/>

For lps[3], we consider proper prefix and suffix for string till index 3 i.e. we consider string "abcd"<br/>
proper prefixes => "a", "ab", "abc"<br/>
suffixes => "d", "cd", "bcd", "abcd"<br/>
in this case, there is nothing common between proper prefix and suffix i.e. the common string is "" which is of length 0 so lps[3]=0<br/><br/>

For lps[4], we consider proper prefix and suffix for string till index 4 i.e. we consider string "abcda"<br/>
proper prefixes => "a", "ab", "abc", "abcd"<br/>
suffixes => "a", "da", "cda", "bcda", "abcda"<br/>
in this case, there is a common string between proper prefix and suffix i.e. "a" which is of length 1 so lps[4]=1<br/><br/>

For lps[5], we consider proper prefix and suffix for string till index 5 i.e. we consider string "abcdab"<br/>
proper prefixes => "a", "ab", "abc", "abcd", "abcda"<br/>
suffixes => "b","ab", "dab", "cdab", "bcdab", "abcdab"<br/>
in this case, there is a common string between proper prefix and suffix i.e. "ab" which is of length 2 so lps[5]=2<br/><br/>

For lps[6], we consider proper prefix and suffix for string till index 6 i.e. we consider string "abcdabc"<br/>
proper prefixes => "a", "ab", "abc", "abcd", "abcda", "abcdab"<br/>
suffixes => "c", "bc", "abc", "dabc", "cdabc", "bcdabc", "abcdabc"<br/>
in this case, there is a common string between proper prefix and suffix i.e. "abc" which is of length 3 so lps[6]=3<br/><br/>

Hence, for "abcdabc"<br/> 
LPS table = {0,0,0,0,1,2,3}<br/><br/>
<hr>

You can try creating LPS table for the following patterns<br/><br/>
Pattern 1:"abcabcd" <br/>
LPS table = {0,0,0,1,2,3,0} <br/><br/>
Pattern 2:"ababaca" <br/>
LPS table = {0,0,1,2,3,0,1} <br/><br/>
Pattern 3:"aaaabab" <br/>
LPS table = {0,1,2,3,0,1,0} <br/><br/>
Pattern 4:"aabaaab" <br/>
LPS table = {0,1,0,1,2,2,3} <br/><br/>
<hr>

We already know some of the characters in the text of the next window whenever we find a mismatch in the current window. 
So we use this information to avoid matching characters that we know will match in any case. 
Let us understand it with the help of an example<br/><br/>

Let the pattern P be "onions" and the text be "onionions"<br/><br/>
Text : "onionions"<br/>
Pattern : "onions"<br/><br/>
We first make LPS table for pattern i.e. "onions"<br/>
We will get LPS table as => {0,0,0,1,2,0}<br/><br/>
We start by comparing the first window till we find a mismatch. <br/><br/>
We will use variable i for keeping track of Text(T) and 
variable j for keeping track of Pattern(P).<br/> <br/>
Initially both i and j will be at index 0 of T and P respectively
as T[0] and P[0] match, i and j will be incremented.<br/> 
T[1] and P[1] match, so i and j will be incremented.<br/> 
T[2] and P[2] match, so i and j will be incremented.<br/>
T[3] and P[3] match, so i and j will be incremented.<br/>
T[4] and P[4] match, so i and j will be incremented.<br/><br/>
Now T[5] and P[5] do not match, so we will see the lps table of lps[j-1] 
(i.e. the index till which the window was matching) and we will update the value of j as j=lps[j-1] and i will remain the same <br/>
In our case lps[4]=2 so j will come to index 2 in pattern  and again we will start comparing 
T[i] and P[j] <br/> <br/>
T[5] and P[2] match, so i and j will be incremented.<br/>
T[6] and P[3] match, so i and j will be incremented.<br/>
T[7] and P[4] match, so i and j will be incremented.<br/><br/>
Since T[8] and P[5] match and j=5, it means that we 
have reached the end of the pattern and we found a match for pattern in the text<br/><br/>



