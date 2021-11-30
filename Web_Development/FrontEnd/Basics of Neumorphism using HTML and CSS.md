# 1. What is Neumorphism?
  A very popular UI design trend, Neumorphism, (here, structured by HTML and designed by CSS) gets its name derived from the two words, ‘new’ and ‘skewomorphism’, showcases a design which is a midway of lifeless and realistic presentations. This is achieved using two sets of shadows alternating positive and negative values to the shadow parameter : an outer highlight (which represents the presence of a light source nearby) and an inner shadow (the real shadow), hence giving it a ‘raised’ shape. A nearly ‘plastic’ appearance it obtained.

# 2. What are its uses?
  Card designs, buttons and any other UI which require a raised appearance can be designed using the concept of Neumorphism.
  
# 3. Crucial Factor
  One needs to set a high contrast between the neumorphic object to be designed and the background, in order to get a clear visibility.
  
# 4. Problem with Accessibility
  Let’s consider a use-case; e.g., creating a button. While creating a design for active elements like a button, say in a pressed state, with inverted inner shadows, if the background is not well contrasted with the element, it becomes visually challenging for the user to figure the the element’s actual state. In such cases, using a border or an outline might mark a difference.
  
# 5. Use Case

Let’s design the frontend of a clock using neumorphism using HTML and CSS:

```<!DOCTYPE html>
<html lang="en">
<head>
//Internal CSS
  <style>
//importing a font from google fonts
@import url('https://fonts.googleapis.com/css2?family=Baloo+Tammudu+2&display=swap');
    *{
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}
body{
    display: flex;
    justify-content: center;
    align-items: center;
    min-height: 100vh;
    background: whitesmoke;
}
.clock{
    width: 350px;
height: 350px;
//declaring the parent element as flex in order to position the child elements
    display: flex;
    justify-content: center;
align-items: center;
//link to download the background image is given under ‘references used’
    background: url("images/clock.png");
    background-size: cover;
border: 4px solid whitesmoke;
//creates a circular shape
border-radius: 50%;
// creates outer highlight in upper portion of the clock
box-shadow: 0 -15px 15px rgba(0,0,0,0.3),                   
// creates an inner shadow in the lower portion of the clock
inset 0 -15px 15px rgba(0,0,0,0.3),                         
//creates the thickness of the element from inside          
0 15px 15px rgba(255,255,255,0.05),                         
//creates the thickness of the element from outside         
    inset 0 -5px 15px rgba(255,255,255,0.05);               
}

//creating pseudo-elements : second’s, minute’s and hour’s hand 
.clock:before{
    content: '';
    position: absolute;
    width: 20px;
    height: 20px;
    background: black;
    border-radius: 50%;
    z-index: 1000;
}

.clock .hour,
.clock .min,
.clock .sec{
    position: absolute;
}

.clock .hour, .hr{
    width: 160px;
    height: 160px;
}

.clock .min, .mn{
    width: 190px;
    height: 190px;
}

.clock .sec, .sc{
    width: 230px;
    height: 230px;
}

.hr, .mn, .sc{
    display: flex;
    justify-content: center;
    /* align-items: center; */
    position: absolute;
    border-radius: 50%;
}

.hr:before{
    content: '';
    position: absolute;
    width: 8px;
    height: 80px;
    background: tomato;
    z-index: 10;
    border-radius: 6px 6px 0 0;
}

.mn:before{
    content: '';
    position: absolute;
    width: 4px;
    height: 90px;
    background: black;
    z-index: 11;
    border-radius: 6px 6px 0 0;
}

.sc:before{
    content: '';
    position: absolute;
    width: 2px;
    height: 150px;
    background: black;
    z-index: 12;
    border-radius: 6px 6px 0 0;
}
//making the design available for mobile view by setting media queries
@media screen and (max-width: 400px) {
    .clock{
        width: 180px;
        height: 180px;
        background: url("images/clock2.png");
    }
    .clock:before{
        width: 15px;
        height: 15px;
    }
    .clock .hour, .hr{
        width: 100px;
        height: 100px;
    }
    .clock .min, .mn{
        width: 100px;
        height: 100px;
    }
    .clock .sec, .sc{
        width: 120px;
        height: 120px;
    }
    .hr:before{
        width: 6px;
        height: 50px;
    }
    .mn:before{
        width: 3px;
        height: 62px;
    }
    .sc:before{
        width: 1.5px;
        height: 80px;
    }
}
  </style>
  <meta charset="UTF-8">
  <title>Neumorphic Clock UI</title>
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
  <div class="clock">
    <div class="hour">
      <div class="hr" id="hr"></div>
    </div>
    <div class="min">
      <div class="mn" id="mn"></div>
    </div>
    <div class="sec">
      <div class="sc" id="sc"></div>
    </div>
  </div>
</body>
</html>
```

The clock UI thus created looks like this :

![send3](https://user-images.githubusercontent.com/79986094/134193480-50f81dc0-507d-4a2d-a97f-695205b45559.png)

# 6. References used : 
>1. [https://uxdesign.cc/neumorphism-in-user-interfaces-b47cef3bf3a6](https://uxdesign.cc/neumorphism-in-user-interfaces-b47cef3bf3a6)
>2. [https://www.youtube.com/watch?v=weZFfrjF-k4](https://www.youtube.com/watch?v=weZFfrjF-k4)
>3. [https://drive.google.com/file/d/1DBybco2DjKd4elgxZcJ8-zMRUF0ndIHW/view](https://drive.google.com/file/d/1DBybco2DjKd4elgxZcJ8-zMRUF0ndIHW/view)
