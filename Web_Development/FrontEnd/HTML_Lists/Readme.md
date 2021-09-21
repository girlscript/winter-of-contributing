# HTML LISTS_#1055

<div align="center">
<img  src="../../images/HTML_Lists.jpg"/>

</div>
<br>
<br>

# HTML Lists
HTML lists allow web developers to group a set of related items in lists.
<br>
<br>

## What are Lists ?
<hr>

- Lists are used to group related pieces of information together, so they are clearly associated with each other and easy to read.

- HTML lists are used to present list of information in well formed and semantic way.

- In modern web development lists are very important  elements, frequently used for navigation as well as general content. 

<br>

**<hr>**
<br>
## Types of Lists in HTML
<hr>

There are three types of lists in HTML and each one has a specific purpose and meaning : 

- <span style="color:lightsalmon;">**UnOrdered List**</span> — used to group a set of related items, in no particular order.

-  <span style="color:lightsalmon;">**Ordered List**</span>—used to group a set of related items, in a specific order.

-   <span style="color:lightsalmon;">**Definition List**</span>—used to display name/value pairs such as terms and their definitions, or times and events.

<br>

**<hr>**
<br>

# UnOrdered Lists in HTML

Unordered lists, or bulleted lists, are used when a set of items can be placed in any order. An example is a shopping list : 
- milk
- bread
- butter
- coffee

<br>

These items are all part of one list, however, we could put the items in any order and the list would still make sense : 
- bread
- coffee 
- milk
- butter

<br>

**Example :**
<br>

<div align="center">
<img src="../../images/bulleted.jpg"> 
</div>


<br>

## Syntax For UnOrdered List
<hr>

- We use the ```<ul>``` tag to create an unordered  list. 

- Items will appear with bullets

- The list items are created with the ```<li>``` tag. 

**For Example :**

      <ul> 
          <li>Entry 1</li>
          <li>Entry 2</li>
          <li>Entry 3</li>
      </ul>

<br>

## Changing *"Bullets"*
<hr>

- By default Unordered lists appear with bullets.

- But if required then we can change this symbol to *“square”* or *“circle”*.

- To do this we need to handle *“type”* attribute of ```<ul>``` tag. 

**For Example :**
      
      <ul type= “square">
            <li>Entry 1</li>  
            <li>Entry 2</li> 
            <li>Entry 3</li>
      </ul> 

<br>

**<hr>**
<br>

# Ordered Lists In HTML

Ordered lists, or numbered lists, are used to display a list of items that need to be placed in a specific order. 

<br>

An example would be cooking instructions, which must be completed in order for the recipe to work

**Example :**

<br>
<div align="center">
<img src="../../images/ordered.jpg"> 
</div>

<br>
<br>

## Syntax For Ordered List
<hr>

- We use the ```<ol>``` tag to create an unordered  list.

- Items will appear with numbers
The list items are created with the ```<li>``` tag. 

**For Example :** 

      <ol> 
         <li>Entry 1</li>
         <li>Entry 2</li>
         <li>Entry 3</li>
      </ol>

<br>

## Changing *"Numbers"*
<hr>

- By default Ordered lists appear with numbers.

- But if required then we can change numbers to letters or roman numerals

- To do this we need to handle *“type”* attribute of ```<ol>``` tag.

- Possible values are : 
*“A”, ”a”, ”I”, ”i”*
 
**For Example :**
      
      <ol type= “A">
            <li>Entry 1</li>  
            <li>Entry 2</li> 
            <li>Entry 3</li>
      </ol> 

 <br>

 ## Beginning Ordered Lists with Numbers Other than 1
 <hr>

 It is possible to get an Ordered list to start with a number other than 1 (or i, or I, etc.). 

<br>

This is done using the *“start”* attribute, which takes a numeric value, even if we’re using the list counters to be alphabetic or roman using the *“type”* property.

<br>

**For Example :**
      
      <ol start= “4">
            <li>Entry 1</li>  
            <li>Entry 2</li> 
            <li>Entry 3</li>
      </ol> 

<br>

**For Alphabetic lists:**
           
      <ol type="A" start=“4">
           <li>Entry 1</li>  
           <li>Entry 2</li> 
           <li>Entry 3</li>
      </ol> 

<br>

**<hr>**
<br>

# Definition Lists in HTML

Definition lists, or Description lists, create a list with two parts to each entry : the name or term to be defined and the definition. This creates lists similar to a dictionary or glossary.

<br>

There are three tags associated with the definition list :

```<dl>```  to define the list

```<dt>```  to define the title term

```<dd>``` to define the definition of the term

<br>

**For Example :**

<br>
<div align="center">
<img src="../../images/DEFINITION.jpg"> 
</div>

<br>
<BR>

## Syntax For Definition List
<hr>

- We use the ```<dl>``` tag to create a definition  list.

**For Example :**

      <dl> 
          <dt>
             HTML
          </dt>
          <dd>
              The language used to write Web Pages.
          </dd>
          <dt>
              CSS
          </dt>
          <dd>
              The language used to design and format Web Pages.
          </dd>
      </dl>

<br>

*The Result :*
   
        HTML
           The language used to write Web pages. 
        CSS
           The language used to design and format Web pages. 


 
          

<br>

<br>

**<hr>**
<br> 

# Nested List

A list item can contain another entire list — this is known as *"nesting"* a list. It is useful for things like tables of contents


## Syntax For Nested List
<hr>

- We use the ```<ul>``` tag to create an unordered  list. 

- Items will appear with bullets

- The list items are created with the ```<li>``` tag. 

**For Example :**

      <ul>
         <li>Fruit
           <ul>
               <li>Bananas</li>
               <li>Apples
                    <ul>
                       <li>Green</li>
                       <li>Red</li>
                    </ul>
               </li>
               <li>Pears</li>
           </ul>
                </li>
         <li>Vegetables</li>
         <li>Meat</li>
      </ul>

*And here's the resulting nested list :*

<br>
<div align="center">
<img src="../../images/nested.png"> 
</div>

<br>

**<hr>**
<br>

# Styling Lists In CSS

**CSS** provides several properties for styling and formatting the most commonly used *unordered* and *ordered lists*. 

These **CSS list properties** typically allow you to :

- Control the shape or appearance of the marker.

- Set the distance between the marker and the text in the list.

- Specify an image for the marker rather than a bullet point or number.

Following are the properties provided by CSS for styling any list:

- list-style-type
- list-style-position
- list-style-image 
- list-style 

<br>

## The *List-Style Property*
<hr>
The list-style-type property allows us to control the shape or style of marker in the list.

For unordered lists possible values are:

- none
- disc
- circle
- square

<br>

**Example :**
  
    ul 
	  { 
		list-style-type: none; 
	  }


This will style all unordered list to be displayed without any  marker , instead of bullets.

<br>

For ordered lists possible values are :

- decimal
- decimal-leading-zero
- lower-alpha
- upper-alpha
- lower-roman
- upper-roman

<br>

**Example :**
  
    ol 
	  { 
		list-style-type: decimal-leading-zero; 
	  }


This will style all ordered list to be displayed 0 prefixed numbers as marker , for single digit numbers.

<br>

**<hr>**
<br>

## The *List-Style-Position* Property
<hr>
By default, the marker of each list item is positioned outside of their display boxes.
<br>
<br>

However, we can also position these markers or bullet points inside of the list item's display boxes using the list-style-position property along with the value inside. 
<br>
<br>

In this case the lines will wrap under the marker instead of being indented.

<br>

**Example :**

    ol.in li 
		  { 
			 list-style-position: inside; 
		  } 
    ol.out li 
		  { 
			 list-style-position: outside; 
	   	  }

<br>

**<hr>**

<br>

## The *List-Style-Image* Property 
<hr>

We  can also set an image as a list marker using the property list-style-image .
<br>

**Example:**
     
     ul li { 
		     list-style-image: url("images/bullet.png"); 
	       }

The style rule in the above code assigns a PNG image “bullet.png" as the list marker

<br>

**<hr>**

<br>

# Setting All Lists Properties At Once

The **list-style** property is a **shorthand** property for defining all the three properties : *list-style-type, list-style-image*, and *list-style-position* of a list in one place.
<br>

**Example :**
	
    ul 
	{ 
		list-style: square inside url("images/bullet.png"); 
	}

<br>

**<hr>**

<br>

# Creating Nav Bar Using List

<br>

<div align="center">
<img  src="../../images/nav_bar.jpg"/>

</div>
<br>
<br>

HTML lists are frequently used to create horizontal navigation bar or menu that typically appears at the top of a website. 

<br>

But since the list items are block elements, so to display them inline we need to use the **CSS display property**.

<br>

**Example :**

    ul 
	   {
		  padding: 0; 
		  list-style: none;
		  background: #f2f2f2; 
	   } 
	ul li 
		{ 
		   display:  inline-block; 
		} 
	ul li a 
		{ 
		display: block; 
		padding: 10px 25px; 
		color: #333; 
		text-decoration: none; 
		} 
	ul li a:hover 
		{ 
		color: #fff; 
		background: #939393; 
		