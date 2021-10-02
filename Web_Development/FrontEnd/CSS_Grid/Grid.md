# CSS GRID

CSS Grid Layout (“Grid” or “CSS Grid”), is a two-dimensional grid-based layout system for the web which when compared to any web layout system of the past, completely changes the way we design user interfaces. 
<br>
<br>
A grid is a collection of horizontal and vertical lines creating a pattern against which we are going to line up our design elements. They assist us to form layouts during which our elements won't jump around or change width as we move from page to page, providing greater consistency on our websites.
<br>
A grid can have columns, rows, then gaps between each row and column. The gaps are commonly cited as gutters.
<br>
<br>
To get started you have to make a container element as a grid with ```display: grid``` or ```display: inline-grid```.
<br>
All direct children of that HTML element become grid items.
<br>

For ex: display: grid
<br>

```
<style>
    .grid-container {
                display: grid;
                background-color: #2196F3;
                padding: 20px;
                text-align: center;
            }
</style>

<body>
    <div class="grid-container">
        <div class="grid-item">Girlscript</div>
        <div class="grid-item">Winter</div>
        <div class="grid-item">of</div>  
        <div class="grid-item">Code</div>
    </div>  
</body>
``` 
<br>
Here the elements will get placed as row by default and will span the full width of the container.
<br>
Output :
<br>

![gwoc2](https://user-images.githubusercontent.com/56999749/134310629-9fcde4ce-c24a-46bd-9b9d-5616d36ffe52.JPG)

For ex: display: inline-grid
<br>

```
<style>
     .grid-container {
                display: inline-grid;
                background-color: #2196F3;
                padding: 20px;
                text-align: center;
            }
</style>

<body>
    <div class="grid-container">
        <div class="grid-item">Girlscript</div>
        <div class="grid-item">Winter</div>
        <div class="grid-item">of</div>  
        <div class="grid-item">Code</div>
    </div>  
</body>
``` 
<br>
Here the elements will get placed as row by default and will span the full width of the container.
<br>
Output :
<br>

![gwoc3](https://user-images.githubusercontent.com/56999749/134311990-3217fa5a-2afa-4a45-929e-a0853f866c1e.JPG)

<br>

-  We outline rows and columns on our grid with the grid-template-columns and grid-template-rows properties. These outline grid tracks. A grid track is a space between any 2 lines on the grid.
<br>

## The grid-template-columns property : This property defines the breadth of every column. 

I have shown an example below with a grid of four 400-pixel-wide column tracks.
<br>

Important Note: If you've got over four items in a four columns grid, the grid can add a brand new row to place the things in.

<br>

```
<style>
    .grid-container {
                display: grid;
                background-color: #f58931;
                grid-template-columns: 400px 400px 400px 400px;
                padding: 10px;
                text-align: center;
            }
</style>

<body>
    <div class="grid-container">
        <div class="grid-item">Girlscript</div>
        <div class="grid-item">Winter</div>
        <div class="grid-item">of</div>  
        <div class="grid-item">Code</div>
    </div>  
</body>
``` 
<br>

Output - 

![gwoc4](https://user-images.githubusercontent.com/56999749/134328546-930d664a-bec7-4ef3-b5da-72025f7c2986.JPG)

## The grid-template-rows property : This property defines the height of each row. 

I have shown an example below with a grid of four 100-pixel-wide row tracks.

<br>

```
<style>
    .grid-container {
                display: grid;
                background-color: #f58931;
                grid-template-columns: 400px 400px 400px 400px;
                padding: 10px;
                text-align: center;
            }
</style>

<body>
    <div class="grid-container">
        <div class="grid-item">Girlscript</div>
        <div class="grid-item">Winter</div>
        <div class="grid-item">of</div>  
        <div class="grid-item">Code</div>
    </div>  
</body>
``` 
<br>

Output - 

![gwoc5](https://user-images.githubusercontent.com/56999749/134329082-848a3c49-1714-4235-845e-b333ffce95d3.JPG)

<br>

## The justify-content Property : This property is used to align the whole grid inside the container.

For ex:

<br>

```
<style>
    .grid-container {
                display: grid;
                background-color: #f58931;
                justify-content: space-evenly;
                padding: 20px 20px 20px 20px;
                font-size: 20px;
                text-align: center;
            }
</style>

<body>
    <div class="grid-container">
        <div class="grid-item">Girlscript</div>
        <div class="grid-item">Winter</div>
        <div class="grid-item">of</div>  
        <div class="grid-item">Code</div>
    </div>  
</body>
``` 
<br>

Output - 

![gwoc6](https://user-images.githubusercontent.com/56999749/134336062-55b868e6-9d5a-4a69-abc4-91638ae13006.JPG)

## The align-content Property : This property is used to vertically align the whole grid inside the container.

For ex:

<br>

```
<style>
    .grid-container {
                display: inline-grid;
                background-color: #f58931;
                align-content: center;
                padding: 20px 20px 20px 20px;
                font-size: 20px;
            }
</style>

<body>
    <div class="grid-container">
        <div class="grid-item">Girlscript</div>
        <div class="grid-item">Winter</div>
        <div class="grid-item">of</div>  
        <div class="grid-item">Code</div>
    </div>  
</body>
``` 
<br>

Output - 

![gwoc7](https://user-images.githubusercontent.com/56999749/134340027-b3c21f93-a6df-423a-a317-2ea7e32c909c.JPG)


### Reference : 
https://www.w3schools.com/css/css_grid.asp  

https://css-tricks.com/snippets/css/complete-guide-grid/#introduction 

https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Grid_Layout/Basic_Concepts_of_Grid_Layout


## Contributed by Liza Deka 😊





