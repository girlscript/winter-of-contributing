# 📕 Frond End Web Dev 📕

## 1️⃣ HTML

- [x] What is SVG and animating them with JS

<hr>

**In this document we will discuss how to add overflow property to Web page**

Lets us take an example of it :-

*The overflow property controls what happens to content that breaks outside of its bounds: imagine a div in which you’ve explicitly set to be 200px wide, but contains an image that is 300px wide. That image will stick out of the div and be visible by default. Whereas if you set the overflow value to hidden, the image will cut off at 200px.*

<hr>

```HTML
div {
  overflow:  visible | hidden | scroll | auto | inherit
}
```

**Lets make an Html simple page to understand the concepts of Overflow in CSS**

### HTML Code:-

```HTML 
<div id="page-wrap">
  <h1>overflow: hidden;</h1>
  <div class="box box-one">
    <img src="//placehold.it/465x100" alt="">
    <p>Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Vestibulum tortor quam, feugiat vitae, ultricies eget, tempor sit amet, ante. Donec eu libero sit amet quam egestas semper. Aenean ultricies mi vitae est. Mauris placerat eleifend leo.</p>
  </div>
  <h1>overflow: auto;</h1>
  <div class="box box-two">
    <p>Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Vestibulum tortor quam, feugiat vitae, ultricies eget, tempor sit amet, ante. Donec eu libero sit amet quam egestas semper. Aenean ultricies mi vitae est. Mauris placerat eleifend leo. Aenean ultricies mi vitae est. Mauris placerat eleifend leo Vestibulum tortor quam, feugiat vitae, ultricies eget, tempor sit amet, ante. Donec eu libero sit amet quam egestas semper. Aenean ultricies mi vitae est. Mauris placerat eleifend leo. Aenean ultricies mi vitae est. Mauris placerat eleifend leo</p>
  </div>
  <div class="box box-two">
    <img src="//placehold.it/465x100" alt="">
    <p>Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Vestibulum tortor quam, feugiat vitae, ultricies eget, tempor sit amet, ante. Donec eu libero sit amet quam egestas semper. Aenean ultricies mi vitae est. Mauris placerat eleifend leo. Aenean ultricies mi vitae est. Mauris placerat eleifend leo Vestibulum tortor quam, feugiat vitae, ultricies eget, tempor sit amet, ante. Donec eu libero sit amet quam egestas semper. Aenean ultricies mi vitae est. Mauris placerat eleifend leo. Aenean ultricies mi vitae est. Mauris placerat eleifend leo</p>
  </div>
  <div class="box box-two">
    <img src="//placehold.it/100x300" alt="">
  </div>
  <h1>overflow: scroll;</h1>
  <div class="box box-three">
    <img src="//placehold.it/465x100" alt="">
    <p>Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Vestibulum tortor quam, feugiat vitae, ultricies eget, tempor sit amet, ante. Donec eu libero sit amet quam egestas semper. Aenean ultricies mi vitae est. Mauris placerat eleifend leo. Aenean ultricies mi vitae est. Mauris placerat eleifend leo</p>
  </div>
  <div class="box box-three">
    <p>Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Vestibulum tortor quam, feugiat vitae, ultricies eget, tempor sit amet, ante. Donec eu libero sit amet quam egestas semper. Aenean ultricies mi vitae est. Mauris placerat eleifend leo. Aenean ultricies mi vitae est. Mauris placerat eleifend leo</p>
  </div>
  <div class="box box-three">
    <img src="//placehold.it/465x100" alt="">
  </div>
  <h1>overflow: visible;</h1>
  <div class="box box-four">
    <img src="//placehold.it/465x100" alt="">
    <p>Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Vestibulum tortor quam, feugiat vitae, ultricies eget, tempor sit amet, ante. Donec eu libero sit amet quam egestas semper. Aenean ultricies mi vitae est. Mauris placerat eleifend leo. Aenean ultricies mi vitae est. Mauris placerat eleifend leo</p>
  </div>
</div>
```

### CSS Code :-
```CSS
* {
  margin: 0;
  padding: 0;
}
body {
  font: 14px Georgia, serif;
}
#page-wrap {
  width: 800px;
  margin: 0 auto;
}
h1 {
  padding: 20px 0 10px;
  font: 26px Georgia, Serif;
  clear: both;
}
.box {
  width: 200px;
  height: 200px;
  padding: 10px;
  border: 1px solid #000;
  float: left;
  margin: 0 20px 0 0;
}
.box-one {
  overflow: hidden;
}
.box-two {
  overflow: auto;
}
.box-three {
  overflow: scroll;
}
```

### **Finally you will get these type of ui**
<br>

[UI Page](https://codepen.io/chriscoyier/pen/ZEByxdq)

*Follow the above link to see the actual types of OVerflow*

### Lets us discuss now the each types :-

# *Values*

- visible: content is not clipped when it proceeds outside its box. This is the default value of the property

- hidden: overflowing content will be hidden.

- scroll: similar to hidden except users will be able to scroll through the hidden content

- auto: if the content proceeds outside its box then that content will be hidden whilst a scroll 
bar should be visible for users to read the rest of the content.

- initial: uses the default value which is visible

- inherit: sets the overflow to the value of its parent element.

<hr>

*Remember that text will naturally wrap at the end of an element (unless white-space is changed) so text will rarely be the cause of overflow. Unless a height is set, text will just push an element taller as well. Overflow comes into play more commonly when explicit widths and heights are set and it would be undesirable for any content to spill out, or when scrolling is explicitly being avoided.*

<hr>
<br>

**Now lets see each important types in deap**
<br>
<br>

# **Visible**

```
If you don’t set the overflow property at all, the default is visible. So in general, there is no reason to explicitly set this property to visible unless you are overriding it from being set elsewhere

The important thing to remember here is that even though the content is visible outside of the box, that content does not affect the flow of the page

Generally, you shouldn’t be setting static heights on boxes with web text in them anyway, so it shouldn’t come up.
```
<br>
<br>

# **Hidden**

```
The opposite of the default visible is hidden. This literally hides any content that extends beyond the box.

This is particularly useful in use with dynamic content and the possibility of an overflow causing serious layout problems. However, bear in mind that content that is hidden in this way is utterly inaccessible (short of viewing the source). So for example a user has their default font size set larger than you would expect, you may be pushing text outside of a box and hiding it completely from their view.
```
<br>
<br>

# **Scroll**

```
Setting the overflow value of a box to scroll will hide the content from rendering outside the box, but will offer scrollbars to scroll the interior of the box to view the content.
Of note with this value is that you get BOTH horizontal and vertical scrollbars no matter what, even if the content requires only one or the other.

iOS’ momentum scrolling can be enabled for this value with -webkit-overflow-scrolling.

Note: In OS X Lion, when scrollbars are set to only show when being used, scroll behaves more like auto, in that only needed scrollbars will show up.

auto
```
<br>
<br>

# **Auto**

```
Auto overflow is very similar to the scroll value, only it solves the problem of getting scrollbars when you don’t need them. The scrollbars will only show up if there is content that actually breaks out of the element.
```
<br>
<br>

# **overflow-x and overflow-y**

```
It’s also possible to manipulate the overflow of content horizontally or vertically with the overflow-x and overflow-y properties. For example in the demo below the horizontal overflow can be scrolled through whilst the text that extends beyond the height of the box is hidden:

```
```CSS
.box {
  overflow-y: hidden;
  overflow-x: scroll;
}
```
*Let see an example of it*

### **Html code :-**
```HTML
<div class="box">
  <img src="http://placehold.it/450x150" alt="" />
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Recusandae suscipit, autem magnam ab. Possimus perferendis officiis doloremque impedit quia quos labore optio quas cum incidunt. Blanditiis dicta, sunt numquam quos.</p>
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Recusandae suscipit, autem magnam ab. Possimus perferendis officiis doloremque impedit quia quos labore optio quas cum incidunt. Blanditiis dicta, sunt numquam quos.</p>
</div>
```
### **Css code :-**

```CSS
.box {
  border: 1px solid #222;
  width: 300px;
  height: 300px;
  overflow-y: hidden;
  overflow-x: scroll;
}
```
The above all re the properties of overflow 