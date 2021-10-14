## CSS Float

## 🤔 When we have to use Float property?
When we want to set position of some element to the left or right side of the container then that time this propert is very important . Its simplest use is when we need to wrap some text around an image

## 🤔 How to use float property?

- `float:left`-This will shift the element to the left side of the page
- `float:right`-This will shift the element to the right side of the page
- `float:none`-This will not change position of the element it will be placed at its default position
- `float:inherit`-This will help the element to inherits its float property from its parent element

## 👉🏽 Example of  float:left

``` html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    
    <div style="display: block;">
        <img style="float: left;width: auto;"  src="download.png">
       
        <p style=" float: right;width: 80%;">Lorem ipsum dolor sit amet consectetur, adipisicing elit. 
            Soluta vitae quo id maiores atque consectetur quia eligendi doloremque praesentium, 
            ducimus qui dolore quaerat, neque voluptates laboriosam aliquid ut commodi quibusdam!</p>
       
    </div>
   
</body>
</html>
```

![Screenshot 2021-10-06 at 3.50.57 PM.png](https://www.dropbox.com/s/9hyc9hheeppgxys/Screenshot%202021-10-06%20at%203.50.57%20PM.png?dl=0&raw=1)

## 👉🏽 Example of  float:right

``` html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    
    <div style="display: block;">
        <img style="float: right;width: auto;"  src="download.png">
       
        <p style=" float: left;width: 80%;">Lorem ipsum dolor sit amet consectetur, adipisicing elit.
            Soluta vitae quo id maiores atque consectetur quia eligendi doloremque praesentium, 
            ducimus qui dolore quaerat, neque voluptates laboriosam aliquid ut commodi quibusdam!</p>
       
    </div>
   
</body>
</html>
```
![Screenshot 2021-10-06 at 3.50.57 PM.png](https://www.dropbox.com/s/9hyc9hheeppgxys/Screenshot%202021-10-06%20at%203.50.57%20PM.png?dl=0&raw=1)

## 👉🏽 Example of  float:none

``` html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    
    <div style="display: block;">
        <img style="float: none;width: auto;"  src="download.png">
       
        <p style=" float: none;width: 80%;">Lorem ipsum dolor sit amet consectetur, adipisicing elit.
            Soluta vitae quo id maiores atque consectetur quia eligendi doloremque praesentium,
            ducimus qui dolore quaerat, neque voluptates laboriosam aliquid ut commodi quibusdam!</p>
       
    </div>
   
</body>
</html>
```

![Screenshot 2021-10-12 at 6.38.58 PM.png](https://www.dropbox.com/s/tfew8oe8z4af1il/Screenshot%202021-10-12%20at%206.38.58%20PM.png?dl=0&raw=1)

## 👉🏽 Example of  float:inherit

``` html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    
    <div style="display: block;">
        <img style="float: inherit;width: auto;"  src="download.png">
       
        <p style=" float: inherit;width: 80%;">Lorem ipsum dolor sit amet consectetur, adipisicing elit. 
            Soluta vitae quo id maiores atque consectetur quia eligendi doloremque praesentium, 
            ducimus qui dolore quaerat, neque voluptates laboriosam aliquid ut commodi quibusdam!</p>
       
    </div>
   
</body>
</html>
```

![Screenshot 2021-10-12 at 6.38.58 PM.png](https://www.dropbox.com/s/tfew8oe8z4af1il/Screenshot%202021-10-12%20at%206.38.58%20PM.png?dl=0&raw=1)
