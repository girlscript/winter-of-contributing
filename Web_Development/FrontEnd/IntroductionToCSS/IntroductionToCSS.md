# Introduction To CSS

Imagine a world where there is no color and style, how terrible would the world looks. World is incomplete without colors. Similary websites is incomplete without CSS. 

![ ](https://miro.medium.com/max/1400/1*lXKAoEYXdDvEUV8TeeqeBg.png)
**Image Source:** [Medium.com](https://medium.com/@readizo.com/html-basics-the-10-important-concepts-afeedcbe8e7d)

**HTML** is a skeleton of website, **CSS** is a muscles and skin of website and **JAVASCRIPT** is an organs, heart and brain of website. Basically Java Script add functionality to website.

CSS stands for **Cascading Styling Sheet**. It's a language for describing how an HTML document should look. Basically, it instructs the browser on how to style and design lay out for web pages, such as changing the font, color, size, and spacing of text, splitting it into numerous columns, and adding animations and other ornamentals. Let's see an example of CSS code.

## Example of CSS code

```css
body {
  background-color: blue;
}

h1 {
  color: white;
  font-weight: bold;
  text-align: center;
}

p {
  font-family: sans-serif;
  font-size: 20px;
}
```

The style above specifies how the paragraph tag `p` should appear, as well as what font it should use and what size it should be. For `h1` tag I change it's color, font weight which make `h1` tag bold and make it align center. For `body` tag I change background color to blue. External.css files are often used to save these definitions or by writing internal CSS inside of style tags or you can also add CSS inline means in the tags you can define it's style. But if you use external file for CSS, you may modify the design of a complete website by updating only one file using an external stylesheet file.

**Reference Link:** [MDN](https://developer.mozilla.org/en-US/docs/Learn/CSS/First_steps)
