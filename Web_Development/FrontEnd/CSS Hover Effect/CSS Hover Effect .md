# CSS Hover Effect
## 🤔When to use?
We need to use it when we need to add some changes when user hover in certain area.
## 🤔How to use this?
To use this we need to follow followinf syntax
### 👉🏽Syntax
```
:hover{
    css declarations;
}
```
### 👉🏽Example
[![Screenshot 2021-10-28 at 7.10.26 PM.png)](https://www.dropbox.com/s/fotknrlip96i154/Screenshot%202021-10-28%20at%207.10.26%20PM.png?dl=0&raw=1)](https://drive.google.com/file/d/1d8_lcSNvAAgJVjPbz5KvhPOjsCQbDpAr/view?usp=sharing)
#### 👉🏽HTML File
```
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Document</title>
</head>
<body>
    <div class="box">
         <h1>Hello World</h1>
    </div>
</body>
</html>
```
#### 👉🏽CSS File
```
.box{
    height: 500px;
    width: 500px;
    background-color: black;
    margin: auto;
}
h1{
    color: aqua;
    text-align: center;
    margin: auto;
}
.box:hover{
    background-color: orange;
}
h1:hover{
    color: brown;
}
```