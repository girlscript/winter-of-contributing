# Sets in Python 

- Unordered collection of distinct elements
- Can contain elements of different types.
- Sets are not hashable
- Can only contain hashable items.
- Enclosed inside curly braces and separated by symbol comma(,)

## Declare Empty set

``` python
 set1 = set ( )
```
set1(variable name) is initialised to empty set using set function.

## Initialising a set

### Initialising a set with similar Data 

``` python
s1 = {"a","b","c","a"}
print (s1)

# Output : {"a","b","c"} it can be in any order , but only unique value will be stored
```
### Initialising a set with mixed Data 
``` python
s2 = {1,2.2,"abc",4}
```
## Finding Length of the set

``` python
s1 = ["a","b",22,9.0]
print ( len ( s1 ) )

# Output : 4
```
## Union of two sets

It will return the union of two sets as a new set 

``` python
s1={1,4,5,6,2,3,9}
s2={8,7,4,10,9,12}
s = s1.union(s2)
print (s)

# Output : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12}

```
or

``` python
s1={1,4,5,6,2,3,9}
s2={8,7,4,10,9,12}
s = s1 | s2
print (s)

# Output : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12}

```
## Intersection of two sets

It will return the intersection of two sets as a new set 

``` python
s1={1,4,5,6,2,3,9}
s2={8,7,4,10,9,12}
s = s1.intersection(s2)
print (s)

# Output : {9,4}

```
or

``` python
s1={1,4,5,6,2,3,9}
s2={8,7,4,10,9,12}
s = s1 & s2
print (s)

# Output : {9,4}

```
## Difference of two sets

It will return the difference of two sets as a new set 

``` python
s1={1,4,5,6,2,3,9}
s2={8,7,4,10,9,12}
s = s1.difference(s2)
print (s)

# Output : {1, 2, 3, 5, 6}

```
or

``` python
s1={1,4,5,6,2,3,9}
s2={8,7,4,10,9,12}
s = s1 - s2
print (s)

# Output : {1, 2, 3, 5, 6}

```
## Symmetric Difference of two sets

It will return the symmetric difference of two sets as a new set 

``` python
s1={1,4,5,6,2,3,9}
s2={8,7,4,10,9,12}
s = s1.symmetric_difference(s2)
print (s)

# Output : {1, 2, 3, 5, 6, 7, 8, 10, 12}

```
or

``` python
s1={1,4,5,6,2,3,9}
s2={8,7,4,10,9,12}
s = s1 ^ s2
print (s)

# Output : {1, 2, 3, 5, 6, 7, 8, 10, 12}

```

## Membership Operator in List
 
- in  : returns true,  if the value present in set.
- not in : returns true , if the value is not present in the set. 

``` python
s1={1,4,5,6,2,3,9}
s2={8,7,4,10,9,12}
if 5 in s1:
    print ("found")
else:
    print("not found")    

# Output : found

```

## Add element in a set

we cannot access using index as set is unordered.

``` python
s1={1,4,5,6,2,3,9}
s1.add(10)  
print(s1)
# Output : {1,4,5,6,2,10,3,9}
```
the element will be added but since the set are unordered so we cannot predict its position.

## Remove element from set
to remove particular value from the set .
``` python
s1={1,4,5,6,2,3,9}
s1.remove(6)  
print(s1)

# Output : {1,4,5,2,9,3}
```
If the element is not present it will show an error.

## Discard element from set
To discard particular value from the set.
``` python
s1={1,4,5,6,2,3,9}
s1.remove(9)  
print(s1)

# Output : {1,4,5,2,6,3}
```
if the element is not present it will not show any error.

## Clear the Set
To remove all the elements from the set.

``` python
s1={1,4,5,6,2,3,9}
s1.clear()  
print(s1)

# Output : set()
```
