# String Anagram Problem 2
## 💡 Problem statement: : Given a word and a text, return the count of the occurrences of anagrams of the word in the text.
## Examples: </br>
1) Input : aabaabaa </br>
        aaba </br>
Output : 4 </br>
Explanation: 'aaba', 'abaa', 'aaba' and 'abaa' are anagrams of the given word found in the text.

2) Input: goodmorning </br>
noon </br>
Output: 0 </br>
Explanation: No anagram of the word 'noon' is present in the input text.

3) Input: plant </br>
tlnap </br>
Output: 1 </br>
Explanation: The entire word is an anagram of the given text.
***
## ✔️ Solution:
- Anagrams of string are the permutations of the characters in the string. Hence, for a string with n distinct characters, there are n! permutations/anagrams possible.
- We will use the sliding window technique for solving this problem efficiently.
- Create a dictionary/hashmap to store frequncies of all characters in the given word.
- Iterate through the text, adding one character at a time to the window.
- If the character being added is present in the hashmap, we will decrement its frequency in the hashmap. If the frequency becomes 0, we have a complete match.
- Whenever the number of characters matched is equal to the number of distinct characters in the word (i.e., total characters in the HashMap), we have found an anagram in the text. Hence increase the counter by 1.
- If the window size becomes greater than the length of the word, shrink the window from left side. At that time, if the character going out was part of the word, put it back in the hashmap.
***
## 👩‍💻 Code:
```
def count_anagrams(text,word):
    window_st=0                  # start the window from the 0th index
    chars_matched=0
    anagram_count=0
    freq={}                      # hashmap to store frequencies of the chars in word
    
    # Add the characters of word to the hashmap
    for ch in word:
        if ch not in freq:
            freq[ch]=0
        freq[ch]+=1   
        
    # We will try to match all the characters from freq with the current window
    for window_end in range(len(text)):
        right_char= text[window_end]
        if right_char in freq:
            freq[right_char]-=1
            if freq[right_char]==0:
                chars_matched+=1
                
        # check if all characters are matched; if yes, we have found the occurence of an anagram.
        if chars_matched== len(freq):
            anagram_count+=1
        
        # shrink the window by 1 chacter from left
        if window_end >= len(word)-1:
            left_char= text[window_st]
            window_st+=1
            
            # check if the outgoing character was present in word; if yes, add it back to the hashmap
            if left_char in freq:
                if freq[left_char]==0:
                    chars_matched-=1
                freq[left_char]+=1
    
    return anagram_count
    
    
    
print(count_anagrams("aabaabaa","aaba"))
```
## 📊 Analysis: 📈
- The **time complexity** of the above algorithm is O(N+M) where N, M are the lengths of the text and the word resp. It gives overall time complexity as **O(N)**.
- The **space complexity** is O(M) in the worst case, when all the characters of the word are distinct and all of them will go into the hashmap.

***
#### Consider example: Text="moononloon", word= "non" </br>
- Initially, the variables chars_matched and anagram_count are set to 0.
- The freq hashmap is also empty initially.
- The first for loop stores the frequencies of characters in word to the hashmap: </br>
        - ch='n', 'n' is not present in freq, hence freq['n'] is set to 0. Next, freq['n'] is incremented to 1. </br>
        - ch='o', 'o' is not present in freq, hence freq['o'] is set to 0. Next, freq['o'] is incremented to 1. </br>
        - ch='n', 'n' is present in freq, hence freq['n'] is incremented to 2. </br>
        - At the end of the for loop, freq={'n':2, 'o':1 }
        
<img src="https://user-images.githubusercontent.com/73184612/136314786-f1a4dc35-d28e-4746-bb31-4198fdd1da87.jpg" height=300 width=500>
 
- In the second for loop, we iterate through the characters of text and try to match all the characters from freq with the current window. </br>
        1. window_end =0, right_char= 'm'. 'm' is not present in freq. Hence, chars_matched remains 0. chars_matched < len(freq). So, anagram_count stays 0. </br> </br>
        2. window_end=1, right_char= 'o'. 'o' is present in freq, so freq['o'] is decremented to 0. Hence chars_matched=1. </br>
           - chars_matched < len(freq). Anagram_count remains 0.  </br>
           - window_end < len(word)-1. Hence we do not enter the if block. </br> </br>
        3. window_end=2, right_char= 'o'. 'o' is present in freq, so freq['o'] is decremented to -1. </br>
           - chars_matched != len(freq). Anagram_count remains 0.  </br>
           - window_end= len(word)-1. Hence left_char='m'. window_st is incremented to 1. left_char is not present in freq. </br> </br>
        4. window_end =3, right_char= 'n'. 'n' is present in freq, so freq['n'] is decremented to 1. </br>
           - chars_matched < len(freq). Anagram_count remains 0.  </br>
           - window_end > len(word)-1. Hence left_char='o'. window_st is incremented to 2. </br>
           - left_char 'o' is present in freq, so freq['o'] is incremented by 1. Now, freq['o']=0. </br> </br>
        5. window_end=4, right_char= 'o'. 'o' is present in freq, so freq['o'] is decremented to -1. </br>
           - chars_matched is still 1. It is less than len(freq). Anagram_count remains 0. </br>
           - window_end > len(word)-1. Hence left_char='o'. window_st is incremented to 3. </br>
           - left_char 'o' is present in freq, so freq['o'] is incremented by 1. Now, freq['o']=0. </br></br>
        6. window_end=5, right_char='n'. 'n' is present in freq, so freq['n'] is decremented to 0. Hence chars_matched becomes 2.</br>
           - chars_matched= len(freq), so anagram_count is incremented to 1. </br>
           - window_end > len(word)-1. Hence left_char='n'. window_st is incremented to 4. </br>
           - left_char 'n' is present in freq, so chars_matched is decremented to 1 and freq['n'] is incremented by 1. Now, freq['n']=1. </br></br>
        7. window_end= 6, right_char='l'. 'l' is not present in freq. </br>
           - chars_matched < len(freq). Anagram_count remains 1. </br>
           - window_end > len(word)-1. Hence left_char='o'. window_st is incremented to 5. </br>
           - left_char 'o' is present in freq, so chars_matched is decremented to 0 and freq['o'] is incremented by 1. Now, freq['o']=1. </br></br>
        8. window_end=7, right_char='o'. 'o' is present in freq, so so freq['o'] is decremented to 0. Hence chars_matched=1.</br>
           - chars_matched < len(freq). Anagram_count remains 1. </br>
           - window_end > len(word)-1. Hence left_char='n'. window_st is incremented to 6. </br>
           - left_char 'n' is present in freq, so freq['n'] gets incremented to 2. </br> </br>
        9. window_end=8, right_char='o'. 'o' is present in freq, so so freq['o'] is decremented to -1. Hence chars_matched remain 1.</br>
           - chars_matched < len(freq). Anagram_count remains 1. </br>
           - window_end > len(word)-1. Hence left_char='l'. window_st is incremented to 7. </br></br>
        10. window_end=9, right_char='n'. 'n' is present in freq, so so freq['n'] is decremented to 1. Hence chars_matched remain 1.</br>
            - chars_matched < len(freq). Anagram_count remains 1. </br>
            - window_end > len(word)-1. Hence left_char='o'. window_st is incremented to 8. </br>
            - left_char 'o' is present in freq, so freq['o'] gets incremented to 1.</br></br>
        11. window_end=10, 10= len(text), hence we come out of the for loop.</br>
  
- Finally, anagram_count=1 is returned from the function and printed as output.

<img src="https://user-images.githubusercontent.com/73184612/136317603-789a46c9-3852-4016-b368-f84df67a3836.jpg" height=350 width=500 >


***


Execution of the above code can be visualized at [Python tutor](https://pythontutor.com/visualize.html#code=def%20count_anagrams%28text,word%29%3A%0A%20%20%20%20window_st%3D0%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%23%20start%20the%20window%20from%20the%200th%20index%0A%20%20%20%20chars_matched%3D0%0A%20%20%20%20anagram_count%3D0%0A%20%20%20%20freq%3D%7B%7D%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%23%20hashmap%20to%20store%20frequencies%20of%20the%20chars%20in%20word%0A%20%20%20%20%0A%20%20%20%20%23%20Add%20the%20characters%20of%20word%20to%20the%20hashmap%0A%20%20%20%20for%20ch%20in%20word%3A%0A%20%20%20%20%20%20%20%20if%20ch%20not%20in%20freq%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20freq%5Bch%5D%3D0%0A%20%20%20%20%20%20%20%20freq%5Bch%5D%2B%3D1%20%20%20%0A%20%20%20%20%20%20%20%20%0A%20%20%20%20%23%20We%20will%20try%20to%20match%20all%20the%20characters%20from%20freq%20with%20the%20current%20window%0A%20%20%20%20for%20window_end%20in%20range%28len%28text%29%29%3A%0A%20%20%20%20%20%20%20%20right_char%3D%20text%5Bwindow_end%5D%0A%20%20%20%20%20%20%20%20if%20right_char%20in%20freq%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20freq%5Bright_char%5D-%3D1%0A%20%20%20%20%20%20%20%20%20%20%20%20if%20freq%5Bright_char%5D%3D%3D0%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20chars_matched%2B%3D1%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20%23%20check%20if%20all%20characters%20are%20matched%3B%20if%20yes,%20we%20have%20found%20the%20occurence%20of%20an%20anagram.%0A%20%20%20%20%20%20%20%20if%20chars_matched%3D%3D%20len%28freq%29%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20anagram_count%2B%3D1%0A%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20%23%20shrink%20the%20window%20by%201%20chacter%20from%20left%0A%20%20%20%20%20%20%20%20if%20window_end%20%3E%3D%20len%28word%29-1%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20left_char%3D%20text%5Bwindow_st%5D%0A%20%20%20%20%20%20%20%20%20%20%20%20window_st%2B%3D1%0A%20%20%20%20%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20%20%20%20%20%23%20check%20if%20the%20outgoing%20character%20was%20present%20in%20word%3B%20if%20yes,%20add%20it%20back%20to%20the%20hashmap%0A%20%20%20%20%20%20%20%20%20%20%20%20if%20left_char%20in%20freq%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20if%20freq%5Bleft_char%5D%3D%3D0%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20chars_matched-%3D1%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20freq%5Bleft_char%5D%2B%3D1%0A%20%20%20%20%0A%20%20%20%20return%20anagram_count%0A%20%20%20%20%0A%20%20%20%20%0A%20%20%20%20%0Aprint%28count_anagrams%28%22aabaabaa%22,%22aaba%22%29%29&cumulative=false&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false) 
  
  
