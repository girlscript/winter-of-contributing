# Regular Expressions in Python

The ***re*** module provides regular expression matching operations. The module supports Unicode as well as 8-bit strings. The functions in this module let you check if a particular string matches a given regular expression .<br>Regular expressions use the '\\' symbol to allow special characters to be used without invoking their special meaning. These expresssions may contain both ordinary as well as special characters. Ordinary characters may include numbers and aplhabets in thier upper and lower case. The Special characters affect how the regular expressions around them are interpreted. Some of the special charaters are:
|Character|Description|
| --------- | ---------------- | 
| "."    | Matches any character except a newline.|
| "^"    |  Matches the start of the string.|
| "$"    |  Matches the end of the string or just before the newline at the end of the string.|
| "*"    |  Matches 0 or more repetitions of the preceding RE.|
| "+"    |  Matches 1 or more repetitions of the preceding RE.|
| "?"    |  Matches 0 or 1 of the preceding RE.|
| {m,n}  |  Matches from m to n repetitions of the preceding RE.|
| "\\"   |  Either escapes special characters or signals a special sequence.|
| []     |  Indicates a set of characters.|
| "\|"    |  A\|B, creates an RE that will match either A or B.|
| (...)  |  Matches the RE inside the parentheses.|

The '[]' characters represent a set of characters.
- They may be listed individually. For example [agy] represents a set of 'a','g','y' characters.
- A range of characters may be represented with the help of '-'. For example \[a-z] represents a set of all lowercase letters.
- \[^amp] represents a set of characters except 'a','m' and 'p'
             
Some special sequences are:
|Sequence|Description|
|--------|-------------|  
|    \A   |    Matches only at the start of the string.|
|    \Z   |    Matches only at the end of the string.|
|    \b   |    Matches the empty string, but only at the start or end of a word.|
|    \B   |    Matches the empty string, but not at the start or end of a word.|
|    \d   |    Matches any decimal digit.|  
|    \D   |    Matches any non-digit character; equivalent to [^\d]|.
|    \s   |    Matches any whitespace character.|
|    \S   |    Matches any non-whitespace character; equivalent to [^\s].|
|    \w   |    Matches any alphanumeric character; equivalent to [a-zA-Z0-9_].In string patterns without the ASCII flag, it will match the range of Unicode alphanumeric characters (letters plus digits plus underscore).|
|    \W   |   Matches the complement of \w.|
|    \\   |   Matches a literal backslash.  | 
<br>


The re module provides many functions and simplified versions of the featured methods for regular expressions.


- re.search(): Scan through string looking for the first location where the pattern produces a match, and return a corresponding match object. 
- re.match(): Match a regular expression pattern to the beginning of a string.
- re.fullmatch(): Match a regular expression pattern to all of a string.
- re.sub(): Substitute occurrences of a pattern found in a string.
- re.subn(): Same as sub, but also return the number of substitutions made.
- re.split(): Split a string by the occurrences of a pattern.
- re.findall(): Find all occurrences of a pattern in a string.
- re.compile(): Compile a pattern into a Pattern object.
- re.purge(): Clear the regular expression cache.
- re.escape(): Escape special characters ina pattern
 
The re.compile() method helps to compile a pattern in a regular expression object.
```
result = re.match(pattern,string)
``` 
is the same as
```
p = re.compile(pattern)
result = re.match(p)
```

The following example shows the use of some of these methods

```python
import re

text = 'Python is a popular programming language. It was created by Guido van Rossum, and released in 1991'

x = re.findall('language',text)    #find a string in the given text

print(x)

x = re.search('\s',text)   #find the occurance of white space in the text

print(x.start())

x = re.split('.',text)   #split the text into different strings

print(x)

x = re.sub('\s','-',text,2)   #substitute the first two occurances of white space with '-'

print(y)
```
Output:<br>
\['language']<br>
6<br>
\['Python is a popular programming language',' It was created by Guido van Rossum, and released in 1991']<br>
Python-is-a popular programming language. It was created by Guido van Rossum, and released in 1991<br>

A Match Object is an object containing information about the search and the result. It has some methods used to retrieve information abaout its search. Some of them are:
- .span() - returns a tuple containing the start and end positions of the match.
- .string - returns the string passed into the function
- .group()- returns the part of the string where there was a match
Example:
```python
import re
text = 'It was a bright and sunny day'
x = re.search(r"\bs\w+", txt)
print(x.span())
print(x.string)
print(x.group())
```
Output:<br>
(20,24)<br>
It was a bright and sunny day<br>
sunny<br>

Check out the official [Python Docs](https://docs.python.org/3/library/re.html) for more information on Regular expressions.

