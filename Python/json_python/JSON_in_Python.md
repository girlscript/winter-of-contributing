# JSON IN PYTHON

JSON stands for JavaScript Object Notation which is a data interchange format that is lightweigth and easy for machines to parse and generate. Python provides a built-in ` json ` package to help us work with JSON.

So, what can we do with this package?
The very first step is to import the ` json ` package.
```python
import json
```
### Read a JSON file/Converting JSON to Python
We make use of a method called ` json.load() ` to read the contents of a JSON file. Consider the following JSON file.

data.json
```json
{
  "subjects" :
   [
    {
     "sub": "Physics",
     "chapters": 20,
     "completed": false
    },
    {
     "sub": "Chemistry",
     "chapters": 16,
     "completed": false
    },
    {
     "sub": "Mathematics",
     "chapters": 18,
     "completed": true
    }
   ]
}
```
Using ` json.load() `:
```python 
import json

# Opening JSON file
f = open('data.json',)

# returns JSON object as a dictionary
data = json.load(f)

# Iterating through the json list
for i in data:
	print(i)

# Closing file
f.close()
```
The above code will return the following output:
```
{"sub": "Physics","chapters": 20,"completed": false}
{"sub": "Chemistry","chapters": 16,"completed": false}
{"sub": "Mathematics","chapters": 18,"completed": true}
```

The ` json.loads() ` is used to decode the JSON code and convert it to a dictionary in Python for us to work on it. In other words, it parses a JSON string.
```python
import json

# JSON code:=  '{ "city":"Bangalore", "temperature":"30 C", "country":"India"}'

# parse x:
y = json.loads(x)

# the result is a Python dictionary:
print(y["city"])
```

### Converting Python Object to JSON
` dump() ` and ` dumps() ` are the two methods used to write into a JSON file or convert a Python object into a JSON string respectively.
- ` dump() ` method takes two parameters- a dictionary that is to be converted into a JSON object and a file pointer that points to a file in write mode.

```python
import json
 
# Data to be written
dictionary ={
    "sub" : "Biology",
    "chapters" : 12,
    "completed" : true
}
 
with open("sub.json", "w") as outfile:
    json.dump(dictionary, outfile)
```
- ` dumps() `  also takes two parameters- a dictionary and an indent to define the number of units for indentation. The last two lines of code from the previous example can be replaced with:
 ```python
json_object = json.dumps(dictionary)
print(json_object)
```
This gives the following output: 
` {"sub": "Biology","chapters": 12,"completed": true} `

### Formatting and Sorting JSON
We can use the *indent* parameter to make the output look more like the contents of a JSON file rather than in a straight line. In addition to this, we can also sort JSON data with the help of the *sort_keys* parameter as part of the  *dumps()* method. Lets modify the output of the previous example to illustrate this.

```python
json_formatted_str = json.dumps(data, indent=4, sort_keys=True)
print(json_formatted_str)
```
Output:
```
[
    {
        "chapters": 12,
        "completed": true,
        "sub": "Biology"
    }
]    
```

The ` json ` package provides many more methods like decoders and encoders to work with JSON string and files. To learn more about these [visit here](https://docs.python.org/3/library/json.html)
