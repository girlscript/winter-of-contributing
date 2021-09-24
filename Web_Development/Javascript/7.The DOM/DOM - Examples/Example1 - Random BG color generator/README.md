# Example 1 - Background color changer

![Example 1](./example1.gif)

HTML Code

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="./randomColor.css"/>
    <title>Example1 - Background color changer</title>
</head>
<body>
    <div class="content">
        <div class="box">
            <p>Background Color: <span class="color">RGB(255,255,255)</span></p>
        </div>
        <button class="changebtn" id="colorbtn">Change!</button>
    </div>
    <div class="footer">
        <p>Made with <span class="heart">&hearts;</span> by <span><a class="github" href="https://github.com/amankumar11">Aman Kumar</a></span> for <span class="gwoc">GWOC'21</span></p>
    </div>
    <script src="./changeColor.js"></script>
</body>
</html>
```

CSS Code

```css
@import url('https://fonts.googleapis.com/css2?family=Quicksand:wght@500&display=swap');

.content{
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: center;
    text-align: center;
    font-family: 'Quicksand', sans-serif; 
    margin: auto;
    position: absolute;
    top: 0; left: 0; bottom: 0; right: 0;
    
}

.box{
    background-color: white;
    border: 2px solid black;
    border-radius: 25px;
    padding-left: 10px;
    padding-right: 10px;
    font-size: 30px;
    font-weight: 600;
}

.changebtn{
    margin-top: 10px;
    padding-top: 10px;
    padding-bottom: 10px;
    padding-left: 20px;
    padding-right: 20px;
    background-color: white;
    font-family: 'Quicksand', sans-serif;
    font-size: 20px;
    border-radius: 10px;
}

.changebtn:hover{
    background-color: black;
    color: white;
}

/* footer */

.footer {
    font-family: 'Quicksand', sans-serif;
    position: fixed;
    left: 0;
    bottom: 0;
    width: 100%;
    background-color: rgba(255, 255, 255, 0.253);
    color: black;
    text-align: center;
  }

.heart{
    color: red;
}

.github{
    text-decoration: none;
}

.gwoc{
    color: tomato;
}
```
Javascript Code

```javascript

const btn = document.getElementById('colorbtn');
const color = document.querySelector('.color');

btn.addEventListener("click", ()=>{
    
    const c1 = getRandom1(255);
    const c2 = getRandom2(255);
    const c3 = getRandom3(255);
    document.body.style.backgroundColor = `rgba(${c1},${c2},${c3})`;
    color.textContent = `RGB(${c1},${c2},${c3})`;
    color.style.color=`rgba(${c1},${c2},${c3})`;
});

function getRandom1(max){
    return Math.floor(Math.random() * max);
}
function getRandom2(max){
    return Math.floor(Math.random() * max);
}
function getRandom3(max){
    return Math.floor(Math.random() * max);
}
```
