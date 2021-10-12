![ ](https://images.samimunir2002.repl.co/boxModel.png)

# What is Margin?

As you can see in the image the outermost layer of the box is margin. With the help of the margin we can do spacing outside the element or content. Let's take an example: Let suppose we have two elements `h1` and `p`. Both are not in the presentable form, not looking good. So make it look better  and presentable we add some spacing with the help of margin.  

### Before Spacing
![ ](https://images.samimunir2002.repl.co/withoutSpace.png)

### After Spacing
![ ](https://images.samimunir2002.repl.co/withSpace.png)

## Margin Properties

We can edit our document by giving space from sides (top,bottom,right,left). If you want to give space from all sides equally, you can also do that.

1. margin-top
2. margin-bottom
3. margin-right
4. margin-left
5. margin (give space equally from all sides)

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