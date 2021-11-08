# Responsive Typography

   Generally for text format we use pixel or em units but this units is fixed for any viewport if we set once and it does not depend on dimension of viewport. It’s been many years since viewport units were initial introduced in CSS. They’re actually “responsive length units” within the sense that their values changes anytime the browser resizes.
In this we documentry we have to learn about viewport and their units.

## Viewport Units
    
   Viewport units are the relative units just like percentages and it is depend on viewport dimentions of a device and percentages are relative to the size of the parent container element.Therefore we use viewport unit as a responsive typography.

The different viewport units are:
    
   In CSS there are majorly 4 different viewports unit. These are vh, vw, vmin and vmax. we have learn about each in details .
  
- Viewport Height (vh). This unit is depend on the height of the viewport. for example 6vh would be 6% of the viewport's height.

- Viewport Width (vw). This unit is depend on the width of the viewport. for example 1vw would be 1% of the viewport's width.

- Viewport Minimum (vmin). This unit is based on the smaller dimension of the viewport. If the viewport width is smaller than the height, the value of 10vmin will be equal to 10% of the viewport width. similarly If the viewport height is smaller than the width, the value of 10vmin will be equal to 10% of the viewport height. 

- Viewport Maximum (vmax). This unit is based on the larger dimension of the viewport. If the viewport width is larger than the height, the value of 10vmax will be equal to 10% of hte viewport width. Similarly,  If the viewport height is larger than the width, the value of 10vmax will be equal to 10% of viewport height.

Here is an example that sets a body tag to 50% of the viewport's width.
```css
body { width: 50vw; }
```
### Application of Viewport Units :
   These units are depend on viewport dimensions,So it’s very useful where the width, height or size of elements needs to be set relative to the viewport.

1. Fullscreen Background Images or Sections
  
   It’s very common to set background images on elements that fully cover the screen. Similarly, you may want to design a website where each individual section about a product or service has to cover the entire screen. In such cases, you can set the width of the respective elements to be equal to 100% and set their height equal to 100vh.

```html
   <style>
      .fullscreen {
  width: 100%;
  height: 100vh;
  padding: 40vh;
}

.a {
  background: url('xyz.jpg');
}
  </style>
 
<div class="fullscreen a">
  <p>a<p>
</div>
```
2. Easily Center Your Elements

   Viewport units can be very helpful when you want to put an element exactly at the center of your user’s screen. If you know the element’s height, you just have to set the top and bottom value of the margin property to be equal to [(100 - height)/2]vh.
  
### Reference
    
   1) [Free Code Camp](https://www.freecodecamp.org/learn/responsive-web-design/responsive-web-design-principles/make-typography-responsive)
   2) [Sitepoint](https://www.sitepoint.com/css-viewport-units-quick-start/)
  
