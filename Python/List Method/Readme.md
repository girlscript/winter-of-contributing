# What are List Methods?

Python has a set of built-in methods that you can use on List.<br/>
Lists are used to store multiple items in a single variable.<br/>


# Main Purpose
List methods are to create Lists or change the contents of a List.<br/>
List is created using square bracket.<br/>

# Sample Code and Explanation
```Python
L=['A','B','C']
L.append('D') # append is used to add elements in end
L
y=L.copy() # Copy elements of list to another
y
z=y.count('A') # count the number on list elements in given list  
z
L.clear() # Clear the list elements
L
```
# Output 
['A', 'B', 'C', 'D']<br/>
['A', 'B', 'C', 'D']<br/>
1<br/>
[]<br/>

# Sample Code and Explanation
```Python
M=['A','B']
N=['C','D']
M.extend(N) # adds the specified list elements to the end of the current list
M
P= M.index('C') # used to check element c in list and return the index of it
P
I=M.remove('C') # To remove C element  from the list
M
```
# Output 
['A', 'B', 'C', 'D']<br/>
2<br/>
['A', 'B', 'D']<br/>


# Sample Code and Explanation
```Python
I=M.insert(2,'F') # used to insert F element using index
M
M.reverse() # used to reverse the list
M
M.sort() # Sort the list in ascending order
M
```
# Output 
['A', 'B', 'F', 'D']<br/>
['D', 'F', 'B', 'A']<br/>
['A', 'B', 'D', 'F']<br/>

# Advantage
List formatting is easier. 

# References 
https://www.w3schools.com/python/python_ref_list.asp<br/>
https://www.programiz.com/python-programming/methods/list<br/>
# Conclusion
List methods are used to change or manipulate the original List.
