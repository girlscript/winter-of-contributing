# **String Class** 

*Java.lang.String* class is used to bring a String object(s). String Objects are immutable(read-only),i.e. once the string object has been created, there is no way to modify the string of text it has.

# **Searching a String** 
It is defined as  finding the location of a character or group of characters (substring). The String class of Java provides us the following methods for performing these tasks-

**_indexOf(char c)-_** This method searches the index of a specific character in the given string. It starts searching from beginning to end of the string(left to right) and returns corresponding index if it’s found, otherwise it returns -1.

`Note:` If a given string contains multiple occurrences of specified character then it returns an index of only first occurrence of specified character.

**_lastIndexOf(char c)-_** It starts searching from end to beginning of the string(right to left) and returns corresponding index if it’s found, otherwise it returns -1.
IndexOf(char c, int indexFrom)- It starts searching forward from the specified index in string and returns the index position of the first occurrence of the character ch, otherwise it returns -1.

`Note:` The returned index must be greater than or equal to the specified index.

**_lastIndexOf(char c, int fromIndex)-_** It starts searching backward from the specified index in string and returns the index position of the first occurrence of the character ch, otherwise it returns -1.

`Note:` The returned index must be less than or equal to the specified index.

**_charAt(int indexNumber)-_** It returns the character existing at specified index, indexNumber in the given string. If the specified index number does not exist in the string, the method will throw an unchecked exception, StringIndexOutOfBoundsException.

# Examples-
```Java
import java.io.*;
class JavaString
{
public static void main (String[] args)
{
	String str = "Java is mainly used for development";

	// Returns index of first occurrence of character.
	int firstIndex = str.indexOf('s');
	System.out.println("First occurrence of char 's'" + " is found at : " + firstIndex);

	// Returns index of last occurrence specified character.
	int lastIndex = str.lastIndexOf('s');
	System.out.println("Last occurrence of char 's' is" + " found at : " + lastIndex);

	// Index of the first occurrence of specified char
	// after the specified index if found.
	int first_in = str.indexOf('s', 10);
	System.out.println("First occurrence of char 's'" + " after index 10 : " + first_in);

	int last_in = str.lastIndexOf('s', 20);
	System.out.println("Last occurrence of char 's'" + " after index 20 is : " + last_in);

	// gives ASCII value of character at location 20
	int char_at = str.charAt(20);
	System.out.println("Character at location 20: " + char_at);

	// throws StringIndexOutOfBoundsException
}
}
```
```
Output
First occurrence of char 's' is found at : 6
Last occurrence of char 's' is found at : 16
First occurrence of char 's' after index 10 : 16
Last occurrence of char 's' after index 20 is : 16
Character at location 20: 102
```
# Searching Substring in String
Above mentioned methods can also be used for searching a character or substring in the string.
# Example-
```Java
import java.io.*;
class JavaSubString
{
public static void main (String[] args)
{
	// This is a string in which a substring is to be searched.
	String str = "Substring is a string searching method";
  
	// Returns index of first occurrence of substring
	int firstIndex = str.indexOf("string");
	System.out.println("First occurrence of char string"+ " is found at : " + firstIndex);
  
	// Returns index of last occurrence
	int lastIndex = str.lastIndexOf("string");
	System.out.println("Last occurrence of char string is"+ " found at : " + lastIndex);
  
	// Index of the first occurrence after the specified index if found.
	int first_in = str.indexOf("string", 10);
	System.out.println("First occurrence of char string"+ " after index 10 : " + first_in);
  
	int last_in = str.lastIndexOf("string", 20);
	System.out.println("Last occurrence of char string " + "after index 20 is : " + last_in);
}
}
```
```
Output
First occurrence of char string is found at : 3
Last occurrence of char string is found at : 15
First occurrence of char string after index 10 : 15
Last occurrence of char string after index 20 is : 15
```
