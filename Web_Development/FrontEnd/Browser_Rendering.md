# How Browser Rendering Works ?
Web browser is a piece of software which loads files from the remote server and displays the information received to user , This makes user and website interaction. \
\
The browser engine is a core software component of each browser, and different browers name their engines with different names. \
\
When we write some HTML, CSS, and JS, then open the HTML file in our browser, The browser reads the raw bytes of HTML from your hard disk and displays the output .

## HTML to DOM
The characters in the code that you have written. This conversion is done based on the character encoding of the HTML file that we have written . \
\
The actual characters in the file . But they are not the final result . These characters are further changed into tokens (The smallest unit ) . The bunch of characters in a html file does not make the browser engine good Without the tokenization process each character is changed into token . \
\
When we save a file with the ( .html ) extension , An indication is send to the browser engine to interpret the file as an HTML document . Then browser interprets html file by first parsing it and with continuation the process of  tokenization take place .
Note : - The DOM contruction process time will depend upon the size of html file . 

```html
<!DOCTYPE html>
 <html>

  <head>

  </head>
        <body>
    
    
           <p> This a paragraph tag </p>


        </body>

 </html>

<!-- All the characters which are under angle brackets are changed into tokens .   -->
```
## CSS to DOM
When we make the structure of any website by Html we use CSS for designing of the website which make it as good looking as possible .
\
There are different ways of applying styles to HTML elements like using external CSS file or by embedded CSS using style tag . But in the end, the browser has to do the heavy lifting of applying CSS styles to the DOM elements of Html . \
\
The CSSOM tree does not contain elements which don't get printed on the screen like link, title, script etc. CSS property values in the red colors are implemented down from the top while property values in the gray are overriding the inherited values or default values of element which are set by browsers .

```css
html {
    padding: 0;
    margin: 0;
    box-sizing:border-box;
}

body {
    font-size: 14px;
}

.container {
    width: 200px;
    height: 200px;
    color: green;
}

.container h1 {
    color: blue;
}

.container p {
    font-size: 20em;
    display: none;
}

```

## Rendering In Browsers
However the rendering don't depends how a browser renders things , it might be that google chrome and safari browsers have different rendering processes . But HTML , CSS , or JavaScript these languages are standardized by some organization  and the browser manages them together to render things on the screen is not standardized . 
\
There are some common principles which should be same among all browsers . Let’s understand the common approach that each browser takes to render the elements and present the things on the screen and the common events of this process .

1. Parsing and External Resources : - Parsing is the process of reading HTML content and constructing a DOM tree structure from it . That's why this process is also known DOM parsing and the program that perform this process is called the DOM parser .

2. Parser - Blocking Scripts : - This is a script ( JavaScript code ) that initiate the process to stop the parsing of the HTML. When the browser encounters a script element, if and only if it is an embedded script using the script tag in Html code . Then it will execute that script first and then continue parsing the HTML to construct the DOM tree . So all embedded scripts are parser-blocking .

3. Render - Blocking CSS : - Any external resource request except a parser-blocking script that file doesn’t block the DOM parsing processes . Hence CSS ( including embedded one ) doesn’t block the DOM parser . Yes, CSS can block DOM parsing . \
When browser find style element , it will parse all the embedded CSS and update the CSSOM tree with new CSS ( style ) rules . After that , it will continue parsing the HTML elements in the normal manner and the same goes for inline styling .

4. Document's Event : - The DOM Content Loaded ( DCL ) event marks the point in that time when the browser is constructing a complete DOM tree from all the available HTML. But will be lot of factors involved that can change when the DCL event is fired .
```js
document.addEventListener( 'DOMContentLoaded', function(a) {
    console.log( ' DOM is fully parsed! ' );
} );

```

5. Window's Event : - The Window event marks a point in time when external stylesheets and files are downloaded and our web application ( complete ) has finished downloading .
```js
window.addEventListener( ' load ', function(a) {
  console.log( 'Page is fully loaded!' );
} )

```
