
# Modules

You don't have to write all your Sass in a single file. You can split it up however you want with the @use rule. This rule loads another Sass file as a module, which means you can refer to its variables, mixins, and functions in your Sass file with a namespace based on the filename. Using a file will also include the CSS it generates in your compiled output!

> _base.scss

```scss

    $font-stack: Helvetica, sans-serif;
  $primary-color: #333;

  body {
    font: 100% $font-stack;
    color: $primary-color;
  }

```

> styles.scss

```scss

 @use 'base';
  .inverse {
    background-color: base.$primary-color;
    color: white;
  }

```

> output CSS

```html
<style>
  body {
    font: 100% Helvetica, sans-serif;
    color: #333;
  }

  .inverse {
    background-color: #333;
    color: white;
  }
</style>

```

Notice we're using @use 'base'; in the styles.scss file. When you use a file you don't need to include the file extension. Sass is smart and will figure it out for you.



# Sass @import

* Just like CSS, Sass also supports the @import directive.

* The @import directive allows you to include the content of one file in another.

* The CSS @import directive has a major drawback due to performance issues; it creates an extra HTTP request each time you call it. However, the Sass @import directive includes the file in the CSS; so no extra HTTP call is required at runtime!

### Sass Import Syntax:

```scss

@import filename;

```

### example

```scss

@import "variables";
@import "colors";
@import "reset";

```

# Sass @mixin and @include

* The @mixin directive lets you create CSS code that is to be reused throughout the website.

* The @include directive is created to let you use (include) the mixin.

### Sass @mixin Syntax:

```scss

    @mixin name {
      property: value;
      property: value;
      ...
    }

```

### Example

> SCSS

```scss
    SCSS SYNTAX
    @mixin theme($theme: DarkGray) {
      background: $theme;
      box-shadow: 0 0 1px rgba($theme, .25);
      color: #fff;
    }

    .info {
      @include theme;
    }
    .alert {
      @include theme($theme: DarkRed);
    }
    .success {
      @include theme($theme: DarkGreen);
    }
 ```
 
 >CSS

```html
<style>
    .info {
      background: DarkGray;
      box-shadow: 0 0 1px rgba(169, 169, 169, 0.25);
      color: #fff;
    }

    .alert {
      background: DarkRed;
      box-shadow: 0 0 1px rgba(139, 0, 0, 0.25);
      color: #fff;
    }

    .success {
      background: DarkGreen;
      box-shadow: 0 0 1px rgba(0, 100, 0, 0.25);
      color: #fff;
    }
</style>
 
```


### Passing Variables to a Mixin

* Mixins accept arguments. This way you can pass variables to a mixin.

* Here is how to define a mixin with arguments:

>SCSS Syntax

```scss
/* Define mixin with two arguments */
@mixin bordered($color, $width) {
  border: $width solid $color;
}

.myArticle {
  @include bordered(blue, 1px);  // Call mixin with two values
}

.myNotes {
  @include bordered(red, 2px); // Call mixin with two values
}
```

> CSS output

```html
<style>
        .myArticle {
      border: 1px solid blue;
    }

    .myNotes {
      border: 2px solid red;
    }
</style>
```

### Default Values for a Mixin

> SCSS Syntax:

```scss
    @mixin bordered($color: blue, $width: 1px) {
      border: $width solid $color;
    }
```  

Then, you only need to specify the values that change when you include the mixin:

```scss   
  .myTips {
  @include bordered($color: orange);
}

```

###  Using a Mixin For Vendor Prefixes

> SCSS Syntax:

```scss
@mixin transform($property) {
  -webkit-transform: $property;
  -ms-transform: $property;
  transform: $property;
}

.myBox {
  @include transform(rotate(20deg));
}
```

> CSS Output:

```html
<style>
      .myBox {
      -webkit-transform: rotate(20deg);
      -ms-transform: rotate(20deg);
      transform: rotate(20deg);
    }
</style>
```

# Extend/Inheritance
Using @extend lets you share a set of CSS properties from one selector to another. In our example we're going to create a simple series of messaging for errors, warnings and successes using another feature which goes hand in hand with extend, placeholder classes. A placeholder class is a special type of class that only prints when it is extended, and can help keep your compiled CSS neat and clean.


> SCSS SYNTAX

```scss
    /* This CSS will print because %message-shared is extended. */
    %message-shared {
      border: 1px solid #ccc;
      padding: 10px;
      color: #333;
    }

    // This CSS won't print because %equal-heights is never extended.
    %equal-heights {
      display: flex;
      flex-wrap: wrap;
    }

    .message {
      @extend %message-shared;
    }

    .success {
      @extend %message-shared;
      border-color: green;
    }

    .error {
      @extend %message-shared;
      border-color: red;
    }

    .warning {
      @extend %message-shared;
      border-color: yellow;
    }
```

What the above code does is tells .message, .success, .error, and .warning to behave just like %message-shared. That means anywhere that %message-shared shows up, .message, .success, .error, & .warning will too. The magic happens in the generated CSS, where each of these classes will get the same CSS properties as %message-shared. This helps you avoid having to write multiple class names on HTML elements.

You can extend most simple CSS selectors in addition to placeholder classes in Sass, but using placeholders is the easiest way to make sure you aren't extending a class that's nested elsewhere in your styles, which can result in unintended selectors in your CSS.

Note that the CSS in %equal-heights isn't generated, because %equal-heights is never extended.


# Operators

Doing math in your CSS is very helpful. Sass has a handful of standard math operators like +, -, *, math.div(), and %. In our example we're going to do some simple math to calculate widths for an article and aside.

> SCSS

```scss
    @use "sass:math";

    .container {
      display: flex;
    }

    article[role="main"] {
      width: math.div(600px, 960px) * 100%;
    }

    aside[role="complementary"] {
      width: math.div(300px, 960px) * 100%;
      margin-left: auto;
    }
 ```
 
 > CSS output

```html
<style>
    .container {
      display: flex;
    }

    article[role="main"] {
      width: 62.5%;
    }

    aside[role="complementary"] {
      width: 31.25%;
      margin-left: auto;
    }
</style>

```
