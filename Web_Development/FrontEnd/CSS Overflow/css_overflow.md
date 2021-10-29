# CSS : Overflow Property

The overflow property controls what happens to content that breaks outside of its bounds.
<br>
<br>
Example : Imagine a div in which you’ve explicitly set to be 200px wide, but contains an image that is 300px wide. That image will stick out of the div and be visible by default. Whereas if you set the overflow value to hidden, the image will cut off at 200px. 
   
![text overflow example](https://github.com/neerajdhakad/winter-of-contributing/blob/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Overflow/overflow-image%20example.png)


## CSS Overflow Property Values

The overflow property specifies whether to clip the content or to add scrollbars when the content of an element is too big to fit in the specified area.

The overflow property has the following values:
- visible - Default. The overflow is not clipped. The content renders outside the element's box
- hidden - The overflow is clipped, and the rest of the content will be invisible
- scroll - The overflow is clipped, and a scrollbar is added to see the rest of the content
- auto - Similar to scroll, but it adds scrollbars only when necessary

![overflow_scroll_and_auto](https://github.com/neerajdhakad/winter-of-contributing/blob/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Overflow/overflow_scroll_and_auto.png)

```
div { 
   width: 130px;
   height: 25%; 
   background-color:
   #eee; overflow: scroll; 
}
```

```
div { 
   width: 130px;
   height: 25%; 
   background-color:
   #eee; overflow: auto; 
}
```

![overflow_visible_and_hidden](https://github.com/neerajdhakad/winter-of-contributing/blob/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Overflow/overflow_visible_and_hidden.png)

```
div { 
   width: 130px;
   height: 25%; 
   background-color:
   #eee; overflow: visible; 
}
```

```
div { 
   width: 130px;
   height: 25%; 
   background-color:
   #eee; overflow: hidden; 
}
```


## overflow-x and overflow-y
The overflow-x and overflow-y properties specifies whether to change the overflow of content just horizontally or vertically (or both):

overflow-x specifies what to do with the left/right edges of the content.

overflow-y specifies what to do with the top/bottom edges of the content.

![overflow-x](https://github.com/neerajdhakad/winter-of-contributing/blob/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Overflow/overflow-x.png)

![overflow-y](https://github.com/neerajdhakad/winter-of-contributing/blob/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Overflow/overflow-y.png)



