# **Substrings of a String**
 
 
## **Substrings:**
    Any smaller part taken from a string that is contiguous is called the substring of a string. 
    A sub-String is like a pizza slice, a contiguous part of the complete pizza. 

<p align="center">
    <img height="300" src="https://i.ibb.co/8MWWrZ8/substring.png"></img>
</p>

## **For Example:**
    Assume a string GirlScript 

        | G | I | R | L | S | C | R | I | P | T |
    
    Here GIRL, SCRIPT, RIPT, SCR are all substring of the given string. 

    
###### *Note:*  any non-contiguous work like GSRIPT is not considered substring. 
 
 
 
 
 
 ## **Sub String function:**

    Let's look at how to print all the sub strings of a string.  
 
    1. BRUTE FORCE APPROACH:  three nested loops   
       time complexity: o(n^3)   , space complexity: o(1)
       
    2. Using substr() function:
       time complexity: o(n^3)   , space complexity: o(1)
       
    3. To produce substrings from previously formed substring:
       time complexity: o(n^2)   , space complexity: o(1)
 
##### In the following code we have the function printed for all the three approaches to code the print string function. Let’s have a look at them  
 
### 1. Three nested loops: 
 
* This is the first approach that comes to our mind when we think about print all the sub arrays.
* To choose starting and ending index and then print every character in between. 
* Assume the function takes two arguments: the string itself and its length. 
* To cover all the sub-strings, we can first loop over the entire string and select the starting index. This can be done using a loop. 
* Now for each starting index i we can have n - i choices to select the ending index. This gives us the nested loop. 
* And then finally we print them using the third nested loop. 
 
#### Here is the code: 
```cpp
#include <iostream> 
using namespace std; 
 
void PrintsubString1(string s, int Len){ 
    int i,j,k; 
    for(i=0;i<Len;i++){ //choosing staring index 
        for(j=i;j<Len;j++){ //choosing ending index 
            
            
            // loop to print the substring 
            for(k=0;k<Len;k++){ 
                if(k>=i && k<=j){ 
                    cout<< s[k]; 
                } 
            } 
            
            
            //end of the substring so new line 
            cout<<endl; 
        } 
    } 
} 
 
 
int main(){ 
    string s="girl"; 
    int n=s.length(); 
    PrintsubString1(s, n); 
    return 0; 
} 
```
 
### 2. Using substr() function: 
 
* Substr() is an inbuilt c++ function.
* It takes argument of the starting index and the length of the sub-string and returns the sub-string. 
* So, we can create a nested loop first one to determine the starting index and second one to determine the different lengths.
* Then finally call the substr() function to print the sub-string. 
* Since substr() function has a time complexity of o(n) the overall time complexity becomes o(n^3). 
 
#### Here is the code: 
```cpp
#include <iostream> 
#include <string.h> 
using namespace std; 
 
 
void PrintsubString2(string s, int n){ 
    int i,len; 
    for(i=0;i<n;i++){       //choosing staring index 

        //Loop with different lengths of the string. For starting index i, max length can be n-i. 
        for(len=1 ; len < n-i+1 ; len++){  

            // calling substr()function, takes starting index and length as input 
            cout<<s.substr(i,len)<<endl; 
        } 
    } 
} 
 
int main(){ 
    string s="harvey"; 
    int n=s.length(); 
    PrintsubString2(s, n); 
    return 0; 
} 
```
   
### 3. To produce substrings from previously formed substring: 
* This method is better than the other two in terms of time complexity. 
* This is because in each iteration we just add another character to the temporary array created.
* Then simply print the array instead of adding another loop to traverse through the array to print the substring. 
* In this approach we get a time complexity of o(n^2). 
 
#### Here is the code: 
```cpp
#include <iostream> 
using namespace std; 
 
 
void PrintsubString3(string s, int n){ 
    //first loop for starting index 
    for(int i=0;i<n;i++){ 
        //now we create a character array of size of the maximum length of substring possible with i as starting index 
        char sub[n-i+1];            //+1 for /0 

        int index=0; 

        //creating another loop to add one character at a time and print the array 
        for(int j=i;j<n;j++){ 
            sub[index]=s[j]; 
            index++; 
            sub[index]='\0';        //marks the end of the sub-string 
            cout<<sub<<endl; 
        } 
    } 
} 
 
 
int main(){ 
    string s="GWOC"; 
    int n= s.length(); 
    PrintsubString3(s, n); 
    return 0; 
} 
```
 
## Analysis: 
    So clearly the best time complexity in implementing the sub-string function is o(n^2)
    while the space complexity is o(1). 
    So that was all about printing sub strings. 
 
## Sources and references: 
   [Geeks for Geeks](https://www.geeksforgeeks.org/program-print-substrings-given-string/)  
   [Pizza img](https://carolinarice.com/wp-content/uploads/2020/04/Rice-Pizza-Crust.jpg )  
 
 
<p align = "center">----- Hope it helps you! Contributed with love✨ by <a href = "https://github.com/uzma024">~Uzma </a> ----</p>
