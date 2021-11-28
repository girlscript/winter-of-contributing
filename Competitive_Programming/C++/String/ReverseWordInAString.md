# Reverse word in a String

Input: s = "a good example"

Output: "example good a"

Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.

## 1st Approach 

- In this approach , first we will reverse the given string .
- then we have to split the string using istringstream .
- then simply start the for each word we will reverse the word and it to the resultant string.
- to reverse function in c++ takes O(n) time complexity.

``` c++
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        string word, result;
        istringstream iss(s);
		
        while (iss >> word) {
            reverse(word.begin(), word.end());
            result += word + " ";
        }
        
        result.pop_back();
        return result;
    }
    int main(){
        string st;
        cin >> st;
        cout << reverseWords ( st );
        return 0;
    }
```
>Input: s = "a good example"
>
>Output: "example good a"

> Time Complexity O(n*m) n is number of words in the string ; m is the alphabets in each word.
>
>Space Complexity O(n)

## 2nd Approach

### Using Stack

- In this approch , we will store the word in stack and when we have traverse the full string .
- then we will store the top word in resulting string and then pop.
- we will do this till the stack doesnot turn empty.

**We have used stack as it works on principle of first in last out.** 
``` c++
    string reverseWords(string s) {
        stack<string> words;

        istringstream iss(s);
        string word;
        while (iss >> word) {
            words.push(word);
        }
        
        string result = "";
        for (; !words.empty(); words.pop()) {
            result += words.top() + " ";
        }
        
        result.pop_back();
        return result;
    }
    int main(){
        string st;
        cin >> st;
        cout << reverseWords ( st );
        return 0;
    }
```
>Input: s = "a good example"
>
>Output: "example good a"

>Time Complexity : O(n) , where n is the number of words in the string.
>Space Complexity: O(n) , as we are using stack 

