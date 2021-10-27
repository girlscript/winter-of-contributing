# What are Dictionary Methods?

Python has a dictionary of built-in methods that you can use on dictionary.<br/>
Dictionary in Python is an unordered collection of data values, used to store data values like a map, which, unlike other Data Types that hold only a single value as an element.

# Main Purpose<br/>
Dictionary methods are used to create dictionary or change the contents of a dictionary

# Dictionary Representation
Dictionary is created using curly braces {}.<br/>
Dictionary holds key:value<br/>

# Types and Methods
Dictionary Methods are Clear, copy , fromkeys , get , items , keys , pop , setdefault , update , values .

# Sample Code and Explanation
## Clear: Removes all the elements from the dictionary
```python
Fruit = {
  "Name":"Apple",
  "Quantity":4,
  "Quality":"good"
}
Fruit.clear()
Fruit
```
{}

## Copy : Returns a copy of the dictionary
```python
Fruit = {
  "Name":"Mango",
  "Quantity":4,
  "Quality":"good"
}
y = Fruit.copy()
y
```

{'Name': 'Mango', 'Quality': 'good', 'Quantity': 4}

## fromkeys: Returns a dictionary with the specified keys and value
```python
x = ('key1', 'key2', 'key3')
y = 1
thisdict = dict.fromkeys(x, y)
thisdict
```
{'key1': 1, 'key2': 1, 'key3': 1}

## Get: Returns the value of the specified key
```python
Fruit = {
  "Name":"Mango",
  "Quantity":4,
  "Quality":"good"
}
y = Fruit.get("Quality")
y
```
'good'

## Items: Returns a list containing a tuple for each key value pair
```python
Fruit = {
  "Name":"Mango",
  "Quantity":4,
  "Quality":"good"
}
y = Fruit.items()
y
```
dict_items([('Name', 'Mango'), ('Quantity', 4), ('Quality', 'good')])

## keys: Returns a list containing the dictionary's keys
```python
Fruit = {
  "Name":"Mango",
  "Quantity":4,
  "Quality":"good"
}
y = Fruit.keys()
y
```
dict_keys(['Name', 'Quantity', 'Quality'])

## Pop: Removes the element with the specified key
```python
Fruit = {
  "Name":"Mango",
  "Quantity":4,
  "Quality":"good"
}
Fruit.pop("Quantity")
Fruit
```
{'Name': 'Mango', 'Quality': 'good'}

## Setdefault: Returns the value of the specified key. If the key does not exist: insert the key, with the specified value
```python
Fruit = {
  "Name":"Mango",
  "Quantity":4,
  "Quality":"good"
}
y = Fruit.setdefault("Quantity",5)
y
```
4

## Update: Updates the dictionary with the specified key-value pairs
```python
Fruit = {
  "Name":"Mango",
  "Quantity":4,
  "Quality":"good"
}
Fruit.update({"color":"yellow"})
Fruit
```
{'Name': 'Mango', 'Quality': 'good', 'Quantity': 4, 'color': 'yellow'}

## Values: Returns a list of all the values in the dictionary
```python
Fruit = {
  "Name":"Mango",
  "Quantity":4,
  "Quality":"good"
}
y= Fruit.values()
y
```
dict_values(['Mango', 4, 'good'])

# Advantage
Dictionary formatting is easier. 

# References 
https://www.w3schools.com/python/python_ref_dictionary.asp<br/>
https://www.programiz.com/python-programming/methods/dictionary<br/>

# Conclusion
Dictionary methods change or manipulate the original dictionary.
