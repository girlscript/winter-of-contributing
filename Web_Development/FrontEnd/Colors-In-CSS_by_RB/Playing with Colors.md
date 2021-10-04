# <u>**Playing with Colors in CSS**</u>

Whenever we see a beautiful but simple website, we can feel that there is a definitely significant role of CSS behind it’s HTML files and who doesn’t know “colors” make everything attractive. The use of color is a fundamental form of human expression. Children experiment with color, before they even have the manual dexterity to draw. Maybe that's why color is one of the first things people often want to experiment with when learning to develop websites. Yes, so there must be some way to know about this and learn the basics, right? Who knows you might develop a keen interest about this! So, let’s get started.
## 1. How to define colors in CSS?
First, we have to know about this. In CSS, when we define properties for different HTML elements, we can give color values as their property in many cases too, like following:

**p {** 

 **color: red;**

**}
//for describing color for paragraph**

There are four different ways to specify colors in CSS.

•	“Color keywords” (eg. “Teal”, “Violet”, “Red”, “Yellow” etc.) ![](images/Screenshot%202021-09-28%20072549.jpg " Picture") 

•	Using “RGB” functional notation (“RGB” stands for “Red, Green, Blue model” …. we can define any color in this model), eg. “color: rgb(255, 99, 71);” for “Tomato” color code.

•	Using “HCL” functional notation (“HCL” stands for “Hue, Saturation, Luminosity model” …. we can define any color in this model), eg. “color: rgb(9, 100%,64%);” for “Tomato” color code.


![](images/Screenshot%202021-09-28%20072549.jpg " Picture") 


Now, let’s understand about them in brief.

The first and easiest way to specify a color is using one of the 17 predefined color keywords.
Color keywords include the standard primary and secondary colors (such as red, blue, or orange), shades of gray (from black to white, including colors like darkgray and lightgrey), and a variety of other blended colors including lightseagreen, cornflowerblue, and rebeccapurple.

RGB (Red/Green/Blue) functional notation, like hexadecimal string notation, represents colors using their red, green, and blue components. 
However, instead of using a string, the color is defined using the CSS function **rgb()**. This function accepts as its input parameters the values of the red, green, andblue components.

**red, green, and blue:** Each must be an <integer> value between 0 and 255 (inclusive), or a <percentage>from 0% to 100%. 
  
Hexadecimal string notation represents a color using hexadecimal digits to represent each ofthe color components (red, green, and blue).
Each color component can be represented as a number between 0 and255 (0x00 and 0xFF) or, optionally, as a number between 0 and 15 (0x0 and 0xF).
All components must be specified using the same number of digits.A color in hexadecimal string notation always begins with the character "#". 
After that come the hexadecimal digits of the color code. The string is case-insensitive. **"#rrggbb"**

In CSS, HSL functional notation is that, a color can be specified using hue, saturation, and lightness (HSL) in the form:

**hsl(hue, saturation, lightness)**

Hue is a degree on the color wheel from 0 to 360. 0 is red, 120 is green, and 240 is blue.
Saturation is a percentage value, 0% means a shade of gray, and 100% is the full color.
Lightness is also a percentage, 0% is black, 50% is neither light or dark, 100% is white.
Designers and artists often prefer to work using the HSL (Hue/Saturation/Luminosity) color method. 

The hsl()CSS function is very similar to the rgb() function in usage.  
  
## 2. The ways of making colors translucent in CSS
  
To make the desired color into a lighter form we can use “Opacity” as a property for the elements.
The opacity property specifies the opacity/transparency of an element. It can take a
value from 0.0 - 1.0. The lower value, the more transparent:  
  

![](images/Screenshot%202021-09-28%20072549.jpg " Picture") 
  
  
We use RGBA model instead of RGB functional notation model and it is also included a fourth component: the alpha channel (or opacity).
The alpha channel is a number between 0.0 (fully transparent) and 1.0 (fully opaque). We can also specify a percentage where 0% is the same as 0.0 and 100% is the same as 1.0.
For example, a bright red that's 50% opaque can be represented as rgb(255, 0, 0, 0.5)or rgb(100%, 0, 0, 50%).

**In HEX string notation model, we use it as "#rrggbbaa" OR "#rgba" for opacity property.** 
Specifies a color whose red component is the hexadecimal number 0xrr, green component is 0xgg, and blue component is 0xbb. The alpha channel is specified by0xaa; the lower this value is, the more translucent the color becomes.

As an example, you can represent the opaque color bright blue as "#0000ff" or "#00f". To make it 25% opaque, one can use "#0000ff44" or "#00f4". 
  
We can also define “opacity” property for an element in CSS like as following:

Eg.

.
.
.
 **div {**

**background-color: green;**
**opacity: 0.6;**
  
 
![](images/Screenshot%202021-09-28%20072549.jpg " Picture")
  
  
## 3. The ways of adding colors in CSS
•	**External CSS:** Specifying colors in stylesheets. External styles are defined within the `<link>` element, inside the `<head>` section of an HTML file.

•	**Internal CSS:** Adding all the required properties via `<style>` tag within `<head>` section of an HTML file.

•	**Inline CSS:** An inline style may be used to apply a unique style for a single element.  
  
#4.Things that can have color in CSS

At a fundamental level, the color property defines the foreground color of an HTML element's content and the ***background-color*** property defines the element's background color. Thesecan be used on just about any element.

## **i) Text**

Whenever an element is rendered, these properties are used to determine the color of the text, its background, and any decorations on the text.

**Color:** The color to use when drawing the text and any text decorations (such as the addition of under- or overlines, strike-through lines, and so forth.

Eg. 



```
<h1 style="color: Tomato;">Hello World</h1>
```
Output:  
  

![](images/Screenshot%202021-09-28%20072549.jpg " Picture")
  
**background-color:** The text's background color.



```
<h1 style="background-color:DodgerBlue;">Hello World</h1>
```
Output:
  
![](images/Screenshot%202021-09-28%20072549.jpg " Picture")  
  
  **text-decoration-color:** By default, text decorations (such as underlines, strikethroughs, etc) use the colorproperty as their colors.

Eg. 



```
<head>
<style>
h1 {
  text-decoration: underline;
  color: violet;
}
</style>
</head>

```
Output:
  
![](images/Screenshot%202021-09-28%20072549.jpg " Picture")
  
  ##**ii) Boxes**

Every element is a box with some sort of content, and has a background and a border in addition to whatever contents the box may have.

**Borders:** See the section Borders for a list of the CSS properties you can use to set the colors of a box's borders.

Eg.



```
<h1 style="border: 2px solid Tomato;">Hello World, we came to see you!</h1>

<h1 style="border: 2px solid DodgerBlue;">Ready to explore!</h1>

<h1 style="border: 2px solid Violet;">Adventures waits ahead!</h1>

```
Output:
  
![](images/Screenshot%202021-09-28%20072549.jpg " Picture")
  
  
