# Example 3 - Tab Switching

<img src='example3.gif'>
<br>
<br>
HTML Code

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="./tab.css"/>
    <title>Example3 - Tab Switching</title>
</head>
<body>
    <div class="content">
        <h1>T-Shirts</h1>
        <div class="buttons">
            <button class="all" id="all">All</button>
            <button class="black" id="black">Black</button>
            <button class="white" id="grey">Grey</button>
        </div>
    
    
        <div class="cards" id="allcontent">
            <div class="row">
                <div class="card">
                    <img src="./media/amazon3.webp" alt="black1" height="300px">
                    <p class="name">Black Design T-shirt</p>
                    <p class="price">₹399</p>
                </div>
                <div class="card">
                    <img src="./media/grey-t1.webp" alt="black1" height="300px">
                    <p class="name">Grey Honeycomb T-shirt</p>
                    <p class="price">₹499</p>
                </div>
                <div class="card">
                    <img src="./media/t1.jpg" alt="black1" height="300px">
                    <p class="name">Mustard T-shirt</p>
                    <p class="price">₹215</p>
                </div>
                <div class="card">
                    <img src="./media/grey-t2.webp" alt="black1" height="300px">
                    <p class="name">Grey T-shirt</p>
                    <p class="price">₹359</p>
                </div>
            </div>
            <div class="row">
                <div class="card">
                    <img src="./media/t3.jpg" alt="black1" height="300px">
                    <p class="name">Cool Blue T-shirt</p>
                    <p class="price">₹550</p>
                </div>
                <div class="card">
                    <img src="./media/t2.jpg" alt="black1" height="300px">
                    <p class="name">Fresh Cyan T-shirt</p>
                    <p class="price">₹299</p>
                </div>
                <div class="card">
                    <img src="./media/amazon1.webp" alt="black1" height="300px">
                    <p class="name">Pure Black T-shirt</p>
                    <p class="price">₹250</p>
                </div>
                <div class="card">
                    <img src="./media/amazon2.webp" alt="black1" height="300px">
                    <p class="name">Grey Design T-shirt</p>
                    <p class="price">₹219</p>
                </div>
            </div>
        </div>
        <div class="cards" id="blackcontent">
            <div class="row">
                <div class="card">
                    <img src="./media/amazon3.webp" alt="black1" height="300px">
                    <p class="name">Black Design T-shirt</p>
                    <p class="price">₹399</p>
                </div>
                <div class="card">
                    <img src="./media/amazon1.webp" alt="black1" height="300px">
                    <p class="name">Pure Black T-shirt</p>
                    <p class="price">₹250</p>
                </div>
            </div>
        </div>
        <div class="cards" id="greycontent">
            <div class="row">
                <div class="card">
                    <img src="./media/grey-t1.webp" alt="black1" height="300px">
                    <p class="name">Grey Honeycomb T-shirt</p>
                    <p class="price">₹499</p>
                </div>
                <div class="card">
                    <img src="./media/grey-t2.webp" alt="black1" height="300px">
                    <p class="name">Grey T-shirt</p>
                    <p class="price">₹359</p>
                </div>
                <div class="card">
                    <img src="./media/amazon2.webp" alt="black1" height="300px">
                    <p class="name">Grey Design T-shirt</p>
                    <p class="price">₹219</p>
                </div>
            </div>
        </div>
    </div>
    <div class="footer">
        <p>Made with <span class="heart">&hearts;</span> by <span><a class="github" href="https://github.com/amankumar11">Aman Kumar</a></span> for <span class="gwoc">GWOC'21</span></p>
    </div>
    <script src="./tab.js"></script>
</body>
</html>
```
<br>
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
    top: 0; left: 0; bottom: 0; right: 0;
    
}

.buttons{
    background-color: white;
    border-radius: 25px;
    padding-left: 10px;
    padding-right: 10px;
    font-size: 30px;
    font-weight: 600;
}

.buttons button{
    background-color: white;
    padding-left: 20px;
    padding-right: 20px;
    padding-top: 5px;
    padding-bottom: 5px;
    margin-right: 10px;
    margin-left: 10px;
    border: 1px solid black;
    border-radius: 10px;
}

.cards{
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: center;
    width: 50%;
    /* border: 1px solid black; */
    margin-top: 15px;
}

.row{
    display: flex;
    flex-direction: row;
}

.card{
    width: 250px;
    border: 1px solid rgba(128, 128, 128, 0.486);
    border-radius: 15px;
    margin-top: 5px;
    margin-bottom: 5px;
    margin-right: 10px;
    margin-left: 10px;
}

.card img{
    margin-top: 10px;
    margin-bottom: 5px;
}

.name{
    font-size: 18px;
}

#all{
    color: white;
    background-color: black;
}

#blackcontent{
    display: none;
}
#greycontent{
    display: none;
}

/* footer  */

.footer {
    font-family: 'Quicksand', sans-serif;
    position: relative;
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
<br>
Javascript Code

```javascript
const all = document.getElementById('all');
const black = document.getElementById('black');
const grey = document.getElementById('grey');
const allcontent = document.getElementById('allcontent');
const blackcontent = document.getElementById('blackcontent');
const greycontent = document.getElementById('greycontent');

black.addEventListener('click', ()=>{
    allcontent.style.display='none';
    blackcontent.style.display='flex';
    greycontent.style.display='none';

    black.style.color='white';
    black.style.backgroundColor='black';
    all.style.color='black';
    all.style.backgroundColor='white';
    grey.style.color='black';
    grey.style.backgroundColor='white'; 
});

all.addEventListener('click', ()=>{
    allcontent.style.display='flex';
    blackcontent.style.display='none';
    greycontent.style.display='none';

    black.style.color='black';
    black.style.backgroundColor='white';
    all.style.color='white';
    all.style.backgroundColor='black';
    grey.style.color='black';
    grey.style.backgroundColor='white'; 
});

grey.addEventListener('click', ()=>{
    allcontent.style.display='none';
    blackcontent.style.display='none';
    greycontent.style.display='flex';

    black.style.color='black';
    black.style.backgroundColor='white';
    all.style.color='black';
    all.style.backgroundColor='white';
    grey.style.color='white';
    grey.style.backgroundColor='black'; 
});

```