# Using Animation on Scoll Library

Animation on Scroll Library is a library using which you can apply scrolling animations in your projects.
We add animations by adding the attribute data-aos in the element.

## Types of Animation

- Fade
- Flip
- Zoom

### Fade Animation

![FadeGIF](https://user-images.githubusercontent.com/53508296/136777134-8d535055-1b74-4d18-9ff2-0798cd578002.gif)

```html
    <h4>
        Fade Animations
    </h4>

    <div class="div1" data-aos="fade-up">
        Fade-up
    </div>
    <div class="div2" data-aos="fade-down">
        Fade-down
    </div>
    <div class="div3" data-aos="fade-right">
        Fade-right
    </div>
    <div class="div4" data-aos="fade-left">
        Fade-left
    </div>
    <div class="div5" data-aos="fade-up-right">
        Fade-up right
    </div>
    <div class="div6" data-aos="fade-up-left">
        Fade-up left
    </div>
    <div class="div7" data-aos="fade-down-right">
        Fade-down right
    </div>
    <div class="div8" data-aos="fade-down-left">
        Fade-down left
    </div>
```

### Flip Animation

![FlipGIF](https://user-images.githubusercontent.com/53508296/136777172-62914ed3-329a-4f45-a79d-ad985defcfbf.gif)

```html
    <h4>
        Flip Animations
    </h4>

    <div class="div1" data-aos="flip-up">
        Flip-up
    </div>
    <div class="div2" data-aos="flip-down">
        Flip-down
    </div>
    <div class="div3" data-aos="flip-right">
        Flip-right
    </div>
    <div class="div4" data-aos="flip-left">
        Flip-left
    </div>
```

### Zoom Animation

![zoomGIF](https://user-images.githubusercontent.com/53508296/136777205-7478d844-0fd3-4f2c-8a02-33abd91b6fed.gif)

```html
    <h4>
        Zoom Animations
    </h4>

    <div class="div1" data-aos="zoom-in">
        Zoom-in
    </div>
    <div class="div2" data-aos="zoom-in-up">
        Zoom-in up
    </div>
    <div class="div3" data-aos="zoom-in-down">
        Zoom-in down
    </div>
    <div class="div4" data-aos="zoom-in-left">
        Zoom-in left
    </div>
    <div class="div5" data-aos="zoom-in-right">
        Zoom-in right
    </div>
    <div class="div6" data-aos="zoom-out">
        Zoom-out
    </div>
    <div class="div7" data-aos="zoom-out-up">
        Zoom-out up
    </div>
    <div class="div8" data-aos="zoom-out-down">
        Zoom-out down
    </div>
    <div class="div9" data-aos="zoom-out-left">
        Zoom-out left
    </div>
    <div class="div10" data-aos="zoom-out-right">
        Zoom-out right
    </div>
```

### Extra Properties:

- Duration
- Easing
- Offset
- Delay
- Anchor

![extraGIF](https://user-images.githubusercontent.com/53508296/136777241-3d4e7828-a11e-481a-98c6-acf8c63b674e.gif)

```html
    <h4>
        Animations using extra properties
    </h4>

    <div class="div1" data-aos="zoom-in">
        Zoom-in
    </div>
    <div class="div2" data-aos="zoom-in-up" data-aos-duration="3000">
        Zoom-in up (Duration: 3000ms)
    </div>
    <div class="div3" data-aos="zoom-in-down" data-aos-easing="linear">
        Zoom-in down (Easing: linear)
    </div>
```
