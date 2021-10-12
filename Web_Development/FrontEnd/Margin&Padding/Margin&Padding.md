![](https://images.samimunir2002.repl.co/boxModel.png)

# What is Margin?

As you can see in the image the outermost layer of the box is margin. With the help of the margin we can do spacing outside the element or content. Let's take an example: Let suppose we have two elements `h1` and `p`. Both are not in the presentable form, not looking good. So make it look better  and presentable we add some spacing with the help of margin.  

### Before Spacing
![ ](https://images.samimunir2002.repl.co/withoutSpace.png)

### After Spacing
![ ](https://images.samimunir2002.repl.co/withSpace.png)

## Margin Properties

We can edit our document by giving space from sides (top,bottom,right,left). If you want to give space from all sides equally, you can also do that.

- margin-top
- margin-bottom
- margin-right
- margin-left
- margin (give space equally from all sides)

There is also a short cut to give space from different sides in one line.

```css
margin: 5px 10px 15px 20px; 
```
5px space from top, 10px space from right, 15px from bottom and 20px from left.

```css
margin: 5px 15px 5px;
```
5px space from top, 15px space from right and left and 5px  from bottom.

```css
margin: 15px 5px;
```
15px space from top and bottom and 5px space from right and left.

### CODE
```html
<!DOCTYPE html>
<html>
<head>
    <style>
        div{
            border: 1px solid black;
            margin: 60px;
            width: fit-content;
        }
        h1{
            margin-top: 30px;
            margin-left: 10px;
            margin-bottom: 8px;
        }
        p{
            margin: 0px 15px 25px 30px;
        }
    </style>
<title>About Margin</title>
</head>
<body>
<div>
<h1>Heading</h1>
<p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Possimus, neque doloremque commodi.</p>
</div>
</body>
</html>
```
### OUTPUT
![ ](https://images.samimunir2002.repl.co/code.png)

# What is Padding?

As you can see in the first image the innermost layer of the box is padding. With the help of the padding we can do spacing inside the element or content. Let's take an example: Let suppose we have **button**. It is not looking good without spacing. So make it look better we add some spacing with the help of padding.  

### Before Spacing
![ ](https://images.samimunir2002.repl.co/button.png)

### After Spacing
![ ](https://images.samimunir2002.repl.co/buttonwithpadding.png)

## Padding Properties

We can edit our document by giving space from sides (top,bottom,right,left). If you want to give space from all sides equally, you can also do that.

1. padding-top
2. padding-bottom
3. padding-right
4. margin-left
5. padding (give space equally from all sides)

There is also a short cut to give space from different sides in one line.

```css
padding: 10px 5px 20px 15px; 
```
10px space from top, 5px space from right, 20px from bottom and 15px from left.

```css
padding: 15px 5px 15px;
```
15px space from top, 5px space from right and left and 15px  from bottom.

```css
padding: 8px 16px;
```
8px space from top and bottom and 16px space from right and left.

### CODE
```html
<!DOCTYPE html>
<html>
<head>
    <style>
        div{
            border: 1px solid black;   
            width: fit-content;
            padding-bottom: 10px;
            padding-top: 10px;
            padding-right: 20px;
            padding-left: 20px;
        }
        label{
            padding-right: 8px;
            font-size: 18px;
        }
        input{
            padding: 3px 15px;
        }      
     </style>
<title>About Padding</title>
</head>
<body>
<div>
 <label>Need more information</label>
 <input type="button" value="Go here">
</div>
</body>
</html>
```
### OUTPUT
![ ](https://images.samimunir2002.repl.co/paddingPic.png)
