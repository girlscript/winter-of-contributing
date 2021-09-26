# CANVAS IN HTML5

## What is a canvas in HTML5?

Canvas is basically a feature unique to HTML5. The name 'canvas' is self-explainatory. It is almost similar to the 'canvas' we use in painting.Canvas is used to create a white sheet in which we can draw various shapes using javascript.

`We can say that the canvas is like a container for graphics.`

Canvas is fully compatible will all browsers that support canvas.

Let us take a look at the syntax for creating a canvas:
```
  <canvas id="mycanvas">Element not supported</canvas>
```
If we create a canvas using the above syntax then the canvas will be created but will not be visible on the screen. To distincty identify the canvas element we can add a border to it. We can also give our canvas a particular width and height.

Here is the code snippet for such a canvas,
```
  <canvas id="mycanvas" height="200" width="400" style="border: 1px solid blue">Element not supported</canvas>
```
If we use this syntax, then a canvas of height 200,and width 400 with a blue border around it will be created.

For browsers that donot support a canvas element the message "Element not supported" will be printed.

Using the above syntax, let us write a complete code for creating a canvas with a diagonal line drawn inside it with the help of javascript.

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Canvas</title>
</head>
<body>
    <canvas id="mycanvas" height="200" width="400" style="border: 1px solid blue">Element not supported</canvas>
</body>
<script>
    var c=document.getElementById("mycanvas");
    var k= c.getContext("2d");
    k.moveTo(0,0);
    k.lineTo(400,200);
    k.stroke();
</script>
</html>
```
### An important thing to be noted is that the (0,0) coordinate will be the top left corner point. All other coordinates will be relative to that.