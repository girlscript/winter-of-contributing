# **HTML LISTS**
<div align="center">
<img src="https://designzonic.com/knowledge-base/wp-content/uploads/2019/05/Beyond-bland_HTML-lists-with-style.png"/>
</div>

<br>

## What are LISTS ?
<hr>

- Lists are the preferred way to display items one after the other, instead of just using ```<br>``` tags.

- HTML lists allow us to group a set of related items in lists.

- Lists are very helpful in conveying a set of either numbered or bullet points.

- Lists are the formatting tool for the content of our web pages. 

- HTML lists are good from a structural point of view as they help create a well-structured, more accessible, easy-to-maintain document.

<br>
<br>

## Types of Lists in HTML

<hr>

There are three types of lists in HTML, which are :

- <span style="color:lightsalmon;">***UnOrdered List***</span> — used to create a list of related items, in no particular order.

- <span style="color:lightsalmon;">***Ordered List***</span> — used to create a list of related items, in a specific order.

- <span style="color:lightsalmon;">***Definition List***</span> — used to create a list of terms and their descriptions.

<br>

**Note :** We can create a list inside another list, which will be termed as *Nested List*.

<br>
<br>

# UnOrdered or Bulleted Lists in HTML

An *Unordered lists* are used when a set of items can be placed in any order. The list items in unordered lists are marked with bullets. An example is a list of programming languages :

- C++
- Java
- Python
- Ruby

<br>

**Example :**

<br>

<div align="center">
<img src="https://i0.wp.com/www.tutorialbrain.com/wp-content/uploads/2019/01/Unordered-List.jpg?fit=474%2C397&ssl=1" /> 
</div>

<br>

## Syntax For UnOrdered List

<hr>

- We use the `<ul>` tag to create an unordered list.

- Items will appear with bullets.

- The list items are created with the `<li>` tag.

<br>

**For Example :**

      <ul>
          <li>Entry 1</li>
          <li>Entry 2</li>
          <li>Entry 3</li>
      </ul>

<br>

## Changing _"Bullets"_

<hr>

- By default Unordered lists appear with bullets.

- But if required then we can change this symbol to _“square”_ or _“circle”_.

- To do this we need to handle _“type”_ attribute of `<ul>` tag.

<br>

**For Example :**

      <ul type= “square">
            <li>Entry 1</li>  
            <li>Entry 2</li> 
            <li>Entry 3</li>
      </ul>

<br>
<br>

# Ordered or Numbered Lists In HTML

*Ordered lists* are used to display a list of items that need to be placed in a specific order. The list items in an ordered list are marked with numbers.

An example would be cooking instructions, which must be completed in order for the recipe to work.

**Example :**

<br>
<div align="center">
<img src="https://i2.wp.com/www.tutorialbrain.com/wp-content/uploads/2019/01/ordered-list.jpg?fit=474%2C397&ssl=1"> 
</div>

<br>
<br>

## Syntax For Ordered List

<hr>

- We use the `<ol>` tag to create an unordered list.

- Items will appear with numbers
  The list items are created with the `<li>` tag.

<br>

**For Example :**

      <ol>
         <li>Entry 1</li>
         <li>Entry 2</li>
         <li>Entry 3</li>
      </ol>

<br>

## Changing _"Numbers"_

<hr>

- By default Ordered lists appear with numbers.

- But if required then we can change numbers to letters or roman numerals.

- To do this we need to handle _“type”_ attribute of `<ol>` tag.

- Possible values are :
  _“A”, ”a”, ”I”, ”i”_

<br>

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

This is done using the _“start”_ attribute, which takes a numeric value, even if we’re using the list counters to be alphabetic or roman using the _“type”_ property.

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
<br>

# Definition or Description Lists in HTML

*Definition lists* create a list with two parts to each entry : the name or term to be defined and the definition. This creates lists similar to a dictionary or glossary.

<br>

There are three tags associated with the definition list :

`<dl>` to define the list

`<dt>`  to define the title term

`<dd>` to define the definition of the term

<br>

**For Example :**

<br>
<div align="center">
<img src="https://i0.wp.com/www.tutorialbrain.com/wp-content/uploads/2019/01/Description-List.jpg?fit=474%2C397&ssl=1"> 
</div>

<br>
<BR>

## Syntax For Definition List
<hr>

- We use the `<dl>` tag to create a definition list.
- The `<dt>` tag defines terms/names.
- The `<dd>` tag describes each term/name.

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

_The Result :_

        HTML
           The language used to write Web pages.
        CSS
           The language used to design and format Web pages.





<br>
<br>

# Nested List

A list item can contain another entire list — this is known as _"nesting"_ a list. It is useful for things like tables of contents.

<br>

## Syntax For Nested List

<hr>

- We use the `<ul>` tag to create an unordered list.

- Items will appear with bullets.

- The list items are created with the `<li>` tag.

<br>

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

<br>

_And here's the resulting nested list :_

<br>
<div align="center">
<img src="https://s3.amazonaws.com/webucator-how-tos/419.png"> 

</div>

<br>
<br>

# Styling Lists With CSS

**CSS** provides several properties for styling and formatting the most commonly used _unordered_ and _ordered lists_.

We have the following four *CSS* properties, which can be used to control lists :

- list-style-type
- list-style-position
- list-style-image
- list-style

Now, we will see how to use these properties with examples.

<br>

## The List-Style Property

<hr>

The ***list-style-type*** property allows us to control the shape or style of marker in the list.

For unordered lists possible values are :

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

This will style all unordered list to be displayed without any marker , instead of bullets.

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
<br>

## The List-Style-Position Property

<hr>
By default, the marker of each list item is positioned outside of their display boxes.
<br>
<br>

However, we can also position these markers or bullet points inside of the list item's display boxes using the ***list-style-position*** property along with the value inside.
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
<br>

## The List-Style-Image Property

<hr>

We can also set an image as a list marker using the property ***list-style-image***.

**Example :**

     ul li {
    	     list-style-image: url("images/bullet.png");
           }

The style rule in the above code assigns a PNG image “bullet.png" as the list marker.

<br>

**<hr>**

<br>

# Setting All Lists Properties At Once

The ***list-style*** property is a **shorthand** property for defining all the three properties : _list-style-type, list-style-image_, and *list-style-position* of a list in one place.

<br>

**Example :**
   
    ul
     {
        list-style: square inside url("images/bullet.png");
     }

<br>
<br>

# Creating Nav Bar Using List

<br>

<div align="center">
<img  src="https://www.otallu.com/wp-content/uploads/2014/07/Create-a-simple-navigation-bar-with-CSS.jpg" />
</div>
<br>
<br>

HTML lists are frequently used to create horizontal navigation bar or menu that typically appears at the top of a website.

<br>

But since the list items are block elements, so to display them inline we need to use the ***CSS display property***.

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

<br>
<br>

## *Reference Links:*
 - https://www.w3schools.com/html/html_lists.asp
 - https://www.webucator.com/article/how-to-properly-nest-lists-in-html/
 - https://www.tutorialspoint.com/css/css_lists.htm
 
 <br>

 ## *Image Sources:*
 - https://designzonic.com/knowledge-base/category/html/
 - https://www.tutorialbrain.com/html_tutorial/html_lists/
 -  https://www.otallu.com/tutorials/simple-navigation-bar-with-html-css/