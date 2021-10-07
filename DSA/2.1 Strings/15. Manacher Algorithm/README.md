## What is Manacher's Algorithm?

Manacher’s Algorithm helps us find the longest palindromic substring in the given string. It optimizes over the brute force solution by using some insights into how palindromes work. This algorithm is required to solve sub-problems of some very hard problems.

## Notations

Let c be the center of the longest length palindrome we have encountered till now. And let l and r be the left and right boundaries of this palindrome, i.e., the left-most character index and the right-most character index respectively. Now, let’s take an example to understand c, l, and r.

Eg: “abacabacabb”

When going from left to right, when i is at index 1, the longest palindromic substring is “aba” (length = 3).

<img src = "https://hackernoon.com/_next/image?url=https%3A%2F%2Fmiro.medium.com%2Fmax%2F1068%2F1*8On8DfmxTXExgw_Ac-Y8nw.jpeg&w=1920&q=75" width = "400" height = "150">

c, l, and r for palindromic string “aba”

The answer for the given string is 9 when the palindrome is centered at index 5; c, l, and r are as follows:

<img src = "https://hackernoon.com/_next/image?url=https%3A%2F%2Fmiro.medium.com%2Fmax%2F1068%2F1*sYkO6lOWxbsvR1XbbiHyYQ.jpeg&w=1920&q=75" width = "400" height = "150">

Final c, l, and r positions for the whole string.

Now that we know what c, l, and r denote, let's understand a few interesting facts about palindromes:- For any palindrome centered at a center c, the mirror of index j is j’ such that for palindrome “abacaba”, the mirror of j is j’ and the mirror of j’ is j.

<img src = "https://hackernoon.com/_next/image?url=https%3A%2F%2Fmiro.medium.com%2Fmax%2F1068%2F1*YcXzqyZ6oskuNVAOpyTwvA.jpeg&w=1920&q=75" width = "400" height = "150">

When we move i from left to right, we try to “expand” the palindrome at each i. When I say the word expand, it means that we'll check whether there exists a palindrome centered at i and if there exists one, we'll store the “expansion length” to the left or to the right in a new array called P[] array or (some prefer) LPS[].

If the palindrome at i expands beyond the current right boundary r, then c is updated to i and new l, r are found and updated.

## Example

Let’s take the previously discussed palindrome “abacaba” which is centered at i = 3.

<img src = "https://hackernoon.com/_next/image?url=https%3A%2F%2Fmiro.medium.com%2Fmax%2F1068%2F1*u7zwifrQrJYvkTLxoHTObg.jpeg&w=1920&q=75" width = "400" height = "150">

P[i] = 3 as expansion length for palindrome centered at i is 3.

Therefore, the P[] array stores the expansion length of the palindrome centered at each index. But we don’t need to manually go to each index and expand to check the expansion length every time. This is exactly where Manacher’s algorithm optimizes better than brute force, by using some insights on how palindromes work. Let’s see how the optimization is done.

**Let’s see the P[] array for the string “abacaba”**

<img src = "https://hackernoon.com/_next/image?url=https%3A%2F%2Fmiro.medium.com%2Fmax%2F1067%2F1*tuhfTCNm-xHxwxK7wSUcbA.jpeg&w=1920&q=75" width = "400" height = "150">

When i = 4, the index is inside the scope of the current longest palindrome, i.e., i < r. So, instead of naively expanding at i, we want to know the minimum expansion length that is certainly possible at i, so that we can expand on that minimum P[i] and see, instead of doing from start. So, we check for mirror i’.

As long as the palindrome at index i’ does NOT expand beyond the left boundary (l) of the current longest palindrome, we can say that the minimum certainly possible expansion length at i is P[i’].

Remember that we are only talking about the minimum possible expansion length, the actual expansion length could be more and, we’ll find that out by expanding later on. In this case, P[4] = P[2] = 0. We try to expand but still, P[4] remains 0.

Now, if the palindrome at index i’ expands beyond the left boundary (l) of the current longest palindrome, we can say that the minimum certainly possible expansion length at i is r-i.

Eg: “acacacb”

<img src = "https://hackernoon.com/_next/image?url=https%3A%2F%2Fmiro.medium.com%2Fmax%2F598%2F1*P7-_fzuiMqa3O5Q344lKxQ.jpeg&w=1920&q=75" width = "300" height = "150">

Here, palindrome centered at i’ expands beyond the left boundary.

So, P[4] = 5–4 = 1

If palindrome at i were to expand beyond r, then the character at index 6 should have been ‘a’. But if that were to happen, the current palindrome centered at c would NOT have been “cacac” but “acacaca”

To sum up:

```cpp
//see if the mirror of i is expanding beyond the left boundary of current longest palindrome at center c
//if it is, then take r - i
//else take P[mirror]
if(i < r){
  P[i] = Math.min(r - i, P[mirror]);
}
```
Updating P[i] to the minimum certainly possible expansion length.

That’s it. Now the only thing left is to expand at i after P[i], so we check characters from index (P[i] + 1) and keep expanding at i.

If this palindrome expands beyond r, update c to i and r to (i + P[i]).

That's it! The P[] array is now filled and the maximum value in this array gives us the longest palindromic substring in the given string!

We have taken an odd length string for the above explanation. So, for this algorithm to work out, we simply append N + 1 special characters (say ‘#’) in between every two characters, just to make sure that our modified string is always of odd length.

Eg1: aba -> #a#b#a#

Eg2: abba-> #a#b#b#a#

## Brute Force Approach:

Find all possible sub-strings using 2 nested loops, this solution has O(N^2), where N s the length of the given string. Then for every substring, check if it is a palindrome or not in O(N), so the total time complexity is O(N^3).

This solution could be improved by selecting every letter in the given string as the center O(N), then find the longest palindromic substring around this center O(N),  so the total time complexity is O(N^2). For example: given string is "czbza", when b is selected as the center, it produces the longest palindromic substring "zbz".

However, O(N^2) solution could be improved using some clever observations. Following is the optimized solution.

## Efficient Algorithm:

Assume the given String S has a length of N, S = "abababa". Create a string  of length 2 * N + 1, by inserting any letter that doesn't appear in the input string (call it special character for the purpose of this article), in the spaces between any 2 characters. Also, insert this special character in the beginning and the end of the string. If "#" is chosen as special character then the new string Q would look like "#a#b#a#b#a#b#a#".

Calculate the longest palindromic substring in each center. Expand around each character i in the new string, then store the number of letters, in the longest palindromic substring with character i as the center, divided by 2. The stored number is divided by 2 because the palindromic substring has it's 2 same parts around the center.

Above process would yield an array P = [0, 1, 0, 3, 0, 5, 0, 3, 0, 1, 0]. Each number m, in the array P, indicates that there are m corresponding letters in both sides around a center i. So the palindromic substring = m letters in the left side + center + m letters in right side.

* **Observation (1):**
    For the center index c = 7 i.e. P[c] = 7 which has the longest palindromic substring. Notice that the numbers in array P after center c = 7 are same as numbers before center c, so avoid expanding around all letters after center c, however just put their values directly using the Mirror (by copying the first half of array P in its other half) property.
  
* **Observation (2):**
    Unfortunately, Mirror property can't be applied in all cases. For example: S = "acncacn", the new string Q = "#a#c#n#c#a#c#n#". 
    The result array P = [0, 1, 0, 1, 0, 5, 0, 1, 0, 5, 0, 1, 0, 1, 0].
    
    Consider the center c = 5. The mirror property applies in P[4] = p[6], p[3] = p[7], p[2] = p[8]. But why p[1] != p[9] ? So Mirror property doesn't work in all cases, because in this case there is another palindrome with center c = 9. This new palindrome, with center c = 9, goes beyond the limits of the first palindrome with center c = 5.

## Algorithm Steps:

Let the 2 limits of the first palindrome with center c: a left limit l, a right limit r, l, r have references over the last 2 orresponding letters in the palindrome sub-string. A letter w with index i in a palindrome substring has a corresponding letter w' with index i' such that the c - i' = i' - c.

1. If(p[i] <= r - i'),
   So p[i'] = p[i] which means that palindrome with center i' can't go beyond the original palindrome, so apply the Mirror Property directly.

2. Else p[i'] >= p[i]
   This means that palindrome with center i' goes beyond the original palindrome, so expanding around this center i' is needed.

   Let d = distance r - i', so expanding around center i' will start from (i' - d) - 1 with (i' + d) + 1 = (r + 1) and so on.. because the interval [i' -d : i' +    d]  is already contained in the palindrome with center i'.

   The algorithm has 2 nested loops, outer loop check if there will be an expanding around current letter or not. This loop takes N steps.

   Inner loop will be used in case of expanding around a letter, but it is guaranteed that it takes at most N steps by using the above 2 observations.

   So the total time = 2 * N = O(N)

3.  Update c, r when a palindrome with center i' goes beyond the original palindrome with center c.

    c = i', r = i' + p[i'] as the next expanding will be around center i'.
    

## Implementation:

```cpp
#include <bits/stdc++.h>
using namespace std;
#define SIZE 100000 + 1

int P[SIZE * 2];

// Transform S into new string with special characters inserted.
string convertToNewString(const string &s) {
    string newString = "@";

    for (int i = 0; i < s.size(); i++) {
        newString += "#" + s.substr(i, 1);
    }

    newString += "#$";
    return newString;
}

string longestPalindromeSubstring(const string &s) {
    string Q = convertToNewString(s);
    int c = 0, r = 0;                // current center, right limit

    for (int i = 1; i < Q.size() - 1; i++) {
        // find the corresponding letter in the palidrome subString
        int iMirror = c - (i - c);

        if(r > i) {
            P[i] = min(r - i, P[iMirror]);
        }

        // expanding around center i
        while (Q[i + 1 + P[i]] == Q[i - 1 - P[i]]){
            P[i]++;
        }

        // Update c,r in case if the palindrome centered at i expands past r,
        if (i + P[i] > r) {
            c = i;              // next center = i
            r = i + P[i];
        }
    }

    // Find the longest palindrome length in p.

    int maxPalindrome = 0;
    int centerIndex = 0;

    for (int i = 1; i < Q.size() - 1; i++) {

        if (P[i] > maxPalindrome) {
            maxPalindrome = P[i];
            centerIndex = i;
        }
    }

    cout << maxPalindrome << "\n";
    return s.substr( (centerIndex - 1 - maxPalindrome) / 2, maxPalindrome);
}

int main() {
    string s;
    cin >> s;
    cout << longestPalindromeSubstring(s);
    return 0;
}

```


## Complexity
`Time Complexity: O(n)`

`Space Complexity: O(n)`

Here is a [**Video**](https://www.youtube.com/watch?v=V-sEwsca1ak) tutorial on Manacher's Algorithm.

**References:-**
* https://hackernoon.com/manachers-algorithm-explained-longest-palindromic-substring-22cb27a5e96f
* https://www.hackerearth.com/practice/algorithms/string-algorithm/manachars-algorithm/tutorial/
