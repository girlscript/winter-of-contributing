# CSS ANIMATION :--

CSS(Cascading Style Sheets) is basically used to add designs and animations in the web pages without using JavaScript or Flash and make it more attractive to the users.

<br/>

*   CSS Animation Properties :--


> 1. The first and the most important property of CSS Animation is **@keyframes** which is used to specify animation type. For example if the animation name is **First-Animation** then we need to write 


```
 @keyframes First Animation { css styles }

```
<br/>

> 2. **Animation Delay** is another property which specify the starting timing of Animation.



```
div{
    animation-delay: 5s;
}

```
<br/>

> 3. **Animation Duration** specify the timing for animation to complete once. It is also denoted in seconds.

```
div{
    animation-duration: 10s;
}

```
<br/>

> 4. **Animation Direction** specify the direction of the animation such as forward, backward, alternate, reverse-alternate.

```
div{
    animation-direction: normal/reverse/alternate/alternate-reverse;
}

```

<br/>

> 5. **Animation Iteration Count** specify the number of times the animation played.

```
div{
    animation-iteration-count: 10;
}

```

<br/>

> 6. **Animation Timing Function** specify the speed type the animation played.

```
div{
    animation-timing-function: linear/ ease/ ease-in/ ease-out/ ease-in-out;
}

```
<br/>

**<h2>Shorthand property:--</h2>**

Those animation properties which is discussed before can be easily written in a single line which includes all the animation properties.



```
div {
  animation: animation-name animation-duration animation-timing-function animation-delay animation-iteration-count animation-direction;
}

```
```
div{
  animation: first-animation 10s linear 5s infinite alternate;
}
```
<br/>
<h3>For Example</h3>
Let's make a square and then it converts a circle and then back to square and color changes everytime.

```
<!DOCTYPE html>
<html>
    <title>Web Page Design</title>
        <head>
            <style>
                div
                {
                   width:100px;
                   height:75px;
                   background-color:orange;
                   animation:first 10s linear 2s infinite alternate;
                }
                @keyframes first{
                    0%{
                       background-color:orange;
                    }
                    50%{
                        background-color:blue;
                        border-radius:50%;
                    }
                    100%{
                        background-color:green;
                    }
                }
            </style>
        </head>
    <body>
        <div></div>
    </body>
</html>

```

> To see the preview of this code click here : ---> 
[link demo](http://tpcg.io/5ZBIE1)
