<h1 align="center"><b>CSS The !important Rule</b></h1>
<br>
<br>

The `!important` rule in CSS is used to add more importance to a
property/value than normal. And if you use the `!important` rule, it
will override ALL previous styling rules for that specific property on
that element.

#### **Example :** 

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

![doc1](https://user-images.githubusercontent.com/58135144/136808697-08dbe64b-9d97-41c4-97d5-fb63308d9766.png)

<br>In the example above. all three paragraphs will get a red
background color, even though the ID selector and the class selector has
a higher specificity. The !important rule overrides the background-color
property in both cases.

<br>

## **Important About !important :**

The only way to override an !important rule is to include another
!important rule on a declaration with the same (or higher) specificity
in the source code - and here the problem starts! This makes the CSS
code confusing and the debugging will be hard, especially if you have a
large style sheet.

#### **Example:**

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

![doc2](https://user-images.githubusercontent.com/58135144/136808896-a1e965c7-2365-4a88-acfa-adbd8e430fc7.png)
<br>

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

![doc3](https://user-images.githubusercontent.com/58135144/136809592-577bd025-b5e5-44e4-bec5-d32a65059994.png)

The look of a button can sometimes change if we put it inside another
element with higher specificity, and the properties gets in conflict.
Here is an example of this:

#### **Example :**

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

#### **Output :**

![doc4](https://user-images.githubusercontent.com/58135144/136809678-bf52b94e-7f87-4163-80e0-3f08fe4ef222.png)

To \"force\" all buttons to have the same look, no matter what, we can
add the !important rule to the properties of the button, like this:

#### **Example :**

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

#### **Output :**

![doc5](https://user-images.githubusercontent.com/58135144/136809762-e9f61221-3342-4c13-866e-bbf87d624433.png)

Reference:
-<a href="https://www.w3schools.com/css/css_important.asp">W3Schools</a>
