# Introduction CSS Background-Repeat 

The background-repeat property sets if/how a background image will be repeated.
By default, a background-image is repeated both vertically and horizontally.
The background image is placed according to the background-position property. If no background-position is specified, the image is always placed at the element's top left corner

Background-repeat property of CSS, is used to set the rules for the background images to be repeated. A background image can be repeted according to the value provided.

## Values of Background-Repeat

1. **Repeat** :- In this the image is repeated until it is needed to cover the whole background image painting area. The last image will be clipped if it doesn't fit. Repeat is of three types repeat, repeat-x & repeat-y.
2. **Space** :- In the space value the respective image is repeated without clipping. The initial and the final images in the page are pinned to each opposite sides of the element, and images are distributed by whitespace evenly. In this method the background property is ignored unless one image can be displayed without clipping.
3. **Round** :- In the round value, it the alloted space increases in size, provided image will streach and repeat stretch until there is room for another one to be added. When the next image is added, all of the current ones compress to allow room.
4. **No-Repeat** :- In no-repeat value, images would not be repeated whatever happens. The position of the non-repeated background image is defined by the background-position CSS property.

---

**For Example:-**

```html
<h2>Repeat</h2>
<div class="repeat"></div>
<h2>Repeat-X</h2>
<div class="repeat-x"></div>
<h2>Repeat-Y</h2>
<div class="repeat-y"></div>
<h2>Space</h2>
<div class="space"></div>
<h2>Round</h2>
<div class="round"></div>
<h2>No-Repeat</h2>
<div class="no-repeat"></div>
```

```css
body{
  color:#E93B81;
  background: #C1FFD7;
}
div {
	height: 200px;
	border: 5px solid #CAB8FF;
	margin-bottom: 2em;
	background: url(image.png);
}
.repeat {
	background-repeat: repeat;
}

.repeat-x {
	background-repeat: repeat-x;
}

.repeat-y {
	background-repeat: repeat-y;
}

.space {
	background-repeat: space;
}

.round {
	background-repeat: round;
}

.no-repeat {
	background-repeat: no-repeat;
}
```
![image](https://user-images.githubusercontent.com/61539946/135726203-8162acb1-aa0b-4a9d-9959-e5ae0931e415.png)
![image](https://user-images.githubusercontent.com/61539946/135726215-32c55ce0-6847-4f0a-994d-ee5c4cea153e.png)
![image](https://user-images.githubusercontent.com/61539946/135726233-db1d24a1-6a43-43ed-ac92-92492fb4a615.png)
![image](https://user-images.githubusercontent.com/61539946/135726243-b542e590-061c-4162-a0e9-dbf1f51ae6e4.png)
![image](https://user-images.githubusercontent.com/61539946/135726247-556b3c5c-6c23-4daa-9d4e-950454f3f23e.png)
![image](https://user-images.githubusercontent.com/61539946/135726260-f35751a3-32c8-427d-9255-4d229c600f64.png)



---

## References

[https://developer.mozilla.org/en-US/docs/Web/CSS/background-repeat](https://developer.mozilla.org/en-US/docs/Web/CSS/background-repeat)

[https://www.w3schools.com/cssref/pr_background-repeat.asp](https://www.w3schools.com/cssref/pr_background-repeat.asp)

[https://css-tricks.com/almanac/properties/b/background-repeat/](https://css-tricks.com/almanac/properties/b/background-repeat/)
