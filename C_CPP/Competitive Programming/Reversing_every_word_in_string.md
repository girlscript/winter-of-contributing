# Reversing words in a String

Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

I have commented the code for explanation of the code and logic.

## Example

**Input**: s = "a good example"

**Output**: "example good a"

**Input**: s = " hello world "

**Output**: "world hello"

## Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   string reverseWords(string A) 
   {
reverse(A.begin(),A.end()); //reverse the original string
stringstream w(A);  //w comprises of all reversed words of A
string word;
string rev_word="";  //final string to be returned
while(w>>word)
{
    reverse(word.begin(),word.end());  //reversing the word so that it comes to original form
    rev_word += word;     //storing word
    rev_word += " ";     //adding space
}
rev_word.erase(rev_word.length()-1,1); //removing the additional last space added
return rev_word;
}
};
int main()
{ 
    string str;
    Solution sol;
   cout<<"Enter the string: ";
   getline(cin,str);
   cout<<"Reversed Strng is: "<< sol.reverseWords(str);
    
}

```

### Time Complexity

O(n)

### Space Complexity

O(1)
