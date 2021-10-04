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
  
