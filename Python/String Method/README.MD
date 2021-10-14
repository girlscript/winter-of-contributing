# What are String Methods?

Python has a set of built-in methods that you can use on strings.<br/>
Strings can be used to handle textual data in Python<br/>
Python Strings are immutable sequences of Unicode points<br/>

# Main Purpose <br/>
Strings methods are to create strings or change the contents of a mutable string<br/>

# Types and Methods
String Methods are capitalize() , casefold() , center() , count() , encode() , endswith() , find() , index(), isalnum() , isnumeric(), isprintable() and many more.

# Sample Code and Explanation
```Python
str="strings in Python12"
str.capitalize() # Capitalize First character and rest lower case in string
str.casefold() # Convert String in lower case
str.count("Python") # Count Particular Python in given String (Occurence)
str.center(20) # Returns a centered String
str.endswith("n") # Returns true if the string ends with the n
```
# Output 
'Strings in python12'<br/>
'strings in python12'<br/>
1<br/>
'strings in Python12 '<br/>
False<br/>

# Sample Code and Explanation
```Python
str="strings in Python12"
str.find("P")# searches the particular string in given string and return its position
str.index("y") # Searches the string for a specified value and returns the position of where it was found
str.isalnum() # Returns True if all characters in the string are alphanumeric
str.isalpha() # Returns True if all characters in the string are in the alphabet
str.isascii() # Returns True if all characters in the string are ascii characters
```
# Output 
11<br/>
12<br/>
False<br/>
False<br/>
True<br/>

# Sample Code and Explanation
```Python
str="strings in Python12"
str.isdecimal() # Returns True if all characters in the string are decimals
str.isdigit() # Returns True if all characters in the string are digits
str.isidentifier() # Returns True if the string is an identifier
str.islower() # Returns True if all characters in the string are lower case
str.isnumeric() # Returns True if all characters in the string are numeric
```

# Output 
False<br/>
False<br/>
False<br/>
False<br/>
False<br/>

# Sample Code and Explanation
```Python
str="strings in Python12"
str.isprintable() # Returns True if all characters in the string are printable
str.isspace() # Returns True if all characters in the string are whitespaces
str.istitle() # Returns True if the string follows the rules of a title
str.isupper() # Returns True if all characters in the string are upper case
str.upper() # Returns string in uppercase
```

# Output 
True<br/>
False<br/> 
False<br/>
False<br/>
'STRINGS IN PYTHON12'<br/>

# Sample Code and Explanation
```Python
str="strings in Python12"
str.replace("strings","List") # Replaces string with another string 
str.split() # Splits the string at the specified separator, and returns a list
str.swapcase() # convert string from lowercase to uppercase and vice versa
```

# Output 
'List in Python12'<br/>
['strings', 'in', 'Python12']<br/>
'STRINGS IN pYTHON12'<br/>

# Sample Code and Explanation
```Python
z= "   python  "
z.strip() # Remove extra whitespace from starting and ending
z.title() # Converts the first character of each word to upper case
str.splitlines() # Splits the string at line breaks and returns a list
```

# Output 
'python'<br/>
'   Python  '<br/>
['strings in Python12']<br/>

# Advantage 
String formatting is easier.<br/>
String Methods help in manipulating strings and character values.<br/>

# References 
https://www.w3schools.com/python/python_ref_string.asp<br/>
https://www.programiz.com/python-programming/methods/string<br/>

# Conclusion
String methods always return new values and do not change or manipulate the original string.<br/>

       