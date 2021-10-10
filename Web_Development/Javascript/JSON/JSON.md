<h1 align="center">JSON</h1><hr>
<h2>Introduction</h2>
<p> 
JSON is an acronym for JavaScript Object Notation which  is a  data-interchange format.<br>
It was made to make easy for humans to read and write and easy for machines to parse and generate.<br>
JSON exists as a string — useful when you want to transmit data across a network.<br>
It needs to be converted to a native JavaScript object when you want to access the data.<br>
It is based on a subset of the JavaScript Programming Language Standard ECMA-262 3rd Edition - December 1999.<br>
JSON is a text format that is completely language independent but uses conventions that are familiar to the C-family of languages, including C, C++, C#, Java, JavaScript and many others. <br>
These properties make JSON an ideal data-interchange language.
</p>
Here is small example of JSON :-<br>
 
`{"name":"jerry", "age":11, "intelligence":null}` <br>

The above example shows a object with 3 properties name, ages, intelligence in JSON format.
 
<hr>
<h2>Syntax</h2>
By the name we can understand that JSON is derived from Javascript objects.<br>
It follows the following rules:<br>
<ul>
<li>Data is in name/value pairs</li><li>Data is separated by commas</li><li>Curly braces hold objects</li><li>Square brackets hold arrays</li>
</ul>

 JSON, values must be one of the following data types:<br>
<ul>
<li>a string-
{"name":"Rishabh"}</li><li>a number- {"class":11}
</li><li>an object-{
"student
":{"name":"Rishabh
", "age":20
, "Town":"new delhi"}
}
</li><li>an array-{
"student":["Rishabh", "Mayank", "Shruti"]
}

</li><li>a boolean-{"life":true}</li><li>null-{"middlename":null}</li>
</ul>

<hr>
<h2>Advantages</h2>
The JSON format is syntactically similar to the code for creating JavaScript objects.<br>
Because of this, a JavaScript program can easily convert JSON data into JavaScript objects.<br>
Since the format is text only, JSON data can easily be sent between computers, and used by any programming language.<br>
JavaScript has a built in function for converting JSON strings into JavaScript objects:<br>

`JSON.parse()`<br>
JavaScript also has a built in function for converting an object into a JSON string:<br>

`JSON.stringify()`<br>
<h3>Comparison</h3>
XML was one of the original way to recievce data from a server.<br>
We use JSON and XML to receive data from a web server.
<ul>
<li>JSON doesn't use end tag</li><li>JSON is shorter
</li><li>JSON is quicker to read and write</li><li>JSON can use arrays</li>
</ul>
The biggest difference is:
 XML has to be parsed with an XML parser. JSON can be parsed by a standard JavaScript function.<br>
 <h4>JSON</h4>
`{"students":[
  { "Name":"Mayank", "Age":"19" },
  { "Name":"Shruti", "Age":"15" },
  { "Name":"Rishabh", "Age":"17" }
]}`

<h4>XML</h4>


  <students>

    <student>
    <Name>Mayank</Name> <Age>19</Age>
    </student>
  
    <student>
    <Name>Shruti</Name> <Age>15</Age>
    </student>
  
    <student>
    <Name>Rishabh</Name> <Age>17</Age>
    </student>
  
 </students> 
 <p>Here we can see that JSON is more precise, shorter and faster than XML.<br>
 To conclude that we use JSON industry wide to provide faster and more reliable way to transfer data from a server to different languages software.<br>
XML is much more difficult to parse than JSON.<br>
JSON is parsed into a ready-to-use JavaScript object.<br>

 </p>


