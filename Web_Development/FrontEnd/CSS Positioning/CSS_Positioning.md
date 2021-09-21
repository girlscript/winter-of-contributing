

**CSS Positioning**

The position CSS property sets how an element is positioned in a

document.

**Three things to remember first:-**

\1. Your Content is Everything:-

The content is the first thing that determines how large

things gets displayed and what's the height and this is

despite any usage of CSS.

\2. Order comes from Code:-

The order of of the elements on the screen comes form your

HTML code. For example:-

<h1> Hello </h1>

<h3> Good Evening </h3>

<p> Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor i

ncididunt </p>

<p> ut labore et dolore magna aliqua. Ut enim ad minim veniam <p>

In this case the we can see that H1 is followed by H3 which

is followed by two paragraph tags so the thing which will be

rendered in the display screen would be like:-

So the default layout would be determined by your HTML code.

CSS Positioning

1





\3. A DIV always comes first:-

So, what I mean to say is that when your code is covered by a

div then first that div comes and then the content inside it

for example:-

<div class = 'a'>

<h1> Hello! </h1>

<h3> This is Div1 </h3>

</div>

.a{

background-color: #A2CDCD;

}

.b{

<div class = 'b'>

<h1> Hello! </h1>

<h3> This is Div2 </h3>

</div>

background-color: #C6D57E;

}

.c{

background-color: #FFE1AF;

}

<div class = 'c'>

<h1> Hello! </h1>

<h3> This is Div3 </h3>

</div>

So these are som of the default rules of how things gets

rendered on the screen just by HTML. Now we can also set a CSS

property which is the position property in order to position

elements on screen the way that you want it to instead of just

going along with the default layout, and in most cases people

wants to make changes to the default layout.

**There are three major types of positioning in CSS:-**

Static

Relative

Absolute

CSS Positioning

2





Fixed

**Static Positioning**

In relative positioning, the element is positioned according to

the normal flow of the document. The top, right, bottom, left,

and z-index properties have no effect. This is the default

output of the HTML Code which will be rendered.

**Relative Positioning**

In relative positioning, the element is positioned according to

the normal flow of the document, and then offset relative to

itself based on the values of top, right, bottom, and left. The

offset does not affect the position of any other elements; thus,

the space given for the element in the page layout is the same

as if position were static.

<html lang="en" dir="ltr">

\* {

box-sizing: border-box;

<head>

<title></title>

}

</head>

<body>

.box {

<div class="box" id="one">

display: inline-block;

One

width: 100px;

</div>

height: 100px;

<div class="box" id="two">

background: #343F56;

color: #F54748;

Two

</div>

}

<div class="box" id="three">

Three

#two {

position: relative;

</div>

<div class="box" id="four">

top: 20px;

Four

</div>

left: 20px;

background: #F5E6CA;

color: #F54748;

</body>

</html>

}

CSS Positioning

3





**Absolute Positioning**

In absolute positioning, the element is removed from the normal

document flow, and no space is created for the element in the

page layout. It is positioned relative to its closest positioned

ancestor, if any; otherwise, it is placed relative to the

initial containing block. Its final position is determined by

the values of top, right, bottom, and left. However; if an

absolute positioned element has no positioned ancestors, it uses

the document body, and moves along with page scrolling. For

example:-

<h1>Lorem Ipsum</h1>

\* {

box-sizing: border-box;

<p>Lorem ipsum dolor sit amet, consectet

ur adipiscing elit, sed do eiusmod tempo

r incididunt ut labore et dolore magna a

liqua.</p>

}

body {

width: 500px;

margin: 0 auto;

}

<p class="positioned">Sed viverra tellus

in hac habitasse platea dictumst vestibu

lum. Nunc mattis enim ut tellus elementu

m sagittis vitae et.</p>

p {

background: #FFC996;

border: 5px solid black;

padding: 10px;

margin: 10px;

<p>Elementum nibh tellus molestie nunc.

Mattis pellentesque id nibh tortor id a

liquet lectus proin nibh.</p>

}

span {

background: #FF8474;

border: 1px solid black;

<p>Lorem ipsum <span>dolor sit amet</spa

n> , consectetur adipiscing elit, <span>

sed do</span> eiusmod tempor incididunt

ut labore et dolore magna aliqua. </p>

}

.positioned {

position: absolute;

background: #9F5F80;

CSS Positioning

4





bottom: 30px;

left: 30px;

}

CSS Positioning

5

