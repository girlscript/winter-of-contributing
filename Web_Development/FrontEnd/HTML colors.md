## Colors in HTML
<hr>
<p> HTML colors are specified with predefined color names, or with RGB, HEX, HSL, RGBA, or HSLA values. </p>

## Color Names
<ul> 
  <li> Tomato </li>
   <li> Orange </li>
   <li> DodgerBlue </li>
   <li> MediumSeaGreen </li>
   <li> Gray </li>
   <li> SlateBlue </li>
   <li> Violet </li>
   <li> LightGray </li>
</ul>
<p> HTMl supports <a href="https://www.w3schools.com/colors/colors_names.asp"> 140 standard color names </a> </p>

## Background Color

<p> You can set the background color in HTMl using following code </p>

```

<h1 style="background-color:MediumSeaGreen;">Hello World</h1>
<p style="background-color:Red;">Lorem ipsum...</p>


```

## Text Color

<p> You can set the color of text using following code </p>

```

<h1 style="color:Tomato;">Hello World</h1>
<p style="color:DodgerBlue;">This is Paragraph 1</p>
<p style="color:MediumSeaGreen;">This is Paragraph 2</p>

```

## Border Color

<p> You can set the color of border using following code </p>

```

<h1 style="border:2px solid Black;">Hello World</h1>
<h1 style="border:2px solid Red;">Hello World</h1>
<h1 style="border:2px solid Gray;">Hello World</h1>

```

## Color Values

<p> In HTML, colors can also be specified using RGB values, HEX values, HSL values, RGBA values, and HSLA values. </p>

<p> The following three div elements have their background color set with RGB, HEX, and HSL values: </p>

```

<h1 style="background-color:rgb(255, 99, 71);">...</h1>
<h1 style="background-color:#ff6347;">...</h1>
<h1 style="background-color:hsl(9, 100%, 64%);">...</h1>

```

<p> The following two div elements have their background color set with RGBA and HSLA values, which adds an Alpha channel to the color (here we have 50% transparency): </p>

```

<h1 style="background-color:rgba(255, 99, 71, 0.5);">...</h1>
<h1 style="background-color:hsla(9, 100%, 64%, 0.5);">...</h1>

```

## HTML RGB and RGBA Colors

<p> An RGB color value represents RED, GREEN, and BLUE light sources.

An RGBA color value is an extension of RGB with an Alpha channel (opacity). </p>

## RGB Color Values

<p> In HTML, a color can be specified as an RGB value, using this formula:  rgb(red, green, blue)  
  
Each parameter (red, green, and blue) defines the intensity of the color with a value between 0 and 255.

This means that there are 256 x 256 x 256 = 16777216 possible colors!

For example, rgb(255, 0, 0) is displayed as red, because red is set to its highest value (255), and the other two (green and blue) are set to 0.

Another example, rgb(0, 255, 0) is displayed as green, because green is set to its highest value (255), and the other two (red and blue) are set to 0.

</p>

## RGBA Color Values

<p> RGBA color values are an extension of RGB color values with an Alpha channel - which specifies the opacity for a color.

An RGBA color value is specified with:  rgba(red, green, blue, alpha)

The alpha parameter is a number between 0.0 (fully transparent) and 1.0 (not transparent at all): 

 </p>
 
 ## HEX Color Values
 
 <p> In HTML, a color can be specified using a hexadecimal value in the form:

#rrggbb

Where rr (red), gg (green) and bb (blue) are hexadecimal values between 00 and ff (same as decimal 0-255).

For example, #ff0000 is displayed as red, because red is set to its highest value (ff), and the other two (green and blue) are set to 00.

Another example, #00ff00 is displayed as green, because green is set to its highest value (ff), and the other two (red and blue) are set to 00.

To display black, set all color parameters to 00, like this: #000000.

To display white, set all color parameters to ff, like this: #ffffff.</p>

## HTML HSL and HSLA Colors

<p> HSL stands for hue, saturation, and lightness.

HSLA color values are an extension of HSL with an Alpha channel (opacity). </p>

## HSL Color Values

<p> In HTML, a color can be specified using hue, saturation, and lightness (HSL) in the form:

hsl(hue, saturation, lightness)

Hue is a degree on the color wheel from 0 to 360. 0 is red, 120 is green, and 240 is blue.

Saturation is a percentage value, 0% means a shade of gray, and 100% is the full color.

Lightness is also a percentage value, 0% is black, and 100% is white. </p>

## Saturation
 <p> Saturation can be described as the intensity of a color.

100% is pure color, no shades of gray

50% is 50% gray, but you can still see the color.

0% is completely gray, you can no longer see the color. </p>

## Lightness

<p> The lightness of a color can be described as how much light you want to give the color, where 0% means no light (black), 50% means 50% light (neither dark nor light) 100% means full lightness (white).</p>

## HSLA Color Values

<p> HSLA color values are an extension of HSL color values with an Alpha channel - which specifies the opacity for a color.

An HSLA color value is specified with:

hsla(hue, saturation, lightness, alpha)

The alpha parameter is a number between 0.0 (fully transparent) and 1.0 (not transparent at all): </p>
