# What is Tailwind CSS?

Tailwind is a **utility-first CSS framework**. In contrast to other CSS frameworks like Bootstrap or Materialize CSS it doesn’t come with predefined components. Instead Tailwind CSS operates on a lower level and provides you with a set of CSS helper classes. By using this classes you can rapidly create custom design with ease.

Styling an application in Tailwind CSS is based on a set of classes which are modifying one or two CSS attribute each. Each element will have a lot of such classes assigned to it. This may seem crazy at first, but it works pretty well in practice.

_Let’s see how it looks in practice:_

```html
<div class="bg-green-300 border-green-600 border-b p-4 m-4 rounded">
  Hello World
</div>
```

There are several classes used in this example, let's check it:-

- ```bg-green-300``` – this class sets a green background (this the bg prefix). The value 300 in the name is just the shade number.

- ```border-green-600``` – it’s similar to the previous class but it sets the elements borders colour to a slightly darker green.

- ```border-b``` – this class does nothing more than set the border to be visible only at the bottom (“b” stands for “bottom”)

- ```p-4 and m-4``` those two classes make the margin and padding the size of 4 units. In Tailwind CSS, this is equivalent to 16px.

- ```rounded``` – finally, this sets the rounded corners for the element.

With all those classes the final effect will look like this:

<img src="img 1 Hello World.png">

## Adding Tailwind to your CSS:-

Now that you have installed Tailwind CSS using NPM, you will need to use the custom ```@tailwind``` directive and inject Tailwind’s base, components, and utilities styles into your main CSS file.

To do this, create a new CSS file called main.css (or any other preferred name) and add the following lines of code inside it:

```html

@tailwind base;

@tailwind components;

@tailwind utilities;
```

What this does is that as soon as this file will be processed using Tailwind it will be swapped with the actual CSS styles from Tailwind. You’ll see soon exactly what will happen.

## Creating the configuration file and process your CSS with Tailwind:-

The recommended way of developing with Tailwind CSS is to have a configuration file that you will edit along the way based on your needs. You will be able to easily add and modify the default utility classes from Tailwind. Practically, it will be very easy to change fonts, colors, sizings, spacings and literally anything.

Using the Tailwind CLI run the following command and generate a boilerplate configuration file:

```npx tailwindcss init```

This will generate a file called tailwind.config.js having the following content:

```js
// tailwind.config.js
module.exports = {
    future: {},
    purge: [],
    theme: {
    extend: {},
    },
    variants: {},
    plugins: [],
}
```

Now add the following two plugins:

```plugins

plugins: [
    // ...
    require('tailwindcss'),
    require('autoprefixer'),
    // ...
]
```

## Processing your CSS with Tailwind:-

Later in this tutorial I will show you how to automatically watch for changes in your CSS file, but for now you can just run the following command to compile the main.css file and create a new file called output.css, which will be the actual CSS file that will be included in the HTML files:

```npx tailwindcss build main.css -o output.css```

If you take a look at your folder structure, you will see that a new output.css file was generated which holds all of the default Tailwind CSS utility classes based on the configuration file that we have created.

## Including Tailwind CSS into your HTML templates:-

Create an HTML file called index.html in your root project directory and make sure to include the output.css CSS file inside the head tag of your template:

```html

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tailwind CSS Tutorial by Themesberg</title>
    <link rel="stylesheet" href="output.css">
</head>
<body>
    <!-- Build awesome user interfaces using Tailwind CSS starting from here -->
</body>
</html>
```

_Congratulations! You have successfully set up Tailwind CSS using the recommended method by the official documentation._

## Conclusion:-

Tailwind CSS introduces a different way of how a CSS framework works. It provides you with a set of utility classes which can be used to create you unique and custom design with ease.

Tailwind CSS is not opinionated, so you’re completely free in choosing the design of elements and components on your website.

__Contributor :__ [Sakshi Mishra](https://github.com/SakshiMishra1) :heart: 
