# CSS BOX MODEL
All the HTML elements like a div, a button, or text content are considered as *boxes* in our CSS file. And, how these boxes are aligned in our web page is answered by **CSS Box Model**.

These *boxes* are of two types:
1) **Inline-box** - They all will get placed on a line and padding or margin will not cause other elements to move away from the box.
```html
eg: <span>, <a>, <em> and <strong> are the inline elements
```
2) **Block-box** - This will break onto the new line and will extend in the inline direction to fill space available in its container.
```html
eg: <h1> and <p> are block elements
```

## CSS Box Model
CSS Box Model entails how our web pages are rendered. It contains the following parts:

1) **Content**: Here all of our content like text/images are placed.
2) **Padding**: This is a clear space area between our content and border.
3) **Border**: This forms the boundary around our content & padding.
4) **Margin**: This is a clear area outside the border. 

![Box Model](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/y3mpe1nlyppbu2xx4c1z.jpeg)
<figcaption>CSS Box Model</figcaption>


### Let's learn this with an example:

Suppose you have two `div` tags that contain a paragraph with `p` tag and a `button`. 

**In HTML:**
```html
<div class="box1">
  <p>box 1</p>
  <button>button</button>
</div>
<div class="box2">
  <p>box 2</p>
  <button>button</button>
</div>
```
**In CSS**:

By default, some `margin` and `padding` are present on our webpage. Let's set it to 0 for getting more clarity around the topic.

```css
* {
  margin:0;
  padding:0;
}
```
Now, set `background-color` to each `div` tag. The height given to box 1 is `100px`.

```css
.box1 {
  height: 100px;
  background-color: rgb(143, 143, 243);
}

.box2 {
  background-color: rgb(255, 159, 204);
}
```
Our page will look something like this.

![example snip1](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/hi5b0k9kyu2lh3dy1qu1.png)

Now, in our **CSS** make the following changes in `.box1` class:

```css
.box1 {
  height: 100px;
  margin: 20px;
  border: 10px solid black;
  padding: 20px;
  background-color: rgb(143, 143, 243);
}
```
We've added margin of `20px`, border of `10px` and padding of `20px` to our box1.

![example snip2](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/blvloj07612m1mfdbagk.PNG)

Here, the outer orange box depicts our margin. After that, we have our border of `10px`. The green space between our content and border is the padding. Finally, in the innermost part, we have our content.

You can also check this out in our developer tools in our browser.

![dev-tool](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/70s7v4n8dvn5z0c8cxbr.png)
<figcaption>Content Box Model</figcaption>


Notice that the height that we've mentioned is `100px` but, in our developer's tool and the UI, it's getting computed to a lot `160px`. To do such calculations we have two types of box-models.
1) Content Box Model
2) Border Box Model

## 1) Content Box Model
That's because by default, the `box-sizing` property is set to `content-box`. Here, only the content of the box is taken in effect when calculating the width of the box. This adds up all the height and width to our content with the following formula:

- Total element's width = `width` + `padding-left` + `padding-right` + `border-left` + `border-right`


- Total element's height = `height` + `padding-top` + `padding-bottom` + `border-top` + `border-bottom`

*Hence, we were getting `160px` of total height = `100px`+ `10px` + `10px` + `20px` + `20px`*

**Syntax**:
`box-sizing: content-box` this is present by default.

## 2) Border Box Model
Here, the width of the element as being the combined width of the border, padding, and content area of the box.

**Syntax**:
`box-sizing: border-box`

After applying this in our code, we'll observe the following results:

![dev-box model](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/gxi96jdw5q6hlxsl4fvl.png)
<figcaption>Border Box Model</figcaption>


The `height` of the content is reduced from `100px` to `40px`.

**Illustrative difference between `content-box` and `border-box`**

 ![content and border box](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/ngs6xxr52xykdw71cr0l.png)
<figcaption>Difference between <b>content-box</b> and <b>border-box</b></figcaption>


## Wrap Up
Great! Now we know what CSS Box Model is and why it is so useful for aligning HTML elements in our web pages. ❤️
We got a good grasp of the differences between the Content Box Model & Border Box Model.

*Thanks for reading!*

> Author :
> <cite>[Neha Gupta](https://github.com/nayyyhaa)</cite>
