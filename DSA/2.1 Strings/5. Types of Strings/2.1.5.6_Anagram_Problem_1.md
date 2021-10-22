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
The largest anagram of the given string S1 with s2 as a substring is “zzhfearndba”
</code>
</pre>
<h3>Brute Force Approach</h3>
<p>The simple approach is to find all possible anagrams of S1 and check if any of those anagrams contain S2 as a substring or not. If yes, then find the lexicographically smallest and the largest among them.</p>
<b>Time Complexity:</b> O(N!)

<b>Space Complexity:</b> O(N)
<h3>Optimized Approach</h3> 
<p>The idea is to first generate the lexicographically smallest anagram character by character and then find the lexicographically largest anagram by reversing the smallest anagram except for the substring which contains S2. Below are the steps:<p>
<ol>
  <li>Initialize a map M and store the frequency of each character present in S1</li>
  <li>Maintain a Set S which stores the distinct characters present in S1.</li>
  <li>Decrease the frequency of characters of S1 from M which are already present in S2.</li>
  <li>Initialize an empty string res which will store the lexicographically largest anagram.</li>
  <li>Iterate over the set S, if the first character of string S2 is encountered while traversing the set values, check if the second distinct character of S2 is greater than the current character of Set. If so, then add all the characters of S2 to res.</li>
  <li>Otherwise, keep on iterating the Set and add the characters to res.</li>
</ol>  
<pre>
<code> 
 
class AnagramP{

static String[] lexico_small(String s1, String s2)
 {
    // Initializing the map and set
    Map<Character, Integer> M = new HashMap<>();
    Set<Character> S = new TreeSet<>();
    
    // Iterating over s1
    for(int i = 0; i <= s1.length() - 1; ++i)
    {
         
        // Storing the frequency of
        // characters present in s1
        if (!M.containsKey(s1.charAt(i)))
            M.put(s1.charAt(i), 1);
        else
            M.replace(s1.charAt(i),
                M.get(s1.charAt(i)) + 1);
   
        // Storing the distinct
        // characters present in s1
        S.add(s1.charAt(i));
    }
   
    // Decreasing the frequency of 
    // characters from M that
    // are already present in s2
    for(int i = 0; i <= s2.length() - 1; ++i)
    {
        if (M.containsKey(s2.charAt(i)))
            M.replace(s2.charAt(i),M.get(s2.charAt(i)) - 1);
    }
   
    char c = s2.charAt(0);
    int index = 0;
    String res = "";
   
    // Traversing alphabets
    // in sorted order
    Iterator<Character> it = S.iterator();
    while (it.hasNext())
    {
        char x = it.next();
         
        // If current character of set
        // is not equal to current 
        // character of s2
        if (x != c)
        {
            for(int i = 1; i <= M.get(x); ++i)
            {
                res += x;
            }
        }
        else
        {
             
            // If element is equal to 
            // current character of s2
            int j = 0;
            index = res.length();
             
            // Checking for second
            // distinct character in s2
            while (s2.charAt(j) == x)
            {
                j++;
            }
             
            // s2[j] will store
            // second distinct character
            if (s2.charAt(j) < c)
            {
                res += s2;
                for(int i = 1; i <= M.get(x); ++i)
                {
                    res += x;
                }
            }
            else
            {
                for(int i = 1; i <= M.get(x); ++i)
                {
                    res += x;
                }
                index += M.get(x);
                res += s2;
            }
        }
    }
    String pr[] = {res, index + ""};
    return pr;
}
 
// Function to find the lexicographically
// largest anagram of string
// which contains another string
static String lexico_large(String s1, String s2)
{
     
    // Getting the lexicographically
    // smallest anagram
    String pr[] = lexico_small(s1, s2);
   
    // d1 stores the prefix
    String d1 = "";
    for(int i = Integer.valueOf(pr[1]) - 1; i >= 0; i--)
    {
        d1 += pr[0].charAt(i);
    }
   
    // d2 stores the suffix
    String d2 = "";
    for(int i = pr[0].length() - 1; i >= Integer.valueOf(pr[1]) + s2.length(); --i)
    {
        d2 += pr[0].charAt(i);
    }
     
    String res = d2 + s2 + d1;
    return res;
}
 
// Driver Code
public static void main (String[] args)
{
     
    // Given two strings
    String s1 = "hheftaabzzdr";
    String s2 = "earn";
     
    // Function Calls
    System.out.println(lexico_smallest(s1, s2)[0]);
    System.out.println(lexico_largest(s1, s2));
}
}

</code>
</pre>
<b>Time Complexity:</b> O(N+M) 

<b>Space Complexity:</b> O(N)
