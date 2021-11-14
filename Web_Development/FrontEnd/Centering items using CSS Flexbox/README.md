# Center items using Flexbox

CSS Flexbox has been out there for some time and given that you know about all its features, it could be a boon and save you a lot of time trying to align elements and making them responsive.

**Today we will see how to center elements using flexbox in just 3 lines of code!!**

First lets take a container and add a box inside it.

```html
<div class="container">
    <div class="box"></div>
</div>
```

```css
.box{
    height: 50px;
    width: 50px;
    background-color: red;
}

.container{
    border: 2px solid black;
    height: 200px;
}
```

![Initial box and container](https://user-images.githubusercontent.com/86849664/139646837-0af823d2-bf6b-42e2-b941-eb02480533ec.png)

In order to center the inner div we need to make the parent div a flex container.

To do so, we will use `display: flex` property for the parent container. This will make all the elements inside the container **flex-items**.

```css
.container{
    border: 2px solid black;
    height: 200px;
    display: flex;
}
```



## Centering horizontally

To center our item horizontally we use the `justify-content: center;`, this will center our block along the main-axis. The direction of main-axis could be changed using the `flex-direction` property.

```css
.container{
    border: 2px solid black;
    height: 200px;
    display: flex;
    justify-content: center;
}
```

![Horizontally centered](https://user-images.githubusercontent.com/86849664/139647071-6648f42f-9819-4134-845a-b3b818f9dd08.png)


## Centering Vertically

To center our item vertically we use the `align-items: center;`, this will center our block along the cross-axis. 

```css
.container{
    border: 2px solid black;
    height: 200px;
    display: flex;
    justify-content: center;
    align-items: center;
}
```

![Vertically centered](https://user-images.githubusercontent.com/86849664/139647149-3a1a9b33-b92c-4abc-a8fe-8a5489a81dea.png)


The nice aspect of flexbox is the styles apply to all the children of our flex container. If we add two more elements, they all stay centered within the parent container.

```html
 <div class="container">
        <div class="box"></div>
        <div class="box"></div>
        <div class="box"></div>
    </div>
```

![multiple boxes](https://user-images.githubusercontent.com/86849664/139647215-ceb290d0-489e-405f-bec0-0e38b93bf363.png)



## flex-direction property

By default the flex-direction is set as row. If we change the flex-direction to column that would interchange the main-axis and the cross-axis. It will also make our items stack in a column instead of a row like before.

![flex-direction](https://user-images.githubusercontent.com/86849664/139647286-56adde37-e110-407f-b338-30754270d768.png)

<p align="center">Image Source:<a href="https://medium.com/@sahil.kapoor440/css-flexbox-a-developers-rejoice-to-placing-elements-on-a-website-29efaa3aa9df">  Sahil Kapoor's Medium blog </a></p>
<br><br>

![flex-direction column](https://user-images.githubusercontent.com/86849664/139648344-6ea32642-29e8-4835-851b-a3f446f8ac14.png)

Hence, in this case our `justify-content` property will center the boxes vertically and `align-items` property will center the boxes horizontally.

```css
.container {
        border: 2px solid black;
        height: 400px;
        display: flex;
        flex-direction: column;
        justify-content: center;
      }
```


![justify-content](https://user-images.githubusercontent.com/86849664/139648521-13ed0bed-7b2f-4d63-a960-7103879d8892.png)


```css
.container {
        border: 2px solid black;
        height: 400px;
        display: flex;
        flex-direction: column;
        justify-content: center;
        align-items: center;
      }
```

![align-items](https://user-images.githubusercontent.com/86849664/139648662-f3c6355d-1bf1-45fa-8f56-597b34e48587.png)


Reference-links:

- [Basic concepts of flexbox MDN Docs](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Flexible_Box_Layout/Basic_Concepts_of_Flexbox)
- [W3Schools CSS Flexbox](https://www.w3schools.com/css/css3_flexbox.asp)
- [Centering Things with CSS Flexbox Blog by Chris Sev](https://www.better.dev/centering-things-with-css-flexbox)
