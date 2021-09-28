// CSS Selectors and pseudo selector 

* CSS Selectors:
CSS selectors are used to "find" (or select) the HTML elements you want to style. A CSS selector is the part of a CSS rule set that actually selects the content you want to style CSS selectors select HTML elements according to its id, class, type, attribute etc. 

There are several different types of selectors in CSS.

1. CSS id Selector: It is denoted by (#). The id selector uses the id attribute of an HTML element to select a specific element. The id of an element is unique within a page, so the id selector is used to select one unique element.

For Example:

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA_Compatible" content="ie=edge">
    <title>CSS Selectors</title>
    <style>
        /* Id selector */
        #firstPara {
            color: green;
        }
    </style>
</head>
<body>
     <p id="firstPara">This is a simple paragraph to demonstrate CSS selectors</p>
</body>
</html>

2. CSS class Selector: It is denoted by (.). The class selector selects HTML elements with a specific class attribute. We can use same class multiple times within a page. HTML elements can also refer to more than one class.

For Example:

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA_Compatible" content="ie=edge">
    <title>CSS Selectors</title>
    <style>
        /* Class selector */
        .bgBlue {
            color: yellow;
            background-color: blue;
        }
    </style>
</head>
<body>
    <p class="redElement bgBlue">This is a another simple paragraph to demonstrate CSS selectors</p>
    <p class="bgBlue">We can use same class multiple times</p>
</body>
</html>

3. CSS element selector: The element selector selects HTML elements based on the element name.

For Example:

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA_Compatible" content="ie=edge">
    <title>CSS Selectors</title>
    <style>
        /* Element selector */
        p {
            border: 2px solid red;
        }
    </style>
</head>
<body>
        <p>This is yet another simple paragraph inside div to demonstrate CSS selectors</p>
</body>
</html>

4. CSS Grouping Selector: The grouping selector selects all the HTML elements with the same style definitions. Grouping selector is used to minimize the code. Commas are used to separate each selector in grouping.

For Example:

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA_Compatible" content="ie=edge">
    <title>CSS Selectors</title>
    <style>
        /* Grouping selector */
        footer,span {
            background-color: pink;
        }
    </style>
</head>
<body>
    <span>This is span</span>
    <footer>This is footer</footer>
</body>
</html>

5. CSS Universal Selector: The universal selector (*) selects all HTML elements on the page.

For Example:

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA_Compatible" content="ie=edge">
    <title>CSS Selectors</title>
    <style>
        /* Universal selector */
        * {
            text-align: center;
            color: blue;
        }
    </style>
</head>
<body>
    <h3>CSS Selectors</h3>
    <p id="firstPara">This is a simple paragraph to demonstrate CSS selectors</p>
    <p id="secondPara" class="redElement bgBlue">This is a another simple paragraph to demonstrate CSS selectors</p>
    <div>
        <p>This is yet another simple paragraph inside div to demonstrate CSS selectors</p>
        <span>This is span</span>
    </div>
    <footer>This is footer</footer>
</body>
</html>

* CSS pseudo Selectors:
A pseudo-class is used to define a special state of an element.  it can be used to style an element when a user mouses over it, visited and unvisited links differently and when it gets focus.

There are several different types of pseudo selectors in CSS.

1. :active: It applies when the elements are clicked or activated. It selects the activated element.

For Example:

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA_Compatible" content="ie=edge">
    <title>Pseudo selectors</title>
    <style>
        a:active{
            color: darkblue;
        }
    </style>
</head>
<body>
    <div class="container con1">
        <a href="https://google.com" class="btn">Read more</a>
    </div>
</body>
</html>

2. :hover: This pseudo-class adds a special style to an element when the user moves the cursor over it. 

For Example: 

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA_Compatible" content="ie=edge">
    <title>Pseudo selectors</title>
    <style>
        a:hover{
            color:red;
            background-color: black;
        }

       .btn:hover{
           color: darkgoldenrod;
           background-color: darkgrey;
       }
    </style>
</head>
<body>
    <div class="container con1">
        <a href="https://google.com" class="btn">Read more</a>
        <button class="btn">Contact us</button>
    </div>
</body>
</html>

3. :visited: It selects the visited links and adds special styles to them. It means the user is already visited on the link.

For Example:

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA_Compatible" content="ie=edge">
    <title>Pseudo selectors</title>
    <style>
        a:visited{
            color: yellow;
        }
    </style>
</head>
<body>
    <div class="container con1">
        <a href="https://google.com" class="btn">Read more</a>
    </div>
</body>
</html>

4. :lang: It is helpful in documents that require multiple languages. It allows us to define special rules for different languages.

For Example:

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA_Compatible" content="ie=edge">
    <title>Pseudo selectors</title>
    <style>
    p:lang(fr)  
    {  
        font-family:Verdana;  
        color:blue;     
    }  
    </style>
</head>
<body>
    <div class="container con1">
        <p lang="fr">Lorem, ipsum dolor sit amet consectetur adipisicing elit. Est laboriosam et sed voluptatibus nobis, soluta eveniet tenetur aut fugit ipsa ex aliquid accusantium saepe, molestiae libero? Hic a sequi vero! Cum pariatur cumque rerum ex quidem quasi illo assumenda recusandae nemo veniam dignissimos, molestias tempore doloremque blanditiis? Error, obcaecati vel?</p>
    </div>
</body>
</html>

5. :first-child: It matches a particular element, which is the first child of another element and adds a special effect to the corresponding element.

For Example:

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA_Compatible" content="ie=edge">
    <title>Pseudo selectors</title>
    <style>
        h3:first-child {
            text-indent: 200px;
	        color:blue;
         }
      </style>
   </head>

   <body>
    <div class="container con1">
        <h3>This is my heading</h3>
        <h3>This is another heading</h3>
    </div>
   </body>
</html>

6: :link: The :link selector is used to select unvisited links.

For Example:

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA_Compatible" content="ie=edge">
    <title>Pseudo selectors</title>
    <style>       
        a:link{
            color:white;
            background-color: black;
        }

    </style>
</head>
<body>
    <div class="container con1">
        <a href="https://google.com" class="btn">Read more</a>
    </div>
</body>
</html>

7. :nth-child(n): The :nth-child(n) selector matches every element that is the nth child, regardless of type, of its parent.
n can be a number, a keyword, or a formula.

For Example:

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA_Compatible" content="ie=edge">
    <title>Pseudo selectors</title>
    <style>
        h3:nth-child(2) {
           background: red;
        }
    </style>
</head>
<body>
    <div class="container con1">
        <h3>This is my heading</h3>
        <h3>This is another heading</h3>
    </div>
</body>
</html>