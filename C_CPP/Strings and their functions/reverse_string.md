<h1 text align="center"> Reversing words in a String</h1>
<p>This a answer for leetcode  <a href"https://leetcode.com/problems/reverse-words-in-a-string/">question</a> https://leetcode.com/problems/reverse-words-in-a-string/ <br>
Example<br>  Input: s = "a good   example" <br>
 Output: "example good a"
<br><h2>Solution</h2>


```
class Solution {
public:
   string reverseWords(string A) {   
reverse(A.begin(),A.end()); //reverse the original string
stringstream w(A);  //w comprises of all reversed words of A 
string word;
string rev_word="";  //final string to be returned

while(w>>word)
{
    reverse(word.begin(),word.end());  //reversing the word so that it comes to original form
    rev_word += word; //storing word
    rev_word += " ";     //adding space
}

rev_word.erase(rev_word.length()-1,1); //removing the additional last space added 
return rev_word; 
}
};
```