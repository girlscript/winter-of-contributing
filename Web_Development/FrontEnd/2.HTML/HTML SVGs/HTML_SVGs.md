# SVGs in HTML

_SVG stands for Scalable Vector Graphics._

_SVG defines vector-based graphics in XML format._

## Prerequisites

- HTML
- Basic XML

## **What is SVG?**

- SVG stands for Scalable Vector Graphics
- SVG is used to define vector-based graphics for the Web
- SVG defines the graphics in XML format
- Every element and every attribute in SVG files can be animated
- SVG is a W3C recommendation
- SVG integrates with other W3C standards such as the DOM and XSL

## **SVG Advantages**

Advantages of using SVG over other image formats (like JPEG and GIF) are:

- SVG images can be created and edited with any text editor
- SVG images can be searched, indexed, scripted, and compressed
- SVG images are scalable
- SVG images can be printed with high quality at any resolution
- SVG images are zoomable
- SVG graphics do NOT lose any quality if they are zoomed or resized
- SVG is an open standard
- SVG files are pure XML

## **SVG Shapes**

SVG has some predefined shape elements that can be used by developers:

- Rectangle <rect>
- Circle <circle>
- Ellipse <ellipse>
- Line <line>
- Polyline <polyline>
- Polygon <polygon>
- Path <path>

## SVG Rectangle

<img src="images/rectangle.jpeg " alt="rectangle svg image" />
  
```html
<svg  width="400"  height="110">
<rect
x="5"
y="1"
rx="20"
ry="20"
width="300"
height="100"
style="fill: green; stroke-width: 3; stroke: rgb(0, 0, 0); opacity: 0.6"
/>
</svg>
```
  
-   The width and height attributes of the <rect> element define the height and the width of the rectangle
-   The x attribute defines the left position of the rectangle (e.g. x="5" places the rectangle 5 px from the left margin)
-   The y attribute defines the top position of the rectangle (e.g. y="1" places the rectangle 1 px from the top margin)
-   The CSS fill property defines the fill color of the rectangle
-   The CSS stroke-width property defines the width of the border of the rectangle
-   The CSS stroke property defines the color of the border of the rectangle
-   The CSS fill-opacity property defines the opacity of the fill color (legal range: 0 to 1)
-   The CSS stroke-opacity property defines the opacity of the stroke color (legal range: 0 to 1)
-   The rx and the ry attributes rounds the corners of the rectangle

## SVG circle

<img src="images/circle.jpeg " alt="circle svg image" />
  
```html
<svg  height="100"  width="100">
<circle
cx="50"
cy="50"
r="40"
stroke="blue"
stroke-width="3"
fill="yellow"
/>
</svg>
```
  
-   The cx and cy attributes define the x and y coordinates of the center of the circle. If cx and cy are omitted, the circle's center is set to (0,0)
-   The r attribute defines the radius of the circle

## SVG ellipse

<img src="images/ellipse.jpeg " alt="ellipse svg image" />	
  
```html
<svg  height="140"  width="500">
<ellipse
cx="200"
cy="80"
rx="100"
ry="50"
style="fill: pink; stroke: purple; stroke-width: 2"
/>
</svg>
```
  
-   The cx attribute defines the x coordinate of the center of the ellipse
-   The cy attribute defines the y coordinate of the center of the ellipse
-   The rx attribute defines the horizontal radius
-   The ry attribute defines the vertical radius

The following example combines two ellipses (one magenta and one blue):
<img src="images/ellipse overlapped.jpeg " alt="ellipse overlapped svg image" />

```html
<svg  height="100"  width="500">
<ellipse  cx="240"  cy="50"  rx="220"  ry="30"  style="fill: blue"  />
<ellipse  cx="220"  cy="50"  rx="190"  ry="20"  style="fill: magenta"  />
</svg>
```

## SVG polygon

The <polygon> element is used to create a graphic that contains at least three sides.
  
<img src="images/polygon.jpeg " alt="polygon svg image" />

```html
<svg  height="250"  width="500">
<polygon
points="220,10 300,210 170,250 123,234"
style="fill: lime; stroke: purple; stroke-width: 1"
/>
</svg>
```

- The points attribute defines the x and y coordinates for each corner of the polygon
  
  <img src="images/star.jpeg " alt="star shaped svg image" />

```html
<svg  height="210"  width="500">
<polygon
points="100,10 40,198 190,78 10,78 160,198"
style="fill: blue ; stroke: purple; stroke-width: 5; fill-rule: evenodd"
/>
</svg>
```

## SVG polyline

The <polyline> element is used to create any shape that consists of only straight lines (that is connected at several points):
  
<img src="images/stairs.jpeg " alt="polyline stairs svg image" />

```html
<svg  height="180"  width="500">
<polyline
points="0,40 40,40 40,80 80,80 80,120 120,120 120,160"
style="fill: white; stroke: greenyellow; stroke-width: 4"
/>
</svg>
```

- The points attribute defines the list of points (pairs of x and y coordinates) required to draw the polyline

## SVG path

The [`<path>`] element is the most powerful element in the SVG library of [basic shapes](https://developer.mozilla.org/en-US/docs/Web/SVG/Tutorial/Basic_Shapes). It can be used to create lines, curves, arcs, and more.

Paths create complex shapes by combining multiple straight lines or curved lines. Complex shapes composed only of straight lines can be created as [`<polyline>`s](https://developer.mozilla.org/en-US/docs/Web/SVG/Tutorial/Basic_Shapes#polyline). While `<polyline>`s and `<path>`s can create similar-looking shapes, `<polyline>`s require a lot of small straight lines to simulate curves, and don't scale well to larger sizes.

A good understanding of paths is important when drawing SVGs. While creating complex paths using an XML editor or text editor is not recommended, understanding how they work will allow to identify and repair display issues in SVGs.

Bézier curves are used to model smooth curves that can be scaled indefinitely. Generally, the user selects two endpoints and one or two control points. A Bézier curve with one control point is called a quadratic Bézier curve and the kind with two control points is called cubic.
  
<img src="images/curve.jpeg " alt="curve svg image" />

```html
<svg  height="400"  width="450">
<path
id="lineAB"
d="M 100 350 l 150 -300"
stroke="red"
stroke-width="3"
fill="none"
/>
<path
id="lineBC"
d="M 250 50 l 150 300"
stroke="red"
stroke-width="3"
fill="none"
/>
<path  d="M 175 200 l 150 0"  stroke="green"  stroke-width="3"  fill="none"  />
<path
d="M 100 350 q 150 -300 300 0"
stroke="blue"
stroke-width="5"
fill="none"
/>
<!-- Mark relevant points -->
<g  stroke="black"  stroke-width="3"  fill="black">
<circle  id="pointA"  cx="100"  cy="350"  r="3"  />
<circle  id="pointB"  cx="250"  cy="50"  r="3"  />
<circle  id="pointC"  cx="400"  cy="350"  r="3"  />
</g>
<!-- Label the points -->
<g
font-size="30"
font-family="sans-serif"
fill="black"
stroke="none"
text-anchor="middle"
>
<text  x="100"  y="350"  dx="-30">A</text>
<text  x="250"  y="50"  dy="-10">B</text>
<text  x="400"  y="350"  dx="30">C</text>
</g>
</svg>
```

Because of the complexity involved in drawing paths it is highly recommended to use an SVG editor to create complex graphics.

## SVG Text

<img src="images/girlscript.jpeg " alt="rotated text svg image" />	
  
```html
<svg  height="60"  width="200">
<text  x="0"  y="25"  fill="red"  transform="rotate(30 20,40)">
GirlScript
</text>
</svg>
```
Rotate the text
  
<img src="images/gwoc.jpeg " alt="svg text image" />	
  
```html
    <svg height="90" width="200">
      <text x="10" y="20" style="fill: green">
        GirlScript
        <tspan x="10" y="45">Winter of</tspan>
        <tspan x="10" y="70">Contribution</tspan>
      </text>
    </svg>
```
  
##  SVG  Blur Effects
### defs and filter

All internet SVG filters are defined within a <defs> element. The <defs> element is short for definitions and contains definition of special elements (such as filters).

The <filter> element is used to define an SVG filter. The <filter> element has a required id attribute which identifies the filter. The graphic then points to the filter to use.

### SVG < feGaussianBlur >

The <feGaussianBlur> element is used to create blur effects
  
<img src="images/blur.jpeg " alt="ellipse svg image" />

```html
<svg  height="110"  width="110">
<defs>
<filter  id="f1"  x="0"  y="0">
<feGaussianBlur  in="SourceGraphic"  stdDeviation="15"  />
</filter>
</defs>
<rect
width="90"
height="90"
stroke="green"
stroke-width="3"
fill="blue"
filter="url(#f1)"
/>
</svg>
```

- The id attribute of the <filter> element defines a unique name for the filter
- The blur effect is defined with the <feGaussianBlur> element
- The in="SourceGraphic" part defines that the effect is created for the entire element
- The stdDeviation attribute defines the amount of the blur
- The filter attribute of the <rect> element links the element to the "f1" filter

## SVG Drop Shadows

### SVG < feOffset >

The <feOffset> element is used to create drop shadow effects. The idea is to take an SVG graphic (image or element) and move it a little bit in the xy plane.

The first example offsets a rectangle (with < feOffset > ), then blend the original on top of the offset image (with < feBlend >)
  
<img src="images/dds.jpeg " alt="drop down shadow svg image" />
  
```html
    <svg height="140" width="140">
      <defs>
        <filter id="f2" x="0" y="0" width="200%" height="200%">
          <feOffset result="offOut" in="SourceGraphic" dx="20" dy="20" />
          <feGaussianBlur result="blurOut" in="offOut" stdDeviation="10" />
          <feBlend in="SourceGraphic" in2="blurOut" mode="normal" />
        </filter>
      </defs>
      <rect width="90" height="90" stroke="green" stroke-width="3"
      fill="darkorange" filter="url(#f2)" />
    </svg>
```

- The id attribute of the <filter> element defines a unique name for the filter
- The filter attribute of the <rect> element links the element to the "f1" filter

## SVG Gradients

A gradient is a smooth transition from one color to another. In addition, several color transitions can be applied to the same element.

There are two main types of gradients in SVG:

- Linear
- Radial

### SVG Linear Gradient

The < linearGradient > element is used to define a linear gradient.

The < linearGradient > element must be nested within a < defs > tag. The < defs > tag is short for definitions and contains definition of special elements (such as gradients).

Linear gradients can be defined as horizontal, vertical or angular gradients:

- Horizontal gradients are created when y1 and y2 are equal and x1 and x2 differ
- Vertical gradients are created when x1 and x2 are equal and y1 and y2 differ
- Angular gradients are created when x1 and x2 differ and y1 and y2 differ
  
  <img src="images/gradient horizontal.jpeg " alt="ellipse svg image" />
  
```html
    <svg height="150" width="400">
      <defs>
        <linearGradient id="grad1" x1="0%" y1="0%" x2="100%" y2="0%">
          <stop offset="0%" style="stop-color: violet; stop-opacity: 1" />
          <stop offset="100%" style="stop-color: pink; stop-opacity: 1" />
        </linearGradient>
      </defs>
      <ellipse cx="200" cy="70" rx="85" ry="55" fill="url(#grad1)" />
    </svg>
```

- The id attribute of the <linearGradient> tag defines a unique name for the gradient
- The x1, x2, y1,y2 attributes of the <linearGradient> tag define the start and end position of the gradient
- The color range for a gradient can be composed of two or more colors. Each color is specified with a <stop> tag. The offset attribute is used to define where the gradient color begin and end
- The fill attribute links the ellipse element to the gradient

vertical linear gradient from blue to black:
  
<img src="images/vertical gradient.jpeg " alt="ellipse svg image" />

```html
    <svg height="150" width="400">
      <defs>
        <linearGradient id="grad2" x1="0%" y1="0%" x2="0%" y2="100%">
          <stop offset="0%" style="stop-color: blue; stop-opacity: 1" />
          <stop offset="100%" style="stop-color: black; stop-opacity: 1" />
        </linearGradient>
      </defs>
      <ellipse cx="200" cy="70" rx="85" ry="55" fill="url(#grad2)" />
    </svg>
```

## SVG Gradients - Radial

The < radialGradient > element is used to define a radial gradient.

The < radialGradient > element must be nested within a < defs > tag. The < defs > tag is short for definitions and contains definition of special elements (such as gradients).
  
<img src="images/radial gradient.jpeg " alt="ellipse svg image" />

```html
    <svg height="150" width="500">
      <defs>
        <radialGradient id="grad1" cx="50%" cy="50%" r="50%" fx="50%" fy="50%">
          <stop offset="0%" style="stop-color: lime; stop-opacity: 0" />
          <stop offset="100%" style="stop-color: orange; stop-opacity: 1" />
        </radialGradient>
      </defs>
      <ellipse cx="200" cy="70" rx="85" ry="55" fill="url(#grad1)" />
    </svg>
```

- The id attribute of the <radialGradient> tag defines a unique name for the gradient
- The cx, cy and r attributes define the outermost circle and the fx and fy define the innermost circle
- The color range for a gradient can be composed of two or more colors. Each color is specified with a <stop> tag. The offset attribute is used to define where the gradient color begin and end
- The fill attribute links the ellipse element to the gradient
