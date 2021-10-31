## Syntactically Awesome StyleSheets - SASS

It is a language extension of CSS that adds features that aren't available in basic CSS. SASS makes it easier for you to simplify and maintain the style sheets for your projects. We can use variables, mixins, functions, and more, that are compatible with all versions of CSS syntax.

### Getting started with SASS

To implement SASS in your webpage you must have a ` .scss ` instead of a ` .css ` file. Variable are used to store the value of an attribute. This can be referenced while using the attribute in any block.
Here is an example:

```css
$main-fonts: Arial, sans-serif;
$head-color: green;

h1 {
     font-family: $main-fonts;
     color: $head-color;
   }
```   
Like JavaScript, the variables are declared and assigned a value. Variable names are preceded by the '$' symbol as shown in the example. This makes the code look 'clean' repeated mentioning of attribute values is avoided.

Another plus of using SASS is Nesting CSS. Usually, each element is targeted on a different line to style it. SASS provides Nesting on CSS to organize your code.

```css
nav {
  background-color: blue;
}

nav ul {
  list-style: none;
}

nav ul li {
  color: pink;
}
```
Nesting allows placing child style rules within the respective parent elements. The above can be rewritten as:

```css
nav {
  background-color: blue;

  ul {
    list-style: none;

    li {
      color: pink;
    }
  }
}
```

#### Mixins
Mixin is a group of CSS statements that can be reused throughout the style sheet. They are like functions in CSS. 

The definition starts with ` @mixin ` followed by a custom name. The parameters are optional but useful when mentioned. Only a single line calling the *mixin* replaces having to type all the repeated statements. A *mixin* is called using the @include directive.

```css
@mixin border-radius($x)
{ 
  -webkit-border-radius: $x;
  -moz-border-radius: $x;
  -ms-border-radius: $x;
  border-radius: $x;
}

div
{
   @include border-radius( 5px );
}
```
#### Adding logic to your styles

##### @if, @else if, @else Directives

These directives are useful to test for a specific case and works just like the conditional statements in JavaScript.

```
@mixin text-size($val) 
{
  @if $val == large {
    font-size: 34px;
  }
  @else if $val == medium {
    font-size: 22px;
  }
  @else {
    font-size: 12px;
  }
}
```
The above code will implement the font size according to the variable passed as parameter to the *mixin*.

##### Looping
SASS offers looping directives to loop over each item in a list or a set of statements using variables. 

- ` @for ` directive can be implemented using "start through end" or "start to end". "start to end" excludes the end number as part of the count, and "start through end" includes the end number as part of the count.

```css
.row-1 {
  font-size : 8px;
}

.row-2 {
  font-size : 16px;
}

.row-3 {
  font-size : 24px;
}
```
The above code can be replaced with the one below.

```
@for $i from 1 through 3 
{
  .row-#{$i} { font-size : 8px * $i; }
}
```
'#' combines the looping variable to the text to form a string.

- ` @while ` directive is similar to the while loop in JavaScript and requires a condition to terminate looping. The @for directive example can be written using @while as shown:

```
$x: 1;
@while $x < 4
{
  .row-#{$x} { font-size : 8px * $i;}
  $x: $x + 1;
}
```

- ` @each ` loops over each item in a map or list.
```
@each $color in blue, red, green 
{
  .#{$color}-text {color: $color;}
}
```
Each iteration, the current value from the list or map gets assigned to the variable.

#### @extend Feature
SASS provides another interesting feature known as ` @extend ` which is used to inherit CSS rules from one element and build upon them in another. For example, assume a block of CSS rules to style a h1 header. By using *@extend* you can reuse the styles mentioned in the h1 block and add more to them.

```css
h1
{
  color:blue;
}

p 
{
  @extend h1;
  font-stlye: italic;
}
```
The `p` element will have the color style mentioned in `h1` along with it's font style.

Learn more about SASS [here](https://sass-lang.com/).
