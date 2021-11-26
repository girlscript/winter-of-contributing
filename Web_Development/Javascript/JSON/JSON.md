# JSON

JSON stands for **JavaScript Object Notation**.

It is  standardized format  for  text-based representation of structured data based on JavaScript object syntax.

The most common use of JSON is  data exchange in web application like sending  data from the servers to the client, so data can be used in a web page.

It is language independent format i.e. it is supportedby many programming languages like C, C++, C#, Java, JavaScript. 
The file names for JSON use the extension **.json**.

Most APIs use JSON for data exchange.

The first person to use and helped in popularty of  the JSON format was *Douglas Crockford*.

The simplicity of JSON and easy data exchange has led to increase in its global usage and a better substitute to XML in Ajax. 

## Types
JSON can support the following types:

- a string-`{"name":"Rishabh"}`
- a number- `{"class":11}`
- a boolean-`{"life":true}`
- null-`{"middlename":null}`
- an array- `{ "student":["Rishabh", "Mayank", "Shruti"] }`
- an object- `{student":{"name":"Rishabh", "age":20, "Town":"new delhi"}}`

## Syntax
JSON have three basic rules:-
- Data is only represented in name or value pairs.
- **{ }** is used to hold object and each name in a object is followed by **:** , the name or value pairs are separated by **,** .
- **[ ]** hold arrays and values are separated by  **,** .
## Example
Here is small example of JSON :-

```
{
     "name":"jerry",
     "age":11, 
     "intelligence":null,
     "kind":true,
     "hobbies":["Gym", "running"]
}
```
## Use in Javascript
JavaScript have a function called `JSON.parse()` for converting a JSON file into a JavaScript object.
After this we an use any JSON data like an object data.

JavaScript have a function called `JSON.stringify()` for converting an object into a JSON string.


## Why use JSON ??

- Simplest format of data exchange i.e. easily understanable to a human .
- Light weight i.e. easily data exchange.
- Uses less data overall i.e. less cost for data exchange.
- Multiple languages supported i.e. no repeated file for same data.
