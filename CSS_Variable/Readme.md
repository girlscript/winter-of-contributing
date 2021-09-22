
# _CSS Custom Variable_
Custom properties are the most useful way to change style by changing only one value.

## _Syntax_
For creating a custom variable , you need to give a name begins with two hyphens (--) and declace a value to it.
For Example:
```
--name_color: blue;
```
This will create a varible name:  **name_color** and assign it value **blue**.
We can create it either by using tag **:root** for global scope or inside the any selector i.e local scope.
## _:root_
This will create a global scope variable and can be applied to whole HTML file.
Example :
```
:root{
    --primary_size: 10rem;
}
```
We can used the primary_size in any selector. 
## _var() Function_
CSS **var()** function is a function used to insert the value in CSS variable.This will help in changing variables in media queries and Javascript.
## _Synatax_
**var(--name_of_variable,value);**
## _Advantages_
-This will make the code easier and we can easily change the style mutiple time by only changing one value.
## _Fallback value_
We can attach fallback value to CSS property so that browser can revert the value if given value is invalid.
For Example: 
```
color: var(--web_color,purple);
```
This will set color to purple if your variable wasn't set. 
## _Inherit CSS Variables_
To make use of inheritance, CSS variables are often defined in the :root element.When you create a variable, it is available for you to use inside the selector in which you create it and also any other selector . This property is called Inheritance of CSS variable.
In the below example you can see the **--para_size** is declare inside the **:root** and used in **#Para** and **#web**. 

## _Example_
HTML:
```
<h1 id="heading">Hello Everyone!!</h1>
<p id="Para">Welcome to <span id="web">WebPage</span></p>
```
CSS:
```
:root {
  --heading_color: rgb(70, 45, 175); 
  --heading_size: 2rem;
  --para_color: #000;
  --para_size: 1rem;
  --web_color: rgb(45, 177, 201);
}

#heading {
  font-size: var(--heading_size);
  color: var(--heading_color);
}

#Para {
  font-size: var(--para_size);
  color: var(--para_color);
}

#web{
  font-size: var(--para_size);
  color: var(--web_color);
}
```
## _Output:_
![Capture](https://user-images.githubusercontent.com/76036422/134403483-d4320d0a-df35-4a7c-a3b7-d25b149da8cb.PNG)

## _Reference_ : 
> https://www.w3schools.com/css/css3_variables_javascript.asp 