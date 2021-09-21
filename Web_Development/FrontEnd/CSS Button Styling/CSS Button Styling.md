# CSS Button Styling
Buttons are one of the most important components of any web page, and they have many different states and functions that all need to correctly match previous design decisions. 

Buttons have become an inevitable part of front end development. Thus, it is important to keep in mind a few things before you start styling buttons.


# The Basics of CSS Buttons

The definition of a good button is subjective to each website, but a few non-technical standards exist:
- **Accessibility:**  This is paramount. Buttons should be easily accessible to people with disabilities and older browsers. The web’s openness is beautiful, don’t ruin it with 
lazy CSS.
- **Simple text:**  Keep text within your buttons short and simple. Users should be able to immediately understand a button’s purpose and where it will take them.

Almost all buttons you see online will use some variation of color changes, translation times, and border and shadow changes. These can be leveraged using various CSS
pseudo-classes.



# **Basic Button Styling**

```
.button {
  background-color: #4CAF50; /* Green */
  border: none;
  color: white;
  padding: 15px 32px;
  text-align: center;
  text-decoration: none;
  display: inline-block;
  font-size: 16px;
}
```

## Button Colors

The property that is used for setting colors is `background-color` of the button element. Use colors that compliment each other. [Colorhexa](https://www.colorhexa.com/) is a 
great tool for finding which colors work together.The Example is given below:

```
.button {
background-color: #4CAF50;
} 
```

## Button Sizes

The property used for setting the size of the button is `font-size`.The Example is given below:

```
.button {
font-size: 24px;
}
```

## Padding 

Use the `padding` property to change the padding of a button.The Example is given  below:

```
.button {
padding: 10px 24px;
}
```

## Rounded Buttons

To Round the buttons we use `border-radius` property.It sets the border radius of the button.The Example is given below:

```
.button {
border-radius: 8px;
}
```

## Disabled Buttons

To disable the buttons we use the `opacity` property to add transparency to a button  which creates a "disabled" look of the button. You can also add the cursor property with 
a value of "not-allowed", which will display a "no parking sign" when you mouse over the button. The Example is given below:

```
.disabled {
  opacity: 0.6;
  cursor: not-allowed;
}
```


## Transition Duration

The property `transition-duration` lets you add a timescale to your CSS changes. A button without a transition time will change to its `:hover` CSS instantly, which might be 
off-putting to a user. Many buttons in this guide leverage translation times to feel natural.

- **`:hover` Property**


The one that usually gets the most attention is hover, so we'll start there. Use the `:hover` selector to change the style of a button when you move the mouse over it. 
Use the `transition-duration` property to determine the speed of the "hover" effect.

```
.button {
  transition-duration: 0.4s;
}

.button:hover {
  background-color: #4CAF50; /* Green */
  color: white;
}
```

- **`:focus` Property**


By default, the browsers apply a sort of "halo" effect to elements that gain focus. A bad practice is simply removing the `outline` property which renders that effect and 
failing to replace it. We will replace the outline with a custom focus state that uses `box-shadow`. Like `outline`, `box-shadow` will not change the overall element size so it
will not cause layout shifts. And, since we already applied a transition, the box-shadow will inherit that for use as well for an extra attention-getting effect.

```
a.button,
button.button {
&:focus {
    outline-style: solid;
    outline-color: transparent;
    box-shadow: 0 0 0 4px scale-color($btnColor, $lightness: -40%);
  }
}
```

- **`:active` Property**


Particularly for the "real button", it is best to define an `:active` state style. For buttons, this can be shown for a longer duration given that a button can be triggered 
with the space key which can be held down indefinitely.We will append `:active` to our existing `:hover` style:

```
&:hover,
&:active {
  background-color: scale-color($btnColor, $lightness: -20%);
}
```


## Shadow Buttons

As its name implies, it is used to create the shadow of the button box. It is used to add the shadow to the button. We can also create a shadow during the `hover` on the button.
Use the `box-shadow` property to add shadows to a button. It is possible to add unique shadows to each side, this idea is leveraged by both Flat UI and Material Design.

```
.button1 {
  box-shadow: 0 8px 16px 0 rgba(0,0,0,0.2), 0 6px 20px 0 rgba(0,0,0,0.19);
}

.button2:hover {
  box-shadow: 0 12px 16px 0 rgba(0,0,0,0.24), 0 17px 50px 0 rgba(0,0,0,0.19);
}
```
