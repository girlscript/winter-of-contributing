# CSS Gradient :heart:

This Complete guide will help you  to understand about CSS Gradient ,
It is very important to understand these particular property of CSS in very detail. It makes our layout more attractive & beautiful.

<hr>

## *So let's start learning with fun* :handshake:

As you know we can give a solid color to any element using CSS. But, by using CSS Gradient we have an flexibity to add more than one color to that particular element.

<hr>

## There are two types of gradients:-

## 1. Linear Gradient->

Linear Gradients gives you a smooth transition between two or more color for a particular background.**(specialy Used for Background Design)**
```bash
background-image: linear-gradient(angle, color-stop1, color-stop2, ...);

```

![enter image description here](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Images/Using_CSS_gradients/linear_red_angles.png)        ![enter image description here](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTPMkisqymUTX4YNJ_COrXmn11aBum5R1Kz_A&usqp=CAU)

```bash
background-image: linear-gradient(direction, color-stop1, color-stop2, ...);
```
left to right<br>
top to bottom<br>
left to bottom<br>
right to top....and so on.

In Linear Gradient you can choose Direction and Angle to make some changes in background-image.

## 2.Radial Gradient->

A radial gradient is defined by its center.
To create a radial gradient you must also define at least two color stops.

```bash
background-image: radial-gradient(shape size at position, start-color, ..., last-color);
```

![enter image description here](https://developer.mozilla.org/en-US/docs/Web/CSS/gradient/radial-gradient()/radial_gradient.png)

### diffrent size keywords
closest-side<br>
farthest-side<br>
closest-corner<br>
farthest-corner<br>

### Set Shape
circle
