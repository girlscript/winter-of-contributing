# TRANSPARENT FORM USING HTML AND CSS
In order to create a transparent layout for any website , one has to focus on following components:
- HTML 
- CSS

For an easy start , here a login form is created by using HTML. Further CSS is used to add the desired outlook. 

## HTML
HTML is referred as a basic skeleton for all websites. Here, it provides the layout of the whole login form. 
##### STEPS FOLLOWED:
- Sign-up into fontawesome.com and create your profile. In return , you will receive a kit of icons which will be used in the following website. 
- Import a file named as "kit.fontawesome" from your profile and select icons for email and password-input field.
- Inside the container class, one can start building his/her form by dividing it into two classes ,named as 'box'.
- The three components to be added inside file are: email field , password and a Sign-in button.

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
The CSS langauge has a major role in adding styles and responsive designs to one's website.
#### STEPS FOLLOWED:
- First a stylesheet is linked in html document, as shown above.
- The syntax followed:   
SELECTOR{   
Property: Value;  
}  
Put a dot before class-name and hash before id.  
For selecting a particular tag inside a class, first lay the class/id-name foloowed by tag-name.  
- After linking the sheet, we define the properties for whole form inside the container class.
- For tiny components like entry fields, icons and button, style properties are added inside the respective selectors.
- We can observe that by just using simple style features , one can create a transparent outlook with ease.
- In order to make it more appealing, one can add background of their own choice.
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
In order to make it more attractive, one can add background of their own choice.
 
![image](https://user-images.githubusercontent.com/77229404/143570034-57444114-9ae5-43bf-8b4f-152d84b2039b.png)

## REFERENCES:
- https://www.codingflicks.com/2020/11/transparent-login-form.html
- https://www.w3schools.com/css/css_image_transparency.asp
