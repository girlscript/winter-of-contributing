# JSON

## What is JSON?

JSON stands for `JavaScript Object Notation` it is a text format for storing and transporting data which is "self-describing" and easy to understand. The JSON object contains methods for parsing `JavaScript Object Notation` (JSON) and converting values to JSON. It can't be called or constructed, and aside from its two method properties, it has no interesting functionality of its own.

Example:

```JSON
{
     "name": "Rahul",
     "age": 30,
     "salary": 13000
}
```
It defines an object with 3 properties:
- name
- age
- salary
  
Each property has a value.
If we parse the JSON string in JavaScript, we can access the data as an object.

*Note: The JSON syntax is derived from JavaScript object notation, but the JSON format is text only. Code for reading and generating JSON exists in many programming languages.*

## Why use JSON?

The JSON format is syntactically similar to the code for creating JavaScript objects. Because of this, a JavaScript program can easily convert JSON data into JavaScript objects. Since the format is text only, JSON data can easily be sent between computers, and used by any programming language.

## JSON Syntax

JSON Syntax Rules:

- Data is in name/value pairs
- Data is separated by commas
- Curly braces hold objects
- Square brackets hold arrays

### JSON Data

JSON data is written as name/value pairs (aka key/value pairs). A name/value pair consists of a field name (in double quotes), followed by a colon, followed by a value.

Example:

```JSON
{
    "firstName": "Rahul",
    "lastName": "Roy",
    "gender": "male",
    "age": 24,
    "address": {
        "streetAddress": "MG road",
        "city": "Kolkata",
        "state": "West Bengal",
        "postalCode": "95221"
    },
    "phoneNumbers": [
        { "type": "home", "number": "27627" }
    ]
}
```

### JSON - Evaluates to JavaScript Objects

The JSON format is almost identical to JavaScript objects. In JSON, keys must be strings, written with double quotes.

Example:

#### JSON

```JSON
{
    "firstName": "Rahul",
    "lastName": "Roy",
    "gender": "male",
    "age": 24,
    "address": {
        "streetAddress": "MG road",
        "city": "Kolkata",
        "state": "West Bengal",
        "postalCode": "95221"
    },
    "phoneNumbers": [
        { "type": "home", "number": "27627" }
    ]
}
```

In JavaScript, keys can be strings, numbers, or identifier names.

Example:

#### Javascript

```js
const person = {
    firstName: "Rahul",
    lastName: "Roy",
    gender: "male",
    age: 24,
    address: {
        streetAddress: "MG road",
        city: "Kolkata",
        state: "West Bengal",
        postalCode: 95221
    },
    phoneNumbers: [
        { type: "home", number: 27627 }
    ]
};
```

*Note: JSON names require double quotes.*

### JSON Values

In JSON, values must be one of the following data types:

- string
- number
- object
- array
- boolean
- null

## JSON vs XML

Both JSON and XML can be used to receive data from a web server.

### JSON

```JSON
{
     "students":
          [
               { "firstName":"Rahul", "lastName":"Roy" },
               { "firstName":"Raj", "lastName":"Biswas" },
               { "firstName":"Anjali", "lastName":"Mathur" }
          ]
}
```

### XML

```xml
<students>
  <student>
    <firstName>Rahul</firstName> <lastName>Roy</lastName>
  </student>
  <student>
    <firstName>Raj</firstName> <lastName>Biswas</lastName>
  </student>
  <student>
    <firstName>Anjali</firstName> <lastName>Mathur</lastName>
  </student>
</students>
```

### Similarities

- JSON and XML are "self describing" (human readable)
- JSON and XML are hierarchical (values within values)
- JSON and XML can be parsed and used by lots of programming languages
- JSON and XML can be fetched with an XMLHttpRequest

### Differences

- JSON doesn't use end tag
- JSON is shorter
- JSON is quicker to read and write
- JSON can use arrays

### Why JSON is Better Than XML?


XML is much more difficult to parse than JSON. JSON is parsed into a ready-to-use JavaScript object.
For AJAX applications, JSON is faster and easier than XML:

Using XML:

- Fetch an XML document
- Use the XML DOM to loop through the document
- Extract values and store in variables
  
Using JSON:

- Fetch a JSON string
- JSON.parse() the JSON string

## JSON Data Types


### Valid Data Types

In JSON, values must be one of the following data types:
- string
- number
- object (JSON object)
- array
- boolean
- null

JSON values cannot be one of the following data types:

- a function
- a date
- undefined

## JSON.parse()

JSON is used to exchange data to/from a web server. When receiving data from a web server, the data is always a string. Parse the data with JSON.parse(), and the data becomes a JavaScript object.

Example:

Suppose we received this JSON from a web server:

```JSON
  {
      "name":"Rahul", 
      "age":30, 
      "city":"Delhi"
  }
```

Use the JavaScript function JSON.parse() to convert JSON into a JavaScript object:

```js
const obj = JSON.parse({
                              "name":"Rahul", 
                              "age":30, 
                              "city":"Delhi"
                       });
```

## JSON.stringify()

When sending data to a web server, the data has to be a string. Convert a JavaScript object into a string with JSON.stringify().

Example:

Suppose we have this object in JavaScript:

```js
const obj = {
                  name: "Rahul", 
                  age: 30, 
                  city: "Delhi"
            };
```

Use the JavaScript function JSON.stringify() to convert it into a string.

```js
const myJSON = JSON.stringify(obj);
console.log(myJSON) // prints stringified object
```
<br>

 __Contributor :__ [Aniket Pathak](https://github.com/aniketpathak028)
