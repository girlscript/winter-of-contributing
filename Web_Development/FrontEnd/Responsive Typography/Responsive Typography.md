# Responsive Typography

     Generally for text format we use pixel or em units but this units is fixed for any viewport if we set once and it does not depend on dimension of viewport. It’s been many years since viewport units were initial introduced in CSS. They’re actually “responsive length units” within the sense that their values changes anytime the browser resizes.
In this we documentry we have to learn about viewport and their units.

## View Port Units
    
       Viewport units are the relative units just like percentages and it is depend on viewport dimentions of a device and percentages are relative to the size of the parent container element.Therefore we use viewport unit as a responsive typography.

The different viewport units are:
    
    In CSS there are majorly 4 different viewports unit. These are vh, vw, vmin and vmax. we have learn about each in details .
  
-Viewport Height (vh). This unit is depend on the height of the viewport. for example 6vh would be 6% of the viewport's height.
-Viewport Width (vw). This unit is depend on the width of the viewport. for example 1vw would be 1% of the viewport's width.
-Viewport Minimum (vmin). This unit is based on the smaller dimension of the viewport. If the viewport width is smaller than the height, the value of 10vmin will be equal to 10% of the viewport width. similarly If the viewport height is smaller than the width, the value of 10vmin will be equal to 10% of the viewport height. 
-Viewport Maximum (vmax). This unit is based on the larger dimension of the viewport. If the viewport width is larger than the height, the value of 10vmax will be equal to 10% of hte viewport width. Similarly,  If the viewport height is larger than the width, the value of 10vmax will be equal to 10% of viewport height.

Here is an example that sets a body tag to 50% of the viewport's width.

body { width: 50vw; }


