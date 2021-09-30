# Parallax Effect (CSS)

## What is Parallax Effect?

It is a scrolling effect where the **background**(image) and **foreground** content moves at a different speed, which looks attractive to the users. Here is a demo of [Parallax Effect](https://relaxed-hopper-853a47.netlify.app/)


## What you need to know before using Parallax effect?

You just need to know some basic CSS properties like position, min-height etc.
<br>

## Lets get started :

### 1. Only 1 image is used

---

Create a HTML file, in that file create a empty **< div>** of class name **parallax** in the **<body>** tag. This is the div whose CSS properties would be adjusted to show parallax effect.

Now in style.css file or **<style>** tag adjust the properties of class **parallax** as shown :

```CSS
.parallax {
        /* The image to be used in background  */
        background-image: url("./1.jpg");

        /* Set a specific height to be visible on screen on hovering */
        min-height: 100vh;

        /* Adjusting its properties to show Parallax effect */
        background-attachment: fixed;
        background-position: center;
        background-repeat: no-repeat;
        background-size: cover;
      }
```

The size of image can adjusted using `background-size` property.
Example :

```
background-size : 700px 400px;
```

where 700px is its width and 400px is its height.

You can adjust the size of portion to be visible on screen on hovering by changing the `min-height` of the block.
Example :

```
min-height : 200px;
```

<br>
        
### 2. Multiple images are used

---

To add multiple background photos make multiple **<div>** with class **parallax1**, **parallax2**, **parallax3** and change the `background-url` to change the background. Like this :

```CSS
.parallax1 {
        /* The image to be used in background  */
        background-image: url("./1.jpg");

        /* Set a specific height to be visible on screen on hovering */
        min-height: 100vh;

        /* Adjusting its properties to show Parallax effect */
        background-attachment: fixed;
        background-position: center;
        background-repeat: no-repeat;
        background-size: cover;
      }
.parallax2 {
        /* The image to be used in background  */
        background-image: url("./2.jpg");

        /* Set a specific height to be visible on screen on hovering */
        min-height: 100vh;

        /* Adjusting its properties to show Parallax effect */
        background-attachment: fixed;
        background-position: center;
        background-repeat: no-repeat;
        background-size: cover;
      }
.parallax3 {
        /* The image to be used in background  */
        background-image: url("./3.jpg");

        /* Set a specific height to be visible on screen on hovering */
        min-height: 100vh;

        /* Adjusting its properties to show Parallax effect */
        background-attachment: fixed;
        background-position: center;
        background-repeat: repeat-y;
        background-size: cover;
      }
```


## Demo Website
[DEMO](https://relaxed-hopper-853a47.netlify.app/)

<br>
<br>

_Thanks for reading!_

> Author:
> <cite>[Vishwas Singh](https://github.com/vishwas031)</cite>
