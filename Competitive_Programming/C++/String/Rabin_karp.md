# Rabin-Karp Algorithm
Rabin-karp algorithm is a string searching algorithm that uses hash functions for matching patterns in strings.
The basic logic behind this algorithm is that, if two strings are same, their hash values are also same.
>A **hash** function basically maps a very large integer value or 
>a string to a much smaller number which can be used as a key in hash table.
## Explanation
Let us understand the algorithm with a example.
1.  Let the string be 
```
 A B B C C D A B B F 
```
2. Let the pattern string (to be searched) be
```
A B B
```
3. Assign a value to the characters.
```
A B C D E F G H I J
1 2 3 4 5 6 7 8 9 10 (ASCII values can also be used)
```
4. Let `n` be the size of string in which pattern has to be found, and `m` be the size of pattern string.
Here, `n`=10 and `m`=3.                            
`d` be the number of characters in input set. Here, input set is {A B....J} so `d`=10.
5. Calculate the hash value of the pattern.
Here, the function used for calculating hash value is Σ(v * d^(m-1)) mod 13.
```
Hash value of pattern (A:1, B:2, B:2)= Σ(v * d^(m-1)) mod 13 
                                     = ((1*10^2)+(2*10^1)+(2*10^0))%13
                                     = (100+20+2)%13
                                     = 122%13
                                     = 5
```
6. Start calculating the hash value for a text-window of size `m`
```
text-window: "A B B"
Hash value= Σ(v * d^(m-1)) mod 13 
          = ((1*10^2)+(2*10^1)+(2*10^0))%13
          = (100+20+2)%13
          = 122%13
          = 5
```
Now, if the hash value of text-window and pattern are equal, then perform the character matching.

7. To calculate hash value of next window, substract the first term and add the next term.
```
text-window: "B B C"
Hash value= ( ((1*10^2)+(2*10^1)+(2*10^0)-(1*10^2))*10 +(3*10^0) )%13
          = ((100+20+2-100)*10 +3)%13
          = (223)%13
          = 2
```
Since hash value of "B B C" is not equal to hash value of pattern then, don't perform character matching.

8. Similarly, keep checking for each window.
```
       2
      _|_
     |   |
 A B B C C D A B B F 
 |___|       |___|
   |           |
   5           5
```
## Source Code
```cpp
#include<bits/stdc++.h>
#define d 10
using namespace std;
void rabin_karp(char pattern[], char txt[], int Q) {
  int m = strlen(pattern);
  int n = strlen(txt);
  int i, j;
  int p = 0;
  int t = 0;
  int h = 1;

  for (i = 0; i < m - 1; i++)
    //calculating h={d^(m-1)} mod Q
    h = (h * d) % Q;             

  for (i = 0; i < m; i++) {
    //hash value for pattern
    p = (d * p + pattern[i]) % Q;
    //hash value for text-window
    t = (d * t + txt[i]) % Q;    
  }

  // Finding the match
  for (i = 0; i <= n - m; i++) {
    //if hash values are same then only check for characters
    if (p == t) {               
      for (j = 0; j < m; j++) {
        if (txt[i + j] != pattern[j])
          break;
        }
      //if character are also same, then pattern has been found
      if (j == m)
        cout << "Pattern is found at position: " << i + 1 << endl;
    }
    if (i < n - m) {
        //finding hash value of next window: remove first digit and add next digit
        t = (d * (t - txt[i] * h) + txt[i + m]) % Q;
        //if hash value is negative make it positive
        if (t < 0)
            t = (t + Q);
    }
  }
}
int main(){
    char txt[]="ABBCCDABBF";
    char pattern[]="ABB";
    int Q=13;                   //this could be any prime number
    rabin_karp(pattern,txt,Q);
    return 0;
}
```
### Output
>Pattern is found at position: 1                               
>Pattern is found at position: 7
## Time Complexity Analysis
- Average Case and Best Case Complexity is O(m+n)
- Worst Case Complexity is O(m*n). This occurs because of spurious hits.
> NOTE :
> - Spurious Hit: When hash value of the pattern matches with the hash value of text-window but the characters dosen't match(it is not the actual pattern) that is called spurious hit. 
> - Spurious hits increase the time complexity of the algorithm. Thus, to minimize spurious hits modulus is used.


                       
