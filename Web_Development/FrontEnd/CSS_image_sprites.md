# CSS Image Sprites

Image sprites are 2D images that are made by combining small images into one larger image at the specified X and Y coordinates. Implemeting Image sprites can be extremely advantageous as they reduce the number of HTTP requests made to the server for the image sources and makes the webpage more responsive for the user. They consume less data and reduce the bandwidth used to load multiple images.

Here is an example of Image sprites.

![image](https://user-images.githubusercontent.com/76458668/141327145-b50f6b22-d689-44d1-baa6-b0dff0643913.png)

CSS Sprites gets the image once, and then we can shift it around and only display parts of it with the effects we desire. Observe the following HTML/CSS code.

```
<!DOCTYPE html>
<html>
<head>
<style>
#navlist {
  position: relative;
}

#navlist li {
  margin: 0;
  padding: 0;
  list-style: none;
  position: absolute;
  top: 0;
}

#navlist li, #navlist a {
  height: 44px;
  display: block;
}

#prev {
  left: 0px;
  width: 43px;
  background: url('sprites.gif') 0 0;
}

#next {
  left: 63px;
  width: 43px;
  background: url('sprites.gif') --47px 0;
}
</style>
</head>
<body>

<ul id="navlist">
  <li id="prev"><a href=""></a></li>
  <li id="next"><a href=""></a></li>
</ul>

</body>
</html>
```

This generates the following output.<br>

<img src="https://user-images.githubusercontent.com/76458668/142746643-13799e63-8668-40b8-9ac0-a61d9c88aa37.png" width=200>

Instead of using three separate images, we use this single image - sprites.gif. Using CSS we can select the part we need and work on them separetely.
The *width* and *left* attributes help select the portion we want to use.

We can also add hover effects to the icons.
```
#prev a:hover {
  background: url('sprites.gif') 0 -45px;
}

#next a:hover {
  background: url('sprites.gif') -47px -45px;
}
```
### Creating sprites from images

There are many softwares and packages available to create sprites from a glob of images. A few of them are listed below.

- [*sprity*](https://www.npmjs.com/package/sprity) is a node package that has a lot of amazing features including formatting output as PNG, JPG, and stylesheet generation in CSS, Sass, and Stylus.
To install *sprity*:
```
$ npm install sprity -g
```
To generate sprites and the corresponding stylesheet
``` 
$ sprity ./output-directory/ ./input-directory/*.png
```
- [Image Sprites](https://marketplace.visualstudio.com/items?itemName=MadsKristensen.ImageSprites) from Visual Studio Marketplace is an extension that makes it easier to create, maintain and use image sprites in any web project.
- [CSS sprites tool](https://cssspritestool.com/) - CSS sprite generator is a free online tool to generate CSS sprites easily with drag and drop, projects
- [CodeShack-Images to sprites generator](https://codeshack.io/images-sprite-sheet-generator/)
