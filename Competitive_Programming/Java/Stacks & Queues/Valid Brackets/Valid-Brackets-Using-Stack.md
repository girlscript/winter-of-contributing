<h1 align = "center"><strong>Valid Brackets Using Stack</strong></h1>
<hr>
<h2>Problem Statement :- <br><br><em><strong> • Check for Balanced Brackets in an expression using Stack.</strong></em></h2>
<hr>
<h2><strong>Brackets which we all most commonly use or encounter are of 3 main types :-</strong></h2>
<ul>
    <li>Round brackets, open brackets or parentheses: ( )</li>
    <li>Square brackets, closed brackets or box brackets: [ ]</li>
    <li>curly brackets, squiggly brackets, swirly brackets, braces, or chicken lips: { }</li>
</ul>
<br>
<h2><strong>Let's understand the approach first :-</strong></h2>
<p>
<h3>We have to determine whether the given input of brackets is valid or not.</h3>
<ul>
<br>
<li>To check this we first use stack data structure, which works on the principle of <strong>LIFO (Last in first out) .</strong></li><br>

<li>We start iterating over the input string given to us , and in the if clause (statement) whenever we encounter a open bracket i.e. <strong> ( , [ , { </strong> we push that bracket in the stack data structure which we have used.</li>
<br>

<li>And, on the other hand in the else clause (condition).</li>
<br>
<ul>
    <li>We first always check that our stack should not be empty because if the stack is empty then that implies that the first character we encountered in the string is a close bracket. If we get this condition we just simply need to return back from the function and no need to check further,<strong> hence the given input of strings are not Valid Brackets.</strong></li><br>
    <li>Or, else we pop the value out of the stack and compare it with the character we have encountered with i.e. it's a valid combination with the closed brackets. Valid Combinations are as follows :-</li><br>
    <ul>
        <li>Valid Combination for : <strong>(</strong> -> <strong>)</strong></li>
        <li>Valid Combination for : <strong>[</strong> -> <strong>]</strong></li>
        <li>Valid Combination for : <strong>{</strong> -> <strong>}</strong></li>
    </ul>
    <br>
    <li>If we encounter any, other combinations we just simply return back from the function and no need to check further ,<strong> hence the given input of strings are not Valid Brackets.</strong></li><br>
    <li>At last if we came out of the loop , we just need to check one condition whether our stack data structure is empty or not.</li><br>
    <ul> 
        <li>If it is not empty then it means all of the Brackets are not matched and are not popped out completely and,<strong> hence the given input of strings are not Valid Brackets.</strong> </li>
        <li>Else, if the stack is empty then it means all of the brackets have matched properly and popped out completely and,<strong> hence, at last, we can say that the given input of strings are Valid Brackets.</strong> </li>
    </ul>

</ul>
</ul>
</p>
<br>

<p align="center">
  <img src="https://user-images.githubusercontent.com/85160299/134719168-bb84eb3a-8f6e-454e-b8a7-8f08da4bd298.png">
</p>

<br>
<h2><strong>Let us see some examples to understand better:-</strong></h2>
<ul>
    <li><strong>"( ) { [ ] }" -> Valid Brackets</strong></li>
    <li><strong>") ( ) { }" -> Invalid Brackets</strong></li>
    <li><strong>"{ } ( ) [ ]" -> Valid Brackets</strong></li>
    <li><strong>"[ { ( ) } ]" -> Valid Brackets</strong></li>
    <li><strong>"[ } ( ) ]" -> Invalid Brackets</strong></li>
</ul>
<hr>
<br>
<h2><strong>Code implementation in JAVA:-</strong></h2>
<br>

``` JAVA 
import java.util.*; // imports all the classes and interfaces within JAVA

// Solution class
public class Solution {

    // main function (Execution of the program start from here)
    public static void main(String[] args) { 
    
        // Object of scanner class to input using input stream
        Scanner sc = new Scanner(System.in);
        
        // String input using .next() function
        String s = sc.next();
        
        // return value of our function in which input is passed is of boolean type that is true or false
        boolean ans = isValid(s);
        
        // if return value is true we print "Valid Brackets"
        if(ans == true) {
            System.out.println("Valid Brackets");
        }
        
        // else if the return value if false than we print "Invalid Brackets"
        else {
            System.out.println("Invalid Brackets");
        }
    }
    
    // isValid function of return value type boolean
    public static boolean isValid(String s) {
    
        // length of the string passed in function as parameter
        int n = s.length();
        
        // Memory allocation for stack data structure using "new" 
        Stack<Character> stack = new Stack<Character>();
  
        // for loop to check Validation for Brackets
        for(int i = 0 ; i<n ; i++) {
        
            // Checking opening Brackets 
            if(s.charAt(i) == '(' || s.charAt(i) == '[' || s.charAt(i) == '{') {
                stack.push(s.charAt(i));
            }
            
            else {
                // if stack is empty, return "false"
                if(stack.empty()) {
                    return false;
                }
                
                // poping the top value out of the stack and checking if it is a valid Bracket combination
                char c = stack.pop();
                
                if(c == '(') {
                    if(s.charAt(i) != ')') {
                        return false;
                    }
                }

                else if(c == '[') {
                    if(s.charAt(i) != ']') {
                        return false;
                    }
                }

                else if(c == '{') {
                    if(s.charAt(i) != '}') {
                        return false;
                    }
                }
            }
        }

        // condition to check if stack is empty or not. If empty return "true" else return "false"
        if(stack.empty()) {
            return true;
        }
        
        return false;
    } // End of isValid() function (user defined)
    
} // End of Program
```

<h2><strong>Input and Output :-</strong></h2>
<br>

```
Input :- [{()}]
Output :- Valid Brackets


Input :- [{))}]
Output :- Invalid Brackets
```
<br>

<p>
    
- Time Complexity: O(n) 
- Auxiliary Space: O(n) for stack. 
 
</p>

