# What is Sass?

* Sass stands for Syntactically Awesome Stylesheet
* Sass is an extension to CSS
* Sass is a CSS pre-processor
* Sass is completely compatible with all versions of CSS
* Sass reduces repetition of CSS and therefore saves time
* Sass was designed by Hampton Catlin and developed by Natalie Weizenbaum in 2006
* Sass is free to download and use

### Why Use Sass?

* Stylesheets are getting larger, more complex, and harder to maintain. This is where a CSS pre-processor can help.

* Sass lets you use features that do not exist in CSS, like variables, nested rules, mixins, imports, inheritance, built-in functions, and other stuff.

### A Simple Example why Sass is Useful

Let's say we have a website with three main colors:

> #a2b9bc

> #b2ad7f

> #878f99

So, how many times do you need to type those HEX values? A LOT of times. And what about variations of the same colors?

Instead of typing the above values a lot of times, you can use Sass and write this:

```html
<style>
  /* define variables for the primary colors */
  $primary_1: #a2b9bc;
  $primary_2: #b2ad7f;
  $primary_3: #878f99;

  /* use the variables */
  .main-header {
    background-color: $primary_1;
  }

  .menu-left {
    background-color: $primary_2;
  }

  .menu-right {
    background-color: $primary_3;
  }
</style>
```

# How Does Sass Work?

* A browser does not understand Sass code. Therefore, you will need a Sass pre-processor to convert Sass code into standard CSS.

* This process is called transpiling. So, you need to give a transpiler (some kind of program) some Sass code and then get some CSS code back.

### Sass File Type

Sass files has the ".scss" file extension.

### Sass Comments
Sass supports standard CSS comments /* comment */, and in addition it supports inline comments // comment:

Example


```html
<style>
  /* define primary colors */
  $primary_1: #a2b9bc;
  $primary_2: #b2ad7f;

  /* use the variables */
  .main-header {
    background-color: $primary_1; // here you can put an inline comment
  }
</style>
