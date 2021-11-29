# Random Quote Generator

Built using: HTML, JavaScript

## Introduction

This documentation covers the steps to create a simple "Random Quote Generator" using JavaScript. It requires the creation of just two files namely, index.html and script.js.

A basic HTML file is made that consists of:

* Heading

* Division where quote will be displayed

* Button for "New Quote"

On clicking the button, a random quote is displayed on screen.

The JavaScript file includes:

* A list of 7 quotes (strings)

* `Quote()` function

When the button is clicked, `Quote()` function is invoked. The function chooses a **random number** between 1 to 7 and displays the quote corresponding to that index.


## Source Code

### HTML File

```HTML
<!Doctype HTML>
<html>
    <head>
        <title>Quote Generator</title>
    </head>
    <body>
        <h1>This is a Random Quote Generator.</h1>
        <div id="Q">
        </div>
        <button onclick="Quote()"> Show New Quote </button>
        <script src="script.js"></script>
    </body>
</html>

```
The file is saved as index.html.

### Javascript File

```js
var quotes=[
    'The greatest glory in living lies not in never falling, but in rising every time we fall. -Nelson Mandela',
    'Life is what happens when you\'re busy making other plans. -John Lennon',
    'The way to get started is to quit talking and begin doing. -Walt Disney',
    'Anger is the ultimate destroyer of your own peace of mind.',
    'Don\'t be afraid. Be focused. Be determined. Be hopeful. Be empowered.',
    'The fact is that grief today is a family matter as much as it is an individual one.',
    'Be honest in your feelings, for they are the surest conduit to knowledge.'
]

function Quote(){
    var randomNumber = Math.floor(Math.random() * 7);
    document.getElementById('Q').innerHTML = quotes[randomNumber];
}
```
The file is saved as script.js.

## Explanation of Tags used

1. `<html>`represents the root of HTML document.

2. `<head>` element is a container for metadata (data about data) and is placed between the <html> tag and the <body> tag.
    
3. `<title>` tag lets us give a title to our webpage.
    
4. `<body>`tag defines the document's body and it further contains other tags.
    
5. The `<h1>` tag defines HTML heading of the largest size. 

6. `<button>`creates a button which `onclick` invokes function `Quote()`.

7. `<script>`tag is used to integrate JavaScript file in the HTML document.

8. `<div>` tag is used to specify a division. It is given an `id` which is accesed within a function in JS file. The quote is displayed here.

Each tag has a closing tag which is a slash (/) followed by tag name.
    
## Explanation of JS File
    
1. Firstly a vartiable 'quote' is declared and 7 strings are stored in it. 
  
2. The fucntion `Quote()` is declared. This function is called when the button is clicked.
    
3. In the function, another variable 'randonNumber' is declared and gien the value of any random number between 1 to 7. For this operation, inbuilt function `Math.random()` is used.
    
4. `Math.floor()` is used to round-off the number to nearest whole number value.
 
5. The next statment picks up the quote from 'randomNumber' th position and sends it to division tag with id = 'Q'.
   
6. This quote is displayed on the screen.
    
## Demo

This project has been demoed on Replit. You can try it out [here](https://replit.com/@areenoverclouds/ShadyWastefulLivedistro#index.html).
    
**Images:**
    
 <img src="https://cdn.discordapp.com/attachments/884864861815857173/907351211555053658/1.PNG">
    
 After clicking on "Show new quote" button
    
 <img src="https://cdn.discordapp.com/attachments/884864861815857173/907351226138652672/2.PNG">
    
## References
 
* [Free Code Camp](https://www.freecodecamp.org/news/creating-a-bare-bones-quote-generator-with-javascript-and-html-for-absolute-beginners-5264e1725f08/)
