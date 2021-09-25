## Title

Word Search using Backtracking


<hr>

## Problem Statement

Given a string s and a dictionary of strings wordDict, return true if s can be segmented into a space-separated sequence of one or more dictionary words.

Note that the same word in the dictionary may be reused multiple times in the segmentation.

## Example 1:
Input: s = "leetcode", wordDict = ["leet","code"]
<br>Output: true
<br>Explanation: Return true because "leetcode" can be segmented as "leet code".

## Example 2:
Input: s = "applepenapple", wordDict = ["apple","pen"]
<br>Output: true
<br>Explanation: Return true because "applepenapple" can be segmented as "apple pen apple".
<br>Note that you are allowed to reuse a dictionary word.

## Example 3:
Input: s = "catsandog", wordDict = ["cats","dog","sand","and","cat"]
<br>Output: false


<hr>

## Algorithm Approach

<ul>
    <li>First we will count the frequency of the given word dictionary.</li>
<li>We will make a vector of DP of size of (n+1) and initialize with false.</li>
<li>We will make first position of DP by 0.</li>
<li>After this, we will traverse every sub string of s and we will check is it present or not in our map.</li>
<li>If it is present then we will initialize with true, otherwise false.</li>
<li>At the end, we will return nth position of DP vector.</li>
    </ul>
    

## Code

```
class Solution {
public:
    
    unordered_map<string,int> dict;
    
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        
        for(int i=0; i<wordDict.size(); ++i){ // count the freq of wordDict
            dict[wordDict[i]]++;
        }
        
        vector<bool> dp(n+1,false);
        dp[0] = true;
        
        
        for(int i=1; i<=s.size(); ++i){
            for(int j=i-1; j>=0; --j){
                
                if(dp[j]){    
                    string word = s.substr(j, i-j);
                    if(dict.find(word) != dict.end()){ // if(word found in dict then fill true in dp array)
                        dp[i] = true;
                        break; // move to next i
                    }
                }
            }
        }
        
        return dp[n]; // at last return nth position
    }
};

```
<hr>

## Complexity

<ul>
    <li>Time complexity - O(n)</li>
     <li>Space complexity- O(n)</li>
    </ul>
    
