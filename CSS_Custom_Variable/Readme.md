## _CSS custom properties_
Custom properties (sometimes referred to as CSS variables or cascading variables) are entities defined by CSS authors that contain specific values to be reused throughout a document. 

## Syntax
<declaration-value>

## _Basic_

- Declaring a custom property is done using a custom property name that begins with a double hyphen (--).
- A common best practice is to define custom properties on the :root pseudo-class, so that it can be applied globally across your HTML document:

## _Example_
HTML:
```
<p id="firstParagraph">Blue Background and Yellow Text</p>
<p id="secondParagraph">Yellow Background and Blue Text</p>
<div id="container">
  <p id="thirdParagraph">Green Background and Yellow Text</p>
</div>
```
CSS:
```
:root {
  --first-color: #16f;
  --second-color: #ff7;
}

#firstParagraph {
  background-color: var(--first-color);
  color: var(--second-color);
}

#secondParagraph {
  background-color: var(--second-color);
  color: var(--first-color);
}

#container {
  --first-color: #290;
}

#thirdParagraph {
  background-color: var(--first-color);
  color: var(--second-color);
}
```
## _Output:_
![Capture](https://user-images.githubusercontent.com/76036422/134053372-aabe349c-a1d5-4b00-b40c-76a5bbfb1a5f.PNG)
## _Inheritance of custom properties_
Custom properties do inherit. This means that if no value is set for a custom property on a given element, the value of its parent is used. 
Example:
```
<div class="one">
  <div class="two">
    <div class="three"></div>
    <div class="four"></div>
  </div>
</div>
```
CSS:
```
.two {
  --test: 10px;
}

.three {
  --test: 2em;
}
```
In this case, the results of var(--test) are:
- For the class="two" element: 10px
- For the class="three" element: 2em
- For the class="four" element: 10px (inherited from its parent)
- For the class="one" element: invalid value, which is the default value of any custom property
## _Custom property fallback values_
Using the var() function, you can define multiple fallback values when the given variable is not yet defined; this can be useful when working with Custom Elements and Shadow DOM.
The first argument to the function is the name of the custom property to be substituted. The second argument to the function, if provided, is a fallback value. If that second parameter is invalid, such as if a comma-separated list is provided, the fallback will fail. For example:
```
.two {
  color: var(--my-var, red); /* Red if --my-var is not defined */
}

.three {
  background-color: var(--my-var, var(--my-background, pink)); /* pink if --my-var and --my-background are not defined */
}

.three {
  background-color: var(--my-var, --my-background, pink); /* Invalid: "--my-background, pink" */
}
```
Including a custom property as a fallback, as seen in the second example above, is the correct way to provide more than one fallback. The technique has been seen to cause performance issues as it takes more time to parse through the variables.
