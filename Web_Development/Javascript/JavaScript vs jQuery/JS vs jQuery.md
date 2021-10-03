<h1 align="center">JavaScript vs jQuery</h1>
<img src="https://www.freelancinggig.com/blog/wp-content/uploads/2018/06/JavaScript-vs-jQuery.jpg" align="middle"  style="width:1000px; 
            height:350px; 
            display: block;" />
            
            
**JavaScript** is an independent language and can exist on its own while **JQuery** is a JavaScript library.**jQuery** is an open source JavaScript library that simplifies the
interactions between an HTML/CSS document.


## Relation between JavaScript and jQuery
The fundamental difference between the two is that one is a scripting language, while the other is not. JavaScript offers you endless possibilities to make web pages more
interactive and dynamic, while JQuery has a limited scope. JavaScript was created as an integral element of the web development process.

## What is jQuery?
jQuery is one of the widely used javascript library among all other libraries holding the following core features:
- DOM elements selection
- Traversal and manipulation which is enabled by Sizzle(the selector engine)
- Creating a new programming style
- Fusing DOM data structures and algorithms


## Why jQuery is created and what are the special capabilities of jQuery?
In JavaScript, we have to write a lot of code for basic operations while with jQuery the same operations can be done with a single line of code. Therefore developers find 
it easier to work with jQuery than with JavaScript.

- Though JavaScript is the basic language from which jQuery has evolved, jQuery makes event handling, DOM manipulation, Ajax calls much easier than JavaScript. jQuery also allows us to add animated effects on our web page which takes a lot of pain and lines of code with JavaScript.
- jQuery has in-built plugins to perform an operation on a web page. We just have to include or import the plugin in our webpage to use it. Thus plugins allows us to create abstractions of animations and interactions or effects.
- We can also make our custom plugin with jQuery. If we require an animation to be done on a web page in a certain way, we can develop a plugin according to the requirement and use it on our web page.
- jQuery also has a high-level UI widget library. This widget library has a whole range of plugins that we can import on our webpage and use it for creating user-friendly web pages.

# Difference between JavaScript and jQuery
| JavaScript | jQuery |
| --- | --- |
| It is a dynamic and interpreted web-development programming language. | It is a javascript library. |
| It is more time consuming as the whole script is written. | It is less time-consuming. |
| The code can be complicated, as well as long. | It contains only a few lines of code. |
|JavaScript is one of the popular web designing programming languages for developers that introduced jQuery. | jQuery is an optimized technique for web designing. |

# Examples are:

- **Adding JavaScript and jQuery in our HTML document**

JavaScript is added directly in the HTML document inside the tag or an external JavaScript file can be added in an HTML document using the src attribute.
Written directly inside the script tag:

```
<script type="text/javascript">
  alert ("This alert box was called with the onload event");
</script>
```

In order to use jQuery we download the file from its website and refer the path of the downloaded jQuery file in the src attribute of the SCRIPT tag or we can get it directly from CDN (Content delivery network).
```
<head>
<script src="jquery-3.4.1.min.js"></script>
</head>
```
**Using CDN:**
```
<head>
<script src="<a href="https://ajax.googleapis.com/ajax/libs/jquery/3.4.1/jquery.min.js">https://ajax.googleapis.com/ajax/libs/jquery/3.4.1/jquery.min.js</a>"></script>
</head>
```
- **DOM Traversal and Manipulation**

*In JavaScript:*
We can select a DOM element in JavaScript using the document.getElementById() method or by using the document.querySelector() method.
```
var mydiv = document.querySelector(“#div1”);
```
or
```
document.getElementById(“#div1”);
```
*In jQuery:*
Here, we will have to only use the $ symbol with the selector in brackets.
```
$(selector)
$(“#div1”) – The selector is an id ‘div1’
$(“.div1”) – The selector is a class ‘div1’
$(“p”) – The selector is the paragraph in the Html page
```
