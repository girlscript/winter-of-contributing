# __Frames__

### __Introduction__
Frame object represents an HTML frame which defines one particular window(frame) within a frameset. It defines the set of frame that make up the browser window. It is a property of the window object.
It is wretten in __frame tag__ .It has no end tag but they need to be closed properly.

### __Create a Frame in JavaScript__
- Use the frameset element in place of the body element in an HTML document.
- Use the frame element to create frames for the content of the web page.
- Use the src attribute to identify the resource that should be loaded inside each frame .
- Create a different file with the contents for each frame .


Let's say that you want to divide the frameset evenly into two child windows. 
One child window is at the top and the other is at the bottom. Since you are dividing the frameset horizontally, you'll need to define the rows attribute. The top child window takes up 50 percent of the frameset, and the bottom child window takes up 
the other 50 percent. 
Here is the value that is assigned to the rows attribute to create these child windows:
```html
<frameset rows="50%,50%">
```

After you define the frameset, you can insert a web page into each child window. 
You do this by using the frame HTML tag. Each child window has its own frame tag. You specify the web page that will be displayed in the child window by defining a value for the src attribute of the frame tag. You can also specify a unique name for the child window by assigning the name to the name attribute of the frame tag.

For example, suppose that you want WebPage1.html to appear as the top child window. Here's what you'd need to write
```html
<frame src="WebPage1.html" name="topPage" />
```

You'll need to define a __frame tag__ within the __frameset tag__ for each child window contained in the __frameset tag__. The first frame tag within the frameset tag refers to the upper left–most child window. Subsequent frame tags refers to child windows that appear left to right, top to bottom within the __frameset tag__.

### __Example__

The following example shows how to create a frameset that contains two child windows, one on the top and the other on the bottom:

Frameset.html
```html

<html>
<head>
 <title>Create a Frame</title>
</head>
<frameset rows="50%,50%">
 <frame src="WebPage1.html" name="topPage" />
 <frame src="WebPage2.html" name="bottomPage" />
</frameset>
</html>

```


WebPage1.html

```html
<html>
<head>
 <title>Web Page 1</title>
 <script language="Javascript" type="text/javascript">
 <!--
 function ChangeContent() {
 alert("Function Called")
 }
 -->
 </script>
</head>
 <body>
 <FORM  method="post">
 <P>
 <INPUT name="WebPage1" value="Web Page 1"
 type="button" />
 </P>
 </FORM>
 </body>
</html>
```


WebPage2.html
```html
<html>
<head>
 <title>Web Page 2</title>
</head>
 <body>
 <FORM  method="post">
 <P>
 <INPUT name="WebPage2" value="Web Page 2"
 type="button"  onclick="parent.topPage.ChangeContent()" />
 </P>
 </FORM>
 </body>
</html>
```

### __Output__

<img width="714" alt="frameop" src="https://user-images.githubusercontent.com/68474842/143996150-dd8978a1-d128-4f3d-9015-dfb4e0032182.PNG">

<br>

Here frameset is divided into two frames.


Contributor: [Utkarsha Kakade](https://github.com/utkarshakakade)


