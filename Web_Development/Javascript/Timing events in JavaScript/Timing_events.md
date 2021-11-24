# Timing Events in JavaScript
- The execution of a code is done at particular time intervals .These time intervals are called **Timing events**.
- There are two native functions in JS library to achieve it. 

    1. setTimeout(function,milliseconds)
    2. setInterval(function,milliseconds)
- ## setTimeout()
  - The setTimeout(function,milliseconds) method calls function after the specified time.
  - The function is executed once.
- ## setInterval()
  - The setTimeout(function,milliseconds) method calls function at every given interval.
  - The function is called after every given interval and the execution will be continued until cleared.
- To stop the timer - 
  1. clearTimeout(setTimeout variable)
  2. clearInterval(setInterval variable)
 