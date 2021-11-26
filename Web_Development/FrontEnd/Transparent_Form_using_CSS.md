# TRANSPARENT FORM USING HTML AND CSS
In this document , we look upon following parts while providing a glimpse on how to create a transparent effect on any professional/personal form:
- HTML 
- CSS
- LOGIN FORM : For simplicity , we consider a simple login form to layout the transparency feature in more appropriate way.

## HTML
The basic skeleton of our all websites , here provides the layout of the whole login form 
##### STEPS FOLLOWED:
- Here we first signup into fontawesme.com and create our profile . the website in turn provides a kit of icons for our website.
- First we import a file named as “kit . fontawesome” from a website named as fontawesome for the small icons used with email and password tag .  
- Inside the container class we start building our form by catagorising it into two class boxes.
- The three components that we add are email field , password and a button for signing-in.

#### IMPLEMENTATION :

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <script src="https://kit.fontawesome.com/eb24a2bee1.js" crossorigin="anonymous"></script>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Log-In</title>
    <link rel="stylesheet" href="style13.css">
</head>
<body >
    
   <div class="container">
       <h1>Sign-In</h1>
       <div class="box">
        <i class="fa fa-envelope" aria-hidden="true"></i>
        <input type="email" name="email" id="email" placeholder="Enter your email">
      </div>
       <div class="box">
        <i class="fa fa-key" aria-hidden="true"></i>
        <input type="password" name="password" id="password" placeholder="Enter your password">
       </div>
       <button class="btn">Sign in</button>
   </div> 
</body>
</html>
```

## CSS:
The CSS is the major counterpart whose role is to design and add responsive effects to our website . 
#### STEPS FOLLOWED:
- First we link a stylesheet in html document as shown above in the code.
- The syntax followed here is:
SELECTOR{
Property: Value;
}
For class we use ‘.’ Dot before name of class . Similarly for id ‘#’ hash is used before name of id.
For selecting a particular tag inside a class we first lay the class/id name and then the tag .
-Starting with the container class we provide design for whole form enclosed inside it.
-We then go on adding styles for the entry fields , image icons and lastly the button.
- Looking deep we can observe , that all simple style features have been used to create a transparent look .
- We can add background of our own for making it more appealing.   
- 
#### IMPLMENTATION:

```CSS
*{
    margin:0;
    padding:0;

}

body{
    background: url(pexels-little-visuals-1954.jpg) no-repeat center center fixed ;
    background-size:cover;
    
}

body::before{
    opacity:0.8;
}


.container{
    
    color:white;
    position:absolute;
    top:45%;
    left:45%;

}

.container h1{
    font-size:40px;
    display:inline-block;
    border-bottom: 5px solid papayawhip;

    padding: 13px 0px;
}

.box{
    width:100%;
    border-bottom: 2px solid papayawhip;
    margin: 32px 0px;
}

.box input{
    background: none;
    width: 80%;
    
    font-size: 20px;
    border:none;
    outline: none;
    color:white;

}
.box i{
    width:10px;
    text-align:center;
    padding-left: 10px;
    padding-right: 10px;

}

.btn{
    cursor:pointer;
    outline:none;
    width:25%;
    margin:12px 0;
    padding: 6px;
    border:2px solid papayawhip;
    border-radius: 10px;

}
```

## THE FINAL LOOK :
We can add background of our own for making it more appealing.
 
![image](https://user-images.githubusercontent.com/77229404/143570034-57444114-9ae5-43bf-8b4f-152d84b2039b.png)

## REFERENCES:
- https://www.codingflicks.com/2020/11/transparent-login-form.html
- https://www.w3schools.com/css/css_image_transparency.asp
