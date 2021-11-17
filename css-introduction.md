# CSS: Cascading Style Sheets
        Cascading: Falling of Styles
        Style: Adding designs/Styling our HTML tags
        Sheets: Writing our style in different documents

- CSS determines how HTML elements should appear on a screen, in print, or in other media.
- CSS helps you save time and effort. It has the ability to control the layout of numerous web pages at the same time.
- CSS files contain external stylesheets.


## CSS History
- **1994**: First Proposed by Hakon Wium Lie on 10th October
- **1996**: CSS was published on 17th November with influencer Bert Bos Later he became co-author of CSS
- **1996:** CSS became official with CSS was published in December
- **1997:** Created CSS level 2 on 4th November 
- **1998:** Published on 12th May

## CSS Editors
Some of the popular editors that are best suited to wire CSS code are as following:

 1. [Atom](https://atom.io/)
 2. [Visual Studio Code](https://code.visualstudio.com/download)
 3. [Brackets](https://brackets.io/)
 4. [Espresso(For Mac OS  User)](https://www.espressoapp.com/)
 5. [Notepad++(Great for HTML & CSS)](https://notepad-plus-plus.org/downloads/)
 6. [Komodo Edit (Simple)](https://www.activestate.com/products/komodo-ide/downloads/edit/)
 7. [Sublime Text (Best Editor)](https://www.sublimetext.com/3)

## CSS Syntax
 
    Selector {
  		 Property 1 : value;
                	 Property 2 : value;
               	 Property 3 : value;
             }
   For example:
   ```html
         h1
         {
            Color: red;
            Text-align: center;
         }
          #unique 
           {
                 color: green;
           }
  ```
   
- **Selector**: selects the element you want to target
- Always remains the same whether we apply internal or external styling 
- There are few basic selectors like tags, id’s, and classes 
- All forms this key-value pair
- **Keys**: properties(attributes) like color, font-size, background, width, height,etc
**Value**: values associated with these properties

## CSS How-To 
In our HTML file, we may write CSS in three different methods:
- Inline CSS
- Internal CSS
- External CSS

**Priority order**
   Inline > Internal > External

### Inline CSS
- This was the only technique to apply styles before CSS.
- It's not the most efficient approach to write because there's a lot of redundancy.
- Self-contained
- Each element is given its own approach.
- The concept of worry separation was lost.
 Example:
 ```html
   <h3 style=” color:red”> Have a great day </h3>
   <p  style =” color: green”> I did this , I did that </p>
 ```
 
 ### Internal CSS
- We can use the style tag to apply styles to the HTML file.
- There is no longer any redundancy.
- However, the concept of worry separation is still a work in progress.
- One-of-a-kind application on a single document
Example
 ```html
<style>
   h1{
       color:red;
      }
</style>  
<h3> Have a great day </h3>
 ```
 ### External CSS
- With the help of <link> tag in the head tag, we can apply styles
- Reference is added 
- File saved with .css extension
- Redundancy is removed
- The idea of separation of concerns is maintained
- Uniquely applied to each document
Example
```html
<head>
<link rel="stylesheet" type="text/css" href="name of the Css file">
</head>
            h1{
                     color:red;         //.css file
                 }
 ```
