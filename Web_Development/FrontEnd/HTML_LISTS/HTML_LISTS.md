# HTML Lists
HTML offers web authors three ways for specifying lists of information. All lists must contain one or more list elements. 

Lists may contain −

**An unordered list** − <**ul**> This will list items using plain bullets.

**An ordered list** − <**ol**> This will use different schemes of numbers to list your items.

**A definition list** − <**dl**> This arranges your items in the same way as they are arranged in a dictionary.

# HTML Unordered Lists
An unordered list is a collection of related items that have no special order or sequence. This list is created by using HTML <**ul**> tag. Each item in the list is marked with a bullet.

### Example:
```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Unordered List</title>
   </head>
	
   <body>
      <ul>
         <li>Red</li>
         <li>Yellow</li>
         <li>Green</li>
         <li>Blue</li>
      </ul>
   </body>
   
</html>
```
This will produce the following result −

* Red
* Yellow
* Green
* Blue


## The type Attribute
You can use type attribute for <**ul**> tag to specify the type of bullet you like. By default, it is a disc.

Following are the possible options −

<**ul type = "disc"**>

<**ul type = "circle"**>

<**ul type = "square"**>

### Example
Following is an example where we used <**ul type = "disc"**>-

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Unordered List</title>
   </head>

   <body>
      <ul type = "disc">
         <li>Red</li>
         <li>Yellow</li>
         <li>Green</li>
         <li>Blue</li>
      </ul>
   </body>

</html>
```
This will produce the following result −
* Red
* Yellow
* Green
* Blue

### Example
Following is an example where we used <**ul type = "circle"**> −

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Unordered List</title>
   </head>
	
   <body>
      <ul type = "circle">
         <li>Red</li>
         <li>Yellow</li>
         <li>Green</li>
         <li>Blue**</li>
      </ul>
   </body>

</html>
```
<ul type = "square"> 
This will produce the following result − 
 
* Red
* Yellow
* Green
* Blue
  
### Example
Following is an example where we used <**ul type = "square"**> −
```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Unordered List</title>
   </head>

   <body>
      <ul type = "square">
         <li>Red</li>
         <li>Yellow</li>
         <li>Green</li>
         <li>Blue</li>
      </ul>
   </body>
	
</html>
```
<ul type = "circle">
This will produce the following result −

* Red
* Yellow
* Green
* Blue


# HTML Ordered Lists
  
If you are required to put your items in a numbered list instead of bulleted, then HTML ordered list will be used. This list is created by using <**ol**> tag. 
 
The numbering starts at one and is incremented by one for each successive ordered list element tagged with <**li**>.

### Example
```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Ordered List</title>
   </head>

   <body>
      <ol>
         <li>Red</li>
         <li>Yellow</li>
         <li>Green</li>
         <li>Blue</li>
      </ol>
   </body>

</html>
```
This will produce the following result −
  
 1. Red
  
 2. Yellow
 
 3. Green
 
 4. Blue


## The type Attribute
You can use type attribute for <**ol**> tag to specify the type of numbering you like. By default, it is a number. 

Following are the possible options −

<**ol type = "1"**> - Default-Case Numerals.
  
<**ol type = "I"**> - Upper-Case Numerals.

<**ol type = "i"**> - Lower-Case Numerals.

<**ol type = "A"**> - Upper-Case Letters.

<**ol type = "a"**> - Lower-Case Letters.

### Example
Following is an example where we used <**ol type = "1"**>

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Ordered List</title>
   </head>

   <body>
      <ol type = "1">
         <li>Red</li>
         <li>Yellow</li>
         <li>Green</li>
         <li>Blue</li>
      </ol>
   </body>

</html>
```
This will produce the following result −
  
 1. Red
  
 2. Yellow
 
 3. Green
 
 4. Blue


### Example
Following is an example where we used <**ol type = "I"**>

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Ordered List</title>
   </head>
	
   <body>
      <ol type = "I">
         <li>Red</li>
         <li>Yellow</li>
         <li>Green</li>
         <li>Blue</li>
      </ol>
   </body>
	
</html>
```
This will produce the following result −
  
I. Red
  
II. Yellow
 
III. Green
 
IV. Blue  


### Example
Following is an example where we used <**ol type = "i"**>

```
<!DOCTYPE html>
<html>
   
   <head>
      <title>HTML Ordered List</title>
   </head>
	
   <body>
      <ol type = "i">
         <li>Beetroot</li>
         <li>Ginger</li>
         <li>Potato</li>
         <li>Radish</li>
      </ol>
   </body>
	
</html>
```
This will produce the following result −
  
i. Red
  
ii. Yellow
 
iii. Green
 
iv. Blue 

### Example
Following is an example where we used <***ol type = "A"***>

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Ordered List</title>
   </head>
	
   <body>
      <ol type = "A">
         <li>Red</li>
         <li>Yellow</li>
         <li>Green</li>
         <li>Blue</li>
      </ol>
   </body>
	
</html>
```
This will produce the following result −
  
A. Red
  
B. Yellow
 
C. Green
 
D. Blue 


### Example
Following is an example where we used <**ol type = "a"**>

```
<!DOCTYPE html>
<html>
   
   <head>
      <title>HTML Ordered List</title>
   </head>
	
   <body>
      <ol type = "a">
         <li>Beetroot</li>
         <li>Ginger</li>
         <li>Potato</li>
         <li>Radish</li>
      </ol>
   </body>
	
</html>
```
This will produce the following result −
 
a. Red
  
b. Yellow
 
c. Green
 
d. Blue 


## The start Attribute
You can use start attribute for <**ol**> tag to specify the starting point of numbering you need. 

Following are the possible options −

<**ol type = "1" start = "4"**>    - Numerals starts with 4.
  
<**ol type = "I" start = "4"**>    - Numerals starts with IV.
  
<**ol type = "i" start = "4"**>    - Numerals starts with iv.
  
<**ol type = "a" start = "4"**>    - Letters starts with d.
  
<**ol type = "A" start = "4"**>    - Letters starts with D.

### Example
Following is an example where we used <**ol type = "i" start = "4"**>

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Ordered List</title>
   </head>
	
   <body>
      <ol type = "i" start = "4">
         <li>Red</li>
         <li>Yellow</li>
         <li>Green</li>
         <li>Blue</li>
      </ol>
   </body>
	
</html>
```
This will produce the following result −
 
iv. Red
  
v. Yellow
 
vi. Green
 
vii. Blue 


## HTML Definition Lists
HTML and XHTML supports a list style which is called **definition lists** where entries are listed like in a dictionary or encyclopedia. The definition list is the ideal way to present a glossary, list of terms, or other name/value list.

Definition List makes use of following three tags.

<**dl**> − Defines the start of the list
  
<**dt**> − A term
  
<**dd**> − Term definition
  
<**/dl**> − Defines the end of the list
  
  
### Example

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Definition List</title>
   </head>
	
   <body>
      <dl>
         <dt><b>HTML</b></dt>
         <dd>This stands for Hyper Text Markup Language</dd>
         <dt><b>HTTP</b></dt>
         <dd>This stands for Hyper Text Transfer Protocol</dd>
      </dl>
   </body>
	
</html>
```
This will produce the following result −
 
**HTML**
This stands for Hyper Text Markup Language
  
**HTTP**
This stands for Hyper Text Transfer Protocol

