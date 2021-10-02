# CSS Background-Repeat

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
<div id="repeat-y"></div>
<h2>No-Repeat</h2>
<div class="no-repeat"></div>
<h2>Space</h2>
<div class="space"></div>
<h2>Round</h2>
<div class="round"></div>
```

```css
.repeat {
	background-repeat: repeat;
}

.repeat-x {
	background-repeat: repeat-x;
}

.repeat-y {
	background-repeat: repeat-y;
}

.no-repeat {
	background-repeat: no-repeat;
}

.space {
	background-repeat: space;
}

.round {
	background-repeat: round;
}

div {
	width: 500px;
	height: 200px;
	border: 5px solid #CAB8FF;
	margin-bottom: 2em;
	background: url(image.png);
}
```

![image](https://user-images.githubusercontent.com/61539946/135723292-19f77539-15ec-47c9-8624-7d8495be07e5.png)
![image](https://user-images.githubusercontent.com/61539946/135723306-0f7eaf44-9d1b-42df-8343-4ea9a68ed99d.png)
![image](https://user-images.githubusercontent.com/61539946/135723324-a366c6b4-24e3-4db0-b296-43797c9874e6.png)
![image](https://user-images.githubusercontent.com/61539946/135723332-7b5fd73c-26a8-426d-a565-93ee9cfaf263.png)
![image](https://user-images.githubusercontent.com/61539946/135723337-b7727f2e-8a3a-45eb-b583-6cac021a0198.png)
![image](https://user-images.githubusercontent.com/61539946/135723347-380813c1-985f-4c3c-8579-832e1e457df0.png)


---

## References

[https://developer.mozilla.org/en-US/docs/Web/CSS/background-repeat](https://developer.mozilla.org/en-US/docs/Web/CSS/background-repeat)

[https://www.w3schools.com/cssref/pr_background-repeat.asp](https://www.w3schools.com/cssref/pr_background-repeat.asp)

[https://css-tricks.com/almanac/properties/b/background-repeat/](https://css-tricks.com/almanac/properties/b/background-repeat/)
