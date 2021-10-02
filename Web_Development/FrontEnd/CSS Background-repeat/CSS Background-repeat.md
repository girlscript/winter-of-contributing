# CSS Background-repeat

Background-repeat property of CSS, sets how background images are repeated. A background image can be repeated along the horizontal and vertical axes, or not repeated at all.

## Values

1. **Repeat** :- In this the image is repeated until it is needed to cover the whole background image painting area. The last image will be clipped if it doesn't fit.
2. **Space** :- The image is repeated without clipping. The first and last images are pinned to either side of the element, and whitespace is distributed between the images in an even fashion. The background-position property is ignored unless only one image can be displayed without clipping.
3. **Round** :- As the allowed space increases in size, the repeated images will stretch (leaving no gaps) until there is room for another one to be added. When the next image is added, all of the current ones compress to allow room.
4. **No-repeat** :- The image is not repeated. The position of the non-repeated background image is defined by the background-position CSS property.

---

**For Example:-**

```html
<h2>background-repeat: repeat; </h2>
<div id="repeat">
</div>
<h2>background-repeat: repeat-x;</h2>
<div id="repeat-x">
</div>
<h2>background-repeat: repeat-y;</h2>
<div id="repeat-y">
</div>
<h2>background-repeat: no-repeat;</h2>
<div id="no-repeat">
</div>
```

```css
#repeat { background-repeat: repeat; }
#repeat-x { background-repeat: repeat-x; }
#repeat-y { background-repeat: repeat-y; }
#no-repeat { background-repeat: no-repeat; }
body { font-family: sans-serif; }
div {
  width: 400px;
  height: 125px;
  border: 5px solid #F7A440;
  margin-bottom: 2em;
  background: url(https://s3-us-west-2.amazonaws.com/s.cdpn.io/652/codepen.png); 
}
```

![Untitled](CSS%20Background-repeat%20f1e0ce14589a422088b435461e5e6fb7/Untitled.png)

![Untitled](CSS%20Background-repeat%20f1e0ce14589a422088b435461e5e6fb7/Untitled%201.png)

---

## References

[https://developer.mozilla.org/en-US/docs/Web/CSS/background-repeat](https://developer.mozilla.org/en-US/docs/Web/CSS/background-repeat)

[https://www.w3schools.com/cssref/pr_background-repeat.asp](https://www.w3schools.com/cssref/pr_background-repeat.asp)

[https://css-tricks.com/almanac/properties/b/background-repeat/](https://css-tricks.com/almanac/properties/b/background-repeat/)