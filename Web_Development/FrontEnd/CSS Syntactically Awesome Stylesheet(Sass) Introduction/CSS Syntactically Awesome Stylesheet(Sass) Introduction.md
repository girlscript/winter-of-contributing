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

# Sass Installation

### System Requirements for Sass

* Operating system - Sass is platform independent
* Browser support - Sass works in Edge/IE (from IE 8), Firefox, Chrome, Safari, Opera
* Programming language - Sass is based on Ruby

### Official Sass Web Site

Read more about Sass at the official Sass web site: https://sass-lang.com/

### Install Sass

* There are several ways to install Sass in your system. There are many applications that will get you up and running with Sass in a few minutes for Mac, Windows, and Linux. Some of these are free, but some are paid apps.

* You can read more about them here: sass-lang.com/install


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
```

# Variables

* Variables are a way to store information that you can re-use later.
* Sass uses the $ symbol, followed by a name, to declare variables:

> Sass Variable Syntax:

```html
<style>
  $variablename: value;
</style>
  
```

### Example


> SCSS

```html
<style>
$myFont: Helvetica, sans-serif;
$myColor: red;
$myFontSize: 18px;
$myWidth: 680px;

body {
  font-family: $myFont;
  font-size: $myFontSize;
  color: $myColor;
}

#container {
  width: $myWidth;
}
</style>
```

> CSS

```html
<style>
  body {
  font-family: Helvetica, sans-serif;
  font-size: 18px;
  color: red;
}

#container {
  width: 680px;
}
</style>
```

### Sass Variable Scope

Sass variables are only available at the level of nesting where they are defined.
Example:
 
> SCSS

```html
<style>
    $myColor: red;

  h1 {
    $myColor: green;
    color: $myColor;
  }

  p {
    color: $myColor;
  }
</style>
```

> CSS

```html
<style>
    h1 {
    color: green;
  }

  p {
    color: red;
  }
</style>
```

### Using Sass !global

* The default behavior for variable scope can be overridden by using the !global switch.

* !global indicates that a variable is global, which means that it is accessible on all levels.
* Example:

> SCSS

```html
<style>
    $myColor: red;

  h1 {
    $myColor: green !global;
    color: $myColor;
  }

  p {
    color: $myColor;
  }
</style>
```


> CSS

```html
  <style>
    h1 {
    color: green;
  }

  p {
    color: green;
  }
  </style>
```

# Nesting

* When writing HTML you've probably noticed that it has a clear nested and visual hierarchy. CSS, on the other hand, doesn't.

* Sass will let you nest your CSS selectors in a way that follows the same visual hierarchy of your HTML. Be aware that overly nested rules will result in over-qualified CSS that could prove hard to maintain and is generally considered bad practice.

With that in mind, here's an example of some typical styles for a site's navigation:


> SCSS

```html
<style>
  nav {
    ul {
      margin: 0;
      padding: 0;
      list-style: none;
    }

    li { display: inline-block; }

    a {
      display: block;
      padding: 6px 12px;
      text-decoration: none;
    }
  }
</style>

```

> CSS

```html
  <style>
    nav ul {
    margin: 0;
    padding: 0;
    list-style: none;
  }
  nav li {
    display: inline-block;
  }
  nav a {
    display: block;
    padding: 6px 12px;
    text-decoration: none;
  }
</style>

```
