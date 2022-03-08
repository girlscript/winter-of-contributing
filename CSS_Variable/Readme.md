### _Topic Covered_
Topic covered in this document:
- CSS Custom Variable
- Scope of Variable
- Fallback value in CSS Variable
- Inheritance in CSS Variables
# _CSS Custom Variable_
Custom properties are the most useful way to change style by changing only one value and the main reason of using them is "Don't Repeat Yourself(DRY)".
## _Syntax_
- Fisrtly, custom variable are declared in selector and begins with two hyphens(--).
For Example:
![image](https://user-images.githubusercontent.com/76036422/134815039-f540a1e5-0cff-4eab-a568-3bbfb99ed7b5.png)
This will create a varible name:  **name_color** and assign it value **blue**.
## _Scope of Variable_
#### _Global Scope and Local Scope_
- Global scope , you use :root variable and this will accessable by any selector. :root is a pseudo-class selector . For example given below : 
**--heading_color is accessable by any selector.**
- On the other hand , local variable are accessable only by the block in which they are declared. For example : 
**--color is on accessable by #heading.**
Taking an Example:
![image](https://user-images.githubusercontent.com/76036422/134784241-07e375a8-af0e-47ca-a300-c9c95ba65b5d.png)
>Once a variable has been declared and assign value to it . You can go ahead and use them.
For using CSS variable , var() function is used.
## _var() Function_
CSS **var()** function is a function used to insert the value in CSS variable.This will help in changing variables in media queries and Javascript.
## _Syntax_
**var(--name_of_variable,value);**

![image](https://user-images.githubusercontent.com/76036422/134814880-3eafd594-d146-45d5-b332-1c626ebcfa13.png)

## _Fallback value_

When using your variable as a CSS property value, you can attach a fallback value that your browser will revert to if the given variable is invalid.

![image](https://user-images.githubusercontent.com/76036422/134814967-fcf21362-f503-4c19-8185-271874a543e3.png)

## _Inheritance in CSS Variables_

- To make use of inheritance, CSS variables are often defined in the :root element.When you create a variable, it is available to use inside the selector in which you create it and also any other selector . This property is called Inheritance of CSS variable.
In the below example you can see the **--para_size** is declare inside the **:root** You can then see that the variable is inherited and that all the child elements which use it get **font-size: 1rem** .
## _Example_
#### _HTML:_
```
<h1 id="heading">Hello Everyone!!</h1>
<p id="Para">Welcome to <span id="web">WebPage</span></p>
```
#### _CSS:_
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
