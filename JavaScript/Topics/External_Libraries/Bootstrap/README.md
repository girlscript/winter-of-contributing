# Bootstrap

Bootrap is a free and open-source framework used to create repsonsive webpages using minimal of CSS and JS.

Bootstrap creates webpage that is suitable in any devices such as desktop, mobile, and tablet.

<br>

# Using Bootstrap in a webpage

Bootstrap can be imported either by installing the package into the local machine or importing Content Delivery Network (CDN) in the header file of the HTML page.

To import CDN, two links have to be imported in the header file, one for CSS content and another JS content.

JS has 2 bundles and can be used <b>any one</b> at a time : `bootstrap.bundle.js` and `bootstrap.bundle.min.js`.

CSS: https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css <br>
JS: https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.bundle.min.js OR https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.bundle.js

For example,

``` HTML

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Bootstrap</title>

    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.bundle.min.js"></script>

    <link rel="stylesheet" href= "https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css">
</head>

```

## Pre-requisites

1. Make sure, the HTML5 is supported. For that, include the tag `<!DOCTYPE html>`.

2. Include the responsive viewport meta tag.

``` HTML

<meta name="viewport" content="width=device-width, initial-scale=1.0">

```

3. Add the box-sizing feature in CSS. This is optional when Bootstrap's padding interferes with the existing padding set in external CSS.<br>

``` CSS

<some-selector> {
    box-sizing: content-box;
}

```

# Including JavaScript in Bootstrap

The main objective of Bootstrap was to create templates without JavaScript and jQuery. But still it can be used to customise the templates. <br>

There are several ways to include JavaScript in BootStrap: 

1. As mentioned earlier, there is a separate JavaScript CDN provided by Bootstrap which is `bootstrap.bundle.js` and `bootstrap.bundle.min.js`. It is usually included in the header section of the HTML page.

2. jQuery can also be used to customise Bootstrap plugins and jQuery is included separately, the CDN for jQuery is (for v3.5.1 )<br>
https://code.jquery.com/jquery-3.5.1.min.js

<b>Note: </b> Bootstrap will listen to jQuery events only if it is wrapped under `window` object.

For example,

``` JS

$('<selector>').on('<bootstrap-plugin>', function(){
    // Code here
})

```

Instead of `addEventListener()`, `.on()` or `.one()` function is preferred for the jQuery events to work.

3. We can add Bootstrap as a module inside the script tag as 

```HTML

<script type = "module">
    import 'bootstrap.esm.min.js';
    /*JS Code here*/
</script>

```

But, the module has to be installed as node.js module using npm. For example, if we need Bootstrap in ReactJS then it needs to be installed using npm.

<br>

# Advantages of Bootstrap

1. Bootstrap is free and open-source.

2. Using Bootstrap brings responsiveness to other small devices without using media query in CSS.

3. It saves time writing the codes both in HTML and CSS.

4. Bootstrap has got an excellent grid system defined separately for small devices, medium devices and large devices.

<br>

# Disadvantages of Bootstrap

1. Lack of customisation to the Bootstrap templates leads to the creation of similar websites.

2. Not suitable if only one or two Bootstrap components are used throughout the page.

3. Massive usage of Bootstrap may slow down the loading of the page.

<br>

# References

1. https://getbootstrap.com/docs/5.1/getting-started/javascript/#no-conflict-only-if-you-use-jquery

2. https://getbootstrap.com/docs/4.0/getting-started/webpack/

3. https://www.uplers.com/blog/what-are-the-pros-cons-of-foundation-and-bootstrap/#:~:text=The%20Disadvantages%20of%20Bootstrap%20are%3A&text=Styles%20are%20verbose%20and%20can,Non%2Dcompliant%20HTML

4. https://skat.tf/pros-cons-bootstrap-web-development/


<hr>

<b>Contributors: </b> [Subhendu Dash](https://github.com/subhendudash02)