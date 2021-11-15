# CSS Image Reflection

The box-reflect property is used to reflect an image in CSS.
Box-reflect can hold the following values:

 - Above
 - Below
 - Left
 - Right
 
 
## Reflection Below The Image

To create a reflection below the image:

```css
img {
  -webkit-box-reflect: below;
}
```
![ReflectionBelow](https://user-images.githubusercontent.com/73912907/140558861-98dcdb37-9609-4e8c-834a-746925056f92.png)

## Reflection To The Right

To create a reflection to the right of the image:

```css
img {
  -webkit-box-reflect: right;
}
```
![ReflectionToRight](https://user-images.githubusercontent.com/73912907/140559132-0a16f47b-a25d-40da-b540-a3f84e0b6e78.png)

## Reflection With Offset

To create a reflection with an offset of 75px:

```css
img {
  -webkit-box-reflect:  below 75px;
}
```
![ReflectionWithOffset](https://user-images.githubusercontent.com/73912907/140559178-b71001e3-9949-4913-a784-678256813756.png)

## Reflection With Gradient

To create a reflection with a fade-out effect (gradient):

```css
img {
  -webkit-box-reflect:  below 0px linear-gradient(to bottom, rgba(0,0,0,0.2), rgba(0,0,0,0.8));
}
```
![ReflectionWithGradient](https://user-images.githubusercontent.com/73912907/140559193-9630d084-3e61-4b93-99a8-150d51dc3edf.png)

## References

 - [MDN Web Docs](https://developer.mozilla.org/en-US/docs/Web/CSS/-webkit-box-reflect)
 - [Image Source](https://hatrabbits.com/en/random-image/)



