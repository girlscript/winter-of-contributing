# What is string matching algorithm?

The problem of finding occurrence(s) of a pattern string within another string or body of text is called string matching. There are many different algorithms for efficient searching. Also known as exact string matching, string searching, text searching.It helps in performing time-efficient tasks in multiple domains. These algorithms are useful in the case of searching a string within another string. String matching is also used in the Database schema, Network systems.

In this domain one or several strings called <b>" Pattern " </b> is to be searched within a well-built string or <b>" Text "</b>. String matching strategies or algorithms provide key role in various real world problems or applications. A few of its imperative applications are Spell Checkers, Spam Filters, Intrusion Detection System, Search Engines, Plagiarism Detection, Bioinformatics, Digital Forensics and Information Retrieval Systems etc.

Given a text array, T [1.....n], of n character and a pattern array, P [1......m], of m characters. The problems are to find an integer s, called valid shift where 0 ≤ s < n-m and T [s+1......s+m] = P [1......m]. In other words, to find even if P in T, i.e., where P is a substring of T. The item of P and T are character drawn from some finite alphabet such as {0, 1} or {A, B .....Z, a, b..... z}.Given a string T [1......n], the substrings are represented as T [i......j] for some 0≤i ≤ j≤n-1, the string formed by the characters in T from index i to index j, inclusive. This process that a string is a substring of itself (take i = 0 and j =m).The proper substring of string T [1......n] is T [1......j] for some 0<i ≤ j≤n-1. That is, we must have either i>0 or j < m-1.

Using these descriptions, we can say given any string T [1......n], the substrings are

T [i.....j] = T [i] T [i +1] T [i+2]......T [j] for some 0≤i ≤ j≤n-1.

And proper substrings are

T [i.....j] = T [i] T [i +1] T [i+2]......T [j] for some 0≤i ≤ j≤n-1.

If i>j, then T [i.....j] is equal to the empty string or null, which has length zero.

# Applications of String Matching Algorithms

1. Plagiarism Detection

2. Bioinformatics and DNA Sequencing

3. Digital Forensics

4. Spelling Checker

5. Search engines or content search in large databases

<br>

Exact string matching algorithms is to find one, several, or all occurrences of a defined string (pattern) in a large string (text or sequences) such that each matching is perfect. All alphabets of patterns must be matched to corresponding matched subsequence. These are further classified into four categories:

1. Algorithms based on character comparison:

        Naive Algorithm: It slides the pattern over text one by one and check for a match. If a match is found, then slides by 1 again to check for subsequent matches.
        
        KMP (Knuth Morris Pratt) Algorithm: The idea is whenever a mismatch is detected, we already know some of the characters in the text of the next window. So, we take advantage of this information to avoid matching the characters that we know will anyway match.

        Boyer Moore Algorithm: This algorithm uses best heurestics of Naive and KMP algorithm and starts matching from the last character of the pattern. Using the Trie data structure: It is used as an efficient information retrieval data structure. It stores the keys in form of a balanced BST.
  
2. Deterministic Finite Automaton (DFA) method:

        Automaton Matcher Algorithm: It starts from the first state of the automata and the first character of the text. At every step, it considers next character of text, and look for the next state in the built finite automata and move to a new state.
  
3. Algorithms based on Bit (parallelism method):

        Aho-Corasick Algorithm: It finds all words in O(n + m + z) time where n is the length of text and m be the total number characters in all words and z is total number of occurrences of words in text. This algorithm forms the basis of the original Unix command fgrep.

4. Hashing-string matching algorithms:

        Rabin Karp Algorithm: It matches the hash value of the pattern with the hash value of current substring of text, and if the hash values match then only it starts matching individual characters.
        
# Naive algorithm

Slide the pattern over text one by one and check for a match. If a match is found, then slides by 1 again to check for subsequent matches. 

    # Python3 program for Naive Pattern
    # Searching algorithm
    def search(pat, txt):
        M = len(pat)
        N = len(txt)

        # A loop to slide pat[] one by one */
        for i in range(N - M + 1):
            j = 0

            # For current index i, check
            # for pattern match */
            while(j < M):
                if (txt[i + j] != pat[j]):
                    break
                j += 1

            if (j == M):
                print("Pattern found at index ", i)

   
        txt = "AABAACAADAABAAABAA"
        pat = "AABA"
        search(pat, txt)

  Output: 

  Pattern found at index 0 
  Pattern found at index 9 
  Pattern found at index 13
  

# KMP Algorithm

The worst case complexity of the Naive algorithm is O(m(n-m+1)). The time complexity of KMP algorithm is O(n) in the worst case.

![image](https://user-images.githubusercontent.com/66105257/136644416-2b0c8c65-c936-44e7-ab9c-768a60406f0d.png)

      # Python program for KMP Algorithm
      def KMPSearch(pat, txt):
          M = len(pat)
          N = len(txt)

          # create lps[] that will hold the longest prefix suffix 
          # values for pattern
          lps = [0]*M
          j = 0 # index for pat[]

          # Preprocess the pattern (calculate lps[] array)
          computeLPSArray(pat, M, lps)

          i = 0 # index for txt[]
          while i < N:
              if pat[j] == txt[i]:
                  i += 1
                  j += 1

              if j == M:
                  print ("Found pattern at index " + str(i-j))
                  j = lps[j-1]

              # mismatch after j matches
              elif i < N and pat[j] != txt[i]:
                  # Do not match lps[0..lps[j-1]] characters,
                  # they will match anyway
                  if j != 0:
                      j = lps[j-1]
                  else:
                      i += 1

      def computeLPSArray(pat, M, lps):
          len = 0 # length of the previous longest prefix suffix

          lps[0] # lps[0] is always 0
          i = 1

          # the loop calculates lps[i] for i = 1 to M-1
          while i < M:
              if pat[i]== pat[len]:
                  len += 1
                  lps[i] = len
                  i += 1
              else:
                  # This is tricky. Consider the example.
                  # AAACAAAA and i = 7. The idea is similar 
                  # to search step.
                  if len != 0:
                      len = lps[len-1]

                      # Also, note that we do not increment i here
                  else:
                      lps[i] = 0
                      i += 1

      txt = "ABABDABACDABABCABAB"
      pat = "ABABCABAB"
      KMPSearch(pat, txt)

  Output:
  Found pattern at index 10
 
Let us see with the example:


txt[] = "AAAAABAAABA" 
pat[] = "AAAA"
lps[] = {0, 1, 2, 3} 

i = 0, j = 0
txt[] = "AAAAABAAABA" 
pat[] = "AAAA"
txt[i] and pat[j] match, do i++, j++

i = 1, j = 1
txt[] = "AAAAABAAABA" 
pat[] = "AAAA"
txt[i] and pat[j] match, do i++, j++

i = 2, j = 2
txt[] = "AAAAABAAABA" 
pat[] = "AAAA"
pat[i] and pat[j] match, do i++, j++

i = 3, j = 3
txt[] = "AAAAABAAABA" 
pat[] = "AAAA"
txt[i] and pat[j] match, do i++, j++

i = 4, j = 4
Since j == M, print pattern found and reset j,
j = lps[j-1] = lps[3] = 3

Here unlike Naive algorithm, we do not match first three 
characters of this window. Value of lps[j-1] (in above 
step) gave us index of next character to match.
i = 4, j = 3
txt[] = "AAAAABAAABA" 
pat[] =  "AAAA"
txt[i] and pat[j] match, do i++, j++

i = 5, j = 4
Since j == M, print pattern found and reset j,
j = lps[j-1] = lps[3] = 3

Again unlike Naive algorithm, we do not match first three 
characters of this window. Value of lps[j-1] (in above 
step) gave us index of next character to match.
i = 5, j = 3
txt[] = "AAAAABAAABA" 
pat[] =   "AAAA"
txt[i] and pat[j] do NOT match and j > 0, change only j
j = lps[j-1] = lps[2] = 2

i = 5, j = 2
txt[] = "AAAAABAAABA" 
pat[] =    "AAAA"
txt[i] and pat[j] do NOT match and j > 0, change only j
j = lps[j-1] = lps[1] = 1 

i = 5, j = 1
txt[] = "AAAAABAAABA" 
pat[] =     "AAAA"
txt[i] and pat[j] do NOT match and j > 0, change only j
j = lps[j-1] = lps[0] = 0

i = 5, j = 0
txt[] = "AAAAABAAABA" 
pat[] =      "AAAA"
txt[i] and pat[j] do NOT match and j is 0, we do i++.

i = 6, j = 0
txt[] = "AAAAABAAABA" 
pat[] =       "AAAA"
txt[i] and pat[j] match, do i++ and j++

i = 7, j = 1
txt[] = "AAAAABAAABA" 
pat[] =       "AAAA"
txt[i] and pat[j] match, do i++ and j++

We continue this way...



# References

    https://en.wikipedia.org/wiki/String-searching_algorithm#:~:text=In%20computer%20science%2C%20string%2Dsearching,a%20larger%20string%20or%20text.&text=This%20may%20significantly%20slow%20some%20search%20algorithms.



    https://www.geeksforgeeks.org/applications-of-string-matching-algorithms/

