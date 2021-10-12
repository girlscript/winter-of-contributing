# CSS : Overflow Property

The overflow property specifies what should happen if content overflows an
element's box. This property specifies whether to clip content or to add
scrollbars when an element's content is too big to fit in a specified
area.
   
![text overflow example](https://github.com/neerajdhakad/winter-of-contributing/blob/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Overflow/overflow_intro.png)

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

![toverflow_visible_and_hidden](https://github.com/neerajdhakad/winter-of-contributing/blob/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Overflow/overflow_visible_and_hidden.png)

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
