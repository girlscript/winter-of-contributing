# Check if the Sentence Is Pangram or not.

 A pangram is a sentence where every letter of the English alphabet appears at least once. Given a string sentence containing only lowercase English letters, return true if the sentence is a pangram, or false otherwise.
 
 **Example 1**

**Input**: sentence = "thequickbrownfoxjumpsoverthelazydog" <br>
**Output**: true <br>
**Explanation**: sentence contains at least one of every letter of the English alphabet.



 **Example 2**
 
 
 **Input**: sentence = "GirlScript Winter Of Contributing" <br>
**Output**: false

***
### Approach 1
<br>
We create an array of Boolean type. We iterate through all the characters of our string and whenever we see a character we mark it. Lowercase and Uppercase are considered the same. So ‘A’ and ‘a’ are marked in index 0 and similarly ‘Z’ and ‘z’ are marked in index 25

### Code
```cpp
#include <bits/stdc++.h>
using namespace std;
 
                                                               
bool IsPangram(string& str)                               // Function to check if the given string is pangram or not.
{
    vector<bool> answer(26, false);                                                
    int index;
    for (int i = 0; i < str.length(); i++) {                          //checking all characters in the loop
 
        // If uppercase character, subtract 'A'
        // to find index.
        if ('A' <= str[i] && str[i] <= 'Z')
            index = str[i] - 'A';                                                                                                
        // If lowercase character, subtract 'a'                                                       
        else if ('a' <= str[i] && str[i] <= 'z')
            index = str[i] - 'a';
 
        // If this character is other than english
        // lowercase and uppercase characters.
        else
            continue;
        answer[index] = true;
    }
 
    // Return false if any character is unmarked
    for (int i = 0; i <= 25; i++)
        if (answer[i] == false)
            return (false);
 
    // If all characters were present
    return (true);
}
int main()
{
    string str = "The quick brown fox jumps over the lazy dog";
 
    if (IsPangram(str) == true)
      cout<<"The given string is a pangram";
    else
        cout<<"The given string is not a pangram";
    return (0);
}
```

### Complexity Analysis

**Time Complexity**: O(n), where n is the length of our string  <br>
 Space  Complexity – O(n)
 
 ***
 
### Approach 2
As we know HashSet contains only unique values. So here we can use a Character HashSet and then check the size of the set if it is 26 then the string is a pangram.

### Code




```cpp
#include <bits/stdc++.h>
using namespace std;
                                                           

 bool IsPangram(string sentence) {                          // Function to check if the given string is pangram or not. 
        unordered_map<char,int>m;                                                    
        for(int i=0;i<sentence.size();i++){
            m[sentence[i]]++;                                                      // mapping each character 
   }
        
        if(m.size()==26){
            return true;                                                      // returning true if all the letters are present
        }
        else{
            return false;
        }       
    }

int main()
{
    string str = "The quick brown fox jumps over the lazy dog";
 
    if (IsPangram(str) == true)
      cout<<"The given string is a pangram";
    else
        cout<<"The given string is not a pangram";
    return (0);
}
```
### Complexity Analysis

**Time Complexity**: O(n), where n is the length of our string  <br>
**Space  Complexity** – O(n)


 
