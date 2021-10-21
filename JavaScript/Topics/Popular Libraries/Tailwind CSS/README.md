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

## Merits and Demerits of Tailwind CSS:-

### Merits:-

1. _**Control Over Styling**_
Tailwind is a unique CSS framework when it comes to styling web applications, meaning that Tailwind does not have a default theme that you have to use like other CSS frameworks.
For example, you can give each project a different look even if you use the same elements (color palette, size, etc.). Therefore, it’s one of the few CSS frameworks that is not opinionated on how you should style your project.

2. _**Faster CSS Styling Process**_
There is no faster framework than Tailwind when it comes to styling HTML. As a result, you can easily create good-looking layouts by styling elements directly. This is possible because Tailwind offers thousands of built-in classes that do not require you to create designs from scratch.
Therefore, you do not have to write CSS rules yourself. These CSS classes are the main reason why building and styling with Tailwind is so fast.

3. _**Responsiveness and Security**_
With Tailwind’s pre-built classes, you can design the layout directly in an HTML file. This makes it a very responsive, mobile-friendly CSS framework. Apart from that, Tailwind has proven to be a stable framework since its initial release.
The framework was developed by top-notch engineers, which is why bugs and breaks are rare.

4. _**Additional Features**_
Tailwind CSS works in the front end of a website. For this reason, it is reasonable for developers to demand ultimate responsiveness. Well, Tailwind provides the ability to create responsive themes for your web applications and remove all unused CSS classes. With PurgeCSS, Tailwind helps you keep your final CSS as small as possible.

### Demerits:-

1. _**Styling and HTML are Mixed**_
Because you do not have to write CSS rules yourself, Tailwind works differently than most CSS frameworks. While this is great for those unfamiliar with CSS, it also means that Tailwind mixes style rules in with your HTML files.
This goes against the principle of the “separation of concerns.” Many developers prefer to separate page structure and style, claiming that classes make the Tailwind markup process verbose.

2. _**It Takes Time to Learn**_
Because of the built-in classes, Tailwind CSS is quite learning-intensive. Even for experienced developers, it can be a challenge to learn how to use and fully utilize the pre-built classes. But, of course, as with any other development task, practice makes perfect.
However, if you are confident and quick when it comes to writing CSS classes, Tailwind may not be the best choice for you. Even if that’s true, Tailwind generally makes CSS styling faster in the long run.  

3. _**Lack of Important Components**_
Unlike Bulma and Bootstrap, Tailwind does not have many significant styling components. Unfortunately, this means you have to manually add features like headers, buttons, and navigation bars for web apps.
This is not a significant drawback, as experienced developers can implement these features quickly. However, you will need to spend some time doing so.

4. _**Documentation**_
Although Tailwind CSS has made great strides when it comes to adding guides and video tutorials, it still lags behind competitors like Bootstrap. Of course, you can always contact the developers if you have a problem.
However, keep in mind that this may take some time. For this reason, you may need to customize the framework to your needs manually.

## Conclusion:-

Tailwind CSS introduces a different way of how a CSS framework works. It provides you with a set of utility classes which can be used to create you unique and custom design with ease.

Tailwind CSS is not opinionated, so you’re completely free in choosing the design of elements and components on your website.

__Contributor :__ [Sakshi Mishra](https://github.com/SakshiMishra1) :heart:
