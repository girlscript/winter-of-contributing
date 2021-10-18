# What are List Methods?

Python has a set of built-in methods that you can use on List.<br/>
Lists are used to store multiple items in a single variable.<br/>

# Main Purpose
List methods are to create Lists or change the contents of a List.<br/>
List is created using square bracket.<br/>

# Types and Methods
String Methods are append , copy , count , clear , extend , index , remove , insert , reverse , sort.

# Sample Code and Explanation
Append: Append is used to add elements in end
```Python
L=['A','B','C']
L.append('D')
L
```
# Output 
['A', 'B', 'C', 'D']<br/>

# Sample Code and Explanation
Copy: Copy elements of list to another list
```Python
y=L.copy() 
```
# Output 
['A', 'B', 'C', 'D']<br/>

# Sample Code and Explanation
Count:- count the number on list elements in given list  
```Python
z=y.count('A') 
z
```
# Output 
1<br/>

# Sample Code and Explanation
Clear: Clear the list elements
```Python
L.clear() 
```
# Output 
[]<br/>

# Sample Code and Explanation
Extend: adds the specified list elements to the end of the current list
```Python
M=['A','B']
N=['C','D']
M.extend(N) 
M
```
# Output 
['A', 'B', 'C', 'D']<br/>
# Sample Code and Explanation
Index: used to check element c in list and return the index of it
```Python
P= M.index('C') P
```
# Output 
2<br/>
# Sample Code and Explanation
Remove: To remove C element  from the list
```Python
I=M.remove('C') 
```
# Output 
['A', 'B', 'D']<br/>

# Sample Code and Explanation
Insert: used to insert F element using index
```Python
I=M.insert(2,'F') 
M
```
# Output 
['A', 'B', 'F', 'D']<br/>
# Sample Code and Explanation
Reverse: used to reverse the list
```Python
M.reverse() 
M
```
# Output 
['D', 'F', 'B', 'A']<br/>

# Sample Code and Explanation
Sort: Sort the list in ascending order
```Python
M.sort() 
M
```
# Output 
['A', 'B', 'D', 'F']<br/>

# Advantage
List formatting is easier. 

# References 
https://www.w3schools.com/python/python_ref_list.asp<br/>
https://www.programiz.com/python-programming/methods/list<br/>

# Conclusion
List methods are used to change or manipulate the original List.
