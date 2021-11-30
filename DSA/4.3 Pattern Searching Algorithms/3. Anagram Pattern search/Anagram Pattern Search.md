# **Anagram Pattern Search**

## What is Anagram Pattern Search Algorithm ?

An anagram of a string is another string that contains the same characters, only the order of characters can be different.Two strings are called anagrams if they contain same set of characters but in a different order. \
**For example, “abcd” and “dabc”**. <br/>


This pattern searching algorithm is slightly different. In this case, not only the exact pattern is searched, it searches all possible arrangements of the given pattern in the text.Therefore, we cannot directly apply standard pattern searching algorithms like KMP, Rabin Karp, Boyer Moore, etc.

## Example
![Anagram pattern search final examples](https://user-images.githubusercontent.com/78202785/143980461-fcf4743f-960d-43f2-b1c8-c4dcbc4bc7a3.png)




## Algorithm
    
    # Make a list of integer to store answers.
    
    # check if string/pattern is null or string length  is less than pattern length.If yes return empty list.
    
    # Make two Arrays for storing string and 
    pattern frequencies.
    
    # calculate frequncies of each character for first window i.e upto of pattern length.
    
    # Here use check function for example 'A'-'a' will give -32 instead of 32
    So for uppercase characters use checks(skip if not mandatory)
    
    # In whileloop until right index is less than string length
   
      * compare first window of String Array frequency of each character hash and pattern hash.

      * if equal add starting index(i.e leftmost character string index) in answer list.

      * similarly check for next windows by sliding the window(silding window implementation) using right++.

      * while sliding just increase/add current(rightmost) [new] character frequency in Array frequency shash of string.
    
      * Decrease starting(leftmost) character frequency from string Array of previous window.

      * left++. 
    
      * And continue the process(compare->slide and increase decrease frequencies) until we come out of while loop.

    # At last return list of anagram indexes 

### Sliding window part Implementation :    

![Anagram Pattern search sliding window part by Anuj Nandeshwar](https://user-images.githubusercontent.com/78202785/143986655-c83d5296-a96a-4519-aaf2-275742cc6efb.jpg)

Note : You can Use toLowerCase( ) method on i/p before passing input parameters in main function if anagram pattern match irrespective of upper/lower case required.

    
    
### Implementation of Anagram Pattern Search Algorithm in java:    

```java
// Java program for the above approach
import java.io.*;
import java.util.*;

public class Main{
public static List<Integer> findAnagrams(String s, String p) {
    //Make a list of integers to store ans indexes
    List<Integer> res = new ArrayList<>();

    //check base condition

    if (s == null || s.length() < p.length() || p == null || p.length() == 0){
        return res;
    }
    
    //pattern hash
    int[] phash = new int[256];
    //string text hash
    int[] shash = new int[256];
    //sliding windows approach
    int window = p.length();
    
    int left = 0;

    int right = 0;

    //store pattern-p and String-s frequencies of each characters for first window
    //Means upto length of pattern

    while (right < window) {
        //if 'a' is found character then 'a'-'a'=0,'b'-'a'=1, 'c'-'a'=2
        //it will increase frequency by 1 in that index
        //similarly for next characters according to ASCII table
        
        //for example 'A'-'a' will give -32
        //So for uppercase characters use checks
        int check = (p.charAt (right) - 'a');
	    if (check < 0){
	       check = -1 * check;
	    }
	    int check2 = (s.charAt (right) - 'a');
	    if (check2 < 0){
	        check2 = -1 * check2;
	    }
	    phash[check]++;
	    shash[check2]++;
    	right++;


    }
    //decreasing by -1 as it is right now equal to pattern length
    right--;
     
     //sliding window implementation
    //check for next windows and also compare
    //and store ans index(leftmost)
    while (right < s.length()) {
        //compare hash of string and pattern
        if (Arrays.equals(phash, shash)) {
            
            //store starting index(leftmost) for window i.e current left index

            res.add(left);

        }
        //go to next charcater for next window using right++
        right++;
        if (right != s.length()) {
            //Add only new (rightmost) character of
            //current window to hash frequency table
            
            int check3 = (s.charAt (right) - 'a');

	        if (check3 < 0){
		        check3 = -1 * check3;
	        }

            shash[check3]++;

        }
        //remove first character of previous window
        int check4 = (s.charAt (left) - 'a');
	    if (check4 < 0){
	        check4 = -1 * check4;
	    }

	    shash[check4]--;
        
        // move left pointer too for next window
        left++;

    }
    //finally return list of answer index
    return res;

}

// Driver Code
public static void main(String[] args){
    Main obj = new Main();
	String s = "ABCDEBACB";
	String p = "CAB";
    //call pattern search function and print
    System.out.print("Anagram pattern found at index: ");
	System.out.println(findAnagrams(s,p));
    }
}
```

### Output:

![Anagram pattern search output](https://user-images.githubusercontent.com/78202785/143969641-25837284-c4f2-4311-8342-98d1a6e3e322.png)


### Time Complexity :
</br> 
We are traversing string once and also comparing hash of pattern with hash of string.Therefore,the algorithm runs in O(256*N) time. 

>Hence we can say the time complexity is **O(N)** i.e. Linear Time.

### Space Complexity :

Space Complexity of an algorithm is the total space taken by the algorithm with respect to the input size. Space complexity includes both Auxiliary space and space used by input. 

>We are using arrays of 256 size,so basically Space complexity is of 
**O(1)** , which is constant space.

## References

https://www.tutorialspoint.com \
https://www.geeksforgeeks.org \
https://youtu.be/fYgU6Bi2fRg \
https://www.ideserve.co.in

