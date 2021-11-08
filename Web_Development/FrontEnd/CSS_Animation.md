# CSS Animation
This is the property of CSS in which we can element gradually from one state to another as many times you want and you can also specify the keyframes in animation.

## Elements of Animation
1. **Keyframes:-** Keyframes are used when we have to specify the specific points where the object changes its state the that's why animation will gradually change from the current style to the new style certain times.
```css
@keyframes GWOC {
  0%   {background-color: green;}
  25%  {background-color: cyan;}
  50%  {background-color: black;}
  75%  {background-color: purple;}
  100% {background-color: yellow;}
}
```

2. **Animation Delay :-** It delays the starting of the animation.
```css
div {
  width: 200px;
  height: 200px;
  position: relative;
  background-color: green;
  animation-name: GWOC;
  animation-duration: 6s;
  animation-delay: 3s;
}
```

3. **Animation Iteration Count :-** It specifies number of times the iteration should be repeated.
```css
div {
  width: 200px;
  height: 200px;
  position: relative;
  background-color: green;
  animation-name: GWOC;
  animation-duration: 6s;
  animation-delay: 3s;
  animation-iteration-count: 5;
}
```

4. **Animation Fill Mode :-**  This property specifies the style of the target element before the starting of the animation.
### Values in this attribute :
1. **none :** This is the default one no style is applied in this before starting of animation.
2. **forwards :** In this property element will retain the style values that is last set by the keyframe.
3. **Backwards :** The element will occupy the style that is set by the first keyframe in the delay time period.
4. **Both :** In this property both forward and backward property value follows.

```css
div {
  width: 200px;
  height: 200px;
  background: cyan;
  position: relative;
  animation-name: GWOC;
  animation-duration: 6s;
  animation-fill-mode: both;
}
```

5. **Curve Speeding :** It basically specifies the speed of the animation in starting , ending or in between.
### Properties
1. **ease :** The animation slow in starting , also the end slowly (This is default property).
2. **linear :** Starting and ending of animation be in same speed.
3. **ease-in :** Animation start slowly.
4. **ease-out :** Animation end slowly.
5. **ease-in-out :** Animation start and end with slow speed .
6. **cubic-beaier(n,n,n,n) :** This function let you to make cubic-bezier function with your values.
```css
div {
  width: 200px;
  height: 200px;
  background: cyan;
  position: relative;
  animation-name: GWOC;
  animation-duration: 6s;
  animation-fill-mode: both;
  animation-timing-function : ease-in;
}
```

6. **Animation Direction :** This property is used when we have to specify the direction of the animation.
### Properties
1. **normal :** The animation is played as normal (This is default one).
2. **reverse :** Animation is played in reverse direction.
3. **alternate :** Animation is played forward in starting , then backward.
4. **alternate-reverse :** Animation is played backward in starting , then forward.

```css
div {
  width: 200px;
  height: 200px;
  background: cyan;
  position: relative;
  animation-name: GWOC;
  animation-duration: 6s;
  animation-direction: alternate-reverse;
}
```
## Animation Shorthand Property
All above animation effect and their property can be easily achieved by using the shorthand animation property in a single line .
```css
div {
  animation: GWOC 6s ease-in 3s infinite reverse;
}
```
