# HTML IFrames (Inline Frames) 
An IFrame (Inline Frame) is an HTML document embedded inside another HTML document on a website.<br>
The IFrame HTML element is often used to insert content from another source,such as an advertisement, into a Web page.<br>

<br>
(Basically it is used to display a web page within a web page)

[image url](https://imgur.com/klZ0pxA)
<br>
<br>

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
<b>Tip</b>: It is a good practice to always include a title attribute for the ```<iframe>```. This is used by screen readers to read out what the content of the iframe is.
## Attributes :

* **Height** and **Width** attributes to specify the size of the iframe.
The height and width are specified in pixels by default.

* **Target** attribute of the link must refer to the name attribute of the iframe.

* **SRC** attribute refers to the source(url) of the web page to display using iframe.






