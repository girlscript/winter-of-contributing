# HTML IFrames (Inline Frames) 

An IFrame (Inline Frame) is an HTML document embedded inside another HTML document on a website.

The IFrame HTML element is often used to insert content from another source,such as an advertisement, into a Web page.

The ” iframe ” tag defines a rectangular region within the document in which the browser can display a separate document, including scrollbars and borders.

The HTML iframe name attribute is used to specify a reference for an `<iframe>` element. The name attribute is also used as a reference to the elements in JavaScript.

(Basically HTML iframe is used to display a web page within a web page)
![iframe image](https://imgur.com/hI0t3ZI.jpg)
## Code Snippet
```html
<!DOCTYPE html>
<head>
    <title>Document</title>
</head>
<body>
  
   <iframe src="demo.html" title="iframe Example 1" width="400" height="300"></iframe>
    
</body>
</html>
```
**Tip**: It is a good practice to always include a title attribute for the `<iframe>`. This is used by screen readers to read out what the content of the iframe is.

We can use multiple iframes inside a single web page.
![iframe image](https://imgur.com/9pgJ9LC.jpg)

## Attributes :
* **Height** and **Width** attributes to specify the size of the iframe.
The height and width are specified in pixels by default.

* **Target** attribute of the link must refer to the name attribute of the iframe.

* **SRC** attribute refers to the source(url) of the web page to display using iframe.

![img url](https://imgur.com/yuqoXKZ.jpg)

## Removing Default Frameborder :
The iframe has a border around it by default. However, if you want to modify or remove the iframe borders, the best way is to use the CSS border property.

The following example will simply render the iframe without any borders.
```html
<iframe src="hello.html" style="border:none;"></iframe>
```
Similarly, we can use the border property to add the borders of your choice to an iframe. The following example will render the iframe with 2 pixels pink border.

```html
<iframe src="hello.html" style="border: 2px solid pink;"></iframe>
```
## Using an iFrame as Link Target :
An iframe can also be used as a target for the hyperlinks.

An iframe can be named using the name attribute. This implies that when a link with a target attribute with that name as value is clicked, the linked resource will open in that iframe.

Let's try out an example to understand how it basically works:
```html
<iframe src="demo-page.html" name="myFrame"></iframe>
<p><a href="https://www.google.com" target="myFrame">Open TutorialRepublic.com</a></p>
```
***Refrences***:

[w3schools.com](https://www.w3schools.com)

[GeeksforGeeks](https://www.geeksforgeeks.org)

[WhatisTechtarget](https://whatis.techtarget.com)