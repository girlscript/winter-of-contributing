# HTML - DropDown Menu

## About DropDown Menu 

* Drop-Down Menu is a list of options, it helps us to choose one value from a predefined list. When we clicked or hover over it, It displays options vertically (drop-down) and it again comes in their normal poasition when we clicked or hover somewhere else. 

* Whenever we build a big Web-pages, To display your content you have a limited area to present your content and there to maximize space, we use `Drop-Down Menu`.

* It also help us to narrow down our chocies as to where we want to go ( It also know as drop-down list, drop menu, pull-down list, picklist ).

* In below picture you can see, how drop down menu looks like -

<p align="center">
  <img src=https://s3.amazonaws.com/menumaker-blog/post_images/2017/05/1-2.png width="800px" />
</p>

[ Source of this picture:  <a href="https://s3.amazonaws.com/menumaker-blog/post_images/2017/05/1-2.png">Community Service Now</a> ]

## How to Make a Dropdown Menu in HTML
Here, I will show you with the help of example how you can easily make a Drop-Down Menu. So let's start,

Required a basic knowledge of Form, Label and Select tag.

```
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Making a Dropdown Menu</title>
</head>

<body>

  <!--Here we are going to use Form, label and select tag to show a simple "Drop-down Menu" -->

    <h2>Here how it looks like</h2>
    <br>

    <form>
        
        <label>
            Skills Required
        </label>

        <select>

            <option value="HTML">HTML</option>
            <option value="CSS">CSS</option>
            <option value="JavaScript">JavaScript</option>
            <option value="Media Querries">Media Querries</option>
            <option value="Git & Github">Git & Github</option>
            <option value="Angular or Reactjs">Angular or Reactjs</option>
            <option value="Nodejs">Nodejs</option>
            <option value="Mangodb">Mangodb</option>

        </select>
    </form>

</body>

</html>
```

* After running this code in your editor you will get the output, Also in below picture you can see How ouput looks like -

<p align="center">
  <img src="https://github.com/ayush-sleeping/Its-Nothing-don-t-open-it/blob/main/simple%20dropdown.png" width="600px" />
</p>

## Making DropDown Menu in Header of Web.page
Here we are going to make a "Dropdown Menu" in the header of the Web.page, where we usually see Dropdown Menu. And also we are going to use little bit of `CSS `, To give a Simple design to Header of Web.page. <br>

Required a knowledge of HTML - div, ul, and li tags .

* Step 1 : `Using HTML ` , Create a basic structure of Web.page . 

```
<!DOCTYPE html>
<html lang="en">
<head>

    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">

    <title>Dropdown Menu | Code</title>

</head>
<body>
    
</body>
</html>
```

* Step 2: Now the main work comes, Making the Drop-dwon menu in `<body>     </body>`  using div, ul and li tags.

```
<body>


 <div class="menu-bar">
        <ul>


            <li class="active"><a href="#"></i>Home</a></li>
            <li><a href="#">Blog</a></li>

    <!-- In this Drop down you have to "click", then Dropdown menu will appear -->

            <li><a href="#">Tutorials</a>
                <div class="sub-menu-1">
                    <ul>
                        <li><a href="#">HTML5</a></li>
                        <li><a href="#">CSS</a></li>
                        <li><a href="#">JavaScript</a></li>
                        <li><a href="#">Bootstrap</a></li>
                    </ul>
                </div>
            </li>


            <li><a href="#">About</a>
                <div class="sub-menu-1">
                    <ul>
                        <li><a href="#">Mission</a></li>

    <!-- In this Drop down you have to "hover", then Dropdown menu will appear -->

                        <li class="hover-me"><a href="#">Vision</a>
                            <div class="sub-menu-2">
                                <ul>
                                    <li><a href="#">Perception</a></li>
                                    <li><a href="#">Focus</a></li>
                                    <li><a href="#">Intuition</a></li>
                                    <li><a href="#">Insight</a></li>
                                </ul>
                            </div>
                        </li>

                        <li><a href="#">Team</a></li>
                    </ul>
                </div>
            </li>


            <li><a href="#">Contacts</a></li>
            <li><a href="#">FAQ</a></li>


        </ul>
    </div>

</body>
```

* Step 3: Adding `CSS ` , Make a another file and name it "Design.css".

```
*
{
    padding: 0;
    margin: 0;
    box-sizing: border-box;
}

body{
    background: #D03D56 ;
    background-size: cover;
    background-position: center;
    font-family: sans-serif;
}

.menu-bar{
    background: rgb(4, 30, 80); 
    text-align: center;
}

.menu-bar ul{
    display: inline-flex;
    list-style: none;
    color: white;
}

.menu-bar ul li{
    width: 120px;
    margin: 15px;
    padding: 15px;
}

.menu-bar ul li a{
    text-decoration: none;  
    color: white;
}

.active, .menu-bar ul li:hover{
    background: rgb(123, 140, 233);
    border-radius: 3px;
}

.menu-bar .fa{
    margin-right: 8px;
}

.sub-menu-1{
    display: none;
}

.menu-bar ul li:hover .sub-menu-1{
    display: block;
    position: absolute;
    background: rgb(4, 30, 80); 
    margin-top: 15px;
    margin-left: -15px;
}

.menu-bar ul li:hover .sub-menu-1 ul{
    display: block;
    margin: 10px;
}

.menu-bar ul li:hover .sub-menu-1 ul li{
    width: 150px;
    padding: 10px;
    border-bottom: 1px dotted white;
    background: transparent;
    border-radius: 0;
    text-align: left;
}

.menu-bar ul li:hover .sub-menu-1 ul li:last-child{
    border-bottom: none;
}

.menu-bar ul li:hover .sub-menu-1 ul li a:hover{
    color:rgb(123, 140, 233)
}

.fa-angle-right{
    float: right;
}

.sub-menu-2{
    display: none;
}

.hover-me:hover .sub-menu-2{
    position: absolute;
    display: block;
    margin-top: -40px;
    margin-left: 140px;
    background: rgb(4, 30, 80);
}
```

Step 4 : Now you have to link `CSS ` file with `HTML ` file.

```
<!--You have to add these in "Head tag"-->

 <link rel="stylesheet" href="Design.css">
```
<br>

* Now run the code , In below picture you can see how the output looks like -

<p align="center">
  <img src=https://github.com/ayush-sleeping/DropDown-Menu/blob/main/Snapshot/Snapshot-2.png width="800px" />
</p>
