
Here we will write a program to count the number of non repeating digits in a given range. Let’s start with understanding the problem.
---
**Given**: A Range starting from L till R.

**Problem**: Find the count of total numbers such that they do not have any repeated digits. Like 123 has no repeated digits but 121, 122, 133 have repeated digits.

**Examples**:
```
Input : 100 102
Output : 1
Explanation : In the given range 102 has no repeated digits
where as 100 and 101 has repeated digits.

Input : 1 100
Output : 90
```
**Solution 1: Simple solution is to check each element:**

1.Iterate though each element.

2.check whether the digits are repeated or not.

3.count the number of elements with repeated digits.

### Code 
---
```
 #include <bits/stdc++.h> 
using namespace std; 

// Function to check if digits are repeated
int repeated_digit(int n) 
{ 
    unordered_set<int> s;  
    while(n != 0) 
    { 
        int d = n % 10; 
        if(s.find(d) != s.end()) 
        { 
            return 0; 
        } 
        s.insert(d); 
        n = n / 10; 
    } 
    // return 1 if the number has no repeated digit 
    return 1; 
} 

// Function to find total numbers with no repeated digits
int calculate(int L,int R) 
{ 
    int answer = 0; 
    for(int i = L; i < R + 1; ++i) 
    { 
        answer = answer + repeated_digit(i); 
    } 
    return answer ; 
} 

int main() 
{ 
    int L = 1, R = 100; 
    // Calling the calculate 
    cout << calculate(L, R); 
    return 0; 
} 
```
Output:

**90**

Time Complexity: O(n)

**Solution 2: with time complexity O(1)**

1.Calculate a prefix array for the number with no repeated digits.

2.Prefix[i] = Total number with no repeated digit less than or equal to 1.

3.Result = Prefix[R] – Prefix [L – 1]

**code**
---
```
#include <bits/stdc++.h> 
using namespace std; 

int MAX = 1000; 

// Prefix Array 
vector<int> Prefix = {0}; 

// Function to check if the given has repeated digits
int repeated_digit(int n) 
{ 
    
    unordered_set<int> a; 
    int d; 
    
    while (n != 0) 
    { 
        d = n % 10; 
        
        if (a.find(d) != a.end()) 
            
            // return 0 if the number has repeated digit 
            return 0; 
        
        a.insert(d); 
        n = n / 10; 
    } 
    
    // return 1 if the number has no repeated digit 
    return 1; 
} 

// Function to pre calculate the Prefix array 
void pre_calculation(int MAX) 
{ 
    
    Prefix.push_back(repeated_digit(1)); 
    
    // Traversing through the numbers from 2 to MAX 
    for (int i = 2; i < MAX + 1; i++) 
        
        // Generating the Prefix array 
        Prefix.push_back(repeated_digit(i) + Prefix[i-1]); 
} 

int calculate(int L,int R) 
{ 
    return Prefix[R] - Prefix[L-1]; 
} 

int main() 
{ 
    int L = 1, R = 100; 
    
    // Pre-calculating the Prefix array. 
    pre_calculation(MAX); 
    
    cout << calculate(L, R) << endl; 

    return 0; 
}
```
Output:

**90**

**Contributor**: [Shalini Kumari](https://github.com/Raghavshalu)