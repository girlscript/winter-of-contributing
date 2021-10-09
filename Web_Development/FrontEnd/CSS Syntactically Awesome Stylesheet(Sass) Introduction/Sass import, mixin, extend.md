
# Modules

You don't have to write all your Sass in a single file. You can split it up however you want with the @use rule. This rule loads another Sass file as a module, which means you can refer to its variables, mixins, and functions in your Sass file with a namespace based on the filename. Using a file will also include the CSS it generates in your compiled output!

> _base.scss

```html
<style>
    $font-stack: Helvetica, sans-serif;
  $primary-color: #333;

  body {
    font: 100% $font-stack;
    color: $primary-color;
  }
</style>
```

> styles.scss

```html
<style>
 @use 'base';
  .inverse {
    background-color: base.$primary-color;
    color: white;
  }
</style>
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
