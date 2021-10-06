# Content Manipulation in CSS

In this module we will learn about content manipulation in CSS using

- Margin
- Padding
- Align

we will go over each of these topics in detail and learn using examples.

## **CSS Margin**

---

The margin attributes are used to control the space between an element border and surrounding elements.

We can use :

- `margin-top`
- `margin-right `
- `margin-bottom`
- `margin-left`

properties for setting the margin for each side of an element.

![alt text](https://s3-us-west-2.amazonaws.com/s.cdpn.io/173252/box-model.PNG)

The margin property can be controlled by using the following values:

- auto - browser calculates the margin
- _length_ - specifies a margin in px, pt, cm, etc.
- % - specifies a margin in % of the width of the containing element
- inherit - specifies that the margin should be inherited from the parent element

\*Please note that we can also store negative values.

### Syntax :

```
{
 margin-top: 10px;
 margin-bottom: 10px;
 margin-right: 15px;
 margin-left: 80px;
}
```

We can also use the Shorthand method to save time and shorten the code and simply use `margin` instead of specifying individual sides.

Now, lets see how it works,

```
margin: 30px 45px 75px 100px;
```

In the above code,

- top margin is 30px
- right margin is 45px
- bottom margin is 75px
- left margin is 100px

Please note that if a margin has one value, it will be applied to all four sides

```
    margin: 60px;
```

In the above example, a margin of 60px is applied to all four sides.

Now, I would recommend you to play around with the margin property using different values and atributes to get the feel for it and understand how it works.

## **CSS Padding**

---

In CSS an element's padding controls the amount of space between the element's content and its border.

Just like we learned in the **_margin topic_** above that we can use different properties to control specific sides and set margin for each side of an element. similarly, we can use different properties to specify the padding for each side of an element :

- `Padding-top`
- `Padding-right `
- `Padding-bottom`
- `Padding-left`

The Padding property can be controlled by using the following values:

- _length_ - specifies a padding in px, pt, cm, etc.
- % - specifies a padding in % of the width of the containing element
- inherit - specifies that the padding should be inherited from the parent element

\*Please note that we can also store negative values.

### Syntax :

```
div {
 padding-top: 45px;
 padding-right: 35px;
 padding-bottom: 60px;
 padding-left: 70px;
}
```

Similar to margin property, we can use shorthand method for padding also :

```
padding: 25px 50px 75px 100px;
```

- top padding is 25px
- right padding is 50px
- bottom padding is 75px
- left padding is 100px

Please note that if a padding has one value, it will be applied to all four sides

```
    padding: 60px;
```

In the above example, a padding of 60px is applied to all four sides.

![alt text](https://s3.amazonaws.com/webucator-how-tos/2306.png)

## **CSS Align**

---

Align-content in CSS is used to specify the alignment between the lines inside a flexible container when the items do not use all available space, we have to use multiple lines of items to for it to work like `flex-wrap`, `display` etc.

We can use different property values to control this attribute as listed below :

| Syntax          | Description                                                                             |
| --------------- | --------------------------------------------------------------------------------------- |
| `stretch`       | Lines stretch to take up the remaining space                                            |
| `center`        | Lines are packed toward the center of the flex container                                |
| `flex-start`    | Lines are packed toward the start of the flex container                                 |
| `flex-end`      | Lines are packed toward the end of the flex container                                   |
| `space-between` | Lines are evenly distributed in the flex container                                      |
| `space-around`  | Lines are evenly distributed in the flex container, with half-size spaces on either end |
| `space-evenly`  | Lines are evenly distributed in the flex container, with equal space around them        |
| `initial`       | Sets this property to its default value.                                                |
| `inherit`       | Inherits this property from its parent element.                                         |

\*Please note that the default value is `stretch`.

### Syntax :

```
align-content: stretch|center|flex-start|flex-end|space-between|space-around|initial|inherit;
```

![alt text](https://www.w3.org/TR/css-flexbox-1/images/align-content-example.svg)

[^bibliography]: [W3 Schools](https://www.w3schools.com)

Contributed by: [Vaibhav Kumar] (https://github.com/vaibhavkumar5)
