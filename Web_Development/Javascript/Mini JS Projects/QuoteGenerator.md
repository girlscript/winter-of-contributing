# Random Quote Generator

Built using: HTML, JavaScript

## Introduction

This documentation covers the steps to create a simple "Random Quote Generator" using JavaScript. You can

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

1. The `<h1>` tag defines HTML heading of the largest size. 

2. `<button>`creates a button which `onclick` invokes function `Quote()`.

3. `<script>`tag is used to integrate JavaScript file in the HTML document.

4. `<div>` tag is used to specify a division. It is given an `id` which is accesed within a function in JS file. The quote is displayed here.

## Demo

This project has been demoed on Replit. You can try it out [here](https://replit.com/@areenoverclouds/ShadyWastefulLivedistro#index.html).