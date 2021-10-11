# ANIMATION DURATION
  
   The animation-duration property is used to specify how long the animation cycle should take. The time is specified in seconds or milliseconds, and is initially set to '0s', which means that the animation occurs instantaneously. You can specify one duration or multiple comma-separated durations
	 
### SYNTAX
     
		 animation_duration = <time>
		 
## CHANGE IN ANIMATION TIME USING KEYWORDS
 
 In CSS animations, the animation-timing-function property controls how quickly an animated element changes over the duration of the animation. If the animation is a car moving from point A to point B in a given time (your animation-duration), the animation-timing-function says how the car accelerates and decelerates over the course of the drive.

There are a number of predefined keywords available for popular options. For example, the default value is ease, which starts slow, speeds up in the middle, and then slows down again in the end. Other options include ease-out, which is quick in the beginning then slows down, ease-in, which is slow in the beginning, then speeds up at the end, or linear, which applies a constant animation speed throughout.

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

### OUTPUT
    below video shows the change in animation time using the keyword.
    
### REFERENCE
       [Refernce link 1](https://www.freecodecamp.org/)
