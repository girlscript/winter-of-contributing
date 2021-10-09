
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
