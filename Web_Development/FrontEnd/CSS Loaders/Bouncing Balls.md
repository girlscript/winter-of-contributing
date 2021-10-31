# Bouncing Balls

## HTML

```html
<div class="loader-wrapper">
    <div class="loader">
        <div class="dot d1"></div>
        <div class="dot d2"></div>
        <div class="dot d3"></div>
        <div class="dot d4"></div>
    </div>
</div>
```

*Add the above `HTML` code in the `body` tag.*

## CSS

```css
.loader-wrapper
{
  height: 80vh;
  display: flex;
  align-items: center;
  justify-content: center;
} 
.loader
{
  position: absolute;
  display: flex;
  align-items: center;
  justify-content: center;
}
.dot
{
  position: relative;
  width: 40px;
  height: 40px;
  margin: 8px;
  border-radius: 50%;
  background: #333;
  animation: bounce 1.2s linear infinite;
}

.d1
{
  animation-delay: .0s;
}

.d2
{
  animation-delay: .1s;
}

.d3
{
  animation-delay: .2s;
}
.d4
{
  animation-delay: .3s;
}

@keyframes bounce 
{
  0%, 100%
  {
    transform: translateY(25px);
  }
  25% 
  {
    transform: translateY(50px);
    background-color: #333;
  }
  50%
  {
    transform: translateY(-25px);
    background-color: #fff;
  }
  75% 
  {
    transform: translateY(-50px);
  }
}
```

*Add the above `CSS` in the `.css` file*

## Your Spinner will look like :

![Bouncing Balls](Bouncing_Balls.gif)

