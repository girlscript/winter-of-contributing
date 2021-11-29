# CSS Image Reflection

`-webkit-box-reflect` property is used to create an image reflection.

- The values of the `box-reflect` property can be:

1) Direction values

a) above
b) below 
c) left 
d) right

2) Offset value 
 below 10px;

3) Mask value
 below 0 linear-gradient(transparent, white);

# Examples

### CSS Direction Reflection

1) above

```css
img {
  -webkit-box-reflect: above;
}
```
2) below

```css
img {
  -webkit-box-reflect: below;
}
```
3) left

```css
img {
  -webkit-box-reflect: left;
}
```
4) right

```css
img {
  -webkit-box-reflect: right;
}
```

### CSS Reflection Offset
- It is used to specify the gap between the image and the reflection.
- It add the size of the gap.

```css
img {
  -webkit-box-reflect: below 10px;
}
```

### CSS Mask Reflection

- It is used to create a fade-out effect on the reflection.
```css
img {
  -webkit-box-reflect: below 0px linear-gradient(to bottom, rgba(0,0,0,0.0), rgba(0,0,0,0.4));
}
```

## Reference

* [CSS basics - Learn web development | MDN](https://developer.mozilla.org/en-US/docs/Learn/Getting_started_with_the_web/CSS_basics)



