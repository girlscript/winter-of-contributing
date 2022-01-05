# **JSON**

## **What is JSON?**

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

## **Why use JSON?**

The JSON format is syntactically similar to the code for creating JavaScript objects. Because of this, a JavaScript program can easily convert JSON data into JavaScript objects. Since the format is text only, JSON data can easily be sent between computers, and used by any programming language.

## **JSON Syntax**

JSON Syntax Rules:

- Data is in name/value pairs
- Data is separated by commas
- Curly braces hold objects
- Square brackets hold arrays

### **JSON Data**

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

### **JSON - Evaluates to JavaScript Objects**

The JSON format is almost identical to JavaScript objects. In JSON, keys must be strings, written with double quotes.

Example:

#### **JSON**

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

### **Javascript**

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

### **JSON Values**

In JSON, values must be one of the following data types:

- string
- number
- object
- array
- boolean
- null

## **JSON vs XML**

Both JSON and XML can be used to receive data from a web server.

### **JSON**

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

### **XML**

```xml
<students>
  <student>
    <firstName>Rahul</firstName>
    <lastName>Roy</lastName>
  </student>
  <student>
    <firstName>Raj</firstName>
    <lastName>Biswas</lastName>
  </student>
  <student>
    <firstName>Anjali</firstName>
    <lastName>Mathur</lastName>
  </student>
</students>
```

### **Similarities**

- JSON and XML are "self describing" (human readable)
- JSON and XML are hierarchical (values within values)
- JSON and XML can be parsed and used by lots of programming languages
- JSON and XML can be fetched with an XMLHttpRequest

### **Differences**

- JSON doesn't use end tag
- JSON is shorter
- JSON is quicker to read and write
- JSON can use arrays

### **Why JSON is Better Than XML?**


XML is much more difficult to parse than JSON. JSON is parsed into a ready-to-use JavaScript object.
For AJAX applications, JSON is faster and easier than XML:

Using XML:

- Fetch an XML document
- Use the XML DOM to loop through the document
- Extract values and store in variables
  
Using JSON:

- Fetch a JSON string
- JSON.parse() the JSON string

### **JSON Data Types**


### **Valid Data Types**

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

### **JSON.parse()**

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

### **JSON.stringify()**

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



### **Delete Key-Value Pairs**
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

### **Arrays in JSON**
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

#### **Access array items from JSON**
Access array items from JSON using square brackets `[]` and index number.

```javascript
const jsonObject = {
    "array" : ["India", "UK", "USA"]
}

console.log(jsonObject.array[0]); // Output: India
console.log(jsonObject.array[1]); // Output: UK
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


## **JSON from Servers**
You can request JSON from the server by using an AJAX request

As long as the response from the server is written in JSON format, you can parse the string into a JavaScript object.

Suppose we have a  json_demo.txt as a JSON file and we want to fetch the data from this file into our project
```json
{
    "name":"John",
    "age":31,
    "pets":[
        { "animal":"dog", "name":"Fido" },
        { "animal":"cat", "name":"Felix" },
        { "animal":"hamster", "name":"Lightning" }
    ]
}

```
Now this data can be accessed in our project after the API request.
```html
<!DOCTYPE html>
<html>
<body>

<h2>Fetch a JSON file with XMLHttpRequest</h2>
<p id="demo"></p>

<script>
const xmlhttp = new XMLHttpRequest();
xmlhttp.onload = function() {
  const myObj = JSON.parse(this.responseText);
  //this line is used to change the content of the div which have have the id of "demo" by json data.
  document.getElementById("demo").innerHTML = myObj.name;
}
xmlhttp.open("GET", "json_demo.txt");
xmlhttp.send();
</script>

</body>
</html>


```
# **JSON Object Literals**
This is a JSON string:

```js
'{"name":"John", "age":30, "car":null}'
```

Inside the JSON string there is a JSON object literal:

```js
{"name":"John", "age":30, "car":null}
```

```
JSON object literals are surrounded by curly braces {}.

JSON object literals contains key/value pairs.

Keys and values are separated by a colon.
```
Keys must be strings, and values must be a valid JSON data type:

* string
* number
* object
* array
* boolean
* null
Each key/value pair is separated by a comma.

```
It is a common mistake to call a JSON object literal "a JSON object".

JSON cannot be an object. JSON is a string format.

The data is only JSON when it is in a string format. When it is converted to a JavaScript variable, it becomes a JavaScript object.
```

## **JavaScript Objects**
You can create a JavaScript object from a JSON object literal:

**For Example**
```js
myObj = {"name":"John", "age":30, "car":null};
```

Normally, you create a JavaScript object by parsing a JSON string:

**For Example**
```js
myJSON = '{"name":"John", "age":30, "car":null}';
myObj = JSON.parse(myJSON);
```

## **Accessing Object Values**
You can access object values by using dot (.) notation:

**For Example**
```js
const myJSON = '{"name":"John", "age":30, "car":null}';
const myObj = JSON.parse(myJSON);
x = myObj.name;
```

You can also access object values by using bracket ([]) notation:

**For Example**
```js
const myJSON = '{"name":"John", "age":30, "car":null}';
const myObj = JSON.parse(myJSON);
x = myObj["name"];
```

## **Looping an Object**
You can loop through object properties with a for-in loop:

**For Example**
```js
const myJSON = '{"name":"John", "age":30, "car":null}';
const myObj = JSON.parse(myJSON);


let text = "";
for (const x in myObj) {
  text += x + ", ";
}
```

In a for-in loop, use the bracket notation to access the property values:

**For Example**
```js
const myJSON = '{"name":"John", "age":30, "car":null}';
const myObj = JSON.parse(myJSON);

let text = "";
for (const x in myObj) {
  text += myObj[x] + ", ";
}
```

# **JSON Array Literals**
This is a JSON string:
```js
'["Ford", "BMW", "Fiat"]'
```

Inside the JSON string there is a JSON array literal:
```js
["Ford", "BMW", "Fiat"]
```
```
Arrays in JSON are almost the same as arrays in JavaScript.

In JSON, array values must be of type string, number, object, array, boolean or null.

In JavaScript, array values can be all of the above, plus any other valid JavaScript expression, including functions, dates, and undefined.
```
## **JavaScript Arrays**
You can create a JavaScript array from a literal:

**For Example**
```js
myArray = ["Ford", "BMW", "Fiat"];
```

You can create a JavaScript array by parsing a JSON string:

**For Example**
```js
myJSON = '["Ford", "BMW", "Fiat"]';
myArray = JSON.Parse(myJSON);
```

## **Accessing Array Values**
You access array values by index:

**For Example**
```js
myArray[0];
Arrays in Objects
Objects can contain arrays:
```

**For Example**
```js
{
"name":"John",
"age":30,
"cars":["Ford", "BMW", "Fiat"]
}
```

You access array values by index:

**For Example**
```js
myObj.cars[0];
```

## **Looping Through an Array**
You can access array values by using a for in loop:

**For Example**
```js
for (let i in myObj.cars) {
  x += myObj.cars[i];
}
```

Or you can use a for loop:

**For Example**
```js
for (let i = 0; i < myObj.cars.length; i++) {
  x += myObj.cars[i];
}
```

<br>

 #### Contributed by 
 [Aniket Pathak](https://github.com/aniketpathak028)
 <br>
 [Rwitesh Bera](https://github.com/rwiteshbera)
 <br>
 [Surbhi Sinha](https://github.com/Surbhi-sinha)
 <br>
 [Damini Mehra](https://github.com/daminimehra) :heart:
