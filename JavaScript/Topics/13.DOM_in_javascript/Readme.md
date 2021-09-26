

# JavaScript HTML DOM



## What is DOM ?
 DOM stands for Document object model .It is an application programming interface for manipulating HTML and XML documents. The DOM represents a document as a tree of nodes .It allows programs and scripts to dynamically access and update the content, structure, and style of a document.


Below image shows a basic heirachy in DOM :


![DOM ](https://searchengineland.com/figz/wp-content/seloads/2015/05/Microsoft-PowerPoint.jpg)


## Use of DOM in javascript 

With the DOM , javascript get all the power it needs to create dynamic HTML . With DOM :

* JavaScript can change all the HTML elements in the page

* JavaScript can change all the HTML attributes in the page

* JavaScript can change all the CSS styles in the page

* JavaScript can remove existing HTML elements and attributes 

* JavaScript can add new HTML elements and attributes

* JavaScript can react to all existing HTML events in the page

* JavaScript can create new HTML events in the page


## Document object in JS
<br>
<br>
The HTML DOM document object is the owner of all other objects in a  web page.  we can acess any element in a HTML page by the use of some Document methods . 
<br>
Methods to acess elements :
<br>

<br>

| Methods  | Use |
| ------------ | ------------- |
| document.getElementById(id) |  Find an element by element id |
| document.getElementsByTagName(name)  | Find elements by tag name  |
| document.getElementsByClassName(name)  | 	Find elements by class name  |

<br>
<br>

## Adding and Deleting Elements
DOM provides various methods to add and delete HTML elements via javascript . Some of them are as follows :
<br>
<br>
 <br>
| Method |	Description|
|--- |----|
|
document.createElement(element) |	Create an HTML element |
 | document.removeChild(element) |	Remove an HTML element|
|document.appendChild(element)	|Add an HTML element |
|document.replaceChild(new, old)	| Replace an HTML element |
|document.write(text)	|Write into the HTML output stream |
<br>

This was a brief  note about DOM .Above methods are frequently used methods , apart from them DOM contains much more methods for manipulating HTML elements . To refer more about DOM , Please visit : [DOM](https://www.w3schools.com/js/js_htmldom_document.asp) 
