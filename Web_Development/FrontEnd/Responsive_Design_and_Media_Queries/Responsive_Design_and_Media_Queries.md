
<p align="center">
<img src="https://miro.medium.com/max/4800/1*YoXg1v9QIVbSKNaTIzr38A.jpeg" width="60%" height="60%" >
</p>

<h1 align="center">Responsive Design & Media Queries</h1>

<p>&nbsp;</p>

# **What is responsive design?**

Responsive style may be a style and production approach that permits a web site to be well viewed and used on all manner of devices (like on a smartphone, tablet, and desktop). The core principle is that every one devices get identical markup language supply, situated at identical universal resource locator, however totally different designs ar applied supported the viewport size to arrange elements and optimize usability.

It is vital to stay in mind that whereas planning a web site it ought to be attentive to use.



<p>&nbsp;</p>

# **Why responsive design** ?
We live in a multi-screen society. owing to this, it’s necessary for your web site to be seeable across as several devices as attainable, as a result of you never recognize what device somebody are going to be victimization to look at your web site.

The main goal of responsive style is to avoid the excess resizing, scrolling, zooming, or panning that happens with sites that haven't been optimized for various devices.



<p>&nbsp;</p>

# **Advantages of responsive design**
- **Cost effectiveness**

Maintaining separate sites for your mobile and non-mobile audiences will get overpriced. By victimization responsive style, you'll be able to economize by eliminating the price of paying for a mobile website.



- **Flexibility**

When you have a web site with responsive style, you'll create changes quickly and simply. you are doing not have to be compelled to worry concerning creating changes on two websites.

- **Improved user experience**

User expertise is crucial to web site homeowners .Responsive style, that offers a far higher user expertise,Because zooming and scrolling are eliminated, content may be viewed faster, and therefore the overall impression that guests have are way more positive.


- **Easier to maintain**

Again, multiple websites for multiple devices means that any changes must be created across all of them. With a responsive web site it means that you merely have to be compelled to create the modification once.




<p>&nbsp;</p>

# **What is  Media Query ?**

Media query is a **CSS** technique introduced in CSS3. Media queries allow us to adjust the display and orientation of content at different screen sizes.

Media queries ar the simplest way to focus on browser by sure characteristics, features, and user preferences, then apply designs or run different code supported those things. maybe the foremost common media queries within the world ar those who target explicit viewport ranges and apply custom designs, that offer the total plan of **responsive** style.



# **Media Query Syntax**

A media query consists of a media kind and might contain one or a lot of expressions, that resolve to either true or false.

```css
@media not|only mediatype and (expressions) {
  CSS-Code;
}
```



<p>&nbsp;</p>

# **CSS3 Media Types**
| Value       | Description                                           |
| ----------- | -----------                                           |
| all         | Used for all media type devices                       |
| print       | Used for printers                                     |
| screen      | Used for computer screens, tablets, smart-phones etc. |
|speech       | Used for screenreaders that "reads" the page out loud |

<p>&nbsp;</p>




# **Add a Breakpoint**
There area unit several screens and devices with totally different heights and widths, therefore it's exhausting to make a particular breakpoint for every device. to stay things straightforward you may target 5 common groups:

```css
/* Extra small devices (phones, 600px and down) */
@media only screen and (max-width: 600px) {...}

/* Small devices (portrait tablets and large phones, 600px and up) */
@media only screen and (min-width: 600px) {...}

/* Medium devices (landscape tablets, 768px and up) */
@media only screen and (min-width: 768px) {...}

/* Large devices (laptops/desktops, 992px and up) */
@media only screen and (min-width: 992px) {...}

/* Extra large devices (large laptops and desktops, 1200px and up) */
@media only screen and (min-width: 1200px) {...}
```



# **Media Queries Examples**

```css
@media screen and (min-width: 400px) {
  body {
    background-color: pink;
  }
}
```
This example changes the background-color to pink if the viewport is 400 pixels wide or wider.

<p>&nbsp;</p>

```css
@media screen and (max-width: 990px) {
  body {
    background-color: blue;
  }
}
```
This example changes the background-color to blue if the viewport is 900 pixels or less.




