<h1 align="center">KeyFrames in CSS</h1>

---
<h2>Introduction: </h2>
<p>In this document we'll get to know what is <a href="https://www.w3schools.com/css/css_intro.asp">CSS</a> and what is <a href="https://www.w3schools.com/cssref/css3_pr_animation-keyframes.asp">KeyFrames </a> in CSS.</p>

- CSS stands for Cascading Style Sheets.
- It is used to add design to our static HTML web pages. For example we can change our HTML page's layout and how it will appear on different screens using CSS.
- You can add CSS syntax in your current HTMl document. However, if you choose to write CSS syntax and store it in different files then you need to import that file to your 
  main HTML file to make it functinoal. <br>
  `<link rel="stylesheet" href="css/style.css">` <br> In that case you need to add this line to your HTML page.

---
<h2>What is KeyFrames in CSS?</h2>

- The `@keyframes` rule in CSS specifies the animation.
- The @keyframes CSS at-rule controls the intermediate steps in a CSS animation sequence by defining styles for keyframes (or waypoints) along the animation sequence. This gives
  more control over the intermediate steps of the animation sequence than transitions.
---
<h2>Uses</h2>
<p>To use @keyframes, you have to follow these statements.</p>

- You have to add the statement `animation-name: your-animation-name;` in any of the css class or id in which you want to apply animation.
- You have to write `@keyframes` and your animation name which you have specified earlier in css code. This is to make sure that your animations are applied only to a desired 
  target.
- The animation is created by changing gradually from one set of CSS rules to another set of CSS rules.
- During animation, you can change the css styles many times according to your wish.
- You have to specify when the style change will take place using the keywords `from` and `to` and using percentage values such as `0%`, `50%`, `75%`, `100%` and 
  custom percentages.
- For example, here is a demo code: <br>
 ``` 
 @keyframes my-animation {
  0%   {top: 0px;}
  25%  {left: 200px;}    (you can add or remove any css rules according to your convinience)
  50%  {bottom: 100px;}
  75%  {margin: 20px;}
  100% {padding: 50px;}
}
```
- before adding `@keyframes` to your animation, you need to create an animation name and after that add animation effects by using `@keyframes` to that name.
- For example, here is another demo code: <br>

 ``` 
 .class-name {
  add any css here
  display: flex;
  margin: 0;
  padding: 2rem;
  
  animation-name: my-animation;   //You should add this line which specifies your animation name.
}
```

### Property Values: 

| Value | Description |
| --- | --- |
| animation-name | Required - defines animation name |
| keyframes-selector | Required - pcentage of animation duration |
| Keyframes Values | 0-100%, from (same as 0%), to (same as 100%) |
| Note | You can have many keyframes-selectors in one animation |
| CSS-Styles | Required - Minimum one or more CSS style properties |

---
<h2>Examples: </h2>

- Changing many css styles in one animation:
```
@keyframes my-animation {
  0%   {top: 0px; background: red; width: 100px;}
  100% {top: 200px; background: yellow; width: 300px;}
}
```
- Many keyframe selectors with many CSS styles:
```
  @keyframes my-animation {
  0%   {top: 0px; left: 0px; background: red;}
  25%  {top: 0px; left: 100px; background: blue;}
  50%  {top: 100px; left: 100px; background: yellow;}
  75%  {top: 100px; left: 0px; background: green;}
  100% {top: 0px; left: 0px; background: red;}
}
```

- The !important rule is ignored in a keyframe::
```
 @keyframes myexample {
  from {top: 0px;}
  50%  {top: 100px !important;} /* ignored */
  to   {top: 200px;}
}
```
> You can play around with various css properties to create more amazing animations
---

<h4>Thank You</h4>
<p>By: Aditya Arpan Sahoo (<a href="https://github.com/arpanaditya">@arpanaditya</a>)</p>
