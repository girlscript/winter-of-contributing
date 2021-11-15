# Text Manipulation 

To create an attractive and beautiful website, text manipulation is required. Text manipulation inludes: color, font size, font-family, font weight, direction, letter spacing, word spacing, indentation, alignment, transformation, white spacing and text shadow. 

## CSS Properties For Text Manipulation

### Font size, families, color and weight properties

By using css property `font-size` you can increase or decrease the size of text.

```css
h1{
font-size: 30px;
}
```

By using `font-family` property you can change the font themes (arial, san-serif, etc). 

```css
p{
font-family: san-serif:;
}
```

By using `font-color` property you can change color of text or headings. 

```css
p{
font-color: blue;
}
```

By using `font-weight` property you can control font thickness or thiness. 

```css
h1{
font-weight: 600;
}
```

### Direction property

Tells the direction of text. This depends on the language you're wrinting in website. By default language is english and direction is left. 

```css
p{
  direction: rtl;
}

```

### Word-spacing, letter-spacing and white-spacing properties

With the help of both properties `word-spacing` and `letter-spacing` you can set spacing between letters and words. `white-space` property used to give white spacing (line break) inside the element. It specify two things how white-space is collapsed and line  wraping or non wraping.

```css
h3{
letter-spacing: 5px;
word-spacing: 5px;
}
p{
white-space: break-spaces;
}
```

### Indentation,  Alignment and Transformation properties

`text-indent` tells how much space should be left before the start of paragraph or heading. `text-align` property is used to set the alignment of element or container. With the help of `text-transform` property you can transform font (Uppercase, Lowercase and Capitalize).

```css
h4{
text-transform: uppercase;
text-align: center;
}
p{
text-indent: 30px;
}
```

### Text shadow property

`text-shadow` gives a shadow effect to your text. 

```css
h1{
text-shadow: 4px 4px 5px red;
}
```

As you can see, first we are telling about horizontal shadow then we are telling about vertical shadow then we are telling blurness of shadow and lastly we are tellin color of shadow.

## CODE
```html
<!DOCTYPE html>
<html>
<head>
<title>Text Manipulation</title>
<style>
html {
  font-size: 10px;
}

h1 {
  font-size: 5rem;
  text-transform: capitalize;
  text-shadow: 1px 1px 1px red,
               2px 2px 1px red;
  text-align: center;
  letter-spacing: 2px;
}

h1 + p {
  font-weight: bold;
}

p {
  font-size: 1.5rem;
  color: red;
  font-family: Helvetica, Arial, sans-serif;
  line-height: 1.6;
  letter-spacing: 1px;
}
</style>
</head>
<body>
<h1>Tommy The Cat</h1>
<p>Well I remember it as though it were a meal ago... Said Tommy the Cat as he reeled back to clear whatever foreign matter may have nestled its way into his mighty throat. Many a fat alley rat had met its demise while staring point blank down the cavernous barrel of this awesome prowling machine. Truly a wonder of nature this urban predator — Tommy the cat had many a story to tell. But it was a rare occasion such as this that he did.</p>
</body>
</html>
``` 

### Output

![ ](https://images.samimunir2002.repl.co/text1.png)

Example taken from: [MDN](https://developer.mozilla.org/en-US/docs/Learn/CSS/Styling_text/Fundamentals)

Reference Link: [MDN](https://developer.mozilla.org/en-US/docs/Learn/CSS/Styling_text/Fundamentals)
