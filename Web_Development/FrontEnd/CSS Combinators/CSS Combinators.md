# CSS Combinators

CSS selector is able contain more than one simple selector. By including a combinator between simple selector.

**There are 4 major types of Combinators:-** 

1. descendant selector (space)
2. child selector (>)
3. adjacent sibling selector (+)
4. general sibling selector (~)

---

# Descendant Selector

The **descendant selector** is represented by a single **space** character it basically combines two selectors such that elements matched by the second selector are selected if they have an ancestor element matching the first selector. Selectors that utilize a descendant combinator are called descendant selectors.

For Example:-

```html
<div class="box"><p>This is inside box class</p></div>
<p>This in not in class box</p>
```

```css
.box p {
    background: #C32BAD;
    color: #F9CF93;  
}
```

![Untitled](CSS%20Combinators%205b30d1a2916d41d69b0054a70bc7aff0/Untitled.png)

---

# Child Selector

The **child combinator** is denoted by **">"** and ****is always placed between two CSS selectors. It only matches all those elements matched by the second selector that are the direct descendent or child of elements matched by the first. Lower descendent elements further down the hierarchy don't match.

For Example:-

```html
<div class ="box">
  <p>This is inside box class</p>
  <p>This is inside box class</p>
  <section>
    <p>This is inside box class (inside section)</p>
		<p>This is inside box class (inside section)</p>
  </section>
  <p>This is inside box class</p>
</div>
<p>This in not in class box</p>
<p>This in not in class box</p>
```

```css
.box > p {
    background: #C32BAD;
    color: #F9CF93;  
}
```

![Untitled](CSS%20Combinators%205b30d1a2916d41d69b0054a70bc7aff0/Untitled%201.png)

---

# Adjacent Sibling Selector

The **adjacent sibling** selector is denoted by **"+"** and is generally placed between two CSS selectors. It matches only those elements matched by the second selector that are the next sibling element of the first selector.

For Example:-

```html
<div class = "box">
  <p>This is inside box class</p>
  <p>This is inside box class</p>
</div>

<p>This is after box class</p>
<p>This is after box class</p>

<div class = "box">
  <p>This is inside 2nd box class</p>
  <p>This is inside 2nd box class</p>
</div>

<p>This is after 2nd box class</p>
<p>This is after 2nd box class</p>
```

```css
.box + p {
    background: #C32BAD;
    color: #F9CF93;  
}
```

![Untitled](CSS%20Combinators%205b30d1a2916d41d69b0054a70bc7aff0/Untitled%202.png)

---

# General Sibling Selector

When it is required to select siblings from an element even after they are not directly adjacent then **general sibling selector** is used. It is denoted by **"~"**.

For Example:-

```html
<div class = "box">
  <p>This is inside box class</p>
  <p>This is inside box class</p>
</div>

<p>This is after box class</p>
<p>This is after box class</p>

<div class = "box">
  <p>This is inside 2nd box class</p>
  <p>This is inside 2nd box class</p>
</div>

<p>This is after 2nd box class</p>
<p>This is after 2nd box class</p>
```

```css
.box + p {
    background: #C32BAD;
    color: #F9CF93;  
}
```

![Untitled](CSS%20Combinators%205b30d1a2916d41d69b0054a70bc7aff0/Untitled%203.png)

---

---

### References

[https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/Selectors/Combinators](https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/Selectors/Combinators)

[https://www.w3schools.com/css/css_combinators.asp](https://www.w3schools.com/css/css_combinators.asp)