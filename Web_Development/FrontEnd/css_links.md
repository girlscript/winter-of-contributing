# CSS Links

Links can be styled in many different ways using css.

links can be styled differently depending on what state they are in.

Links states :

- a:link - unvisited link
- a:visited - visited link
- a:hover - when the someone mouses over it
- a:active - clicked link

**Example 1**

```css
/* unvisited link */
a:link {
  color: blue;
}
```

**Example 2**

```css
/* visited link */
a:visited {
  color: red;
}
```
**Example 3**

```css
/* mouse over link */
a:hover {
  color: pink;
}
```
**Example 4**

```css
/* clicked link */
a:active {
  color: green;
}
```

# Remember order rules:

- a:hover MUST come after a:link and a:visited
- a:active MUST come after a:hover

## Reference

* [CSS basics - Learn web development | MDN](https://developer.mozilla.org/en-US/docs/Learn/Getting_started_with_the_web/CSS_basics)