# Math Functions used in CSS:

Functions are used in CSS in order to perform mathematical calculations and change the value of the CSS property.



## CSS includes the following math functions

##  __calc():__ 
Lets us perform calculations when specifying CSS property values . Calc() takes length frequency, angle, time, percentage and integer as parameter.

### Syntax:
<p align="center"><img src="https://user-images.githubusercontent.com/77008381/136685940-13fb6890-4c2c-4df0-b3b2-b4e1265b82d7.png"></p>

### Examples:

- width: calc(100% - 130px);



```css
.container{
    width: calc(100% - 130px);
    background-color: yellow;
    text-align: center;
    align-items: center;
    margin: 50px auto;
    padding: 25px 50px;
}
```

<p align="center"><img src="https://user-images.githubusercontent.com/77008381/136686521-1d7c6b99-74cd-42e2-adbd-2566308efc56.png"></p>

- Instead of px one can use em, rem and other units. But note that the `+` and `-` operator must have whitespace around it. This can be used to position an object on screen with a margin.
- Nested calc()
   If calc(calc(100px / 2) / 2)) is equivalent to calc((100px / 2) / 2)

## max() 

The max function selects the largest value of the property among a list of comma selected values of the property. 

### Syntax

<p align="center"><img src="https://user-images.githubusercontent.com/77008381/136693121-15242cc8-42c3-4fd6-a2b0-73327a93c43c.png"></p>

### Examples

Depending on size of the screen, the max function would select either 5vw, or 200px whichever is larger.

- max(5vw, 200px)

<p align="center"><img src="https://user-images.githubusercontent.com/77008381/136689079-cd58bd7a-efb5-4bfe-9fdc-574d943dc5f9.png"></p>

- max(5vw, 100px)

<p align="center"><img src="https://user-images.githubusercontent.com/77008381/136689017-6bbceade-5c5d-46d8-986e-804ab1b7b8e6.png"></p>


As you can see the image size reduces. As the value 5vw does not affect the image while 100px takes effect. If we change the screen size such that 5vw is larger than 100px, then it will take effect.

## min()

The min function selects the smallest value of the property among a list of comma selected values of the property. 

### Syntax

<p align="center"><img src="https://user-images.githubusercontent.com/77008381/136691131-afe61a32-d31e-4f6e-b2d1-9ebc42d3739a.png"></p>

### Examples

Depending on size of the screen, the min function would select either 5vw, or 200px whichever is smaller.

- min(5vw,200px)

<p align="center"><img src="https://user-images.githubusercontent.com/77008381/136691754-5d3ae384-0a3e-4cdd-be57-4c3c933def28.png"></p>

- min(5vw,100px)

<p align="center"><img src="https://user-images.githubusercontent.com/77008381/136691754-5d3ae384-0a3e-4cdd-be57-4c3c933def28.png"></p>

The image size remains same because the lower value 5vw remains same. 

## Clamp()

Clamp function allows you to set a value of a property between a maximum and minimum value. Clamp function takes three arguments, min value, preffered value and max value.
Clamp takes length, frequency, angle, time, percent and integer as parameter.

### Syntax



<p align="center"><img src="https://user-images.githubusercontent.com/77008381/136692128-415ea89a-d228-4bc6-92a0-e2390758a3ec.png"></p>

In case of conflict in using different browser and using screen sizes display units like em, vm, rem, px etc. The parameter of clamp function are resolved as

<p align="center"><img src="https://user-images.githubusercontent.com/77008381/136693833-975a5b9a-5338-4707-b013-b8cb324e6aa1.png"></p>


## Examples

- clamp(1.5rem, 2.5vw, 4rem)

```css
.container {
    width: calc(100% - 130px);
    background-color: yellow;
    text-align: center;
    align-items: center;
    margin: 50px auto;
    padding: 25px 50px;
    font-size: clamp(1rem, 2.5vw, 2rem);
}
```

<p align="center"><img src="https://user-images.githubusercontent.com/77008381/136692813-bdca88f3-3bc7-4d14-aa9c-2283fcd63771.png"></p>

The font of this element will be between 1rem and 2rem.

#### References

- [MDN Docs](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Functions)
- [W3Schools](https://www.w3schools.com/css/css_math_functions.asp)


