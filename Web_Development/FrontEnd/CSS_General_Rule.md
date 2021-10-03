# CSS General Rule
The CSS general rule can be defined as the combination of html and all css properties which applies on HTML elements and which is matched by the CSS rule . 
<p> Css properties and Css rules are defined below </p>

## CSS Properties
- Css property in the aspect of html elements means when css is applied directly into the html element by using style attribute . 
```html
<div style="border: 2px solid black;
            font-weight: bolder; font-size:20px "> Styling in html tag </div>

<!-- In this three CSS properties are applied to the div element: The border,font-size and font-weight properties. -->
```

- A CSS property declaration consists of a property name and a property value , In this property name comes first in continuation with a colon, and then the value of the property . 
```css
property-name : property-value

/* This is how to specify the name-value pair.*/
```

- When you have to specify more than one CSS property, then each name - value pair is separated by a semicolon . 
```css
property_1 : property-value1;
property_2 : property-value2;

/* This is the way you define more than one property .  */
```
Note : -  it makes more easier to understand the code so place semi-colon ( ; ) after each name-value pair .

## CSS Rules
CSS rule is basically grouping of one or more CSS properties which can be applied to one or more HTML elements.

1. Selectors : Any HTML element can be candidate CSS selector . The selector is simply the element that is linked to a particular style which we specify in the css block .
```css
p{
  font-size : 10px;
}

/* In this P ( paragraph tag) is selected to apply styling in this example we changed font size  */
```

2. Class Selector : In this we can have class different classes , These classes allows us to style different html elements just by using that class . 
```html
<p class="color_it"> This is paragraph </p>

<!-- In this we define class color_it -->
```
```css
.color_it{
    color : blue;
}

/* In this way we select the class and now we can use this class in any html element. */
```

3. Id Selectors : ID selectors are individually assigned to each html element and every element have different id name which always distinguish it from others . 
```html
<p id="content"> This is paragraph </p>

<!-- In this we define the id content . -->
```
```css
#content{
    text-align : center;
}

/* In this we select the element by its id  */
```
4. Contextual Selectors : These are the selectors of two and more strings which is separated by the space . They are used to assign styling to particular element which is under any other element .
```html
<div>
  <p> This is insider element </p>
</div>

<!-- In this <p> tag is inside the div tag . -->
```
```css
div p {
  color : white;
  text-align : center;
}

/* In this we style the <p> tag which is under the div tag .  */
```

5. Properties : A property is the thing which is assigned to a selector in order to manipulate its styling . 
```css
text-align :
font-size :
padding :

/* These all are the properties which is used to change the style of any element . */
```
6. Values : The value is an assignment that every property receives .
```css
text-align : center ;
font-size : 20 px ;
padding : 10 px ; 

/* In this center , 20 px and 10 px are the values of properties text-align , font-size and padding .  */
```
