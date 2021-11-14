# CSS Selectors

## Basic Selectors:

#### Universal Selector ( \* ):

The **Universal Selectors** are used to select all Html elements.

```css
* {
    margin:  5px;
    color:  blue;
    text-align:  center;
}
```

These properties will apply on each element of our html page.

#### Element Selectors :

The **element selectors** are used to select element by name or by tag name. We can select paragraph by **"p"**.

```css
p {
    text-align:  center;
    color:  green;
    font-size:  1rem;
}
```

These properties will apply on all the paragraphs of our html.

#### Id Selectors ( #id ):

The **id selectors** are used to select elements by their "id". As ids are unique we can specify a special property for a saperate element.

```css
#nav-bar {
    position:  sticky;
    top:  0;
    z-index:  10;
}
```

These properties will apply on our "navbar" only.

> The properties we apply here are used to design a sticky navigation-bar

#### Class Selectors (.class):

The **Class Selectors** are used to select the html elements using classes. As class can be given to multipule elements, we use this method to difine a design for similer objects on our webpage.

```css
.box {
    border:  2px solid brown;
    padding:  20px 5px;
    margin:  40px 5px;
    border-radius:  25px;
    background-color:  #fff9f9;
}
```

These properties will apply on every element where we used "box" class.

#### Atribute Selectors:

The attribute selectors are used to select a element with specified attribute.

```css
a[Home] {
    color:  blue;
}
```

This selector will target only anchor element which have 'Home' attribute.

## Group Selectors:

The **group selectors** are used to select elements in group. When we define same properties for different elements we can group them as a shorthand method.

```css
h1 {
    text-align:  center;
    color:  green;
}

h2 {
    text-align:  center;
    color:  green;
}

p {
    text-align:  center;
    color:  green;
}
```

> It can be perform in a short method using Group selectors

```css
p, h1, h2 {
    text-align:  center;
    color:  green;
}
```

#### Pseudo Selectors:

The **Pseudo Selectors** are used to target an elemnt when any action is performed:

- checked
- after
- hover
- visited
- not(selector)

```css
.box: hover {
    box-shadow:  gray 2px 2px 20px;
    position:  relative;
    font-size:  1.5rem;
}

.hide: after {
    content:  "";
    display:  block;
    clear:  both;
    visibility:  hidden;
    font-size:  0;
    height:  0;
    }
```

These properties will work on element when we hover cuser on it.

`not(selector) is used to remove a specific target from similer selected elements. Here selector is our id or class selectors usally.`


> #### Select some part of element using pseudo selectors:

```css
p::first-line {
   font-weight:  bold;
   font-size:  1.2em;
}

p::first-letter {
   float:  left;
   font-size:  2em;
   font-weight:  bold;
   font-family:  cursive;
   padding-right:  2px;
}
```

## Combinators:

#### Child Combinators (>):

The child combinator selects direct children of first element.

###### CSS code
```css
div > p {
    color:  green;
}
```
This property will apply on the paragraphs that are direct child of div.

###### Html code
```html
<div>
    <p id="direct-child">
        Lorem ipsum dolor sit amet consectetur, adipisicing elit. Quae animi eos eum.
    </p>
</div>
<p id = "para">
    Error distinctio corrupti ipsum voluptatibus nostrum! Dicta nostrum culpa veritatis perferendis.
</p>
```
Here above property will apply on the paragraph with id "direct-child" because it is a direct child of 'div', and not apply on the paragraph with id "para".

#### Sibling Combinator (~):

With this combinator we can select any sibling element; that means, it does not matter that elememt is direct child or not if its under selected tag it can be targeted. let's understand this with an example.

###### Html code
```html
<div>
    <section>
        <p>
            Lorem ipsum, dolor sit amet consectetur adipisicing elit. Id itaque dolores inventore?
        </p>
    </section>
    <p>
        nam soluta ipsa ex incidunt laudantium similique fugit perferendis sunt fuga cumque impedit tempore nobis porro a perspiciatis!
    </p>
</div>
```

###### CSS code
```css
div~p {
    color:  red;
}
```

This property will apply on both paragraph unless one is not a direct-child.

####  Adjacent Sibling Selector (+):

This Select the element that is just after the another specific element.
``` css
div + p {
    color:  white;
    background-color:  orange;
    font-style:  bold;
}
```
This will apply on the paragraphs that is just after the div.
