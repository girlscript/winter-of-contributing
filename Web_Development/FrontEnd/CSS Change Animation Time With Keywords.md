# ANIMATION DURATION
   The animation-duration property is employed to specify however long the animation cycle ought to take. The time is laid out in seconds or milliseconds, and is at the start set to '0s', which suggests that the animation happens in a flash. you'll specify one length or multiple comma-separated durations
	 
## SYNTAX
     
		 animation_duration = <time>
		 
### CHANGE IN ANIMATION TIME USING KEYWORDS
 
 In CSS animations, the animation-timing-function property controls how quickly an animated element changes over the duration of the animation. If the animation is a car moving from point A to point B in a given time (your animation-duration), the animation-timing-function says how the car accelerates and decelerates over the course of the drive.

There are some  predefined keywords available for animation speed. For example :-
1) EASE - It starts slow and takes speed in the middle and at the last slow down.It is default value.
2) EASE-OUT - It is fast at the start and slow down for the remaining process.
3) EASE-IN - It is slow at the start and spped up at the end.
4) LINEAR - It is constant throughout the period of animation.


### CODE

```html

<style>

  .balls {
    border-radius: 50%;
    background: linear-gradient(
      35deg,
      #ccffff,
      #ffcccc
    );
    position: fixed;
    width: 50px;
    height: 50px;
    margin-top: 50px;
    animation-name: bounce;
    animation-duration: 2s;
    animation-iteration-count: infinite;
  }
  #ball1 {
    left:27%;
    animation-timing-function : linear;
  }
  #ball2 {
    left:56%;
    animation-timing-function : ease-out;
  }

  @keyframes bounce {
    0% {
      top: 0px;
    }
    100% {
      top: 249px;
    }
  }
  
</style>

<div class="balls" id="ball1"></div>
<div class="balls" id="ball2"></div>

```

### OUTPUT
   The below gif shows the change in animation time using the keyword.
  
  ![image](https://user-images.githubusercontent.com/54473091/137640119-1303a942-1e64-4bd7-8e53-7701ec18b182.gif)
  
  The given [video](https://user-images.githubusercontent.com/54473091/139291091-4f21b184-e087-4f45-8355-75977c775bae.mp4) display the output.
   
  For the elements with id of ball1 and ball2, add an animation-timing-function property to each, and set #ball1 to linear, and #ball2 to ease-out. we have to notice the difference between how the elements move during the animation but end together, since they share the same animation-duration of 2 seconds.

### REFERENCE

  1) [Free Code Camp](https://www.freecodecamp.org/learn/responsive-web-design/applied-visual-design/change-animation-timing-with-keywords)
  2) [w3schools](https://www.w3schools.com/cssref/css3_pr_animation-duration.asp)
   
