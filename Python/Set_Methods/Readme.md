# What are Set Methods?

Python has a set of built-in methods that you can use on set.<br/>
A set is an unordered collection of items. Set items are unique and immutable<br/>

# Main Purpose<br/>
Set() method is used to convert any of the iterable to sequence of iterable elements with distinct elements, commonly called Set.

# Set Representation
Set is created using curly brackets

# Types and Methods
Set Methods are add , clear , copy , difference , difference_update , discard , intersection , isdisjoint , issubset , issuperset , pop, remove , symmetric_difference , union , update 

# Sample Code and Explanation
## Add : adds an element to the set
```python
L={"A","B","C"}
L.add("D")
L
```
{'A', 'B', 'C', 'D'}

## Clear : Removes all elements in a set
```python
M={"A","B","C"}
M.clear()
M
```
set()

## Copy : copy all elements of one set to another
```python
M={"A","B","C"}
y= M.copy()
y
```
{'A', 'B', 'C'}

## Difference : returns a set that contains the difference between two sets
```python
M={"A","B","C"}
y={"A","D","E"}
z=M.difference(y)
z
```
{'B', 'C'}

## Difference_update : removes the items that exist in both sets
```python
M={"A","B","C"}
y={"A","D","E"}
M.difference_update(y)
M
```
{'B', 'C'}

## Discard : removes the specified item from the set
```python
M={"A","B","C"}
M.discard("B")
M
```
{'A', 'C'}

## Intersection : returns a set that contains the similarity between two or more sets
```python
M={"A","B","C"}
y={"A","D","E"}
z= M.intersection(y)
z
```
{'A'}

## Issubset : returns True if all items in the set exists in the specified set, otherwise it retuns False
```python
M={"A","B","C"}
y={"L","D","E","A","B","C"}
z= M.issubset(y)
z
```
True

## Issuperset : returns True if all items in the specified set exists in the original set, otherwise it retuns False.
```python
M={"A","B","C"}
y={"L","D","E","A","B","C"}
z= y.issuperset(M)
z
```
True

## Pop : removes a random item from the set
```python
M={"A","B","C"}
M.pop()
M
```
{'A', 'B'}

## Remove :  removes the specified element from the set
```python
M={"A","B","C"}
M.remove("B")
M
```
{'A', 'C'}

## Symmetric_Difference :  returns a set that contains all items from both set, but not the items that are present in both sets
```python
M={"A","B","C"}
O={"A","L","D"}
z = M.symmetric_difference(O)
z
```
{'B', 'C', 'D', 'L'}

## Union :  returns a set that contains all items from the original set, and all items from the specified set(s)
```python
M={"A","B","C"}
O={"A","L","D"}
z = M.union(O)
z
```
{'A', 'B', 'C', 'D', 'L'}

## Update :  updates the current set, by adding items from another set (or any other iterable)
```python
M={"A","B","C"}
O={"A","L","D"}
M.update(O)
M
```
{'A', 'B', 'C', 'D', 'L'}

# Refernces
https://www.w3schools.com/python/python_ref_set.asp<br/>
https://www.programiz.com/python-programming/methods/set<br/>

# Advantage
Set formatting is easier

# Conclusion
Sets highly useful to efficiently remove duplicate values from a list or tuple and to perform common math operations like unions and intersections.
