# CSS GRID VS. FLEXBOX
**Flexbox** and **CSS Grid** are two CSS layout modules that have become mainstream in recent years. Both allow us to create complex layouts that were previously only possible by applying CSS hacks and/or JavaScript. Flexbox and CSS Grid share multiple similarities and many layouts can be solved with both of them.

Let's first understand the basics of both.

## What is CSS Grid Layout: 
CSS Grid Layout (aka “Grid” or “CSS Grid”), is a **two-dimensional grid-based layout system with rows and columns** that, compared to any web layout system of the past, completely changes the way we design user interfaces. It is useful in creating more complex and organized layouts.

![CSS Grid](https://i.morioh.com/2020/05/01/768324f99431.jpg)

An HTML element becomes a grid container when its display property is set to ```grid``` or ```inline-grid```.

Example:
```css
.grid-container {
  display: grid;
}
```
or
```css
.grid-container {
  display: inline-grid;
}
```
## What is CSS Flexbox:
The CSS Flexbox is a **one-dimensional layout**. It is useful in allocating and aligning the space among items in a grid container. It works with various kinds of display devices and screen sizes. Flex layout makes it easier to design and build responsive web pages without using many float and position properties in the CSS code.

![CSS Flexbox](https://i.morioh.com/200827/6b167dc9.webp)

In order to use Flexbox, we need to create a flex container using the ```display: flex``` property. Every element inside the particular flex container will act as a flex item.

Example:
```css
.flex-container {
    display: flex;
}
```
<br>

## CSS Grid vs. Flexbox: Which Should You Use and When?

<ol>
<h3><li>One vs. Two Dimensions</li></h3>
As already mentioned, Flexbox is one-dimensional, while CSS Grid is two-dimensional. It means Flexbox can work on either rows or columns at a time, but Grids can work on both. In other words, Flexbox lays out items along either the horizontal or the vertical axis, so you have to decide whether you want a row-based or a column-based layout.

![CSS Grid](https://cms-assets.tutsplus.com/cdn-cgi/image/width=850/uploads/users/30/posts/30183/image/axes.png)

A Flex layout can also wrap in multiple rows or columns and flexbox treats each row or column as a separate entity, based on its content and the available space.

On the other hand, CSS Grid lets you work along two axes: horizontally and vertically. Grid allows you to create two-dimensional layouts where you can precisely place grid items into cells defined by rows and columns.
<br><br>

<h3><li>Content Placement vs. Content Flow</li></h3>

The most common misconception about the two layout modules is that Grid is for full-page layouts and flexbox is for smaller components. This is not the case at all.

<h4>Focus on Content Placement: CSS Grid</h4>

CSS Grid focuses on precise content placement. Each item is a grid cell, lined up along both a horizontal and a vertical axis. If you want to accurately control the position of items within a layout, CSS Grid is the way to go. As per W3C -
 
> “It provides a mechanism for authors to divide available space for layout into columns and rows using a set of predictable sizing behaviors. Authors can then precisely position and size the building block elements of their application into the grid areas defined by the intersections of these columns and rows.”



CSS Grid has properties such as ```grid-template-rows``` and ```grid-template-columns``` and utilities like the **fraction unit** that let you precisely calculate everything. Hence, Grid is especially suitable for creating unusual layouts like **broken, asymmetrical, and overlapping layouts**.


**Implementation of CSS Grid**
![CSS Grid](https://www.simplilearn.com/ice9/free_resources_article_thumb/grid-vs-flexbox-1.JPG)  
*HTML code*

<br>

![CSS Grid](https://www.simplilearn.com/ice9/free_resources_article_thumb/grid-vs-flexbox-2.JPG)  
*CSS code*
<br>

##### What we are getting:

![CSS Grid](https://www.simplilearn.com/ice9/free_resources_article_thumb/grid-vs-flex-3.JPG)

As we can see, although the layout wraps based on the available space, it’s still not content-aware like Flexbox, as the content inside the items doesn’t flexibly stretch out.
<br>

#### Focus on Content Flow: Flexbox

Flexbox focuses on content flow rather than content placement. Widths (or heights) of flex items are determined by the content of the item. Flex items grow and shrink according to their inner content and the available space. As per W3C - 

>“... (flexbox) gains simple and powerful tools for distributing space and aligning content in ways that web apps and complex web pages often need.”

Flexbox enables you to allocate space and align items flexibly.

##### Implementation of Flexbox

![CSS Grid](https://www.simplilearn.com/ice9/free_resources_article_thumb/grid-vs-flex-4.JPG)  
*CSS code*
<br>

##### What we are getting:

![CSS Grid](https://www.simplilearn.com/ice9/free_resources_article_thumb/grid-vs-flex-5.JPG)

As we can see, the first flex item with the long content stretches out as far as needed.

Of course, you can make fix-width flex items using the ```width``` or ```flex-basis``` properties. However, if you do so you lose flexbox’s content-awareness which is the main reason for its existence. You can also see above that flexbox treats each row independently. Different rows align flex items differently, based on the amount of text inside of them. There are no columns here and this is not a grid but a one-dimensional layout.
<br><br>

<h3><li>Browser Support</li></h3>

Flexbox has fairly good browser support, while CSS Grid is not supported by IE11- and Edge 15-. 

![CSS Flexbox Layout Module](https://cms-assets.tutsplus.com/cdn-cgi/image/width=850/uploads/users/30/posts/30184/image/caniuse-flex.png)

![CSS Grid Layout Module](https://cms-assets.tutsplus.com/cdn-cgi/image/width=850/uploads/users/30/posts/30184/image/caniuse-grid.png)
</ol>
<br>

## Usage of CSS Grid and Flexbox

You should consider using Grid layout when:
<ul>
    <li>You have a complex design to work with and want maintainable web pages
    <li>You want to add gaps over the block elements
</ul>

You should consider using Flexbox when:
<ul>
    <li>You have a small design to work with a few rows and columns
    <li>You need to align the element
    <li>You don’t know how your content will look on the page, and you want everything to fit in.
</ul>

<br>

## Wrap Up
In this CSS Grid vs Flexbox Documentation, you have looked into the differences between CSS Grid and Flexbox layout, how they function in modern browsers. With the right amount of practice, you can master both the layouts and create impressive web pages.

<br>

## Credits
<ul>
  <li>https://morioh.com/p/96ae54d49d81</li>
  <li>https://webdesign.tutsplus.com/articles/flexbox-vs-css-grid-which-should-you-use--cms-30184</li>
  <li>https://css-tricks.com</li>
  <li>https://www.simplilearn.com/tutorials/css-tutorial/css-grid-vs-flexbox</li>
  <li>https://www.w3schools.com/css/</li>
  <li>https://blog.logrocket.com/flexbox-vs-css-grid/</li>
</ul>

<br><br>
*Thanks for reading!*

> Author:
> <cite>[Raunak Gayen](https://github.com/RaunakGN2001)</cite>


