## Check if characters of a given string can be rearranged to form a palindrome

### Logic:We take count of the frequency of each letter of the string keeping these 2 points in mind.


#### 1.It is never possible for a string to be rearranged into a palindromic string if it has more than 1 character in it that has an odd frequency(no of occurances in that string) if the string length is odd.


#### 2.It is never possible for a string to be rearranged into a palindromic string if it has even one character in it that has an odd frequency(no of occurances in that string) if the string length is even.


- Solution1 
Time complexity(O(n^2))




In this case,

1.we firstly create a character array which is of size 256 for taking account of all 256 characters which may be present in the string.

2.We traverse through the string and increment the value of frequency in character array of each character in that string(no of occurences of a unique character in that string)

3.Now we loop through the character array and check if we encounter a character's frequency which is not even.If the no of characters whose frequency  in that word is odd,is greater than 1,it can never form a palindrome.


```
bool isPalindrome(string s)
{
    // Create a character array and initialize all
    // values as 0
    //there are a total of 256 characters
    int character[256] = { 0 };
  
    
    // increment count in the corresponding
    // character array
    for (int i = 0; i<s,length(); i++)
        character[s[i]]++;
  
    // Count odd occurring characters
    int odd = 0;
    for (int i = 0; i < 256; i++) {
        if (character[i] %2!=0)
            odd++;
  
        if (odd > 1)
            return false;
    }
  
    // true if odd count is 0 or 1,
    return true;
}
```
  

### TEST CASES:

    isPalindrome("aiskklail")  --->true since all the characters have even occurances and only `s` has an odd occurance(frequency=1)
    
    isPalindrome("aiskklailj") ---->false since `s` and `j` have odd frequency(=1),thereby violating the rule of not having more than one character whose frequency is odd.
     








- Solution 2
Using lists(Time complexity:O(n))


1.we create a  list.

2.we run a loop over the string to extract each character .

3.we remove the character if it is already present in the list otherwise add to the list.

*If the string length is even,the list has to be empty to be rearranged to a palindromic string since removing characters from the list would mean it is occuring in multiples of 2(one occurance for adding in the list and other for removing),so the list has to be emplty at last.*

*If the string length is odd,the list size has to be 1 to be rearranged to a palindromic string since removing characters from the list would mean it is occuring in multiples of 2(one occurance for adding in the list and other for removing),at last,we would be left with one character in the list whose occurance would be odd,so the list has to be of a size 1, at last.*
On the above two conditions ,return true else return false.


```
bool isPalindrome(string s)
{
  
    // Create a list
    vector<char> list;
  
    // For each character in input string,
    // remove character if list contains
    // else add character to list
    for (int i = 0; i < s.length(); i++) 
    {
       if(list.find(s[i])!=list.end())
       list.erase(s[i]);
        
        else
            list.push_back(s[i]);
    }
  
  //chacking if string length is odd or even and checking list size respectively
    
    if ((str.length() % 2 == 0  && list.empty()) || (str.length() % 2 != 0 && list.size() == 1)) 
        return true;
    
    else
        return false;
}
```
  

### Test cases:
   
isPalindrome("aiskklail")  --->true since all the characters have even occurances and only `s` has an odd occurance(frequency=1)
    
isPalindrome("aiskklailj") ---->false since `s` and `j` have odd frequency(=1),thereby violating the rule of not having more than one character whose frequency is odd.
     

1.Lets see the working for test case 1("aiskklail")-length of string=9

- Firstly list is empty.
- we encounter 'a' ,since the list does not have 'a' in it,we insert it inside the list.List has `a`.
- we encounter i,since the list does not have 'i' in it,we insert it inside the list.List now has `a`,`i`.
- we encounter s,since the list does not have 's' in it,we insert it inside the list.List now has `a`,`i`,`s`.
- we encounter k,since the list does not have 'k' in it,we insert it inside the list.List now has `a`,`i`,`s`,`k`.
- we encounter k again,since the list already has a 'k' in it,we remove it from the list.List now has `a`,`i`,`s`.
- we encounter l,since the list does not have 'l' in it,we insert it inside the list.List now has `a`,`i`,`s`,`l`. 
- we encounter a again,since the list already has a 'a' in it,we remove it from the list.List now has `i`,`s`,`l`.
- we encounter i again,since the list already has a 'i' in it,we remove it from the list.List now has `s`,`l`.
- we encounter l again,since the list already has a 'l' in it,we remove it from the list.List now has `s` only.

**We can see the length of string is 9 which is odd and we are left with the list which has size=1,therefore it can rearrange to form a palindromic string.**


2.Lets see the working for test case 2("aiskklailj")-length of string=10

- Firstly list is empty.
- we encounter 'a' ,since the list does not have 'a' in it,we insert it inside the list.List has `a`.
- we encounter i,since the list does not have 'i' in it,we insert it inside the list.List now has `a`,`i`.
- we encounter s,since the list does not have 's' in it ,we insert it inside the list.List now has `a`,`i`,`s`.
- we encounter k,since the list does not have 'k' in it,we insert it inside the list.List now has `a`,`i`,`s`,`k`.
- we encounter k again,since the list already has a 'k' in it,we remove it from the list.List now has `a`,`i`,`s`.
- we encounter l,since the list does not have 'l' in it,we insert it inside the list.List now has `a`,`i`,`s`,`l`. 
- we encounter a again,since the list already has a 'a' in it,we remove it from the list.List now has `i`,`s`,`l`.
- we encounter i again,since the list already has a 'i' in it,we remove it from the list.List now has `s`,`l`.
- we encounter l again,since the list already has a 'l' in it,we remove it from the list.List now has `s`.
- encounter 'j' ,since the list does not have 'j' in it,we insert it inside the list.List has `s`,`j`.

**We can see the length of string is 10 which is even and we are left with the list which has size=2,therefore it cannot rearrange to form a palindromic string.**


