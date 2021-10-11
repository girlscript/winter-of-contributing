---
jupyter:
  colab:
    name: Untitled1.ipynb
  kernelspec:
    display_name: Python 3
    name: python3
  language_info:
    name: python
  nbformat: 4
  nbformat_minor: 0
---

::: {.cell .markdown id="fb7tWwEc9_cI"}
```{=html}
<h1 align="center"><b>CSS The !important Rule</b></h1>
```
`<br>`{=html} `<br>`{=html}

The `!important` rule in CSS is used to add more importance to a
property/value than normal. And if you use the `!important` rule, it
will override ALL previous styling rules for that specific property on
that element.

#### **Example :** {#example-}

    <!DOCTYPE html>
    <html>
    <head>
    <style>
    #myid {
      background-color: blue;
    }

    .myclass {
      background-color: gray;
    }

    p {
      background-color: red !important;
    }
    </style>
    </head>
    <body>

    <p>hello.</p>

    <p class="myclass">hello.</p>

    <p id="myid">hello.</p>

    </body>
    </html>

#### **Output:**

![doc1](f7e6e9c2776c44fa94f541c09710a111/887f212ae9a788bddc8d4ecff364dd9389bfed25.png)

`<br>`{=html} In the example above. all three paragraphs will get a red
background color, even though the ID selector and the class selector has
a higher specificity. The !important rule overrides the background-color
property in both cases.

`<br>`{=html}

## **Important About !important :** {#important-about-important-}

The only way to override an !important rule is to include another
!important rule on a declaration with the same (or higher) specificity
in the source code - and here the problem starts! This makes the CSS
code confusing and the debugging will be hard, especially if you have a
large style sheet.

#### **Example:** {#example}

    <!DOCTYPE html>
    <html>
    <head>
    <style>
    #myid {
      background-color: blue !important;
    }

    .myclass {
      background-color: gray !important;
    }

    p {
      background-color: red !important;
    }
    </style>
    </head>
    <body>

    <p>This is some text in a paragraph.</p>

    <p class="myclass">This is some text in a paragraph.</p>

    <p id="myid">This is some text in a paragraph.</p>

    </body>
    </html>

#### **Output:**

![doc2](f7e6e9c2776c44fa94f541c09710a111/a9e4cdc897c9bf9b167ca9f1016b1e1a193d0134.png)

`<br>`{=html}

## **Maybe One or Two Fair Uses of !important**

One way to use !important is if you have to override a style that cannot
be overridden in any other way. This could be if you are working on a
Content Management System (CMS) and cannot edit the CSS code. Then you
can set some custom styles to override some of the CMS styles.

Another way to use !important is: Assume you want a special look for all
buttons on a page. Here, buttons are styled with a gray background
color, white text, and some padding and border.

    <!DOCTYPE html>
    <html>
    <head>
    <style>
    .button {
      background-color: #8c8c8c; 
      color: white;
      padding: 5px;
      border: 1px solid black; 
    }

    </style>
    </head>
    <body>

    <p>Standard button: <a class="button" href="default.asp">CSS Tutorial</a></p>

    <p>Standard button: <a class="button" href="/html/">HTML Tutorial</a></p>

    </body>
    </html>

#### **Output**

![doc3](f7e6e9c2776c44fa94f541c09710a111/fcf2dd40c9cce0a374da9fce64b93c5b3db6ef0f.png)

The look of a button can sometimes change if we put it inside another
element with higher specificity, and the properties gets in conflict.
Here is an example of this:

#### **Example :** {#example--1}

    <!DOCTYPE html>
    <html>
    <head>
    <style>
    .button {
      background-color: #8c8c8c; 
      color: white;
      padding: 5px;
      border: 1px solid black; 
    }

    #myDiv a {
      color: red;
      background-color: yellow;  
    }
    </style>
    </head>
    <body>

    <p>Standard button: <a class="button" href="default.asp">CSS Tutorial</a></p>

    <div id="myDiv">
    <p>A link text inside myDiv: <a href="/html/">HTML Tutorial</a></p>
    <p>A link button inside myDiv: <a href="/html/" class="button">HTML Tutorial</a></p>
    </div>

    </body>
    </html>

#### **Output :** {#output-}

![doc4](f7e6e9c2776c44fa94f541c09710a111/33f5b80c1c2408ec084c34878bbe5dc4c3bd3168.png)

To \"force\" all buttons to have the same look, no matter what, we can
add the !important rule to the properties of the button, like this:

#### **Example :** {#example--2}

    <!DOCTYPE html>
    <html>
    <head>
    <style>
    .button {
      background-color: #8c8c8c !important; 
      color: white !important;
      padding: 5px !important;
      border: 1px solid black !important; 
    }

    #myDiv a {
      color: red;
      background-color: yellow;  
    }
    </style>
    </head>
    <body>

    <p>Standard button: <a class="button" href="default.asp">CSS Tutorial</a></p>

    <div id="myDiv">
    <p>A link text inside myDiv: <a href="/html/">HTML Tutorial</a></p>
    <p>A link button inside myDiv: <a href="/html/" class="button">HTML Tutorial</a></p>
    </div>

    </body>
    </html>

#### **Output :** {#output--1}

![doc5](f7e6e9c2776c44fa94f541c09710a111/e039ed09d7d854b964d7b2d2a7f3ee6fca3660d3.png)

Reference:
-`<a href="https://www.w3schools.com/css/css_important.asp">`{=html}W3Schools`</a>`{=html}
:::
