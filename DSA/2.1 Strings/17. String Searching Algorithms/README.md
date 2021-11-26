# **String Searching Algorithms**

## **Introduction**

The **String Searching algorithms** are sometimes also referred to as **Pattern Searching Algorithms** and these algorithms are useful in the case of searching a string within another string.String-matching consists in finding one, or more generally, all the occurrences of a string (more generally called a **pattern**) in a **text**.  

<br>

<div align = "center">
 <img src="https://github.com/hatrix-temp/Images/blob/main/String_matching_1.jpg?raw=true" width="600" height="300"/>
</div>


## **Some Algorithms are :**

- ## **Brute Force algorithm**  
    In `Brute force algorithm` we check  at all positions in the text between 0 and n-m, whether an occurrence of the pattern starts there or not if yes then we check the whole pattern with the text from that positon. Then, after each attempt, it shifts the pattern by exactly one position to the right.
    The brute force algorithm requires no preprocessing phase, and a constant extra space in addition to the pattern and the text. 

    ### **Implementation of the above approach :** 

    ```cpp
        /*C++ Program for Brute Force
        String Matching Algorithm */
        #include <bits/stdc++.h>
        using namespace std;
    
        void pattern_search(string pattern, string text)
        {
            int m = pattern.length();
            int n = text.length();
    
            /* A loop to slide through every substring of length m */
            for (int i = 0; i <= n - m; i++) 
            {
                int j;
    
                /* For current index i, check with the text */
                for (j = 0; j < m; j++)
                    if (text[i + j] != pattern[j])
                        break;
    
                if (j == m) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
                    cout << "Pattern found at index : "<< i << endl;
            }
        }
    
        int main()
        {
            string text = "ABADE";
            string pattern = "ADE";
            pattern_search(pattern, text);
            return 0;
        }
    ```

    <div align = "center">
    <img src="https://github.com/hatrix-temp/Images/blob/main/naive_approach(string_matching).jpg?raw=true" width="750" height="500"/>
    </div>

    ### **Time Complexity**  

    > The time complexity of this searching phase is **O(m*n)** (where m = length of pattern and n = length of text).The expected number of text character comparisons is 2n.

    ### **Space Complexity**

    > Space complexity of this algorithm is **O(1)** as not extra space is required for searching.

    <br>

-  ## **Rabin-Karp Algorithm**
    Like the Naive Algorithm, `Rabin-Karp algorithm` also slides the pattern one by one. But unlike the Naive algorithm, Rabin Karp algorithm matches the hash value of the pattern with the hash value of current substring of text, and if the hash values match then only it starts matching individual characters of pattern with text. So Rabin Karp algorithm needs to calculate `hash values of Pattern itself and all the substrings of the text of length m`. 
    The hash function suggested by Rabin and Karp calculates an integer value. The integer value for a string is the numeric value of a string.  
    For first window and the pattern we will calculate hash value from this
    ```
    hash(pat[0 ... m-1]) = (d * ( hash(pat[0 ... m-1]) + pat[0 .. m-1] ) ) mod q
    hash(txt[0 ... m-1]) = (d * ( hash(txt[0 ... m-1]) + txt[0 .. m-1] ) ) mod q
    ```  
    To do rehashing, we need to take off the most significant digit and add the new least significant digit for in hash value. Rehashing is done using the following formula. 

    ```
    hash( txt[s+1 .. s+m] ) = ( d ( hash( txt[s .. s+m-1]) – txt[s]*h ) + txt[s + m] ) mod q   

    d: Number of characters in the alphabet(256 in general)     
    q: A prime number   
    h: d^(m-1)  
    ```
    In the above formula after getting the hash value we dividing it with a prime number to get more uniform distribution of hash values.
    And if we take large q value than hen the spurious hits(substring with same hash value) will ouccur less.

    ### **Implementation of the above approach :** 

    ```cpp
    /*C++ Program for Rabin-Karp
    String Matching Algorithm */
    #include <bits/stdc++.h>
    using namespace std;

    // d is the number of characters in the input alphabet
    #define d 256

    void pattern_search(string pattern, string text, int q)
    {
        int m = pattern.length();
        int n = text.length();
        int i, j;
        int p = 0; // hash value for pattern
        int t = 0; // hash value for text
        int h = 1;

        // The value of h would be "pow(d, M-1)%q"
        for (i = 0; i < m - 1; i++)
            h = (h * d) % q;

        /* Calculate the hash value of pattern and first
        window of text */
        for (i = 0; i < m; i++)
        {
            p = (d * p + pattern[i]) % q;
            t = (d * t + text[i]) % q;
        }
        // Slide the pattern over text one by one
        for (i = 0; i <= n - m; i++)
        {

            /* Check the hash values of current window of text
            and pattern. If the hash values match then only
            check for characters one by one */
            if ( p == t )
            {
                /* Check for characters one by one */
                for (j = 0; j < m; j++)
                {
                    if (text[i+j] != pattern[j])
                        break;
                }

                // if p == t and pat[0...m-1] = txt[i, i+1, ...i+m-1]        
                if (j == m)
                    cout<<"Pattern found at index "<< i<<endl;
            }

            /* Calculate hash value for next window of text,Remove
            the first character of this window, add last character of next window */
            if ( i < n-m )
            {
                t = (d*(t - text[i]*h) + text[i+m])%q;
                // We might get negative value of t, converting it to positive
                if (t < 0)
                t = (t + q);
            }
        }
    }

    int main()
    {
        string text = "ABADE";
        string pattern = "ADE";
        int q = 101;
        pattern_earch(pattern, text, q);
        return 0;
    }
    ```
    <div align = "center">
    <img src="https://github.com/hatrix-temp/Images/blob/main/rabin_karp.jpg?raw=true" width="750" height="500"/>
    </div>

    ### **Time Complexity**  

    > The average and best-case of the Rabin-Karp algorithm is **O(n+m)**, but its worst-case time is O(n*m). Worst case of Rabin-Karp algorithm occurs when all characters of pattern and text are same as the hash values of all the substrings of text match with hash value of pattern. For example pattern = “AAA” and text= “AAAAAAA”.

    ### **Space Complexity**

    > **O(1)** is the space complexity means here we don’t use any extra space to find the result. We just find the hash value and store them into variables. So, here we used a few variables which means we do not use the memory of big size.

- ## **Boyer Moore Algorithm**

    The `Boyer Moore algorithm` does preprocessing for the same reason. The idea of bad character heuristic is simple. The character of the text which doesn’t match with the current character of the pattern is called the Bad Character. Upon mismatch, we shift the pattern until   
    - `Mismatch becomes a match` - We will look the position of the last occurrence of the mismatched character in the pattern, and if the mismatched character of text exists in the pattern, then we’ll shift the pattern such that it becomes aligned to the mismatched character in the text.
    - Secondly, if the mismatched character of text `does not appear anywhere` in pattern then shift the pattern completely past that mismatched character. 

     ### **Implementation of the above approach :** 

    ```cpp
    /* C++ Program for Boyer
    Moore String Matching Algorithm */
    #include <bits/stdc++.h>
    using namespace std;
    # define CHARS_SIZE 256
    
    /* The function for Boyer Moore's
    bad character heuristic */
    void badCharHeuristic( string str, int size,int badchar[CHARS_SIZE])
    {
        int i;
        // Initialize all occurrences as -1
        for (i = 0; i < CHARS_SIZE; i++)
            badchar[i] = -1;
    
        // Fill the actual value of last occurrence
        // of a character
        for (i = 0; i < size; i++)
            badchar[(int) str[i]] = i;
    }
    
    /* A pattern searching function that uses Bad
    Character Heuristic of Boyer Moore Algorithm */
    void pattern_search( string text, string pattern)
    {
        int m = pattern.size();
        int n = text.size();
    
        int badchar[CHARS_SIZE];
    
        /* Fill the bad character array by calling the function badCharHeuristic()
        for given pattern */
        badCharHeuristic(pattern, m, badchar);
    
        int s = 0; 
        while(s <= (n - m))
        {
            int j = m - 1;
    
            /* Keep reducing index j of pattern while characters of pattern and text are
            matching at current shift*/
            while(j >= 0 && pattern[j] == text[s + j])
                j--;
    
            if (j < 0)
            {
                cout << "pattern occurs at shift = " <<  s << endl;
    
                /* Shift the pattern so that the next character in text aligns with the last
                occurrence of it in pattern.The condition s+m < n is necessary for
                the case when pattern occurs at the end of text */
                s += (s + m < n)? m-badchar[text[s + m]] : 1;
    
            }
            else
                /* Shift the pattern so that the bad character in text aligns with the last occurrence of
                it in pattern. The max function is used to make sure that we get a positive shift.
                We may get a negative shift if the last occurrence of bad character in pattern
                is on the right side of the current character. */
                s += max(1, j - badchar[text[s + j]]);
        }
    }
    
    int main()
    {
        string text= "ABCBADE";
        string pattern = "ADE";
        pattern_search(text, pattern);
        return 0;
    }
    ```

    <div align = "center">
    <img src="https://github.com/hatrix-temp/Images/blob/main/boyer_moore.jpg?raw=true" width="750" height="500"/>
    </div>

    ### **Time Complexity**  

    > The Boyer Moore Algrithm takes **O(m*n)** time in worst case. The worst case occurs when all characters of the text and pattern are same. For example, text = “AAAAAAAAAAAAAAAAAA” and pattern = “AAAAA”. The Bad Character Heuristic may take O(n/m) in the best case. The best case occurs when all all the characters of the text and pattern are different. 

    ### **Space Complexity**

    > Space Complexity of Boyer Moore Algorithm is **O(size of characters)** for storing characters of the pattern. 
