# CSS Transitions:
CSS transitions allows one to change values of a property smoothly, over a given time duration.

Following are the methods in css transitions:
* transition
* transition-delay
* transition-duration
* transition-property
* transition-timing-function

To create a transition effect, you need to specify two things:
* the property you want to add the effect to
* the duration/timing of the effect

```css
div {
  width: 50px;
  height: 50px;
  background: blue;
  transition: width 3s;
}
```
```css
div:hover {
  width: 300px;
}
```

## Change Multiple Property Values <br>
The transition property is specified as one or more single-property transitions, separated by commas.

```css
div {
  transition: width 2s, height 4s;
}
```
## Selecting all properties <br>
transition-property takes a special value: `all`. When all is specified, any CSS property that changes will be transitioned.

```css
div{
transition: all 2s; 
}
```

## Transition Timing function<br>
The transition-timing-function property specifies the speed curve of the transition effect.
This property can have the following values:

* ease -Transition effect with a slow start, then fast, and then ends slowly (default)
* linear - Transition effect with same speed from start to end
* ease-in - Transition effect with slow start
* ease-out - Transition effect with slow end
* ease-in-out - Transition effect with slow start and end
* cubic-bezier(n,n,n,n) - lets you define your own values in a cubic-bezier function



