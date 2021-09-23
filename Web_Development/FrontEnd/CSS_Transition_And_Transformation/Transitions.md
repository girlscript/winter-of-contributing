# CSS Transitions:
![transitions-animations](https://user-images.githubusercontent.com/70155541/134525113-dcad46fa-31df-4312-ba5a-ebc7a1466a7d.gif)


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
transition-property takes a special value: `all`. When all is specified, all CSS transition properties will start move.

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
* cubic-bezier(n,n,n,n) - lets you define your own values in a cubic-bezier function.


![transition1](https://user-images.githubusercontent.com/70155541/134521015-728ab242-f1d0-45e8-b47e-b0587d7cd5fd.gif)

Code For different transition prpoerties: <br>
```css
div {
  width: 50px;
  height: 50px;
  background: yellow;
  transition: width 2s;
}

#div1 {transition-timing-function: linear;}
#div2 {transition-timing-function: ease;}
#div3 {transition-timing-function: ease-in;}
#div4 {transition-timing-function: ease-out;}
#div5 {transition-timing-function: ease-in-out;}

div:hover {
  width: 200px;
}
```

## Transition Delay <br>
This property specifies a delay (mostly in seconds) for the transition effect to take place.

```css
div {
  transition-delay: 3s;
}  /*Delays transition by 3 sec*/
```

## Using Transitions in transform 
```css
div {
  width: 50px;
  height: 50px;
  background: red;
  transition: width 2s, height 2s, transform 2s;
}

div:hover {
  width: 200px;
  height: 200px;
  transform: rotate(180deg);
   background-color:blue;
}
```

![trans_3](https://user-images.githubusercontent.com/70155541/134523796-bcb5ddce-f6ea-4c58-9bdb-0051ab1a8a54.gif)



