## Check if characters of a given string can be rearranged to form a palindrome

### Logic:We take count of the frequency of each letter of the string keeping these 2 points in mind.


#### 1.It is never possible for a string to be rearranged into a palindromic string if it has more than 1 character in it that has an odd frequency(no of occurances in that string) if the string length is odd.


#### 2.It is never possible for a string to be rearranged into a palindromic string if it has even one character in it that has an odd frequency(no of occurances in that string) if the string length is even.





Using maps(Time complexity:O(n))


1.we create a  map.

2.we run a loop over the string to extract each character .

3.we remove the character if it is already present in the map otherwise add to the map.

*If the string length is even,the map has to be empty to be rearranged to a palindromic string since removing characters from the map would mean it is occuring in multiples of 2(one occurance for adding in the map and other for removing),so the map has to be emplty at last.*

*If the string length is odd,the map size has to be 1 to be rearranged to a palindromic string since removing characters from the map would mean it is occuring in multiples of 2(one occurance for adding in the list and other for removing),at last,we would be left with one character in the map whose occurance would be odd,so the map has to be of a size 1, at last.*
On the above two conditions ,return true else return false.


```
bool isPalindrome(string s)
{
  
    // Create a map
    unordered_map<int,int>mp;
  
    // For each character in input string,
    // remove character if map contains it,
    // else add character to map
    for (int i = 0; i < s.length(); i++) 
    {
       if(mp.find(s[i])!=mp.end())
       mp.erase(s[i]);
        
        else
            mp.insert({s[i],1});
    }
  
  //chacking if string length is odd or even and checking list size respectively
    
    if ((s.length() % 2 == 0  && mp.empty()) || (s.length() % 2 != 0 && mp.size() == 1)) 
        return true;
    
    else
        return false;
}
```


**The overall code for the same includng main is:**

```
#include<iostream>
#include<unordered_map>
using namespace std;



bool isPalindrome(string s)
{
  
    // Create a map
    unordered_map<int,int>mp;
  
    // For each character in input string,
    // remove character if list contains
    // else add character to list
    for (int i = 0; i < s.length(); i++) 
    {
       if(mp.find(s[i])!=mp.end())
       mp.erase(s[i]);
        
        else
            mp.insert({s[i],1});
    }
  
  //chacking if string length is odd or even and checking list size respectively
    
    if ((s.length() % 2 == 0  && mp.empty()) || (s.length() % 2 != 0 && mp.size() == 1)) 
        return true;
    
    else
        return false;
}

int main()
{
    bool ans1=isPalindrome("aiskklail");
    bool ans2=isPalindrome("aiskklailj");
    cout<<ans1<<endl;
     cout<<ans2<<endl;
    
    
}

```


Output:

<img width="239" alt="out" src="https://user-images.githubusercontent.com/74200798/135765027-2b4955b0-7f5b-4c93-bbfc-788e1e805aee.PNG">



### Test cases:

isPalindrome("aiskklail")  --->true since all the characters have even occurances and only `s` has an odd occurance(frequency=1)

isPalindrome("aiskklailj") ---->false since `s` and `j` have odd frequency(=1),thereby violating the rule of not having more than one character whose frequency is odd.


1.Lets see the working for test case 1("aiskklail")-length of string=9

- Firstly list is empty.
- we encounter 'a' ,since the map does not have 'a' in it,we insert it inside the map.Map has `a`.
- we encounter i,since the map does not have 'i' in it,we insert it inside the map.Map now has `a`,`i`.
- we encounter s,since the map does not have 's' in it,we insert it inside the map.Map now has `a`,`i`,`s`.
- we encounter k,since the map does not have 'k' in it,we insert it inside the map.Map now has `a`,`i`,`s`,`k`.
- we encounter k again,since the map already has a 'k' in it,we remove it from the map.Map now has `a`,`i`,`s`.
- we encounter l,since the map does not have 'l' in it,we insert it inside the map.Map now has `a`,`i`,`s`,`l`. 
- we encounter a again,since the map already has a 'a' in it,we remove it from the map.Map now has `i`,`s`,`l`.
- we encounter i again,since the map already has a 'i' in it,we remove it from the map.Map now has `s`,`l`.
- we encounter l again,since the map already has a 'l' in it,we remove it from the map.Map now has `s` only.

**We can see the length of string is 9 which is odd and we are left with the map which has size=1,therefore it can rearrange to form a palindromic string.**


2.Lets see the working for test case 2("aiskklailj")-length of string=10

- Firstly map is empty.
- we encounter 'a' ,since the map does not have 'a' in it,we insert it inside the map.Map has `a`.
- we encounter i,since the map does not have 'i' in it,we insert it inside the map.Map now has `a`,`i`.
- we encounter s,since the map does not have 's' in it,we insert it inside the map.Map now has `a`,`i`,`s`.
- we encounter k,since the map does not have 'k' in it,we insert it inside the map.Map now has `a`,`i`,`s`,`k`.
- we encounter k again,since the map already has a 'k' in it,we remove it from the map.Map now has `a`,`i`,`s`.
- we encounter l,since the map does not have 'l' in it,we insert it inside the map.Map now has `a`,`i`,`s`,`l`. 
- we encounter a again,since the map already has a 'a' in it,we remove it from the map.Map now has `i`,`s`,`l`.
- we encounter i again,since the map already has a 'i' in it,we remove it from the map.Map now has `s`,`l`.
- we encounter l again,since the map already has a 'l' in it,we remove it from the map.Map now has `s`.
- encounter 'j' ,since the map does not have 'j' in it,we insert it inside the map.Map has `s`,`j`.

**We can see the length of string is 10 which is even and we are left with the map which has size=2,therefore it cannot rearrange to form a palindromic string.**
