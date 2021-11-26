# JSON

JSON stands for **JavaScript Object Notation**

It is a standardized format  for  text-based representation of structured data based on JavaScript object syntax.

The most  common use of JSON is transmitting data in web applications like sending  data from the servers to the client, so it can be displayed on a web page, or vice versa.

It is language independent format like C, C++, C#, Java, JavaScript. 
The file names for JSON use the extension **.json**.

Most APIs use JSON for data exchange.

The first person to use and helped in popularty of  the JSON format was *Douglas Crockford*.

The simplicity of JSON has led to increase in its global use and a substitute to XML in Ajax. 

A major advantage of JSON over XML as a data interchange format is that it is much simpler to write a JSON parser.

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
- Data is represented in name or value pairs.
- Curly braces is used to hold objects and each name is followed by ':'(a colon), the name or value pairs are separated by , ( a comma).
- Square brackets hold arrays and values are separated by ,(a comma).
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
JavaScript have a function for converting a JSON file into JavaScript objects:-

`JSON.parse()`

After this we an use any JSON data like an object data.

JavaScript also have a function for converting an object into a JSON string:-

`JSON.stringify()`

## Why use JSON ??

- Simplest format of data exchange i.e. easily readable .
- Light weight
- Uses less data overall
- Multiple languages supported.
