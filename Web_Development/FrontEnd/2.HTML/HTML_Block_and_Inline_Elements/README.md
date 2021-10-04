# Block and Inline Elements

HTML Elements are basically classified into two types:
* Block Elements
* Inline Elements

These two types define the default display value of a particular element.

***

## Inline Elements
Basically Inline Elements are the type of elements which occupy the space bounded by its parent element. As the name suggests these elements these elements are restricted to a particular line only. Moreover, they are included as part of main text only and not as a separate section. An Inline Element does not start on a new line.

Examples of Inline Elements

`<a>` `<span>` `<img>` `<code>` `<site>` `<button>` `<input>` 

    
    
```html
<!DOCTYPE html>
<html>
    <head>
        <title>Inline Elements</title>
    </head>
    <body>
        <a href="#">Hello World</a>
        <span>This is an inline text</span>
        <button>Submit</button>
    </body>
</html> 
``` 

### Output

![image](https://user-images.githubusercontent.com/65715910/134344755-1cca59db-4486-4827-91e4-2ddd7837b1fe.png)

 
***
    
## Block Elements
Unlike Inline Elements Block Elements always start from a new line. Also they take up the whole width available.
One more interesting fact about Block Elements is that they have top and bottom margin available to them.

Examples of Block Elements

`<div>` `<header>` `<footer>` `<form>` `<hr>` `<table>` `<section>` 

```html
<!DOCTYPE html>
<html>
    <head>
        <title>Block Elements</title>
    </head>
    <body>
        <header>This text is written under header tag</header>
        <div>This text is written under div tag</div>
        <footer>This text is written under header tag</footer>
    </body>
</html>  
```   
### Output

![image](https://user-images.githubusercontent.com/65715910/134344895-514954e1-1ec8-40aa-8786-a6dcdad642ec.png)


    
