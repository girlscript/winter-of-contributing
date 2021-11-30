# Bootstrap Buttons

Bootstrap is a open-source CSS based framework. With the help of bootstrap one can make create a website within minutes that is responsive and elegant, It provides readymade,reusable components of the webstructure.
Bootstrap can be downloaded locally or via CDN by specifying this `link rel="stylesheet" href=
"https://maxcdn.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css` in your head part of the html file.


By specifing the classes below you can customize your button.


- btn btn-primary:-For getting a button of blue colour
- btn btn-secondary:-For getting a button of gray colour
- btn btn-success:-For getting a button of green colour
- btn btn-warning:-For getting a button of yellow colour
- btn btn-danger:-For getting a button of red colour

```
<body style="text-align:center;">
    <div class="container mt-3">
         
        <h1 style="color:green;">
            Bootstrap Buttons
        </h1>
         
        <h2>Buttons</h2>
         
        <button type="button" class="btn btn-primary">Primary</button>
        <button type="button" class="btn btn-secondary">Secondary</button>
        <button type="button" class="btn btn-success">Success</button>
        <button type="button" class="btn btn-warning">Warning</button>
        <button type="button" class="btn btn-danger">Danger</button>
    </div>
</body>
```

Following output is displayed 

![Capture1](https://user-images.githubusercontent.com/70684116/144081631-14278209-2414-4f48-bf53-7c3213e62920.PNG)


Button Outlines:-Bootstrap provides a number of classes for generating outlined buttons i.e. button without background color. 
The outline button remove any background color, image style applied to the buttons. The classes are as follows

- btn btn-outline-primary:- Generates a button outlined with blue colour
- btn btn-outline-secondary:- Generates a button outlined with grey colour
- btn btn-outline-success:- Generates a button outlined with green colour
- btn btn-outline-danger:- Generates a button outlined with red colour
- btn btn-outline-info:- Generates a button outlined with cyan colour
- btn btn-outline-warning:- Generates a button outlined with red colour
- btn btn-outline-light :- Generates a button outlined with a light colour
- btn btn-outline-dark:- Generates a button outlined with black colour

```
<body style="text-align:center;">
    <div class="container mt-3">
         
        <h1 style="color:green;">
            GeeksforGeeks
        </h1>
         
        <h2>Button Outline</h2>
         
        <button type="button" class="btn btn-outline-primary">
            Primary
        </button>
         
        <button type="button" class="btn btn-outline-secondary">
            Secondary
        </button>
         
        <button type="button" class="btn btn-outline-success">
            Success
        </button>
         
        <button type="button" class="btn btn-outline-danger">
            Danger
        </button>
         
        <button type="button" class="btn btn-outline-warning">
            Warning
        </button>
         
        <button type="button" class="btn btn-outline-info">
            Info
        </button>
         
        <button type="button" class="btn btn-outline-light">
            Light
        </button>
        <button type="button" class="btn btn-outline-dark">
            Dark
        </button>
    </div>
</body>
```


![Capture2](https://user-images.githubusercontent.com/70684116/144083247-11d7177d-0721-4762-becd-d16392d2b57b.PNG)

Bootstrap sizes:- There are different classes available in bootstrap which allow you to change the size of your element.They are as follows

- btn-lg:- Used for making the button large
- btn-sm:- Used for making the button small

```
<body style="text-align:center;">
    <div class="container mt-3">
         
        <h1 style="color:green;">
            GeeksforGeeks
        </h1>
         
        <h2>Button Sizes</h2>
         
        <button type="button" class="btn btn-success btn-sm">
            Small Button
        </button>
         
        <button type="button" class="btn btn-success">
            Default Button
        </button>
         
        <button type="button" class="btn btn-success btn-lg">
            Large Button
        </button>
    </div>
</body>
```

The following output is displayed

![Capture4](https://user-images.githubusercontent.com/70684116/144085200-e362c80e-6162-432c-a367-393585fe8698.PNG)

The following browsers support all the above changes:- Chrome,safari,Firefox,opera,safari etc




