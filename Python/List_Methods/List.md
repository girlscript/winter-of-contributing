# List in Python 

It is kind of Dynamic Array , that means 
- It is mutable collection of data
- it is resizeable.
- it can contain elements of different types.
- an ordered group of sequence enclosed inside square bracket and seprated by comma (,)

## Declare Empty list
``` python
 list1 = []
```
``` python
 list2 = list ( )
```
In 1st list1(variable name) is initialised to empty list using square brackets.
In 2nd , list2(variable name) is initialised to empty list using list function.

## Initialising a list

### Initialising a list with similar Data 

``` python
l1 = ["a","b","c"]
```
### Initialising a list with mixed Data 
``` python
l2 = [1,2.2,"abc",4]
```
## Finding Length of the List

``` python
l1 = ["a","b",22,9.0]
print ( len ( l1 ) )

```
## Concatenation of two list

``` python
l1 = [1,2.2,"abc",4]
l2 = ["a","b",22,9.0]
l = l1 + l2
print (l)

# Output : [1,2.2,"abc",4,"a","b",22,9.0] 

```
## Membership Operator in List
 
- in  : returns true,  if the value present in list.
- not in : returns true , if the value is not present in the list. 

``` python
l1 = [1,2.2,"abc",4]
if 4 in l1 :
    print ("Found 4 ")
else:
    print ("not found")

```
## Accessing values in List

- Through Index or Indices
- Through Slicing

### 1. Through Index or Indices

``` python
l1 = [1,2.2,"abc",4]
print (l1[1])
print(l1[-1])

# output: 
# 2.2
# 4

```
- The indexing start from 0 in forward direction and in reverse direction indexing start from -1.

### 2. Through Slicing

Syntax : list_name[starting index : ending index +1 : step]

by default the step value is 1

l1[3:6]

starting index is 3 

ending index + 1 is 6

so it will result in a list from 3rd index to 5th index.

``` python
l1 = [1,4,3,8,6,5,2]
print (l1[3:6])
print (l1[2:7:2])

# output: 
# [8, 6, 5]
# [3, 6, 2]

```

## Count the occurence of a value in the list

``` python 
l1 = [1,4,3,2,8,2,6,5,2]
print ( l1.count(2) )

# Output : 3
```

## Sort the list values

``` python 

l1 = [1,4,3,2,8,2,6,5,2]
l1.sort()
print (l1)

# Output : [1, 2, 2, 2, 3, 4, 5, 6, 8]
```

## Sort in descending order

```python 
l1 = [1,4,3,2,8,2,6,5,2]
l1.sort(reverse=True)
print (l1)

# Output : [8, 6, 5, 4, 3, 2, 2, 2, 1]

```
## Insert element at particular location

Syntax : List_name(index , value)

index where the value has to be inserted.

```python 
l1 = [1,4,3,2,8,2,6,5,2]
l1.insert(5,10)
print (l1)

# Output : [1, 4, 3, 2, 8, 10, 2, 6, 5, 2]

```

## Append element in the list

Syntax : list_name.append(value)

This will add the value at the end of the list

``` python
l1 = [1,4,3,2,8,2,6,5,2]
l1.append(9)
print (l1)

# Output : [1, 4, 3, 2, 8, 2, 6, 5, 2, 9]

```
Incase of two list , it will append the list as a list at the end of other.

``` python 
l1 = [1,2.2,"abc",4]
l2 = ["a","b",22,9.0]
l1.append(l2)
print (l1)

# Output : [1, 2.2, 'abc', 4, ['a', 'b', 22, 9.0]]

```
## Extend element in the list 

Syntax : list_name.extend(value)

This will add the value at the end of the list

``` python
l1 = [1,4,3,2,8,2,6,5,2]
l1.append(9)
print (l1)

# Output : [1, 4, 3, 2, 8, 2, 6, 5, 2, 9]

```
Incase of two list , it will add the list items from one list to other (not the whole list
)
``` python 
l1 = [1,2.2,"abc",4]
l2 = ["a","b",22,9.0]
l1.extend(l2)
print (l1)

# Output : [1, 2.2, 'abc', 4, 'a', 'b', 22, 9.0]

```
## pop in list

``` python 
l1 = [1,4,3,2,8,2,6,5,2]
l=l1.pop()
print ("element popped: ",l)
print("resultant list: ",l1)

# Output :
# element popped:  2
# resultant list:  [1, 4, 3, 2, 8, 2, 6, 5]

```

## Deleting Whole List 

``` python
l1 = [1,4,3,2,8,2,6]
print(" list Before: ",l1)
del (l1[:])
print("resultant list: ",l1)

# Output :
#  list Before:  [1, 4, 3, 2, 8, 2, 6]
# resultant list:  []
```
