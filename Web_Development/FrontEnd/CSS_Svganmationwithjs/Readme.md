# 📕 Frond End Web Dev 📕

## 1️⃣ HTML

- [x] What is SVG and animating them with JS

<hr>

**In this document we will discuss hwo to animate the svg with the help of Javascript**

<hr>

## What is SVG?

```
SVG stands for Scalable Vector Graphics.SVG defines vector-based graphics in XML format.

SVG is an image format for vector graphics. It literally means Scalable Vector Graphics. Basically, what you work with in Adobe Illustrator. You can use SVG on the web pretty easily,
```

### **Lets us now setup one example how to animate the SVG with the Javascript**

### **STEP 1-**

#### HTML code:-

```HTML
<div class="container">

  <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1024 1024" xmlns:xlink="http://www.w3.org/1999/xlink">
    <defs>
      <circle id="path-1" cx="409.6" cy="409.6" r="409.6"/>
      <linearGradient id="nighttime-gradient" x1="50%" y1="0%" y2="100%">
        <stop stop-color="#060414" offset="0%"/>
        <stop stop-color="#416584" offset="100%"/>
      </linearGradient>
      <linearGradient id="daytime-gradient" x1="50%" y1="0%" y2="100%">
        <stop stop-color="#8CE7FF" offset="0%"/>
        <stop stop-color="#A2F2FF" offset="100%"/>
      </linearGradient>
      <path id="path-6" d="M0 283L242 0l230 283z"/>
      <path id="path-8" d="M0 335L214.2 0 418 335z"/>
      <circle id="path-12" cx="511.6" cy="511.6" r="409.6"/>
    </defs>

    <g fill="none" fill-rule="evenodd">

      <g id="Landscape" transform="translate(102 102)">

        <mask id="mask-2" fill="#fff">
          <use xlink:href="#path-1"/>
        </mask>

        <use id="Container" fill="#D8D8D8" xlink:href="#path-1"/>

        <path id="Day-Time" fill="url(#daytime-gradient)" d="M-20-20h860v860H-20z" mask="url(#mask-2)"/>

        <g id="stars" fill="#FFF" fill-rule="nonzero" opacity="0">
          <path id="star-one" stroke="#FFF" d="M104.3 272.07l-7.67.48-.07-1 8-.5-5.36-6.7.78-.6 5.4 6.73 5.8-8.7.83.55-5.7 8.6 6.3-.38.06 1-6.1.38 5.45 6.8-.8.63-5.73-7.2-5.44 8.17-.82-.56 5.14-7.7zm.7-1.05l-.45.03.24.3.2-.33zm1.03.28l-.46.7.97-.07-.5-.63zm-1.72.77l1.05-.06.13.2.12-.2h-.26l-.53-.63-.5.72zm2-1.13l-.5.04-.4-.5-.36.54.77-.04.26.32.24-.36z" mask="url(#mask-2)" transform="rotate(30 104.594 271.05)"/>
          <path id="star-two" stroke="#FFF" d="M320.3 214.07l-7.67.48-.07-1 8-.5-5.36-6.7.78-.6 5.4 6.73 5.8-8.7.83.55-5.7 8.6 6.3-.38.06 1-6.1.38 5.45 6.8-.8.63-5.73-7.2-5.44 8.17-.82-.56 5.14-7.7zm.7-1.05l-.45.03.24.3.2-.33zm1.03.28l-.46.7.97-.07-.5-.63zm-1.72.77l1.05-.06.13.2.12-.2h-.26l-.53-.63-.5.72zm2-1.13l-.5.04-.4-.5-.36.54.77-.04.26.32.24-.36z" mask="url(#mask-2)" transform="rotate(30 320.594 213.05)"/>
          <path id="star-three" stroke="#FFF" d="M462.72 337.02l-7.7.48-.05-1 8-.5-5.36-6.7.8-.6 5.4 6.73 5.8-8.7.85.55-5.75 8.6 6.3-.38.05 1-6.1.38 5.46 6.8-.8.63-5.73-7.15-5.43 8.16-.84-.56 5.13-7.7zm.7-1.05l-.46.03.24.3.22-.33zm1.02.28l-.47.7.97-.07-.5-.63zm-1.72.77l1-.06.13.16.12-.18-.25.02-.52-.66-.48.72zm1.95-1.13h-.5l-.4-.5-.35.54.76-.04.26.33.23-.36z" mask="url(#mask-2)"/>
          <path id="star-four" stroke="#FFF" d="M692.75 387.3l-7.7.48-.05-1 8-.5-5.36-6.7.78-.6 5.4 6.72 5.8-8.7.83.55-5.75 8.62 6.3-.4.06 1-6.08.4 5.44 6.8-.78.62-5.75-7.2-5.48 8.12-.83-.55 5.13-7.7zm.7-1.05l-.46.03.2.3.22-.33zm1.02.27l-.46.7 1-.06-.5-.64zm-1.72.78l1-.07.14.17.1-.18h-.27l-.53-.64-.47.72zm1.95-1.13l-.5.03-.4-.5-.35.55.76-.05.3.32.23-.35z" mask="url(#mask-2)" transform="rotate(60 693.03 386.277)"/>
        </g>

        <circle id="sun" cx="499" cy="481" r="127" fill="#FFF688" mask="url(#mask-2)"/>

        <g mask="url(#mask-2)">

          <g id="mountains">
            <g id="mountain-one" transform="translate(68 323)">
              <mask id="mask-7" fill="#fff" >
                <use xlink:href="#path-6"/>
              </mask>
              <use fill="#DDE9EC" xlink:href="#path-6"/>
              <path id="snow" fill="#FFF" d="M137.5 82.8c24.7-18 59.2-18 103.4 0s76 15.8 95-6.8l-76-98L137 83z" mask="url(#mask-7)"/>
            </g>
            <g id="mountain-two" transform="translate(-27 271)">
              <mask id="mask-9" fill="#fff">
                <use xlink:href="#path-8"/>
              </mask>
              <use fill="#CEDDE0" xlink:href="#path-8"/>
              <path id="snow" fill="#FFF" d="M122 97.4c21.8-21.3 52.3-21.3 91.5 0 39 21.4 67.3 18.7 84.6-8L231-26 122 97.3z" mask="url(#mask-9)"/>
            </g>
          </g>

          <g id="hills">
            <path id="hill-one" fill="#B6D788" d="M336 663c23.3-88 72.7-132.4 148-133 75.3-.5 121.7 43.8 139 133H336z"/>
            <path id="hill-two" fill="#C5EA7D" d="M171 596c20.8-67.6 64.8-101.6 132-102 67.2-.4 108.5 33.6 124 102H171z"/>
            <path id="hill-three" fill="#D7F1A4" d="M-61 610c29.3-106 91-159.3 185.6-160 94.4-.7 152.7 52.7 174.4 160H-61z"/>
            <path id="hill-four" fill="#D7F1A4" transform="translate(480 465)" d="M0 160C29.3 54 91 .7 185.6 0 280-.7 338.3 52.7 360 160H0z"/>
          </g>

          <path id="sand" fill="#FEFFDA" d="M-49.8 615c63-39 84-46 218-46S290 572 424 580s167.2-19 271.2 0c69.3 12.7 135.3 5 198-23l-408 298h-266C-32.4 739.7-122 659.7-49.8 615z"/>

          <path id="water-2" fill="#65CFD2" fill-opacity="0" d="M9 634.6c-79.3-31.4-77-42.3 7-32.6 126 14.5 239 27.5 350 13s264 0 359 15c63.3 10 101.7.7 115-28L580 870H235L9 634.7z"/>

          <path id="water" fill="#65CFD2" d="M9 634.6c66.7-19.3 142-24.2 226-14.5 126 15 225 15 336 0 74-9 154-4 240 15L580 870H235L9 634.7z"/>

        </g>

        <path id="nighttime-overlay" fill="url(#nighttime-gradient)" fill-opacity=".5" d="M-20-20h860v860H-20z" style="mix-blend-mode:multiply" opacity="0" mask="url(#mask-2)"/>

        <circle id="moon" cx="-85.5" cy="300.5" r="61.5" fill="#FFF" mask="url(#mask-2)" opacity=".9"/>

        <path id="cloud" fill="#FFF" d="M522.6 164.7c-21.5 0-40 12.6-44.7 30h-1c-19 0-34 13-34 28.8v.7c0 16 15 28.8 34 28.8h174c19 0 34-13 34-28.8v-.7c0-15.5-15-28.3-33-28.8.2-2.7.4-5.3.4-8 0-30.7-29.5-55.7-66-55.7-26.4 0-50.2 13.5-60.4 34l-4-.3z" mask="url(#mask-2)"/>

      </g>

      <mask id="mask-13" fill="#fff">
        <use xlink:href="#path-12"/>
      </mask>

      <g id="border">
        <use id="border-one" stroke="#D6E1E2" stroke-width="50" xlink:href="#path-12"/>
        <use stroke="#FFF" stroke-width="16" xlink:href="#path-12"/>
      </g>

    </g>

  </svg>

</div>

```
### Css Code:-
```CSS
*,
*::before,
*::after {
  box-sizing: border-box;
}

body {
  margin: 0;
  padding: 0;
}

.container {
  display: flex;
  align-items: center;
  justify-content: center;
  min-height: 100vh;
}

svg {
  max-width: 42rem;
  max-height: 42rem;
  width: 100%;
  height: auto;
}
```
**However, if you're using your own SVG you'll need to make sure that all of the elements have unique IDs**

### **STEP 2-**Create the first timeline
<br>
GSAP offers two timeline types: TimelineLite and TimelineMax. The TimeLineMax version offers access to additional features, such as the ability to repeat animations, as well as playing them in reverse among others. Our first timeline will be the water, which we will repeat infinitely and yoyo back and forth

#### JAVASCRIPT code:-

```JAVASCRIPT
// Timeline Setups
var animation_water = new TimelineMax({
  repeat: -1, 
  yoyo: true
});

```
### **STEP 3-** Create the first animation

<br>
In order to animate the water we have another path in our SVG, hidden with a '0' opacity. We'll utilise the morphSVG plugin to transform our original water path into the new water path. We'll move the water element '12px' down on the y-axis. The two numbers at the end of the property represent the delay and the start times respectively.

```JAVASCRIPT
// Water Animation
animation_water
  .to("#water", 2, {
  y: 12, 
  morphSVG:"#water-2", 
  ease:Linear.easeNone
  }, 0 , 0)
;
```

### **STEP 4-**  Reusable properties
Since we will be reusing a number of properties and values a number of times we're going to create variables for these properties.
<br>

```JAVASCRIPT
var animation_ease = Linear.easeNone;
```
### **STEP 5-** Console logging
The GSAP library offers us the ability to get a number of properties from any given timeline. We can log these in the console to make sure that everything is working as we expect it to.
<br>

```JAVASCRIPT
console.log(
  'animation_water duration: ' 
  + animation_water.duration()
  .toFixed(2)
);
```
### **STEP 6-** Cloud timeline and console log
For every element we wish to animate separately and constantly, we need to create a new timeline. We also want to log that timeline in the console as we go.
<br>

```JAVASCRIPT
var animation_cloud = new TimelineMax({
  repeat: -1, 
  yoyo: true
});
console.log( '\n' + 
  ...	
  animation_cloud.duration().toFixed(2) + ' \n'
);
```
### **STEP 7-** Cloud animation
For every element we wish to animate separately and constantly, we need to create a new timeline. We also want to log that timeline in the console as we go.
<br>

```JAVASCRIPT
animation_cloud
  .to("#cloud", 3, { x: -2, y: 1, scale: 0.95, rotation: 1, ease: animation_ease}, 0, 0)
;
```
### **STEP 8-** Create the night time animation
Next, we'll start to create our day-to-night animation. We'll create a variable for the cycle time and the day. The 'yoyo' setting in GSAP also enables to us to delay the animation before repeating. 

<br>

```JAVASCRIPT
var day_night_cycle_time = 15;
var animation_delay = day_night_cycle_time / 2;
var animation_toNight = new TimelineMax({
  repeat: -1,
  yoyo: true,
  repeatDelay: animation_delay
});
```
### **STEP 9-** Animate the overlay layer
Inside our SVG we have an overlay layer made of a rectangle covering the entire image with the same background gradient as our night-time background. The overlay applies the 'multiply' blend mode in order to darken the entire image. Our animation simply transitions the opacity of this element. . 

<br>

```JAVASCRIPT
animation_toNight
  .to('#nighttime-overlay', 
  day_night_cycle_time, {
  opacity: 1, 
  ease: animation_ease
  }
  , 0 , 0)
;
```
### **STEP 10-** Animate the gradient
GSAP offers other tweens on top of the common 'to' and 'from' types. The tween type we need in order to animate our gradient is the 'staggerTo' tween. We can also use the 'cycle' property in order to rotate the colour wheel around to our new values. 

<br>

```JAVASCRIPT
.staggerTo('#daytime-gradient stop', 
  day_night_cycle_time, {
  cycle:{
  stopColor: ['#060414','#416584']
  },
  ease: animation_ease,
}, 0 , 0)
```
### **STEP 11-** Animate the sun
We can keep adding animations to our 'toNight' animation. This time we'll add a new 'to' tween in order to set our sun. We'll set the display time to be a fraction of the cycle time in order to animate the sun before the moon. GSAP enables us to set almost any attribute. We'll use this in order to animate the 'cx' and 'cy' properties to below the hill on the right.
<br>

```JAVASCRIPT
.to('#sun', day_night_cycle_time / 1.25, {
  scale: 0.9, 
  attr:{cx:"753", cy:"697"}, 
  ease:animation_ease}
, 0, 0)
```
### **STEP 12-** Animate the moon
We'll use the same technique we used to animate the sun out of view (see Step 11 above) in order to animate the moon into view. We could achieve this using one tween, of course, but in order to create a faux arc we'll do this is in two parts. In both parts we're also going to apply a new value to the scale property. 
<br>

```JAVASCRIPT
.to('#moon', day_night_cycle_time / 2, {
  scale: 0.9, 
  attr:{cx:"174.5", cy:"202.5"}, 
  ease:animation_ease}
, 0 , 0)
animation_toNight
  ...
  .to('#moon', day_night_cycle_time / 2, {
  scale: 0.9,
   attr:{cx:"410.5", cy:"114.5"}, 
  ease:animation_ease}
  , day_night_cycle_time / 2, 0)
;
```
### **STEP 13-** Animate the stars
The only part left of our day-to-night animation are the stars. We'll animate the stars into view by transitioning a number of properties. The first of them is to simply bring them into view by animating their opacity.
<br>

```JAVASCRIPT
.to('#stars', day_night_cycle_time/2, 
  {opacity: 1}, 
  day_night_cycle_time/2, 
0)
.from("#stars", 
  day_night_cycle_time - (day_night_cycle_time / 4), 
  {y: 150, rotation: -15, ease: animation_ease}, 
  day_night_cycle_time / 4, 
0)
```
### **STEP 14-**  Create the stars timeline and the console log
Now we've created our day-to-night animation, we can create another constant animation to make our stars blink. We'll create the new timeline and then log the timeline duration in the console.
<br>

```JAVASCRIPT
var animation_stars = new TimelineMax({
  repeat: -1, 
  yoyo: true
});
```
### **STEP 15-**   Make the stars blink
Now we've created the timeline ready for animation, we need to create our blinking animation. The animation is really simple – all we want to do is reduce the opacity value. Thanks to the 'yoyo' property, the opacity will animate on and off and so will make the stars look like they are blinking.

<br>

```JAVASCRIPT
animation_stars
  .to("#stars", 0.5, 
  {opacity: 0.5, ease: animation_ease}
, 0, 0)
;
```
### **STEP 16-** Delay the blinking
In the last step we're targeting the stars group in order to apply our blinking animation, however it would look much better if the stars were to blink one at a time instead of together at the same time. We achieve this by targeting each star separately and applying a different animation. 

<br>

```JAVASCRIPT
animation_stars
  …
  .to("#star-two", 0.5, 
  {opacity: 0.5, ease: animation_ease}
  , 1.25, 0)
  .to("#star-three", 0.5, 
  {opacity: 0.5, ease: animation_ease}
  , .75, 0)
  … ;
```
### **STEP 17-** Add snow
That's it! Our day-to-night cycling animation is finished and it looks awesome, but we don't have to stop there. Since the image is in SVG we can easily add new elements to our landscape. Let's add some snow. We'll do this using two separate layers. Each layer has a collection of ellipses large enough to cover the landscape and then the same collection repeated above.
<br>

```HTML
<g id="snow-bottom-layer" …>
  ...
  <ellipse …/>
</g>
<g id="snow-top-layer" …>
  ...
  <ellipse …/>
</g>
```
### **STEP 18-**  Create the snow timelines
We create two separate timelines for our snow in order to be able to animate them over different durations. We'll also log their durations to the console. 
<br>

```JAVASCRIPT
var animation_snowTop = new TimelineMax({
  repeat: -1,
  repeatDelay: 0
});
var animation_snowBottom = new TimelineMax({
  repeat: -1,
  repeatDelay: 0
});
```
### **STEP 19-**Animate the snow
In order to animate our snow layers we want to move the two layers along the vertical axis. By differing their durations we will get the appearance of the layers moving at different speeds. The animation works by moving the collection of ellipses along the vertical axis until the second collection is in place of the first. We then repeat the animation.
<br>

```JAVASCRIPT
animation_snow
  .to("#snow-top-layer", 7, 
  {attr: {transform: "translate(24 -108)"}
  , ease: animation_ease}
, 0, 0)
;
```

**To see the final animation you can see on the below link**
<br>
[SVG Animation](https://codepen.io/matchboxhero/pen/dZYOjP)



### **Benefits of using SVG's in website instead of images.**

<hr>
 1 *Scalability* – Vector images are resolution-independent and can scale to any dimension without losing quality. Browsers just recalculate the math behind the image so there is no distortion. Raster images on the other hand lose their resolution when enlarged because their small pixels are forced to expand beyond their original size.

 2.*Interactivity* – Hyperlinks and virtually any kind of animation can be added via styling and scripting.

 3.*Easily editable*– Editing an SVG is as easy as changing the coordinates or a word in a text editor or coding the SVG onto your webpage and altering it with JavaScript or CSS. You can also use popular vector graphics editing software such as Adobe Illustrator, Corel Draw, and Sketch.

4.*Compact file-size* – Pixel-based images are saved at a large size from the start because you can only retain the quality when you make the image smaller, but not when you make it larger. This can impact a site’s download speed. Since SVGs are scalable, they can be saved at a minimal file size.

5.*SEO friendly* – SVG images are defined in XML text files, so key words and descriptions can be used and more easily recognized by search engines. With raster images, you are limited to the title or alt attribute of your fil

<hr>
