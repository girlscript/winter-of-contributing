# Single Element CSS Spinner

## HTML

```html
<div class="loader">Loading...</div>
```

*Add the above `HTML` code in the `body` tag.*

## CSS

```css
.loader, .loader:before, .loader:after 
{
  background: #ffffff;
  -webkit-animation: load1 1s infinite ease-in-out;
  animation: load1 1s infinite ease-in-out;
  width: 1em;
  height: 4em;
}
.loader 
{
  color: #ffffff;
  text-indent: -9999em;
  margin: 88px auto;
  position: relative;
  font-size: 11px;
  -webkit-transform: translateZ(0);
  -ms-transform: translateZ(0);
  transform: translateZ(0);
  -webkit-animation-delay: -0.16s;
  animation-delay: -0.16s;
}
.loader:before, .loader:after 
{
  position: absolute;
  top: 0;
  content: '';
}
.loader:before 
{
  left: -1.5em;
  -webkit-animation-delay: -0.32s;
  animation-delay: -0.32s;
}
.loader:after 
{
  left: 1.5em;
}
@-webkit-keyframes load1 
{
  0%, 80%, 100% 
  {
    box-shadow: 0 0;
    height: 4em;
  }
  40% 
  {
    box-shadow: 0 -2em;
    height: 5em;
  }
}
@keyframes load1 
{
  0%, 80%, 100% 
  {
    box-shadow: 0 0;
    height: 4em;
  }
  40% 
  {
    box-shadow: 0 -2em;
    height: 5em;
  }
}

```

*Add the above `CSS` in the `.css` file*

## Your Spinner will look like :

![Single Element CSS Spinner](Single_Element_CSS_Spinner.gif)

Reference : [**Single Element CSS Spinners**](https://projects.lukehaas.me/css-loaders/)

