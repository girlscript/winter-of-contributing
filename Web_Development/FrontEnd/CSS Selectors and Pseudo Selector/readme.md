
# Selectors and Pseudo-selectors in CSS 

## Selectors in CSS :

CSS Selectors are used to selecting HTML elements based on their element name, id, attributes, etc. It can select one or more elements simultaneously.

#### Syntax
```css
selector {
    // CSS Property
}
```

  There are numerous CSS selector available. Some of most used one are listed Below.

  
### Element selectors


```css
element { style properties }

```


### Universal selectors

The CSS universal selector (*) selects elements of any type.

```
* {
    /* Selects all elements */
  color: green;
}

* .tushar {
    /*Selects all elemnts with class 'tushar' */
   color: red;
}

```
 ###### HTML

```html
<p>
  <span class="tushar"> A red span </span> in a green paragraph.
</p>
```

![Universal](https://user-images.githubusercontent.com/78275713/134321322-07e52cd4-c045-49d9-9a40-5c1f4502738b.png)



### ID Selectors
The CSS ID selector matches an element based on the value of the element’s id attribute. In order for the element to be selected, its id attribute must match exactly the value given in the selector.
```
#tushar {
  background-color: red;
}

```
###### HTML

```html
<div id="tushar">This div has a special ID on it!</div>
<div>This is just a regular div.</div>
```

![ID SELECTOR](https://user-images.githubusercontent.com/78275713/134318260-9bcd505b-9e36-467d-9f4b-39d18946c037.png)


### Class selectors

The CSS class selector matches elements based on the contents of their class attribute.

```
.para1 {
  text-align: center;
}
.red {
  color: #f33;
}

.yellow-bg {
  background-color: #ffa
}
```

###### HTML

```html
<p class="para1">This text is center aligned.</p>
<p class="red yellow-bg">This paragraph has red text and a yellow background.</p>
```

![Class Selector](https://user-images.githubusercontent.com/78275713/134320008-08b9d63f-ef72-48f8-9ca8-1e216573a83d.png)


### Grouping Selector

The grouping selector selects all the HTML elements with the same style definitions.

```
h1 , p {
  text-align: center;
  color: #14279B;
}

```

###### HTML

```html
<h1>Hello World!</h1>
<p>This is a paragraph.</p>
```


![grouping selector](https://user-images.githubusercontent.com/78275713/134328592-cd9ffa66-ec3f-405a-831a-1ede16975008.png)

## PSEUDO Selectors in CSS:

There are two type of pseudo selectors in  CSS.


- Pseudo-class selectors (select elements based on a certain state).

- Pseudo-elements selectors (select and style a part of an element).

### Pseudo-class selectors:

A CSS pseudo-class is a keyword added to a selector that specifies a special state of the selected element(s). 
For example, :hover can be used to change a button's color when the user's pointer hovers over it.


###### 

```css
div {
  background-color: green;
  color: white;
  padding: 25px;
  text-align: center;
}

div:hover {
  background-color: blue;
}
```



###### HTML

```html
<p>Mouse over the div element below to change its background color:</p>

<div>Mouse Over Me</div>
```

Below we can see how it works.

![Tryit Editor v3 7 - Brave 22-09-2021 15_24_04](https://j.gifs.com/Dq85Ek.gif)


### Pseudo-element selectors:

A CSS pseudo-element is a keyword added to a selector that lets you style a specific part of the selected element(s). For example, ::first-letter can be used to change the style of the first letter of a paragraph.

```css 
p::first-letter {
  font-size: 300%;
color: red;
}
```



##### HTML

```html 
<p>This is a paragraph with first letter of different color.</p>
```

![pseudo-element](https://user-images.githubusercontent.com/78275713/134329232-66044513-4193-421c-b868-9869eeea09c5.png)


## Contributor

- [@Tushar Tiwari](https://github.com/brassgolem-25)

  
## Refrence 

- [MDN DOCS](https://developer.mozilla.org/en-US/)
- [W3 School](https://www.w3schools.com/)
