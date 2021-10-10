# Bootstrap

## Introduction

Bootrap is a free and open-source framework used to create repsonsive webpages using minimal of CSS.

Bootstrap creates webpage that is suitable in any devices such as desktop, mobile, and tablet.

<br>

# Using Bootstrap in a webpage

Bootstrap can be imported either by installing the package into the local machine or importing Content Delivery Network (CDN) in the header file of the HTML page.

To import CDN, two links have to be imported in the header file, one for CSS content and another JS content.

CSS: `https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css`
JS: `https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.bundle.min.js`

<b>Note: </b> The JS link has to be imported first then CSS link.

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

1. Make sure, the HTML version is 5. For that, include the tag `<!DOCTYPE html>`.

2. Include the responsive viewport meta tag.

``` HTML

<meta name="viewport" content="width=device-width, initial-scale=1.0">

```

3. Add the box-sizing feature in CSS. This is optional when Bootstrap's padding interfere with the existing padding set in external CSS.<br>

``` CSS

<some-selector> {
    box-sizing: content-box;
}

```
