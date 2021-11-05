## INDIVIDUALLY ROUNDED CORNERS

### WHAT IS INDIVIDUALLY ROUNED CORNERS:

With CSS you can easily configure the border individually. It means that you can round up a single corner of an element. The syntax is same as the other ones , the only difference is the position we are selecting here. 

### IMPORTANT NOTE:

To select corners you can use :
- top-left
- top-right
- bottom-left
- bottom-right

![Border Preview](https://mgearon.com/wp-content/uploads/2020/07/css-border-radius.png)

### SYNTAX:
```css
tagName(e.g: div,span,etc){
    border-position(in either top-left or top-right or bottom-left or bottom-right)-radius: value(in Length,%,etc);
}
```
#### SYNTAX EXAMPLE:
```css
div{
    border-top-left-radius: 50%;
}
```
```css
div{
    border-top-right-radius: 40%;
}
```
```css
div{
    border-bottom-left-radius: 10px;
}
```
```css
div{
    border-bottom-right-radius: 40vh;
}
```