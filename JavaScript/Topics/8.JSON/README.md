# Javascript Object Notation (JSON)
JSON is data interchange format followed by Javascript object syntax, which was made by [Douglas Crockford](https://en.wikipedia.org/wiki/Douglas_Crockford). It is based on  subset of ECMA-262 3rd edition (1999). JSON is easier to read and write than XML. It is also faster to parse and generate. It can be used indepnedently from Javascript and can be stored in its own file with `.json` extension.


### Structure of JSON
  JSON is a collection of key-value pairs. Each key must be string and the value can be any data type. JSON is a text format, so it can be read and written by a computer. It is not a binary format.

  1. Data is enclosed in curly braces `{}`
  2. Data is in key-value pairs
  3. Data is separated by commas
  4. Square brackets `[]` are used to denote arrays

- Example
```json
    {
      "name": "Aryan",
      "age": 25,
      "salary": 12000,
      "address": {
        "city": "Pune",
        "state": "Maharashtra",
        "country": "India"
      }
    }
```

#### How to access JSON Data
  Store it in a variable and then use dot notation to access the data.

```javascript
var data =  {
      "name": "Aryan",
      "age": 25,
      "salary": 12000,
      "address": {
        "city": "Pune",
        "state": "Maharashtra",
        "country": "India"
      }
    }


console.log(data.name); // Output: Aryan
console.log(data.address.city); // Output: Pune
```


#### JSON Values and Types
  JSON values can be of any type. JSON types are:
  - String
  - Number
  - Object
  - Array
  - Boolean
  - `null`

### Arrays in JSON
  JSON arrays are enclosed in square brackets `[]` and can contain any type of data.

- Example
```json
{
    "employees" : [
        {
            "name": "Bob",
            "age": 35
        },
        {
            "name": "Jack",
            "age": 28
        },
        {
            "name": "John",
            "age": 31
        }
    ]
}
```

#### Access array items from JSON
Access array items from JSON using square brackets `[]` and index number.

```javascript
const jsonObject = {
    "array" : ["India", "UK", "USA"]
}

console.log(jsonObject.array[0]); // Output: India
console.log(jsonObject.array[1]); // Output: UK
```

### JSON vs XML
**Similarities**
- JSON and XML are human readable.
- Both are text based formats.
- JSON and XML are hierarchical (values within values).
- JSON and XML can be parsed and generated.
- Both JSON and XML can be fetched with an XMLHttpRequest

**Difference**
- JSON is easier to read and write than XML.
- JSON doesn't has any end tag.
- JSON is shorted and quicker to read and write.
- JSON can use arrays and objects.
  
**Why JSON is better than XML?**
- JSON is faster to parse and generate because it is specially designed for data interchange.
- JSON parser are more robust and can handle more complex data.
- XML is slower to parse and generate.


### JSON Stringify
  JSON.stringify() is used to convert JSON object to string. A common use of this method is to exchange data with a server. When you use JSON.stringify(), you can send the data to the server as a string.

```javascript
const student = {
    "name": "Raj",
    "age": 20,
    "marks": [90,80,70,60,50]
}

const jsonData = JSON.stringify(student);
console.log(jsonData); 
// Output: {"name":"Raj","age":20,"marks":[90,80,70,60,50]}
```


### JSON Parsing
The `JSON.parse` method parses a JSON and construct a object described in the JSON text. When you use JSON.parse(), you can receive the data from the server as a string.

- Example
```javascript
const data = '{"name":"John", "age":20, "city":"Dubai"}';

const result = JSON.parse(data);
console.log(result); // Output: {name: "John", age: 20, city: "Dubai"}
console.log(result.name); // Output: John
console.log(result.age); // Output: 20
```


### Delete Key-Value Pairs
  To delete a key-value pair, you can use the delete operator.
```javascript
const data = {
    "name":"John", 
    "age":20,
     "city":"Dubai"
};

console.log(data); 
// Output: { name: 'John', age: 20, city: 'Dubai' }

delete data.name; // Delete key-value pair

console.log(data); 
// Output: { age: 20, city: 'Dubai' }
```

### Looping through array items
  To loop through array items, you can use `for` loop.
```javascript
const jsonObject ={
    "name" : "Johan",
    "age" : 46,
    "skills": ["HTML", "CSS", "JavaScript"]
}

for (i in jsonObject.skills) {
    let x = jsonObject.skills[i];
    console.log(x);
}

// Output:
// HTML
// CSS
// JavaScript
```

### Multidimensional Arrays in JSON
```javascript
const jsonObject ={
    "name" : "Rohan",
    "age" : 36,
    "skills": [
        [
            "Javascript", "React"
        ],
        [
            "Java", "Kotlin"
        ]
    ]
}

for (i in jsonObject.skills) {
    for(j in jsonObject.skills[i]) {
        let x = jsonObject.skills[i][j];
        console.log(x);
    }
}

// Output:
Javascript
React
Java
Kotlin
```


#### Contributed by [Rwitesh Bera](https://github.com/rwiteshbera)