

# General Rule's for CSS:

- CSS is used to control the style of a web document in a simple and easy way. CSS stands
  for `Cascading Style Sheets`.

- While starting with CSS ,you don't need to remember everything. Just having a adequate knowledge is more than enough and you're good to go.

- For that,this are some basic css rules one should keep in mind.

##  Syntax

![syntax css](https://user-images.githubusercontent.com/78275713/134767336-68d6f26a-d24d-428f-a160-3b2f2a4a6b7c.png)

## How to Add CSS ?!

There are three ways of inserting a style sheet:

- External CSS
- Internal CSS
- Inline CSS

### Inline CSS: 

To use inline styles, add the style attribute to the relevant element. The style attribute can contain any CSS property.

```css 
<h1 style="color:blue; text-align:center ;">This is a heading</h1>

```
![inline](https://user-images.githubusercontent.com/78275713/134818974-6eba1792-dc18-45c0-ad89-8aafb095c1c0.png)

### Internal CSS: 

An internal style sheet may be used if one single HTML page has a unique style.

The internal style is defined inside the <style> element, inside the head section.



```css
<style>
body {
  background-color: #F0A500;
}
h1 {
  margin-left: 40px;
} 
</style>

```
#### HTML
```
<h1>This is a heading</h1>
<p>This is a paragraph.</p>

``` 

![internal](https://user-images.githubusercontent.com/78275713/134819213-c371de7b-da29-4ab8-84a2-1719ec263df1.png)


### External CSS: 

Incorporating the css by adding the link to the stylesheet

```css 
<head>
<link rel="stylesheet" href="css/styles.css">
</head>
```

## Colors in CSS:
The <color> CSS data type represents a color.

We can add color in numerous ways such as:
- Using a color keyword of the choice you want . 

```css
h1{
  // color of your choice
  color: red ;
}
```
- Using RGB value.

```css
<h2 style="background-color:rgb(255, 0, 0);">rgb(255, 0, 0)</h2>

<h2 style="background-color:rgb(0, 0, 255);">rgb(0, 0, 255)</h2>
```

![css](https://user-images.githubusercontent.com/78275713/134903961-4dd31a46-d5b3-4d70-b96d-427dccceafde.png)

- Using HEX value.


```css
<h1>Colors using HEX values</h1>

<h2 style="background-color:#3cb371;">#3cb371</h2>
<h2 style="background-color:#ee82ee;">#ee82ee</h2>
<h2 style="background-color:#ffa500;">#ffa500</h2>

```

  ![css](https://user-images.githubusercontent.com/78275713/134904387-49bd05cc-bb0b-4716-8378-2da6165de9eb.png)

And Many more , you can find it [here..](https://developer.mozilla.org/en-US/docs/Web/CSS/color_value)

## Typography:

#### Typography is the strategic arrangement of type in order to make written language readable and visually appealing.
- All properties that affect or are affected by the font should be declared once together.
- Choosing the right font is important because it create harmony and consitency in the design.

See the example below about how to chose right font...
```css
h2{
font-family: 'Montserrat', sans-serif;
}
.p1 {
  font-family: "Times New Roman", Times, serif;
}
.p2 {
  font-family: 'Merriweather', serif;
}

.p3 {
 font-family: 'Lato', sans-serif;
}
```
#### HTML
```css
<h2>Which of the following, do you see as more appealing?</h2>

<p class="p1">This one is shown in Times New Roman font.</p>

<p class="p2">This one is shown in the Merriaweather font.</p>

<p class="p3">This one is shown in the Lato font.</p>
```

![font](https://user-images.githubusercontent.com/78275713/135062977-d6dd8b8d-d370-4151-91bb-92b2ebdf6f0e.png)


## Selectors in CSS: 

CSS Selectors are used to selecting HTML elements based on their element name, id, attributes, etc. It can select one or more elements simultaneously.
- Element Selector : 

#### The element selector selects HTML elements based on the element name.


```css
body{
 background-color: #FCFFA6;
}

p {
  text-align: center;
  color: #3F0071;
}
```

  
#### HTML
```
<p>Every paragraph will be affected by the style.</p>
<p id="tushar">Me too!</p>
<p>And me!</p>
```
![Tryit Editor v3 7 - Brave 27-09-2021 18_01_16](https://user-images.githubusercontent.com/78275713/134909012-a8efccd1-94b7-4f14-9968-a258be7fb3bd.png)

- Class Selector : 

#### The class selector (.) selects HTML elements with a specific class attribute.



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


- Id Selector : 
#### The id selector (#) uses the id attribute of an HTML element to select a specific element with the same tag.
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


- and etc. 


#### For more on selectors go [here.](https://github.com/brassgolem-25/winter-of-contributing/tree/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Selectors%20and%20Pseudo%20Selector)

## When to use !important Property ?!

#### In CSS, important means that only the ! important property value is to be applied to an element and all other declarations on the element are to be ignored. In other words, an important rule can be used to override other styling rules in CSS.


```css
#myId {
  background-color: blue;
}

.myClass {
  background-color: gray;
}

p {
  background-color: yellow !important;
}

```

  

#### HTML
```css
<p>This is some text in a paragraph.</p>

<p class="myclass">This is some text in a paragraph.</p>

<p id="myid">This is some text in a paragraph.</p>

```

  

![Tryit Editor v3 7 - Brave 28-09-2021 16_15_58](https://user-images.githubusercontent.com/78275713/135073132-0aa9cbae-e893-4e55-a196-f78aeb49a9fb.png)

- As you can see above, even though each class and id had different property.
- But since the `p` tag which encloses everything had an `!important` specified it overlapped the 
  exsiting properties.

#### Note: It's good to know about !important , but don't use it unnecessarily.



## Contributor

- [@Tushar Tiwari](https://github.com/brassgolem-25)

  
## Refrence 

- [MDN DOCS](https://developer.mozilla.org/en-US/)
- [W3 School](https://www.w3schools.com/)
