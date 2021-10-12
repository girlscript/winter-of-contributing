# Spinning wheel

## HTML

```html
<div class="loader-wrapper">
	<div class="loader"></div>
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
  border: 8px solid #f3f3f3; /* Light grey */
  border-top: 8px solid #f65f25; /* Orange */
  border-radius: 50%;
  width: 20px;
  height: 20px;
  animation: spin 2s linear infinite;
}

@keyframes spin 
{
  0% { transform: rotate(0deg); }
  100% { transform: rotate(360deg); }
}
```

*Add the above `CSS` in the `.css` file*

## Your Spinner will look like :

![Spinning wheel](Spinning_wheel.gif)

Reference : [**How TO - CSS Loader**](https://www.w3schools.com/howto/howto_css_loader.asp)

