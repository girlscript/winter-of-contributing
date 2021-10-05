# CSS Positioning

---

The position CSS property sets how an element is positioned in a document. 

**Three things to remember first:-**

1. Your Content is Everything:-

    The content is the first thing that determines how large things gets displayed and what's the height and this is despite any usage of CSS.

2. Order comes from Code:-

    The order of of the elements on the screen comes form your HTML code. For example:-

    ```html
    <h1> Hello </h1>
    <h3> Good Evening </h3>
    <p> Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt </p>
    <p> ut labore et dolore magna aliqua. Ut enim ad minim veniam <p>
    ```

    In this case the we can see that H1 is followed by H3 which is followed by two paragraph tags so the thing which will be rendered in the display screen would be like:-

    So the default layout would be determined by your HTML code.

    ![image](https://user-images.githubusercontent.com/61539946/134206713-333b6096-afe2-4a35-8b0b-7187ce0a576f.png)

3. A DIV always comes first:-

    It mean to say is that when your code is covered by a div then first that div comes and then the content inside it for example:-

```html
<div class = 'a'>
<h1> Hello! </h1>
<h3> This is Div1 </h3>
</div>
<div class = 'b'>
<h1> Hello! </h1>
<h3> This is Div2 </h3>
</div>
<div class = 'c'>
<h1> Hello! </h1>
<h3> This is Div3 </h3>
</div>
```

```css
.a{
background-color: #A2CDCD;
}
.b{
background-color: #C6D57E;
}
.c{
background-color: #FFE1AF;
}
```
![image](https://user-images.githubusercontent.com/61539946/134206814-92777fe5-aea3-4a28-8297-8c9721f7164e.png)



So these are some of the default rules of how things gets rendered on the screen just by HTML. Now we can also set a CSS property which is the position property in order to position elements on screen the way that you want it to instead of just going along with the default layout, and in most cases people wants to make changes to the default layout.

**There are four major types of positioning in CSS:-**

- Static
- Relative
- Absolute
- Fixed

### Static Positioning

In relative positioning, the element is positioned according to the normal flow of the document. The top, right, bottom, left, and z-index properties have no effect. This is the default output of the HTML Code which will be rendered.

### Relative Positioning

In relative positioning, the element is positioned according to the normal flow of the document, and then offset relative to itself based on the values of top, right, bottom, and left. The offset does not affect the position of any other elements; thus, the space given for the element in the page layout is the same as if position were static. 

```html
<html lang="en" dir="ltr">
  <head>
    <title></title>
  </head>
  <body>
    <div class="box" id="one">
				One
		</div>
		<div class="box" id="two">
				Two
		</div>
		<div class="box" id="three">
				Three
		</div>
		<div class="box" id="four">
				Four
		</div>
  </body>
</html>
```

```css
* {
  box-sizing: border-box;
}

.box {
  display: inline-block;
  width: 100px;
  height: 100px;
  background: #343F56;
  color: #F54748;
}

#two {
  position: relative;
  top: 20px;
  left: 20px;
  background: #F5E6CA;
  color: #F54748;
}
```

![image](https://user-images.githubusercontent.com/61539946/134206977-c9e1701f-8c4c-4994-b15f-b76ede963b68.png)

### Absolute Positioning

In absolute positioning, the element is removed from the normal document flow, and no space is created for the element in the page layout. It is positioned relative to its closest positioned ancestor, if any; otherwise, it is placed relative to the initial containing block. Its final position is determined by the values of top, right, bottom, and left. However; if an absolute positioned element has no positioned ancestors, it uses the document body, and moves along with page scrolling. For example:-

```html
<h1>Lorem Ipsum</h1>

<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>

<p class="positioned">Sed viverra tellus in hac habitasse platea dictumst vestibulum. Nunc mattis enim ut tellus elementum sagittis vitae et.</p>

<p>Elementum nibh tellus molestie nunc. Mattis pellentesque id nibh tortor id aliquet lectus proin nibh.</p>

<p>Lorem ipsum <span>dolor sit amet</span> , consectetur adipiscing elit, <span>sed do</span> eiusmod tempor incididunt ut labore et dolore magna aliqua. </p>
```



```css
* {
  box-sizing: border-box;
}
body {
  width: 500px;
  margin: 0 auto;
}
p {
  background: #FFC996;
  border: 5px solid black;
  padding: 10px;
  margin: 10px;
}
span {
  background: #FF8474;
  border: 1px solid black;
}
.positioned {
  position: absolute;
  background: #9F5F80;
  bottom: 30px;
  left: 30px;
}
```

![image](https://user-images.githubusercontent.com/61539946/134207060-b5facdcc-11b3-478f-906f-bb01ff9522c1.png)
![image](https://user-images.githubusercontent.com/61539946/134207096-eb68986d-3cd4-4577-b3d8-9a23511d65ac.png)

### Fixed Positioning
An element with fixed postion is positioned relative to the viewport, which means it always stays in the same place even after the page is scrolled.
```html
<div class="outer">
  <p>
    Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam congue tortor eget pulvinar lobortis.
  </p>
  <p>
    Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam congue tortor eget pulvinar lobortis.
  </p>
  <div class="box" id="one">BOX</div>
</div>
```
```css
* {
  box-sizing: border-box;
}
.box {
  width: 100px;
  height: 100px;
  background: red;
  color: #DDDDDD;
}
#one {
  position: fixed;
  top: 80px;
  left: 10px;
  background: #3C8DAD;
}
.outer {
  width: 500px;
  height: 300px;
  overflow: scroll;
  padding-left: 150px;
}
```
![image](https://user-images.githubusercontent.com/61539946/134213339-8078c6d2-fea9-4f8a-b1de-77d38fb40a1b.png)


## References
https://www.w3schools.com/css/css_positioning.asp

https://developer.mozilla.org/en-US/docs/Web/CSS/position
