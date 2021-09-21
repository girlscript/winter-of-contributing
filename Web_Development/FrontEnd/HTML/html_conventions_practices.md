# HTML Naming Conventions and Best Practices

While developing a website, it is very important to maintain or follow a set of rules or practices and stick to them. As developers, it is our duty to make the code visually appealing and understandable to other developers and users. There are some basic norms that we need to follow to attain this consistency in website development. Let us learn more about _HTML Conventions_ or _Style Guide_ that you must follow.

## Topics

<!-- TABLE OF CONTENTS -->
<details open="index">
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#Conventions">Conventions</a>
    </li>
    <li>
      <a href="#Summary">Benefits</a>
    </li>
  </ol>
</details>

## Conventions

First things first,

### Always Declare Document Type

Always declare the document type as the first line in your document. It is essential to mention the type of document that should be displayed by the browser. This allows the browser to know what type of document it should render and thus use its resources.

-   Good Practice:

    ```html
    <!DOCTYPE html>
    ```

-   Bad Practice:

    ```html
    <!DOCTYPE Html>
    ```

    ```html
    <!doctype HTML>
    ```

### Use Lowercase Element Names

We might have witnessed the declaration in uppercase, lowercase and mixing both as well.

let's have a take on this:
However, HTML allows the use of lowercase or uppercase element names; we recommend you to opt for lowercase names, because:

-   It looks cleaner
-   Easier to write and read
-   Mixing uppercase and lowercase names looks bad

-   Good Practice:

    ```html
    <body>
        <p>Winter of Contributing</p>
    </body>
    ```

-   Bad Practice:

    ```html
    <BODY>
        <p>Winter of Contributing</p>
    </BODY>
    ```

### Use Lowercase Attribute Names

HTML allows the use of lowercase or uppercase element names; we recommend you to opt for lowercase names, because:

-   It looks cleaner
-   Easier to write and read
-   Mixing uppercase and lowercase names looks bad

-   Good Practice:

    ```html
    <img src="gwoc.gif" alt="GWOC">
    <a href="https://gwoc.girlscript.tech/">Visit GWOC</a>
    ```

-   Bad Practice:

    ```html
    <img SRC="gwoc.gif" ALT="GWOC">
    <a HREF="https://gwoc.girlscript.tech/">Visit GWOC</a>
    ```

### Indentation in HTML

It is not recommended to use indentation unnecessarily in an HTML document. Indentation should be limited to two spaces rather than using the tab key(Tab key's space is not a valid space).

-   Good Practice:

    ```html
    <body>
      <h1>Open Source</h1>

      <h2>GSSOC</h2>
      <p>It will happen in March</p>
      <h2>GWOC</h2>
      <p>It will happen in September</p>
    </body>
    ```

-   Bad Practice:

    ```html
    <body>
      <h1>Open Source</h1>
      <h2>GSSOC</h2>
        <p>
          It will happen in March
        </p>
      <h2>GWOC</h2>
        <p>
          It will happen in September
        </p>
    </body>
    ```

### Always Quote Attribute Values

HTML allows attribute values without quotes. However, we recommend quoting attribute values, because:

-   Quoted values are easier to read
-   One must also ensure not to use spaces

-   Good Practice:

    ```html
    <body class="container">
      <p>Winter of Contributing</p>
    </body>
    ```

-   Bad Practice:

    ```html
    <body class=container>
      <p>Winter of Contributing</p>
    </body>
    ```

    ```html
    <body class=body container>
      <p>Winter of Contributing</p>
    </body>
    ```

### Close All HTML Elements

In HTML, Sometimes if you run without closing any tag, It won't give you a syntax error.

Well, If the code/element is working without closing tag, then that doesn't make sense or a good practice to not to close the tags.

-   Good Practice:

    ```html
    <body>
      <p>Girlscript Foundation</p>
      <p>Winter of Contributing</p>
    </body>
    ```

-   Bad Practice:

    ```html
    <body>
      <p>Girlscript Foundation
      <p>Winter of Contributing
    </body>
    ```

### Always Specify required Attributes

Like Images,

Always specify the alt attribute for images. This attribute is important if the image for some reason cannot be displayed.

Also, always define the width and height of images(recommended to use css instead of inline style). Because the browser can reserve space for the image before loading and sometimes image ratio differs.

-   Good Practice:

    ```html
    <img src="gwoc.gif" alt="GWOC"/>
    ```

-   Bad Practice:

    ```html
    <img SRC="html5.gif">
    ```

### Inline-CSS vs CSS file in HTML

Recommended to use CSS file instead of using inline-css, Let's say you're debugging, and want to modify your page-css, make a certain section only look better. Instead of creating your styles inline the quick and dirty and un-maintainable way, you can do what I do these days and take a staged approach.

The advantage for having a different css file are:

- Easy to maintain your html page
- Change to the Look and feel will be easy and you can have support for many themes on your pages.
- Your css file will be cached on the browser side. So you will contribute a little on internet traffic by not loading some kbs of data every time a the page is refreshed or user navigates your site.

Never create your css inline, by which I mean: `<element style='color:red'>` or even `<img style='float:right'>` It's very convenient, but doesn't reflect actual selector specificity in a real css file later, and if you keep it, you'll regret the maintenance load later.


### Spaces, Equal Signs and Blank Lines

HTML allows spaces around equal signs. But space-less is easier to read and groups entities better together.

-   Do not add blank lines, spaces, or indentations without a reason.
-   For readability, add blank lines to separate large or logical code blocks.

-   Good Practice:

    ```html
    <body>
      <img src="gwoc.gif" alt="GWOC"/>
        <p>Admins</p>

        <p>Supervisors</p>
        <p>Mentors</p>
    </body>
    ```

-   Bad Practice:

    ```html
    <body>

    <img src = "gwoc.gif" alt = "GWOC">

        <p>Admins</p>

        <p>Supervisors</p>

        <p>Mentors</p>


    </body>
    ```

### List and Table in HTML

-   Good Table Example:

    ```html
    <table>
      <tr>
        <th>Name</th>
        <th>Description</th>
      </tr>
      <tr>
        <td>A</td>
        <td>Description of A</td>
      </tr>
      <tr>
        <td>B</td>
        <td>Description of B</td>
      </tr>
    </table>
    ```

-   Good List Example

    ```html
    <ul>
      <li>Managers</li>
      <li>Admins</li>
      <li>Supervisors</li>
      <li>Mentors</li>
      <li>Contributors</li>
    </ul>
    ```

### Never Skip

As we seen above, A HTML page can be validated without writing or closing a tag.

-   The `<title>` element is required in HTML.
-   The contents of a page title is very important for search engine optimization (SEO)!
-   The page title is used by search engine algorithms to decide the order when listing pages in search results.
-   Omitting `<body>` tag can produce errors in older browsers.
-   Omitting `<html>` tag and `<body>` can also crash DOM and XML software.
-   If we omit `<head>` tag, Browsers will add all elements before `<body>`, to a default `<head>` element.

### HTML Lang Attribute

We should always specify the lang attribute to define the language of the web-page to the browsers and the search engines.

```html
<!DOCTYPE html>
  <html lang="en-US">
  <head>
    <title>Girlscript Foundation</title>
  </head>
  <body>
    <p>GWOC</p>
  </body>
</html>
```

### HTML Meta Data

The `<meta>` tag contains additional information related to the document such as page description, keywords, author, character set, etc.

-   The web browsers use the metadata to display content, and keywords are used by search engines and other web-services.
-   Best Practice:

    ```html
    <meta charset="UTF-8">
    ```

### Setting viewport in HTML

We use the `<meta>` tag of the head to create a viewport for a website.

-   The browser controls the scaling of the web-page, using the meta viewport. The width=device-width specifies that page’s width will be equal to the device’s width where the web page will be displayed.
-   The initial-scale=1.0 is used to set the initial zoom level of the web-page when it is first loaded.
-   Best Practice:

    ```html
    <!DOCTYPE html>
      <html>
      <head>
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
      </head>
      <body>
        <h2>Viewport</h2>
        <p>Try to run this code on different websites.</p>
      </body>
    </html>
    ```

### HTML Style Sheets

For linking stylesheets,we can use simple linking syntax. The type attribute is not necessary.

-   Best Practice:

    ```html
    <link rel="stylesheet" href="style.css">
    ```

-   We should compress short CSS rules in a single line.

    ```html
    p{font-family:Verdana; font-size:15px}
    ```

-   We should write long CSS rules over multiple lines.

    ```html
    body {
      background-color: black;
      font-family: "Arial Black";
      font-size: 16em;
      color: white;
    }
    ```

-   Use a space before the opening bracket.
-   Use two spaces for indentation.
-   Only Use quotes for the values if they contain spaces.
-   Use a semicolon for each property-value pair.
-   Place the closing bracket on the last line.

### Javascript

The type attribute is not necessary for linking the javascript files. Use the simple syntax.

-   There should be a correct use of id attributes to access HTML elements else it would produce errors.
-   Best Practice:

    ```html
    <!DOCTYPE html>
    <html lang="en-US">
    <head>
      <title>Girlscript Foundation</title>
    </head>
    <body>
      <p id="Demo">Summer of Code</p>
      <p id="demo">Winter of Contributing</p>
      <script>
        // Paragraph 2 will be overwritten
        document.getElementById("demo").innerHTML = "HELLO!";
      </script>
    </body>
    ```

    ```html
    <script src="app.js">
    ```

### HTML File Names

Some web servers such as Apache and Unix do not allow case-insensitive file names to be loaded on their web-page.

-   For example, gwoc.jpg would not be the same as GWOC.jpg.
-   One must be aware of the case-sensitivity of their servers and do the naming of files accordingly.
-   Hence, it is advisable always to use lowercase name schemes.

### HTML Extensions

The HTML document should have .html or .htm as the file extension. There is no difference between the two.
A CSS file should have .css extension, and a javascript file should have .js as the extension.

### HTML Default Filenames

If the URL of a particular file does not specify its filename, a default filename such as index.html or default.html is added by the server itself.

-   We can configure the server with multiple default filenames but ensure that the same name is not used for another file.

## Summary

In this documentation, we’ve looked at the state of creating an HTML document, the best practices, and the correct usage of syntax. We’ve discussed some major HTML Style Guide such as the declaration of the document type, use of lang attributes, closing tags, use of lowercase names for attributes and elements, quoting of values, etc. We’ve also discussed the best practices involved with CSS and JavaScript, along with setting viewports.
