# Anchor Tags
If we talk about the anchor tag it also defined as the hyperlink , it is specially used link fron one page to another.
<p> If we talk about the ' href ' attribute which is used to link's destination. </p>

```
<a href="https://GWOC'21.com"> GirlScript Winter of Contribution </a>
```

### Default settings of Anchor tag
1. Anchor tag is only a placeholder for a hyperlink.
2. Linked page or Website will be open in same tab if target equal to blank is not applied.


## Attributes of Anchor tag
1. Download : It is used when the developer wants that the file get automatically downloaded when anyone clicks on the hyperlink.

```
<a href="/doc/GWOC'21.png" download>
```
2. media : When we have to implement the media query and specifies the type of device/screen size.

```
<a href="images/GWOC'21.jpg"
media="view and (resolution:500dpi)">Open media image for viewing.
</a>
```

3. hreflang : It is same as href but it is used when we have to specified the type of language used in a document linked in hyperlink.
```
<a href="https://www.GWOC'21.com" hreflang="en">W3Schools</a>
```

4. ping : Specifies the space-separated list of URLs and when the link is followed . It post requests with the body ping and information will be sent by the browser in simple words it is used for tracking. 
```
<a href="https://www.GWOC'21.com/htm" ping="https://www.GWOC'21.com/trackpings">
```

5. referrerpolicy : It specifies to referrer information to send with the hyperlink.
```
<a href="https://www.GWOC'21.com" referrerpolicy="origin">
```

6. rel : Used when we have to show the relation between the current document and linked document.
```
<a rel="nofollow" href="http://www.linkheaven.com/">Delicious Food</a>
```

7. target : It specifies where to open the document.
```
<a href="https://www.GWOC'21.com" target="_blank"> Visit GirlScript Winter of contribution! </a>
```

8. type : Specifies the media type of the linked document.
```
<a href="https://www.GWOC'21.com" type="text/htm"> GirlScript Winter of Contribution</a>
```

# Image Tag
Image tag or we can say img tag we use this to link the images to web pages and it also create a holding space for referenced image.
<p> There are two important attributes which should be included for working of img tag.</p>

1.  src : It specifies the path of the image linked.
2. alt : Whenever the image not loads or for any reason image can't be displayed then the message in " alt " attribute will be displayed.

```
<img src="GWOC'21.jpg" alt="GWOC'21 logo">
```

## Attributes Of Img Tag

1. alt : Specifies the alternate text for an image which is displayed when the image is not loaded.

```
<img src="GWOC'21.gif" alt="GWOC'21 gif">
```
2. crossorigin : This allow the images from others websites or third-party sites that allow cross-origin access to be used.
```
<img src="GWOC'21.jpg" id="GWOC'21" crossorigin="anonymous">
```

3. height : Specifies the height of the image.
```
<img src="lickheaven.jpg" alt="lickheaven logo"  height="600">
```

4. ismap : ismap specifies the images as the server-side image map.
```
<a href="/work_page.php">
  <img src="GWOC'21.gif" alt="www.GWOC'21.com" ismap>
</a>
```

5. loading : It is used when we want browser to defer the loading of images until some conditions meet or browser should load images immediately.
```
<img src="Tajmahal.jpg" alt="Agra monument" style="width:100%" loading="lazy">
```

6. longdesc : longdesc specifies a URL to detailed description or explaination of the image.
```
<img src="Down.jpg" alt="Down.com" width="100" height="132" longdesc="Down.txt">
```

7. referrerpolicy : referrerpolicy specifies which refferer imformation to use when fetching with an image.
```
<img src="GirlScript.jpg" alt="GWOC image" referrerpolicy="no-referrer">
```

8. sizes : Used to decide the image size for different page layouts.
```
<img srcset="GWOC'21.jpg"
     sizes="(max-width: 701px) 122px,
            (max-width: 990px) 195px,
            280px">
```

9. src : It basically specifies the path of the image.
```
<img src="GWOC'21.png" alt="GWOC'21 png image">
```

10. srcset : It typically specifies the list of the files of images to use in different situation.
```
<img src="time.png"
       alt="watch"
       srcset="time.png 1x, /en-us/web/html/element/img/clock-demo-400px.png">
```

11. usemap : Specifies an image for a client side image mapping.
```
<img src="workspace.jpg" alt="Workspace" usemap="#work" width="300" height="200">
```

12. width : Used to set the width of image for different web pages.
```
<img src="GWOC'21.jpg" alt="Girlscript Winter of contribution logo " width="100">
```
