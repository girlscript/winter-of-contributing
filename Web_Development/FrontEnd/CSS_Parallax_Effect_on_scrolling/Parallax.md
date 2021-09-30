# Parallax Effect (CSS)
![alt text](https://github.com/vishwas031/winter-of-contributing/blob/CSS_Parallax_Effect/Web_Development/FrontEnd/CSS_Parallax_Effect_on_scrolling/Parallax%20effect.png "Logo Title Text 1")

## What is Parallax Effect?

Parallax is a 3d effect used in various websites to make webpages attractive. It is a scrolling effect where the **background** (image) and **foreground** (content) moves at a different speed. Here is a demo of [Parallax Effect](https://relaxed-hopper-853a47.netlify.app/)


## Lets get started :

### 1. Applying on 1 image :

---

Create a HTML file, in that file create a empty **< div>** of class name "**parallax**" in the **<body>** tag. This is the div whose CSS properties would be adjusted to show parallax effect.

Now in style.css file or **<style>** tag adjust the properties of class "**parallax**" as shown :

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

<br>
        
The size of image can adjusted using `background-size` property.

#### Example :

```
background-size : 700px 400px;
```
here 700px is its width and 400px is its height.
        
<br>

You can adjust the size of portion to be visible on screen on hovering by changing the `min-height` of the block.

#### Example :

```
min-height : 200px;
```

<br>
        
### 2. Applying on multiple images :

---

To add multiple background photos, make multiple **< div>** with class "**parallax1**", "**parallax2**", "**parallax3**" and change the `background-url` to change the background. Like this :

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
