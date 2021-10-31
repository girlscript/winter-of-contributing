# Spinning Cube

## HTML 

```html
<div class="loader-wrapper">
    <div class="loader">
        <div class="loader-inner"></div>
    </div>
</div>
```

*Add the above `HTML` code in the `body` tag.*

## CSS

```css
.loader-wrapper 
{
  width: 100%;
  height: 100%;
  position: fixed;
  z-index: 3;
  top: 0;
  left: 0;
  background: #c3c3c3;
  display: flex;
  justify-content: center;
  align-items: center; 
}

.loader 
{
  display: inline-block;
  width: 30px;
  height: 30px;
  position: relative;
  border-radius: 2px;
  border: 3px solid #ffffff;
  display: flex;
  justify-content: center;
  align-items: center;   
  animation: loader 3s infinite ease-in;
  box-shadow: 0 0 16px whitesmoke;
}

.loader-inner 
{
  width: 30px;
  height: 30px;
  border-radius: 0px;
  vertical-align: top;
  display: inline-block;
  width: 100%;
  background-color: #fff;
  animation: loader-inner 2s infinite ease-in;
}

@keyframes loader 
{
  0% { transform: rotate(0deg);}
  25% { transform: rotate(180deg);}
  50% { transform: rotate(180deg);}
  75% { transform: rotate(360deg);}
  100% { transform: rotate(360deg);}
}

@keyframes loader-inner 
{
  0% { height: 0%;}
  25% { height: 0%;}
  50% { height: 100%;}
  75% { height: 100%;}
  100% { height: 0%;}
}
```

*Add the above `CSS` in the `.css` file*

## Your Spinner will look like :

![Spinning cube](Spinning_cube.gif)

