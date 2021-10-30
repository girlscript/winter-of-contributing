# CSS : Overflow Property

The overflow property controls what happens to content that breaks outside of its bounds.
<br>
<br>
Example : Imagine a div in which you’ve explicitly set to be 200px wide, but contains an image that is 300px wide. That image will stick out of the div and be visible by default. Whereas if you set the overflow value to hidden, the image will cut off at 200px. 
   
![text overflow example](https://github.com/neerajdhakad/winter-of-contributing/blob/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Overflow/overflow-image%20example.png)


## CSS Overflow Property Values

The overflow property specifies whether to clip the content or to add scrollbars when the content of an element is too big to fit in the specified area.
The overflow property has the following values:

- visible     - It specifies that overflow is not clipped. it renders outside the element's box.this is a default value.
- hidden      - It specifies that the overflow is clipped, and rest of the content will be invisible.
- scroll      - It specifies that the overflow is clipped, and a scroll bar is used to see the rest of the content.
- auto        - It specifies that if overflow is clipped, a scroll bar is needed to see the rest of the content.
- overflow-x  - It specifies that if overflow is clipped, a scroll bar is needed to see the rest of the content.
- overflow-y  - It specifies that if overflow is clipped, a scroll bar is needed to see the rest of the content.
   
   
## 1) Overflow : visible
  If you don’t set the overflow property , the default is visible. So in general, there is no reason to explicitly set this property to visible unless you are overriding it from being set elsewhere.
  
![overflow-visible](https://github.com/neerajdhakad/winter-of-contributing/blob/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Overflow/overflow-visible-1.png)
 
The important thing to remember here is that even though the content is visible outside of the box, that content does not affect the flow of the page. For example:
  
![overflow-visible](https://github.com/neerajdhakad/winter-of-contributing/blob/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Overflow/overflow-visible-2.png)

```
div {
  overflow: visible;
}
```
   
   
## 2) Overflow : hidden

Content is clipped if necessary to fit the padding box. No scrollbars are provided, and no support for allowing the user to scroll (such as by dragging or using a scroll wheel) is allowed. The content can be scrolled programmatically (for example, by setting the value of a property such as offsetLeft), so the element is still a scroll container.
   
![overflow_hidden](https://github.com/neerajdhakad/winter-of-contributing/blob/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Overflow/overflow-hidden.png)

```
div {
  overflow: hidden;
}
```

## 3) Overflow : Scroll

Content is clipped if necessary to fit the padding box. Browsers always display scrollbars whether or not any content is actually clipped, preventing scrollbars from appearing or disappearing as content changes. Printers may still print overflowing content.  
 
![overflow_scroll](https://github.com/neerajdhakad/winter-of-contributing/blob/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Overflow/overflow-scroll.png)

```
div {
  overflow: scroll;
}
```
   
## 4) Overflow : auto
   
If content fits inside the padding box, it looks the same as visible, but still establishes a new block formatting context. Desktop browsers provide scrollbars if content overflows.

![overflow_auto](https://github.com/neerajdhakad/winter-of-contributing/blob/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Overflow/overflow-auto.png)

```
div {
  overflow: auto;
}
```

## 5) overflow-x and overflow-y
   
The overflow-x property sets what shows when content overflows a block-level element's left and right edges. This may be nothing, a scroll bar, or the overflow content.

The overflow-y property sets what shows when content overflows a block-level element's top and bottom edges. This may be nothing, a scroll bar, or the overflow content.

![Overflow-x_overflow-y](https://github.com/neerajdhakad/winter-of-contributing/blob/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Overflow/overflow-x_overflow-y.png)
 
```
div {
  overflow-x: hidden;
  overflow-y:scroll;
}
```
   
Credits & References -
<br>
<a>https://www.freecodecamp.org/news/css-overflow-explained-with-examples/</a><br>
<a>https://www.javatpoint.com/css-overflow/</a><br>
<a>https://www.w3schools.com/css/css_overflow.asp</a><br>
<a>https://css-tricks.com/almanac/properties/o/overflow/</a><br>
<a>https://developer.mozilla.org/en-US/docs/Web/CSS/overflow/</a>
   
