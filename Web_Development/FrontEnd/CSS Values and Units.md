
# CSS VALUES AND UNITS

## CSS Properties and Values
Now before we get into units, we must have some basic knowledge about what *properties* are. The CSS Properties are used to modify and customise the standard HTML elements like divs, paragraphs, sections and a whole lot more according to our own free will. CSS declarations work in a property / value pair. In short a property is **what you want to modify** in a page and the value you set tells you **how you want to modify it**. Example:

```css
.redbox{
  height:100px;
  width:100px;
  background-color:red;
}
```
![redbox](https://i.imgur.com/hkWdTnC.png)

| Property | Value |
| ----------- | ----------- |
| height | 100px |
| width | 100px |
| background-color | red |

## What are units?
Units are *parameters* by which values of certain properties are set in CSS.

## CSS Units
Now when it comes to **units** in CSS, we have two types. They are
- **Absolute units**
- **Relative units**
One important tip before we jump into the topic, **never leave a whitespace between your value and the unit** .

### Absolute units
Absolute units are units that never change once they are set (kinda stubborn right? XD). It is recommended to not use absolute units often because they do not adapt to the screen size of the device. Now let us see the available absolute units...

| Unit | Value and Description |
| ----------- | ----------- |
| cm | centimeters |
| mm | 	millimeters |
| in | inches (1in = 96px = 2.54cm) |
| px | pixels 1/96 of 1 inch (96px = 1 inch) |
| pt | points 1/72 of 1 inch (72pt = 1 inch) |
| pc | picas (1pc = 12 pt) |

Lets consider the example of the redbox again, the redbox is a square with a height of 100px and a width of 100px. The redbox if screen on a laptop screen might look good
but if we the see the same redbox in a smaller screen, such as a mobile screen, it might be enormous and weird. Yep, you guessed it right its because the use of **pixels** as an absolute unit.


![phone](https://i.imgur.com/G882Wkq.png) 🤔  ![laptop](https://i.imgur.com/hVjn671.png) 🤩

### Relative units
Relative units are units that take up their value relative to a parent element. Relative units awesome to use and they help a lot in building responsive websites. They have the ability to scale based on the device's screen size. Lets see the relative units...


| Unit | Value and Description |
| ----------- | ----------- |
| em | these are relative to the parent element's font size |
| rem | 	these are relative to the font-size of the root element of the document |
| ch | relative to width of the digit 0 |
| vw | relative to 1% of the width of the device's viewport |
| vmin | relative to 1% of the smaller dimension of the viewport |
| vmax | relative to 1% of the larger dimension of the viewport |
| % | relative to the parent element |

Now, usage of each of these unit depends totally on the scenario. Let us see few scenarios..

- em and rem will be mostly used to alter the size of the font your webpage. For example, when you want the font size of the child element to be half as that of the parent element, you would do something like
```css
.child-content{
  font-size: 0.5rem;
}
```

- % is used more often used in modifying the layout of the page
```css
.box{
  width:100%; // takes up 100% of the screen's width
}
```
- rem is used when you want the a particular font with a size relative to the root element's font-size
```css
.remfont{
  font-size:2rem; //2 times the font-size of root element
}
```
- vh and vw both are used when something must have the dimensions of the viewport

```css
.box{
  height:100vh; // takes up the full height of the viewport
  width:100vw; // takes up the full width of the viewport
}
```
- vmin and vmax are used when an element has to take up its dimensions relative to the the screen's smaller dimension or the larger dimension.

```css
.cat-image{
  height:20vmin; // takes up 20% of the screen's minimum dimension as its height
  width:10vmax; // takes up 10% of the screen's maximum dimension as its width
 }
```

