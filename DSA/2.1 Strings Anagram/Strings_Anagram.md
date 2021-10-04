## STRING ANAGRAM

* Two Strings S1 and S2 are said to be anagram of each other if S2 is one of permutation of S1.
  lets have a example of this :

#   Example :1
# ---------------
  S1="listen"
  S2="silent"

*  So from above , we can see that  S2 is permutation of S1
*  So we can say that S1 and S2 are anagram of each other.

#   Example :2
# ---------------
   S1="silent"
   S2="super"
* So above S1 and S2 are not anagram of Each other.

# Method : 1 (Brute Force Approach)
* Use 2 for loop 
* Iterate over characters of one string and check whether every charcter present in other string or not
* if(All characters of S1 is present in S2)
   * S1 and S2 are anagram of each other
* else:
   * S1 and S2 are not anagram of each other

#  Implementation 
# ---------------- 
 