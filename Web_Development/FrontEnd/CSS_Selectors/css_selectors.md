
## **CSS selectors and pseudoselectors**


### CSS selectors

CSS selectors are used to target the HTML element/elements whose properties are to be set.

eg: when styling a paragraph we may write

        p{
        color:red;
        }
here `p` is acting as a selector.


### Types of selectors

- **Universal selector**

Universal selectors(*) are used to select elements of any type.

eg: here all the elements will have a background color of blue

        *{
            background-color: blue;
        }


- **Element selector**

element selector are used when adding style to HTML elements based on the element name.

eg: here all the `<div>` elements will have a background color of grey:
    
        div{
        background-color:grey; 
        }

- **Id-selector**

Id selectors(#) are used to select an HTML element from it's id attribute. 

>Note: as Id of an element is unique we use it 
when styling a particular element.

eg: here the element with Id 'first-para' will have a text color of red:

    #first-para{
        color: red;
    }

- **Class selector**

Class selectors(.) are used to select the HTML elements with a specfic class name.

eg: here all the elements with the class of 'important' will have a solid black border:

    .important{
        border: 5px solid black;
    }

- **attribute Selector**

Attribute selector is used to select elements with a specific attribute

eg: while styling a 'form element' we can use the attribute selector like:

    input[type="button"]
    {
        background-color: red;
    }

- **Grouping selector**

We can group the HTML elements with same style together using grouping selector.

eg: here the `h1` and `p` elements will have the same styles:
    
    h1, p {
        color: red;
    }

## **pseudo- classes**

Pseudo-classes are used to style the elements in a particular state.

eg: here `:hover` is used to change the 
button's color to red when user hovers over it:

    button:hover{
        color: red;
    }


![unhovered](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/zx4jxz8crusk7naijha9.png)
*button before user hovers over it*

\
![hovered](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/v7qk79uy0im5rmxv3xs8.png)
*button after user hovers over it*

**Syntax:**

    selector:pseudo-class {
        property: value;
    }

#### Some common pseudo-classes that we can use are:

`:link`


for links that not have been visited.

`:visited`

for links that have been visited.

`:hover`

when user holds a mouse pointer over the element.

`:focus`

when the element has focus

`:checked`

when checkboxes or radiobuttons are checked

## **Pseudo-elements**

Pseudo-elements are used to style a specific part of the desired element(s).

eg: here `::first-letter`  is used to apply style to the first letter of a paragraph.

    p::first-letter {
        color: red;
    }

![paragraph](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/fvaj34bfgpz71lp31fw0.png)
*before applying style*



![Alt Text](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/9qkd32lkn7k2ce1pfn98.png)
*after applying style*

**Syntax:**


    selector::pseudo-element {
        property: value;
    }

#### Some common pseudo-elements are:

`::after`

For inserting something after the content of HTML element.

`::before`

For inserting somenting before the content of HTML element.

`::first-letter`

To select the first letter of the HTML element


`::first-line`

To select the first line of the element


>note: first-letter and first line pseudo-element can only be applied to block-level elements.


`::marker` 

to select the markers of list items

`::selection`

To select a portion of an element required by user.



*I hope you enjoy reading!*

>Author:
><cite>[Divya Singh](https://github.com/divya1467)</cite>


