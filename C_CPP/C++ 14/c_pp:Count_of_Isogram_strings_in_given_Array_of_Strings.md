Count of Isogram strings in given Array of Strings
Given an array arr[] containing N strings, the task is to find the count of strings which are isograms. A string is an isogram if no letter in that string appears more than once.
Examples:

Attention reader! Don’t stop learning now. Get hold of all the important DSA concepts with the DSA Self Paced Course at a student-friendly price and become industry ready.  To complete your preparation from learning a language to DS Algo and many more,  please refer Complete Interview Preparation Course.

In case you wish to attend live classes with experts, please refer DSA Live Classes for Working Professionals and Competitive Programming Live for Students.

Input: arr[] = {“abcd”, “derg”, “erty”}
Output: 3
Explanation: All given strings are isograms. In all the strings no character 
is present more than once. Hence count is 3
Input: arr[] = {“agka”, “lkmn”}
Output: 1
Explanation: Only string “lkmn” is isogram. In the string “agka” 
the character ‘a’ is present twice. Hence count is 1.

 
Approach: Greedy approach can be used for solving this problem. Traverse each string in the given string array and check if that is isogram or not. To do that follow the steps mentioned below:

Traverse the array of string and follow the below steps for each string:
Create a frequency map of characters.
Wherever any character has a frequency greater than 1, skip the current string and move to the next one.
If no character has frequency more than 1, increment the count of answer by 1.
Return the count stored in answer when all the strings are traversed.
Below is the implementation of the above approach:
#include <bits/stdc++.h>
using namespace std;
  
// Function to check
// if a string is an isogram
bool isIsogram(string s)
{
    // Loop to check
    // if string is isogram or not
    vector<int> freq(26, 0);
    for (char c : s) {
        freq++;
        if (freq > 1) {
            return false;
        }
    }
    return true;
}
  
// Function to count the number of isograms
int countIsograms(vector<string>& arr)
{
    int ans = 0;
  
    // Loop to iterate the string array
    for (string x : arr) {
        if (isIsogram(x)) {
            ans++;
        }
    }
    return ans;
}
  
// Driver Code
int main()
{
    vector<string> arr = { "abcd", "derg", "erty" };
  
    // Count of isograms in string array arr[]
    cout << countIsograms(arr) << endl;
    return 0;
}
Output
3
Time Complexity: O(N*M), where N is the size of the array and M is the size of the longest string
Auxiliary Space: O(1)

