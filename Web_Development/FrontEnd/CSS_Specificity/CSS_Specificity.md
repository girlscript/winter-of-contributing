
# **CSS : Specificity**  

<br />


## **What is CSS Specificity?**
---

When more than one set of CSS rules (or multiple selectors) are applied to the same element, the browser will only select the most relevant rule for the HTML element. The rules that browser follows to apply particular selector out of multiple selectors are collectively called as CSS Specificity.

<br />


## **Specificity Hierarchy :-**
---

Every selector has its place in the specificity hierarchy. There are four categories of selectors using which specificity is defined:

1. Inline styles - An inline style is attached directly to the element to be styled. Also, inline styles has the highest priority. 

2. IDs - An ID is a unique identifier for the HTML elements, such as #navbar. ID's have the second highest priority.

3. Classes, attributes and pseudo-classes - This category includes classes, [attributes] and pseudo-classes such as :hover, :focus etc. These selectors comes next.

4. Elements and pseudo-elements - This category includes element names and pseudo-elements, such as h1, div, :before and :after.Element selectors have lowest priority.

<br />


## **Demonstration of priority among different css selectors :-**
---

<br />

1. Inline Style > Element Selector
>Example 1- In this example, style="css declarations" is the inline style and h1{css declarations} is the element selector that is being used to apply css to the heading h1.
<br />
>In this example, specificity of inline style is more than element selector, hence inline style(color: black, background-color: palevioletred) is applied.
<br /><br />
Advantages of inline style-
> - Specificity of inline style is the highest.
> - Inline style will affect the specific HTML element in which you add the style attribute not all the elements of the same kind.
> - Adding inline style will reduce the use of external css file so that browser need not required to download extra file.
<br />

```
<head>
    <style>

        h1{
            color: white;
            background-color: #ffbf00;
        }

    </style>
</head>

<body>
    <h1 style="background-color: palevioletred; color: black">Heading 1</h1>
</body>

```

![inline style > element selector](assets\asset2.jpg)

<br/>

2. Class Selector > Element Selector
>Example 2- In this example, .heading{css declarations} is the class selector and h1{css declarations} is the element selector that is being used to apply css to the heading h1.
<br />
>In this example, specificity of class selector is more than element selector, hence css declarations of class selector (color: black, background-color: #ffbf00) is applied.
<br /><br />
Advantages of class selector-
> - Using class selector, we can select all the HTML element with same class name at once and can apply the CSS without writing it number of times for different elements.
> - Use of class selector helps to style HTML elements in an organized manner unlike inline style.
<br />

```
<head>
    <style>

        .heading{
            color: black;
            background-color: #ffbf00;
        }

        h1{
            color: white;
            background-color: red;
        }

    </style>
</head>

<body>
    <h2 class="heading">Heading 2</h2>
</body>

```

![class selector > element selector](assets\asset5.jpg)

<br />

3. ID Selector > Class Selector
>Example 3- In this example, #nav{css declarations} is the id selector and .heading{css declarations} is the class selector that is being used to apply css to the heading h1.
<br />
>In this example, specificity of id selector is more than class selector, hence css declarations of id selector (color: white, background-color: navy) is applied.
<br /><br />
Advantages of id selector-
> - ID's have higher level of specificity than classes. This helps to create strong reference points for descendant selectors.
> - Outside of CSS, ID's have other uses. In forms, in JS and in server side languages like PHP and ASP. They're also faster and easier to get identified in DOM.
<br />

```
<head>
    <style>

        #nav{
            color: white;
            background-color: navy;
        }

        .heading{
            color: black;
            background-color: #ffbf00;
        }

    </style>
</head>

<body>
    <h2 id="nav" class="heading">Heading 2</h2>
</body>

```

![id selector > class selector](assets\asset4.jpg)

<br />

4. Inline style > ID Selector
>Example 4- In this example, style="css declarations" is the inline style and #nav{css declarations} is the id selector that is being used to apply css to the heading h1.
<br />
>In this example, specificity of inline style is more than id selector, hence css declarations of inline(background-color: orangered, color: white) is applied.
<br /><br />
Advantages of id selector-
> - Refer Example 1. for advantages of inline style.
<br />

```
<head>
    <style>

        #nav{
            color: black;
            background-color: navy;
        }

    </style>
</head>
<body>
    <h1 id="nav" style="background-color: orangered; color: white">Heading 1</h1>
</body>

```

![inline style > id selector](assets\asset3.jpg)

<br /><br />


## **Conclusion :-**

    Inline CSS > ID Selector > Class Selector > Element Selector


<br /><br />


## **Key Points :-**
---

- Inline CSS has the highest priority and overrides all other selectors.

- Internal CSS is overridden by Inline CSS.

- CSS style applied to an element by using external stylesheet has the lowest priority and is overridden by Internal and Inline CSS.

- When two or more selectors have equal specificity, the last(latest) declaration counts.

- Universal selectors like body and element selectors have least specificity.

<br /><br />


## **Note -** !important in CSS
---
The !important rule in CSS is used to add more value/importance to a property than normal. In fact, if you use the !important rule, it will override all previous styling rules for that specific property on that element.

Let us look at an example:
> Example
```
<head>
    <style>

        #nav{
            color: black;
            background-color: goldenrod;
        }

        
        h1{                   
            color: white !important;
            background-color: green !important;
        }

    </style>
</head>
<body>
    <h1 id="nav" style="background-color: violet; color: black">Heading 1</h1>
</body>

```
![!important](assets\asset1.jpg)

<br /><br />

---


*Thanks for reading !!*

**Contributor :** [@ Palak Tiwari](https://github.com/palak1101) 




 


