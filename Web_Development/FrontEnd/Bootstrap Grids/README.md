# Bootstrap Grids

### What is a Grid-System?

A Grid-system is a very popular and easy way of placing content onto a page in rows and columns, ensuring that they are device responsive as well. It is a great tool to make the information on your website look more organized and approachable.

<p align="center"><img src="https://user-images.githubusercontent.com/86849664/140103682-989408da-fbcc-4216-8a1c-aa09a9b12c10.png" style="width: 500px; height: 500px;"></p>

<p align="center">Image Source: <a href="https://dev.to/ltephanysopez/css-grid-the-basics-4ppp"> Stephany's CSS Grids Blog on dev.to</a></p>

## Bootstrap Grids

Bootstrap has a **12 column grid system** which means that in a given row we can set the width of an element to anything from one to twelve columns in width. 

For example in the below picture all three blocks are of same size and thus have a width of four columns each.

![equal grids](https://user-images.githubusercontent.com/86849664/140103768-4bd97f28-c710-46ed-8599-0b78a018bef7.png)

Whereas in this picture the blocks take the size of four, two and three columns respectively.

![different size grids](https://user-images.githubusercontent.com/86849664/140103816-fc6b3191-9688-4f14-9777-31330892cddb.png)

To implement this grid-system we are provided with **six break-points** which makes these grids fully-responsive as well. To put it simply, suppose that you want a particular element to take the width of 6 columns in desktop screen but it should take a width of 12 columns in mobile screen then these break-points will help you in doing so. 

![breakpoint eg desktop](https://user-images.githubusercontent.com/86849664/140104098-63d0a761-4bf9-4cbf-8f51-0144ad6e5d70.png)

<p align="center"><img src="https://user-images.githubusercontent.com/86849664/140104040-abd48a82-5061-41be-b138-520b0614575d.png"></p>

<p align="center">Images Source: <a href="https://www.netflix.com/in/">Netflix India Website</a></p>

### Using Bootstrap Grids

The first thing to know is that **when we are making a bootstrap grid it always goes inside a container**. Let's start by doing just that.

```html
	<div class="container"></div>
```

#### Basic Grid

Now to create columns inside this container we first have to create a div with the class `row` and then add divs with class `col` inside it.

```html
	<div class="container">
        <div class="row">
            <div class="col"> 1 </div>
        </div>
	</div>
```

![basic grid 1](https://user-images.githubusercontent.com/86849664/140104223-0adcbfec-3e6a-42e8-bc9f-ab9acac24f97.png)

In this case we have added only one column and therefore it occupies the entire row.

If we add one more column...

```html
   <div class="container">
        <div class="row">
            <div class="col"> 1 </div>
            <div class="col"> 2 </div>
        </div>
	</div>
```

![basic grid 2](https://user-images.githubusercontent.com/86849664/140104376-c5d72c23-f109-4f25-b0d0-4329ad8a2c15.png)

Then both the columns will occupy 50% width of the entire row.

 If we add two more columns then each column will occupy 25% width of the entire row.
 
![basic grid 3](https://user-images.githubusercontent.com/86849664/140104429-6c679e1c-56af-4627-ab00-a84a2bee603d.png)

#### Column Widths

But what if in the above example we want the first column to occupy half of the screen? We do it by using `col-6` class, which basically specifies that the first block will take a width of 6 columns.

```html
<div class="container">
  <div class="row">
    <div class="col-6"> 1 </div>
    <div class="col"> 2 </div>
    <div class="col"> 3 </div>
    <div class="col"> 4 </div>
  </div>
</div>
```

![column width 1](https://user-images.githubusercontent.com/86849664/140104529-2aa1a28f-3ec6-412a-9380-a9be8f944e00.png)

Now the first column occupies half of the row and the rest three columns are equally sized in the remaining half of the row.

Similarly, if we wanted 2nd, 3rd and 4th block to occupy a width of 3, 2 and 1 column respectively, we will do it by using `col-3`, `col-2` and `col-1` classes respectively.

```html
<div class="container">
  <div class="row">
    <div class="col-6"> 1 </div>
    <div class="col-3"> 2 </div>
    <div class="col-2"> 3 </div>
    <div class="col-1"> 4 </div>
  </div>
</div>
```

![column width 2](https://user-images.githubusercontent.com/86849664/140104609-530ec14e-0a30-44dd-ae74-07c980e133ef.png)

#### Responsive Column Widths

Notice that the column sizes remain same even in mobile display.

<p align="center"><img src="https://user-images.githubusercontent.com/86849664/140104686-6a5d6814-0aa6-4684-aaaf-e0534711083a.png"></p>

This looks quite stuffed though. What if I wanted these columns to have different widths for different device sizes? This is when the responsive behavior of bootstrap grids come into play. 

Bootstrap provides us with **six break-points** namely xs, sm, md, l, xl, xxl, we can control container and column sizing by these breakpoint.

<p align="center"><img src="https://user-images.githubusercontent.com/86849664/140104748-d031e65b-eca5-4e56-b6a2-9564111a9775.png"></p>

<p align="center">Image Source: <a href="https://getbootstrap.com/docs/5.1/layout/grid/#grid-options">Bootstrap Grids Documentation</a>

##### Example:

Let's take two columns. I want these columns to occupy half of the screen width each in desktop and tablet devices but in mobile devices I want them to occupy the entire width of the screen.

For this we will use the `col-md-6` class. This basically means that we should have a six units column on any size from medium size(tablet size) upwards. So that means on tablet, laptop and large-desktop they will take six units, but on anything smaller than the medium size, namely mobile, they will cover the entire width of the screen.

```html
<div class="container">
  <div class="row">
    <div class="col-md-6"> 1 </div>
    <div class="col-md-6"> 2 </div>
  </div>
</div>
```


https://user-images.githubusercontent.com/86849664/140104900-99e4df45-168f-4618-b519-98ec366057a1.mp4



## Reference Links

- [The Net Ninja's Grid Layout Video](https://www.youtube.com/watch?v=irfbn103AzE)
- [Bootstrap Grids Documentation](https://getbootstrap.com/docs/5.1/layout/grid/)
- [W3School's Bootstrap Grid Documentation](https://www.w3schools.com/bootstrap/bootstrap_grid_system.asp)

