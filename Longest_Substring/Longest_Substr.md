
# Longest SubString without repeating characters

---

### Description: 
To find the longest substring in a given string without repeating characters. 

Given a string then, the substring without repeating characters of maximum length is found and displayed. For example, Consider a string ***abbacdcbd***. Here the longest substring is ***bacd*** of length 4. Similarly for string ***codingis*** the resulted substring is ***coding*** of length 6.

<p align="center">
   <img src="https://www.enjoyalgorithms.com/static/longest-substring-without-repeating-characters-cover-c6d92bd8b4521dea6b8993c83a5819a5.jpg" width="400" height="300">
</p>

### Key note: 
> The above problem can be solved using **sliding window** approach. It gives us the most optimized solution.

### Problem Solving Approach:
- First we traverse the string from left to right. A list is maintained for following:
    1. ***currChar*** - Current Substring which has non-repeating characters with the help of start and end index.
    2. ***out*** - longest non-repeating substring
    3. a ***lookup table*** which consists the list of already visited characters.
- For each character scanned, we look into lookup table to check whether it is visited or not. 
    - If it is visited already and part of the current substring, then we update the starting index *start* .
    - Otherwise, continue traversing of the string. 

### Source Code:
~~~java

	import java.io.*;  //imports java input-output package
	import java.util.*; //imports java util package - used for Scanner class,Hashmap
	class toFindSub	
	{
		//Method to find longest substring without repeating characters
		public static String getUniqueSubstring(String in)  
		{
			Map<Character, Integer> visited = new HashMap<>();
			String out = "" ;
			for (int start = 0, end = 0; end < in.length(); end++) 
			{
				char currChar = in.charAt(end);
				if (visited.containsKey(currChar)) 
				{
					start = Math.max(visited.get(currChar)+1, start);
				}
				if (out.length() < end - start + 1) 
				{
					out = in.substring(start, end + 1);
				}
				visited.put(currChar, end);
			}
			return out;
    		}
		public static void main(String args[])
		{
			Scanner sc = new Scanner(System.in);
			System.out.print("Enter a String:");
			//User input
			String input = sc.nextLine();                 
			//Calls the method getUniqueSubstring
			String subStr = getUniqueSubstring(input);  
			//The substring is displayed on the console   
			System.out.println("The longest substring without repeating characters is:" + subStr);
			//Length of substring is displayed			
			System.out.println("Length of substring:" + subStr.length());                            			
			
		}
	}

~~~
### Time Complexity: 
The time complexity is linear i.e. **O(n)**. Because we traverse any user input string only once.

### Space Complexity: 
The Space complexity is also linear i.e. **O(n)**. As the problem requires O(n) space for storing the hash table.

### Conclusion:
For a given string, The longest substring along with its length are found and displayed.

- Refer the sites, for more details and other approaches:
    - https://www.enjoyalgorithms.com/blog/longest-substring-without-repeating-characters
    - https://www.geeksforgeeks.org/length-of-the-longest-substring-without-repeating-characters/


