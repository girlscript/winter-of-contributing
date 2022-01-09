# HTML Lists

HTML lists helps web developers to store or group set of related items or information in a list.
There are three different types of lists in HTML:
1. Unordered List (```<ul>```)
2. Ordered List  (```<ol>```)
3. Description Lists

Now we will discuss about these three different types of lists:
<br> <br>

## HTML Unordered List (```<ul>```)
---
Unordered list is used when order of items in a list does not matter. In this, by default all the items are marked with bullets. It is known as bulleted list also. To create Unordered list ```<ul>``` tag is used and every item in list starts with ```<li>``` tag. We can see this through an example:
```HTML
<ul>
<li> Book </li>
<li> Pen </li>
<li> Bag </li>
</ul>
```
#### Output:
<ul>
<li> Book </li>
<li> Pen </li>
<li> Bag </li>
</ul>
 
 We can change look of bullets using an attribute named ```type``` and giving it any one of the four different values given below in table: 
 
| values        | Description   | Syntax     |       
| ------------- |:-------------:| :---------:|
| "disc"        | it is default style. in this, list items are marked with bullets | ```<ul      type="disc"></ul>```  |
| "circle"      | in this style, list items are marked with circle                 | ```<ul type="circle"></ul>```|
| "square"      | in this style, list items are marked with square                 | ```<ul type="square"></ul>```|
| "none"        | in this style, list item are not marked                          | ```<ul type="none"></ul>```  |

We can see one of these through an example:
```HTML
<ul type="square">
<li> Book </li>
<li> Pen </li>
<li> Bag </li>
</ul>
```
#### Output:
<ul type="square">
<li> Book </li>
<li> Pen </li>
<li> Bag </li>
</ul>
<br>

## HTML Ordered List (```<ol>```)
---
Ordered list is used when order of items in a list matters. In this, all the items are numbered. It is known as numbered list also. To create ordered list ```<ol>``` tag is used and every item in list starts with ```<li>``` tag. We can see this through an example:
```HTML
<ol>
<li> Stone </li>
<li> Paper </li>
<li> Scissors </li>
</ol>
```
#### Output:
<ol>
<li> Stone </li>
<li> Paper </li>
<li> Scissors </li>
</ol>

We can represent ordered list in numbers format as well as some other formats, like alphabets, Roman format etc. we can do this by specifying an attribute named ```type``` inside ```<ol>``` tag and by giving it any one of the five different values given below in table:  

| values        | Description   | Syntax     |       
| ------------- |:-------------:| :---------:|
| "1"        | it is default style. in this, list items are numbered with numbers | ```<ol      type="1"></ol>```  |
| "I"      | in this style, list items are numbered with Upper case Roman numbers                 | ```<ol type="I"></ol>```|
| "i"      | in this style, list items are numbered with Lower case Roman numbers                 | ```<ol type="i"></ol>```|
| "a"      | in this style, list items are numbered with lower case letters             | ```<ol type="a"></ol>```  |
| "A"      | in this style, list items are numbered with Upper case letters             | ```<ol type="A"></ol>```|

We can see one of these through an example:
```HTML
<ol type="i">
<li> Stone </li>
<li> Paper </li>
<li> Scissors </li>
</ol>
```
#### Output:
<ol type="i">
<li> Stone </li>
<li> Paper </li>
<li> Scissors </li>
</ol>
<br>

## HTML Description Lists
---
HTML Description list is used to give definition or description to a list item. It is also known as Definition list. There are three tags which are used in description list:
1. ```<dl>``` : It defines the start of the description list. other two tags are wrapped inside it.
2. ```<dt>``` : This tag is used to define the name of item or term. Every item is placed inside different ```<dt>``` tag.
3. ```<dd>``` : This tag is used to give definition or description to each item or term. it is used after a item is defined in ```<dt>``` tag. <br> <br>
It will be easy to understand it through an example:
```HTML
<dl>
    <dt>Chocolate</dt>
    <dd>: Chocolates are very sweet and tasty</dd>
    <dt>Cashew</dt>
    <dd>: Cashews are good for health</dd>
</dl>
```
#### Output:
<dl>
    <dt>Chocolate</dt>
    <dd>-Chocolates are very sweet and tasty</dd>
    <dt>Cashew</dt>
    <dd>-Cashews are good for health</dd>
</dl>
<br> <br>

# References
https://www.javatpoint.com/html-lists