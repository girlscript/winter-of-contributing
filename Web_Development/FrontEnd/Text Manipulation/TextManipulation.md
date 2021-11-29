# Text Manipulation 

To create an attractive and beautiful website, text manipulation is required. Text manipulation inludes: color, font size, font-family, font weight, direction, letter spacing, word spacing, indentation, alignment, transformation, white spacing and text shadow. 

## CSS Properties For Text Manipulation

### Font size, families, color and weight properties

You can change the size of the text (fonts) by using the `font-size`  property.

```css
h2{
font-size: 35px;
}
```

You can change the font themes (arial, san-serif, georgia, etc) by using the `font-family` property.

```css
h3{
font-family: san-serif;
}
```

You can alter the color of paragraph or heading by using the `font-color` property.

```css
h4{
font-color: blue;
}
```

You can alter font thickness or thiness by using the `font-weight` property. 

```css
h1{
font-weight: 700;
}
```

### Direction property

Indicates the text's direction. This dependents on the language you choose on your website. The language is English by default, and the orientation is left. 

```css
h5{
  direction: rtl;
}

```

### Word-spacing, letter-spacing and white-spacing properties

You can set the spacing between letters and words using the attributes `word-spacing` and `letter-spacing`. The `white-space` property is used to give the element white spacing (a line break). It specifies two things: how white space is compressed and whether lines are wrapped or not.

```css
h3{
letter-spacing: 3px;
word-spacing: 2px;
}
p{
white-space: break-spaces;
}
```

### Indentation, Alignment and Transformation properties

`text-indent` specifies the amount of space to leave before the start of a paragraph or heading. The `text-align` property is used to align elements and containers. You can change the font (Uppercase, Lowercase and Capitalize) using the `text-transform` property.

```css
h4{
text-transform: capitalize;
text-align: center;
}
p{
text-indent: 24px;
}
```

### Text shadow property

`text-shadow` property provides a shadow effect to your paragraph or heading. 

```css
h1{
text-shadow: 8px 8px 2px green;
}
```

As you can see, first we are telling about horizontal shadow then we are telling about vertical shadow then we are telling blurness of shadow and lastly we are telling color of shadow.

## CODE
```html
<!DOCTYPE html>
<html>
<head>
    <title>Text Manipulation</title>
    <style>
         h1 {
            font-size: 40px;
            font-weight: bold;
            text-transform: capitalize;
            text-shadow: 4px 4px 1px gray;
             text-align: center;
            letter-spacing: 2px;
        }
        p {
            font-size: 1.5rem;
            color: red;
            font-family: Arial;
            line-height: 1.6;
            letter-spacing: 1px;
            text-indent: 20px;
        }
    </style>
</head>
<body>
    <h1>This is Random Text</h1>
    <p>Lorem ipsum dolor, sit amet consectetur adipisicing elit. In magnam sapiente asperiores quis facere atque illo
       veritatis veniam ut officiis nam voluptate officia tempora suscipit, quod odit quo excepturi sunt. Lorem ipsum
       dolor, sit amet consectetur adipisicing elit. Fuga porro nihil, autem sit, doloremque saepe possimus quos
       inventore magnam tenetur doloribus accusamus recusandae perspiciatis eligendi in, dolor maiores. Mollitia, nam.
    </p>
</body>
</html>
``` 

### Output

![](https://images.samimunir2002.repl.co/textmodal.png)

Reference Link: [MDN](https://developer.mozilla.org/en-US/docs/Learn/CSS/Styling_text/Fundamentals)
