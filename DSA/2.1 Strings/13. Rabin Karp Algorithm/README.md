## **Rabin- Karp Algorithm**

Rabin-Karp algorithm is a string searching/matching algorithm.
It helps in finding out wheather a given pattern is present in a given string or not.

**For eg:**


![Alt Text](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/a6hx833imldighvg3uab.png)
*<figcaption>Here the pattern is present at index 4</figcaption>*


A rather naive approch to solve this problem would be to slide the pattern over the text one by one and see if its a match. Rabin-Karp algorithm on the other hand assigns a numerical value for the characters in the string which makes the searching more time efficient.


### **Working of Rabin-Karp:**


Let the string be:

`c b a c d b a b e a b f`
 
 and the string to be searched is:

 `a b`

 1. Assigning a numerical value(v) to the characters in the string

![Alt Text](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/ca2wddegzn8993u1hkjw.png)

2. Let `n` be the length of the string and `m` be the length of the pattern. Let `d` be the number of characters in the pattern.
here,
 `n = 12` , `m=2` and `d =10`

2. Calculating the hash value of the pattern(a b):

A simple hash function that could be used here would be (v*d^x) where, x

        hash value of the pattern = (1 * 10^1 ) + (2 * 10^0)

        =12

>we can also mod the result with a prime number so that we can deal with patterns having large no of characters.


4. Calculating the hash value of text-window of size m(c b).

        hash vaue of the window = (3*10^1)+(2*10^0)

        =32

we see that the hash value of pattern and text do not match.

5.  Calculating the hash value of the next window by adding the next term and subtracting the first term.

        hash value of the next window= (2*10^1)+ (1*10^0)

        =21


similarly, we will go on matching the values until we get the required hash value.


### **Code in Java:**







    import java.util.*;
    public class Rabin_carp_algo {
        private static final int d = 26; // total number of  alphabets
        private static final int p = 5381; // prime number
    public static void main(String []args)
    {
        Scanner in=new Scanner(System.in);
        String txt = in.next();
        String pat = in.next();

        search(pat, txt);
    }

        public static void search(String pat, String txt)
        {
            int patHash = 0; // Hash value of pattern
            int txtHash = 0; // Hash value of text

            for (int i = 0; i < pat.length(); i++) // Generating Hash values for pattern and first window text
            {
                patHash = patHash * d;
                txtHash = txtHash * d;
                patHash = patHash + ((pat.charAt(i) - 'A' + 1) % p);
                txtHash = txtHash + ((txt.charAt(i) - 'A' + 1) % p);
            }


            for (int i = 0; i < txt.length() - pat.length(); i++) // Loop of text size minus  window
            {
                if (patHash == txtHash)
                {
                    System.out.println("Pattern found at index " + i);
                }

                if (i < txt.length() - pat.length())
                {
                    txtHash = txtHash - ((txt.charAt(i) - 'A' + 1) * (int)Math.pow(d, pat.length() - 1));  // Subtracting first element from current hash of d^window-1
                    txtHash = txtHash * d + (txt.charAt(i + pat.length()) - 'A' + 1);  // multiplying obtained hash with d to left shift the number and then adding the next new element
                }
            }
        }


    }
    
    
![Alt Text](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/t7etm0rezu8phvdthdob.png)


### **Time complexity:**
*Average and best-case time complexity*=O(n+m)


*Worst case time complexity* =O(nm)

