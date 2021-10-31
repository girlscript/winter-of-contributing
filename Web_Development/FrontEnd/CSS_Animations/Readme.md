# Animations in CSS
![](animation.png)

__[Banner Image Credits](https://www.litmus.com/wp-content/uploads/2020/04/a-simple-guide-to-understanding-css-animations-in-email.png)__

## What is an animation?
An animation is the effect applied to a webpage's elements that makes them change overtime.
An element's styling is governed by CSS, hence animation is nothing but
_changing an element's CSS properties overtime_.

## Animation properties
Various animation properties helps you change different aspects of the animation.
- @keyframes
- animation-name
- animation-duration
- animation-delay
- animation-iteration-count
- animation-direction
- animation-timing-function
- animation-fill-mode
- animation

#### @keyframes tag
This tag is to define what all changes in the CSS will take place.
```CSS
@keyframes first-animation{
    from { background-color: red; }
    to { background-color: yellow; }
}
```
Or alternatively,
```CSS
@keyframes first-animation{
    0% { background-color: red; }
    100% { background-color: yellow; }
}
```

#### animation-name
This property is to assign one of such `keyframes` animation block to your CSS selectors.
```CSS
.mydiv{
    animation-name: first-animation;
}
```

#### animation-duration
This property is to define the time duration of one cycle of the animation.
```CSS
.mydiv{
    animation-name: first-animation;
    animation-duration: 2s;
}
```

> These three are the basic tags you would need to setup a simple animation
_For example, check this code below_
```CSS
@keyframes first-animation{
    0% { background-color: red; }
    100% { background-color: yellow; }
}
.mydiv{
    animation-name: first-animation;
    animation-duration: 2s;
}
```
Now as the code suggests, any element with `class='mydiv'` will undergo the change of
_background-color from red to yellow, over 2 seconds of time period_.

<img src="1_red_to_yellow_animation.gif" width="350px">

> You can play around with various CSS properties to make different effects as per requirements.

___An example of a fade-in animation___
```HTML
<div class="animated-block">
    Welcome to my Page
</div>
```

```CSS
@keyframes fade-in-animation{
  from{ 
    margin-top: 50px;
    opacity: 0.5;
  }
  to{
    margin-top: 0;
    opacity: 1;
  }
}
.animated-block{
  animation-name: fade-in-animation;
  animation-duration: 1s;
}
```

<img src="2_simple_fadein_animation.gif" width="350px">

#### animation-delay
This property is to add a delay to the animation start.
By default it's equal to 0, hence the animation runs on page load directly.
```CSS
.mydiv{
    animation-name: first-animation;
    animation-duration: 2s;
    animation-delay: 5s;
}
```
> The animation will start 5 seconds after the page load

<img src="3_delayed_animation.gif" width="350px">

#### animation-iteration-count
This property is to assign how many times the cycle of animtion will run
By default it's equal to 1.
```CSS
.mydiv{
    animation-name: first-animation;
    animation-duration: 2s;
    animation-iteration-count: 5;
}
```
> The animation will run 5 times

To make the animation run over and over again, you can set the property to `infinite`

<img src="4_5_iterated_animation.gif" width="350px">

```CSS
.mydiv{
    animation-name: first-animation;
    animation-duration: 2s;
    animation-iteration-count: infinite;
}
```

#### animation-direction
This property is to assign the direction for the animation
It can have the following values:
- __normal__ : (Default state) animation runs forward like normal.
- __reverse__ : animation runs in the reverse direction, i.e. the later part will be played first.
- __alternate__ : animation runs first in normal direction, then reverse.
- __alternate-reverse__ : animation runs first in reverse direction, then normal.
```CSS
.mydiv{
    animation-name: first-animation;
    animation-duration: 2s;
    animation-direction: reverse;
}
```
Or
```CSS
.mydiv{
    animation-name: first-animation;
    animation-duration: 2s;
    animation-iteration-count: 3;
    animation-direction: alternate;
}
```

<img src="5_reversed_animation.gif" width="350px">

#### animation-timing-function
This tag is to specify the speed curve of an animation
It can have the following values:
- __ease__ : (Default state) slow start of the animation, then fast, then ending slowly.
- __linear__ : same speed of the animation from start to end.
- __ease-in__ : slow start of the animation, then regular speed.
- __ease-out__ : regular speed with a slow ending.
- __ease-in-out__ : slow start of the animation, then regular speed, then ending slowly.
- __cubic-bezier(n,n,n,n)__ : lets you define your own values in a cubic-bezier function.
```CSS
.mydiv{
    animation-name: first-animation;
    animation-duration: 2s;
    animation-timing-function: linear;
}
```
Or, 
```CSS
.mydiv{
    animation-name: first-animation;
    animation-duration: 2s;
    animation-timing-function: ease-out;
}
```

<img src="6_linear_timed_animation.gif" width="350px">

#### animation-fill-mode
This tag is to specify a style for the target element when the animation is not playing (i.e. before it starts, after it ends, or both).
It can have the following values:
- __none__ : (Default state) animation will not apply any style before or after executing it.
- __forwards__ : the element will retain the properties of the last keyframe after running.
- __backwards__ : the element will get the properties of the first keyframe before running.
- __both__ : the element will both, get and retain the properties of the first and last keyframe respectively.
```CSS
.mydiv{
    animation-name: first-animation;
    animation-duration: 2s;
    animation-fill-mode: forwards;
}
```
> The element will retain the yellow color after runnning

Or,
```CSS
.mydiv{
    animation-name: first-animation;
    animation-duration: 2s;
    animation-fill-mode: backwards;
}
```
> The element will get the red color before running

<img src="7_forward_filled_animation.gif" width="350px">

#### animation
This is the shorthand way to write all the above mentioned animation properties under one single property tag.
```CSS
.mydiv{
    animation-name: first-animation;
    animation-duration: 5s;
    animation-delay: 2s;
    animation-iteration-count: infinite;
    animation-timing-function: linear;
    animation-direction: alternate;
}
```
This code block is equivalent to
```CSS
.mydiv{
    animation: first-animation 5s linear 2s infinite alternate;
}
```
> This comes very handy when you have to use only a few of the properties, or even all at once.
> It also makes the code look a lot cleaner.

<img src="8_shorthand_animation.gif" width="350px">

 ___A simple infinite scrolling animation (like that of a headline news)___

```HTML
<div class="news">
  Important News Bar
</div>
```

```CSS
body{
  overflow-x: hidden;
}
@keyframes news-slider-animation{
    from{ margin-left: -100%; }
    to{ margin-left: 100%; }
}
.news{
    animation: news-slider-animation 15s infinite linear;
    position: absolute;
    width: 100%;
    background: red;
    color: white;
    text-align: center;
    font-size: 30px;
}
```

<img src="9_imp_news_animation.gif" width="100%">

> Thanks for reading
> 
> Author: [Ayush Verma](https://github.com/ayush02av)