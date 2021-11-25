# Knuth-Morris-Pratt Algorithm

## Overview

The Knuth-Morris-Pratt (KMP) algorithm is an algorithm that is used to search for a substring (p), in a given string (s).

Basically , It is an algorithm, which checks the characters from left to right. When a pattern has a sub-pattern appears more than one in the sub-pattern, it uses that property to improve the time complexity, also for in the worst case.

<br/>

## Components of KMP Algorithm:
1. __`The Prefix Function (Π) :`__ The Prefix Function, Π for a pattern encapsulates knowledge about how the pattern matches against the shift of itself. This information can be used to avoid a useless shift of the pattern 'p.' In other words, this enables avoiding backtracking of the string 'S.'
   
2. __`The KMP Matcher :`__ With string 'S,' pattern 'p' and prefix function 'Π' as inputs, find the occurrence of 'p' in 'S' and returns the number of shifts of 'p' after which occurrences are found.

<br/>

## Algorithm

_Following pseudo code compute the prefix function, Π :_

__COMPUTE- PREFIX- FUNCTION (P)__

<pre style = "font-size: 15px">
1. m ←length [p]&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;//'p' pattern to be matched

2. Π [1] ← 0&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;//The prefix function for this string is defined as an array π of length m

3. k ← 0

4. <b>for</b> q ← 2 to m

5. <b>do while</b> k > 0 and p [k + 1] ≠ p [q]

6. <b>do</b> k ← Π [k]

7. <b>If</b> p [k + 1] = p [q]

8. <b>then</b> k ← k + 1

9.  Π [q] ← k

10. <b>return</b> Π
</pre>

_Following pseudo code compute the matching component of KMP algorithm :_

__KMP-MATCHER (T, P)__

<pre style = "font-size: 15px">
1. n ← length [T]

2. m ← length [P]

3. <b>Π ← COMPUTE-PREFIX-FUNCTION (P)</b>

4. q ← 0		    // numbers of characters matched

5. <b>for</b> i ← 1 to n	    // scan S from left to right 

6. <b>do while</b> q > 0 and P [q + 1] ≠ T [i]

7. <b>do</b> q ← Π [q]		// next character does not match

8. <b>If</b> P [q + 1] = T [i]

9.  <b>then</b> q ← q + 1		// next character matches

10. <b>If</b> q = m			// is all of p matched?

11. <b>then</b> print "Pattern occurs with shift" i – m
</pre>
<br/>

## Approach

We are provided with a main string S[0..n-1] and a pattern string p[0..m-1] and our task is to find whether the pattern `'p'` occurs in the main string `'S'`, and if it occurs, then we have to print all the occurrences of 'p' in string 'S'.

The approach for the KMP algorithm is to build two functions:
- _Partial match function or prefix function:_ <br/>
  This function uses the pattern string to give the count of characters that need to be skipped while matching with the main string. It takes the pattern string as an input and returns a matching table in the form of an array that contains the lengths of `longest proper prefix that is also a suffix(lps values)`. With the help of the lps value for a character, we determine how many characters to skip while matching.<br/>
  Let us take a look at some examples for lps values of string characters:<br/>
s1 = "ABCD"&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;lps[] = [0,0,0,0] <br/>
s2 = "AABB"&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;lps[] = [0,1,0,0] <br/>
s3 = "AAAB"&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;lps[] = [0,1,2,0] <br/>
s4 = "AABBAA"&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;lps[] = [0,1,0,0,1,2] <br/>

    Prefixes are substring containing the initial part of a string and suffixes are substring containing the ending part of a string. 
    
    For example: "PQR" has prefixes "","P","PQ","PQR", and suffixes "","R","QR","PQR". A proper prefix or suffix refers to all substrings except for the complete string.


- _KMP matcher function:_<br/>
This function takes the main string, pattern string and the matching table as parameters and then compares both the strings while taking the matching table values into consideration, thereby skipping all characters that have already been compared once. In this way it finds all the occurrences of the pattern string in the main string and returns the position of the match.

Using the above two functions we ensure that backtracking of the main string never occurs.

<br/>

## Implementation

Let’s take an ___example___ to understand this. We are given two strings `pattern` string and `text` string and we have to print the position of occurrences of the pattern in the text.

_Input_<br/>
text – “ABCABAABCABAC”<br/>
pattern – “CAB”

_Output_<br/>
2 8

The pattern “CAB” occurs at index 2 and index 8.

_C++ Code for KMP Algorithm :_

```C++
#include <iostream>
using namespace std;
 
// Function to implement the KMP algorithm
void KMP(string X, string Y)
{
    int m = X.length();
    int n = Y.length();
 
    // if `Y` is an empty string
    if (n == 0)
    {
        cout << "The pattern occurs with shift 0";
        return;
    }
 
    // if X's length is less than that of Y's
    if (m < n)
    {
        cout << "Pattern not found";
        return;
    }
 
    // `next[i]` stores the index of the next best partial match
    int next[n + 1];
 
    for (int i = 0; i < n + 1; i++) {
        next[i] = 0;
    }
 
    for (int i = 1; i < n; i++)
    {
        int j = next[i + 1];
 
        while (j > 0 && Y[j] != Y[i]) {
            j = next[j];
        }
 
        if (j > 0 || Y[j] == Y[i]) {
            next[i + 1] = j + 1;
        }
    }
 
    for (int i = 0, j = 0; i < m; i++)
    {
        if (X[i] == Y[j])
        {
            if (++j == n) {
                cout << "The pattern occurs with shift " << i - j + 1 << endl;
            }
        }
        else if (j > 0)
        {
            j = next[j];
            i--;    // since `i` will be incremented in the next iteration
        }
    }
}
 
// Program to implement the KMP algorithm in C++
int main()
{
    string text = "ABCABAABCABAC";
    string pattern = "CAB";
 
    KMP(text, pattern);
 
    return 0;
}
```

<br/>

## Complexity

- ___Time Complexity___<br/>
  Because the prefix-function already tells us what needs to be done about the already matched parts, we do not need to check those parts again and hence, only one pass over the string is sufficient. So, the time complexity of the matching is __`O(n)`__. Overall, it takes ___O(m+n)___ time. But since m≤n, the time is bounded by O(n).

- ___Space Complexity___<br/>
  We only require as much space as the pattern. So, the space requirement is __`O(m)`__.

<br/>

## Advantages and Disadvantages of KMP Algorithm

### _Advantages_ :
- The most obvious advantage of KMP Algorithm – data is that it’s guaranteed worst-case efficiency.
- The pre-processing and the always-on time is pre-defined.
- There are no worst-case or accidental inputs.
- Preferable where the search string in a larger space is easier and more efficiently searched due to it being a time linear algorithm.
- The algorithm needs to move backward in the input text. This is particularly favorable in processing large files.

### _Disadvantages_ :
- One of the glaring disadvantages of KMP Algorithm – data is that it doesn’t work well when the size of the alphabets increases. Due to this more and more error occurs.
- For processing very large files it also requires resources in the form of processors and that could be a problem for smaller organizations to adopt KMP Algorithm – data.



