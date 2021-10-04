## STRING ANAGRAM

* Two Strings S1 and S2 are said to be anagram of each other if S2 is one of permutation of S1.
* lets have a example of this :

###   Example :1

*  S1="listen"
*  S2="silent"

*  So from above , we can see that  S2 is permutation of S1
*  So we can say that S1 and S2 are anagram of each other.

###   Example :2

*   S1="silent"
*  S2="super"
* So above S1 and S2 are not anagram of Each other.

## Method : 1 (Brute Force Approach)
* Use 2 for loop 
* Iterate over characters of one string and check whether every character present in other string or not
* if(All characters of S1 is present in S2)
    * `S1 and S2 are anagram of each other`
* else:
   * `S1 and S2 are not anagram of each other`

###  Implementation 
```C++
#include <bits/stdc++.h>
using namespace std;
bool check(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        bool flag = false;
        for (int j = 0; j < s2.length(); j++)
        {
            if (s1[i] == s2[j])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    if (check(s1, s2))
    {
        cout << s1 << " and " << s2 << " are anagram of each other." << endl;
    }
    else
    {
        cout << s1 << " and " << s2 << " are not anagram of each other." << endl;
    }
    return 0;
}
```
####  Time Complexity : O(N^2)
#### Space Complexity : O(1)

## Method : 2
1. Sort S1 and S2 and 
2. if(s1==s2)
     `return true`
3. else :  `return false`


### Implementation 
```C++
 #include <bits/stdc++.h>
 using namespace std;
 bool check(string s1, string s2)
 {
     if (s1.length() != s2.length())
     {
         return false;
     }
     sort(s1.begin(),s1.end());
     sort(s2.begin(),s2.end());
 
     return (s1==s2);
 }
 int main()
 {
     string s1, s2;
     cin >> s1;
     cin >> s2;
     if (check(s1, s2))
     {
         cout << s1 << " and " << s2 << " are anagram of each other." << endl;
     }
     else
     {
         cout << s1 << " and " << s2 << " are not anagram of each other." << endl;
     }
     return 0;
 }
```
#### Time Complexity : O(nlog(n)) 
*    where n: is the length of longest string
#### Space Complexity : O(1)


## Method : 3
* Make a array of 256 length and initialize it with zero.
* Then increase count array frequency for every respective character in S1
* and decrease  count array frequency for every respective character in S2
* Iterate over frequency array and check if there present any element in frq. array whose element is non-zero
* if(element found non-zero):
        *`return false`
* else:  
*       *`return true`


### Implementation 

```C++
#include <bits/stdc++.h>
using namespace std;
bool check(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    vector<int> freq(256,0);
    for(int i=0;i<s1.length();i++){
        freq[s1[i]]++;
        freq[s2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    if (check(s1, s2))
    {
        cout << s1 << " and " << s2 << " are anagram of each other." << endl;
    }
    else
    {
        cout << s1 << " and " << s2 << " are not anagram of each other." << endl;
    }
    return 0;
}
```
#### Time Complexity : O(N)
#### Space Complexity : O(N)
