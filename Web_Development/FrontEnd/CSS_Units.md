
# CSS Units
A CSS unit is used to set the size of an element or its content. They are used to set margin, padding, height, width and so on.
The length unit in CSS is of two types:
- Absolute length unit
- Relative length unit

## Absolute Length:
<p align="center"> <img src="https://i.stack.imgur.com/r7uWo.gif" height="250">
</p>
<u>The absolute length units</U> are fixed(not relative) and a length expressed using these units appear exactly of the same size.
Following are the most popularly used absolute length units:

### 1. Px (Pixels):
Pixels, abbreviated as "px", are a unit of measurement equivalent to roughly 1⁄96 inch (0.26 mm). 
<br> **How to use:**
```
img { width: 10px; }
```

**Note:** Pixels are _relative_ to the viewing device. For low-dpi devices, 1px is one device pixel (dot) of the display. For printers and high resolution screens 1px implies multiple device pixels.

### 2. Pt (Points):
Points, abbreviated as "pt", are a unit of measurement equivalent to roughly 1⁄72 inch (0.35 mm). 
<br> **How to use:**
```
img { width: 15pt; }
```


### 3. Pc (Picas):
Picas, abbreviated as "pc", are a unit of measurement equivalent to roughly 1⁄6 inch (4.23 mm). Also, 1pc = 12 pt
<br> **How to use:**
```
img { width: 5pc; }
```
> Since screen sizes vary so much, it is not recommended to use absolute units on screen. However, they can be used if the output medium is known, such as for print layout.

## Relative Length:
<p align="center"> <img src="https://miro.medium.com/max/800/1*OkcOPoWR3bxKY2axlDX9UA.gif">
</p>

<u>Relative length units</U> are relative to certain factors like the size of the parent element's font, or the size of the viewport. 
Using such units, the size of text and elements can be set and changed appropriately for different device widths.

### 1. Em:
Em is a relative length unit which is relative to the font-size of the element. So if the font size of a `<div>` is set as 2 pixels, then 1 em in that division will be 2px. By default 1em = 16px
<br> **How to use:** 
```
div {font-size: 18px } //this is the div containing an img. Its font size is set as 18px
img { width: 2em; }  // here, 2rem = 36px
```

### 2. Rem:
Rem is a relative length unit which is relative to the font-size of the root element. By default 1rem = 16px.
<br> **How to use:**
```
html { font-size: 18px } //setting the base font size as 18px
img { width: 2rem; } // here, 2rem = 36px
```

### 3. % (Percent):
Percent is a relative length unit which is relative to the size of the parent element.
<br> **How to use:**
``` 
img { width: 2%; } // The width of img will be 2% of its parent element size 
```

### 4. Vw (Viewport-width):
1vw is relative to 1% of the  <u>width</u> of the viewport(the browser window size). If the viewport is 100cm wide, 1vw = 1cm.
<br> **How to use:**
``` 
img { width: 2vw; } // The width of img will be 2% of its viewport-width 
```

### 5. Vh (Viewport-height):
1vh is relative to 1% of the <u>height</U> of the viewport(the browser window size). If the viewport is 50 cm in height, 1vh = 0.5cm.
<br> **How to use:**
``` 
img { height: 2vh; } // The height of img will be 2% of its viewport-height 
```

### 6. Ch (Character-width):
1ch is equal to the width of the “0” character in a given typeface. In monospace fonts, where all characters are the same width, 1ch equals one character. Such unit can be used in carrying out certain scenarios like in the _typewriter animation_ where the typing cursor has to move a length equal to 1 character. For fonts that consists of unequal widths of all characters, this unit doesn't fit to be an appropriate choice.
<br> **How to use:**
``` 
img { width: 50ch; } // The width of img will be equal width of 50 "0s" 
```

<p align="right"> <b>References:<b> <br> <a href="https://www.w3schools.com/cssref/css_units.asp"> CSS Units by W3 Schools </a> <br> <a href="https://www.w3schools.com/cssref/css_units.asp"> CSS Values and Units by MDN Docs </a> </p>

