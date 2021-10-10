<h1 align="center"><b> CSS Dropdowns </b></h1>
<hr>

## INTRODUCTION:

A CSS dropdown menu is an effective solution for enhancing the UI and UX
of an app or website. A drop-down menu is a sub-menu of a website or
app\'s main menu. It is used to showcase content buttons(links) for each
parent menu item.

## Basic Dropdown

Creating a dropdown box that appears when the user moves the mouse over
an element.

Example:

    <style>
    .dropdown {
      position: relative;
      display: inline-block;
    }

    .dropdown-content {
      display: none;
      position: absolute;
      background-color: #f9f9f9;
      min-width: 160px;
      box-shadow: 0px 8px 16px 0px rgba(0,0,0,0.2);
      padding: 12px 16px;
      z-index: 1;
    }

    .dropdown: hover .dropdown-content {
      display: block;
    }
    </style>

    <div class="dropdown">
      <span>Mouse over me</span>
      <div class="dropdown-content">
        <p>Hello World!</p>
      </div>
    </div>

### Output:

![Screenshot
(20)](829eea2640e64b3f96442161648c1240/e8f708af5781e2d46ccb186e438885d289d63971.png)

### Explanation:

`<b>`{=html}HTML)`</b>`{=html} Use any element to open the dropdown
content, e.g. a `<span>`{=html}, or a `<button>` element.

A container element (like `<div>`) is used to create the dropdown
content.

`<div>` element is wrapped around the elements to position the dropdown
content correctly with CSS.

`<b>`{=html}CSS)`</b>`{=html} The .dropdown class uses position:
relative, which is needed when the dropdown content is to be placed
right below the dropdown button (using position: absolute).

The .dropdown-content class holds the actual dropdown content. It is
hidden by default, and will be displayed on hover (see below). Note the
min-width is set to 160px. To make the width of the dropdown content as
wide as the dropdown button, set the width to 100% (and overflow: auto
to enable scroll on small screens).

Instead of using a border, the CSS box-shadow property is used here to
make the dropdown menu look like a \"card\".

The :hover selector is used to show the dropdown menu when the user
moves the mouse over the dropdown button.

## Dropdown Menu

Creating a dropdown menu that allows the user to choose an option from a
list.

Example:

    <style>
    /* Style The Dropdown Button */
    .dropbtn {
      background-color: #4CAF50;
      color: white;
      padding: 16px;
      font-size: 16px;
      border: none;
      cursor: pointer;
    }

    /* The container <div> - needed to position the dropdown content */
    .dropdown {
      position: relative;
      display: inline-block;
    }

    /* Dropdown Content (Hidden by Default) */
    .dropdown-content {
      display: none;
      position: absolute;
      background-color: #f9f9f9;
      min-width: 160px;
      box-shadow: 0px 8px 16px 0px rgba(0,0,0,0.2);
      z-index: 1;
    }

    /* Links inside the dropdown */
    .dropdown-content a {
      color: black;
      padding: 12px 16px;
      text-decoration: none;
      display: block;
    }

    /* Change color of dropdown links on hover */
    .dropdown-content a:hover {background-color: #f1f1f1}

    /* Show the dropdown menu on hover */
    .dropdown: hover .dropdown-content {
      display: block;
    }

    /* Change the background color of the dropdown button when the dropdown content is shown */
    .dropdown: hover .dropbtn {
      background-color: #3e8e41;
    }
    </style>

    <div class="dropdown">
      <button class="dropbtn">Dropdown</button>
      <div class="dropdown-content">
        <a href="#">Link 1</a>
        <a href="#">Link 2</a>
        <a href="#">Link 3</a>
      </div>
    </div>

### Output:

![Screenshot
(22)](829eea2640e64b3f96442161648c1240/d8d2d4e61ea5ddb3fd61c4ae2c760df45985801d.png)

## Right-aligned Dropdown Content

If you want the dropdown menu to go from right to left, instead of left
to right, add right: 0;

Example:

    <!DOCTYPE html>
    <html>
    <head>
    <style>
    .dropbtn {
      background-color: #4CAF50;
      color: white;
      padding: 16px;
      font-size: 16px;
      border: none;
      cursor: pointer;
    }

    .dropdown {
      position: relative;
      display: inline-block;
    }

    .dropdown-content {
      display: none;
      position: absolute;
      right: 0;
      background-color: #f9f9f9;
      min-width: 160px;
      box-shadow: 0px 8px 16px 0px rgba(0,0,0,0.2);
      z-index: 1;
    }

    .dropdown-content a {
      color: black;
      padding: 12px 16px;
      text-decoration: none;
      display: block;
    }

    .dropdown-content a:hover {background-color: #f1f1f1;}

    .dropdown:hover .dropdown-content {
      display: block;
    }

    .dropdown:hover .dropbtn {
      background-color: #3e8e41;
    }
    </style>
    </head>
    <body>

    <h2>Aligned Dropdown Content</h2>
    <p>Determine whether the dropdown content should go from left to right or right to left with the left and right properties.</p>

    <div class="dropdown" style="float:left;">
      <button class="dropbtn">Left</button>
      <div class="dropdown-content" style="left:0;">
      <a href="#">Link 1</a>
      <a href="#">Link 2</a>
      <a href="#">Link 3</a>
      </div>
    </div>

    <div class="dropdown" style="float:right;">
      <button class="dropbtn">Right</button>
      <div class="dropdown-content">
      <a href="#">Link 1</a>
      <a href="#">Link 2</a>
      <a href="#">Link 3</a>
      </div>
    </div>

    </body>
    </html>

### Output:

![Screenshot
(23)](829eea2640e64b3f96442161648c1240/baf20bef8a2ec979cbb8f6f70497095ff49621ea.png)

## Dropdown Image

Adding an image and other content inside the dropdown box.

Example:

    <!DOCTYPE html>
    <html>
    <head>
    <style>
    .dropdown {
      position: relative;
      display: inline-block;
    }

    .dropdown-content {
      display: none;
      position: absolute;
      background-color: #f9f9f9;
      min-width: 160px;
      box-shadow: 0px 8px 16px 0px rgba(0,0,0,0.2);
      z-index: 1;
    }

    .dropdown:hover .dropdown-content {
      display: block;
    }

    .desc {
      padding: 15px;
      text-align: center;
    }
    </style>
    </head>
    <body>

    <h2>Dropdown Image</h2>
    <p>Move the mouse over the image below to open the dropdown content.</p>

    <div class="dropdown">
      <img src="img_5terre.jpg" alt="Cinque Terre" width="100" height="50">
      <div class="dropdown-content">
      <img src="img_5terre.jpg" alt="Cinque Terre" width="300" height="200">
      <div class="desc">Beautiful Cinque Terre</div>
      </div>
    </div>

    </body>
    </html>

### Output:

![Screenshot
(25)](829eea2640e64b3f96442161648c1240/38ed0c97d749645c7fc3361485267de42034cc5f.png)

## Dropdown Navbar

Adding a dropdown menu inside a navigation bar.

Example:

    <!DOCTYPE html>
    <html>
    <head>
    <style>
    ul {
      list-style-type: none;
      margin: 0;
      padding: 0;
      overflow: hidden;
      background-color: #333;
    }

    li {
      float: left;
    }

    li a, .dropbtn {
      display: inline-block;
      color: white;
      text-align: center;
      padding: 14px 16px;
      text-decoration: none;
    }

    li a:hover, .dropdown:hover .dropbtn {
      background-color: red;
    }

    li.dropdown {
      display: inline-block;
    }

    .dropdown-content {
      display: none;
      position: absolute;
      background-color: #f9f9f9;
      min-width: 160px;
      box-shadow: 0px 8px 16px 0px rgba(0,0,0,0.2);
      z-index: 1;
    }

    .dropdown-content a {
      color: black;
      padding: 12px 16px;
      text-decoration: none;
      display: block;
      text-align: left;
    }

    .dropdown-content a:hover {background-color: #f1f1f1;}

    .dropdown:hover .dropdown-content {
      display: block;
    }
    </style>
    </head>
    <body>

    <ul>
      <li><a href="#home">Home</a></li>
      <li><a href="#news">News</a></li>
      <li class="dropdown">
        <a href="javascript:void(0)" class="dropbtn">Dropdown</a>
        <div class="dropdown-content">
          <a href="#">Link 1</a>
          <a href="#">Link 2</a>
          <a href="#">Link 3</a>
        </div>
      </li>
    </ul>

    <h3>Dropdown Menu inside a Navigation Bar</h3>
    <p>Hover over the "Dropdown" link to see the dropdown menu.</p>

    </body>
    </html>

\#\#\#Output: ![Screenshot
(26)](829eea2640e64b3f96442161648c1240/34f36a8af325168ffa0a56ee60dfb6c035ccb9cb.png)

## Reference:

`<a href="https://www.w3schools.com/css/css_dropdowns.asp">`{=html}w3schools`</a>`{=html}
:::
