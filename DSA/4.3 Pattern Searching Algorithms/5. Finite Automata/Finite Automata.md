# **Finite Automata**


## Definition of Finite Automata
A finite automaton (FA) is a simple idealized machine used to recognize patterns within input taken from some character set (or alphabet). The job of an FA is to accept or reject an input depending on whether the pattern defined by the FA occurs in the input. 

#### Use ->
The pattern matching using Finite Automata (FA) is a very useful tool which is used in pattern matching algorithm. It examines every character in the text exactly once and reports all the valid shifts in O (n) time. The goal of pattern matching is to find the location of specific text pattern within the larger body of text for ex: a book, a sentence, a paragraph etc.

It consists :
A finite automaton M is a 5-tuple (Q, ∑, q0, F, δ), \
where :

    Q is a set of finite states,
    ∑ is a finite input alphabet,
    q0 ∈ Q is the start state,
    F is set of final state.
    δ is a function from Q x ∑ into Q called the transition function of M.

 Example of Transition Function :
  Text t : abababacaba    \
  Pattern p : ababaca \
  ∑ = {a , b, c} \
  No. of states = p.length() + 1 = 7 + 1 = 8 \
  i.e {0, 1 ,2 ,3, 4, 5 , 6, 7}

First row encountered only a. So fill other rows 0.
Highlighted values are filled directly  

Example: for pattern a in state 0(1st) \
for pattern b in state 1(2nd) fill 2. \
for pattern a in state 2(3rd) fill 3. and so on....

Transition function :

![Transition Function Table](https://user-images.githubusercontent.com/78202785/144088632-93c884dc-6814-482a-be3c-8b067643d29e.png)
 
  For calculation of other values :
![Calculations of final Transition Function Table](https://user-images.githubusercontent.com/78202785/144097105-b2d5d6b2-da0b-4988-90ce-b56b9da48be2.png)



#### Types:
Deterministic Finite Automaton (DFA)

In DFA, for each input symbol, one can determine the state to which the machine will move. Hence, it is called Deterministic Automaton. As it has a finite number of states.

Non-deterministic Finite Automaton (NDFA)

In NDFA, for a particular input symbol, the machine can move to any combination of the states in the machine. In other words, the exact state to which the machine moves cannot be determined. \
   In case of DFA \
   δ : Q X Σ --> Q \
   In case of NFA \
   δ : Q X Σ --> 2Q

> FINITE- AUTOMATON-MATCHER (T, δ, m),
 1. n ← length [T]
 2. q ← 0
 3. for i ← 1 to n
 4. do q ← δ (q, T[i]) 
 5. If q =m
 6. then s←i-m
 7. print "Pattern occurs with shift s" s



## Example
Diagrams represent tabular graphical representations of pattern ACACAGA.
![Graphical form2](https://user-images.githubusercontent.com/78202785/144104270-bfdc9451-8356-4c0d-9644-ffd2facaeccb.PNG)
![Graphical form](https://user-images.githubusercontent.com/78202785/144104279-af77e681-0eab-40d5-b172-aaf38fb01fc8.PNG)


![Capture](https://user-images.githubusercontent.com/78202785/144105291-fa956fb9-97f8-4783-b22e-fb96afa32c3a.PNG)


## Algorithm
    
1) Fill the first row. All entries in the first row are always 0 except the entry for the pat[0] character. For pat[0] character, we always need to go to state 1. 
2) Initialize lps(longest prefix suffix) as 0. lps for the first index is always 0. 
3) Do following for rows at index i = 1 to M. (M is the length of the pattern) 
 * a) Copy the entries from the row at index equal to lps. 
 * b) Update the entry for pat[i] character to i+1. 
 * c) Update lps “lps = TF[lps][pat[i]]” where TF is the 2D array which is being constructed. 

In search, we need to start from the first state of the automata and the first character of the text. At every step, we consider next character of text, look for the next state in the built FA and move to a new state. If we reach the final state, then the pattern is found in the text. The time complexity of the search process is O(n). 


### Implementation of Finite Automata Pattern search Algorithm in java:    

```java
class Main { 
      
    static int No_of_Chars = 256; 
    
    //Function for finding next state
    static int getNextState(char[] pat, int M, int state, int x){ 
          
        // If the character is same as next 
        // character in pattern,then simply  
        // increment state 
        if(state < M && x == pat[state]){
            return state + 1; 
        }
        
        // Stores result of next state in ns
        //ns contains largest prefix which is also suffix 
        int ns, i; 
        
        // Start from the largest possible value 
        // and stop when you found prefix==suffix 
        for (ns = state; ns > 0; ns--){ 
            if (pat[ns-1] == x){ 
                for (i = 0; i < ns-1; i++){
                    // if not match break
                    if (pat[i] != pat[state-ns+1+i]){ 
                        break; 
                    }        
                    if (i == ns-1){ 
                        return ns; 
                        
                    }       
                }
            }
           
        } 
        return 0;
        
    }
  
    // This function builds the TF table
    static void computeTF(char[] pat, int M, int TF[][]){ 
        int state, x; 
        for (state = 0; state <= M; state++){ 
            for (x = 0; x < No_of_Chars; x++){
                TF[state][x] = getNextState(pat, M, state, x); 
                
            }       
        }
    }
  
    // Print indexes where pattern is found
    static void search(char[] pat, char[] txt){ 
        int M = pat.length; 
        int N = txt.length; 
  
        int[][] TF = new int[M+1][No_of_Chars]; 
  
        computeTF(pat, M, TF); 
  
        // Process txt over FA. 
        int i, state = 0; 
        for (i = 0; i < N; i++){ 
            // state should match TF value
            state = TF[state][txt[i]]; 
            if (state == M){ 
                System.out.println("Pattern found " + "at index " + (i-M+1)); 
                
            }
        }  
    } 
  
    // Driver code 
    public static void main(String[] args){ 
        char[] pat = "ABCDBCDABCDBBABCDA".toCharArray(); 
        char[] txt = "ABCD".toCharArray(); 
        //calling search function
        search(txt,pat); 
    } 
} 
```

### Output:

![Output11](https://user-images.githubusercontent.com/78202785/144103393-4a577a49-1974-41b1-b9c2-92535cf5d15b.PNG)


### Time Complexity :
</br> 

The time complexity of the computeTF() is **O(m^3*No_of_Chars)**
The time complexity of the search is **O(n)**

>Hence we can say the search time complexity is **O(N)** i.e. Linear Time.


## References

https://www.tutorialspoint.com </br>
https://www.geeksforgeeks.org \
https://www.cs.rochester.edu


