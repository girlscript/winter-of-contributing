# **Flex Properties**
The Flexible Box Layout module has a sub-property called flex. This property contains flex-grow, flex-shrink, and flex-basis.   It is used to control how a flex-item grows or shrinks to fit into the available area.  With this CSS attribute, it is simple to position child elements and the primary container.

### Syntax
```
flex: flex-grow flex-shrink flex-basis | auto | none | initial | inherit;
```

## **Property Values**
- **flex-grow**: This value determines how much the item will grow in comparison to the other flex items.
- **flex-shrink**: This value determines how much the item will shrink in comparison to the other flex items.
- **flex-basis**: This value determines the width of the flex item.
- **auto**: This flex property value is the same as 1 1 auto.
- **none**: This flex property value is the same as 0 0 auto.
- **initial**: It resets the property's value to its default and is the  same as 0 1 auto.
- **inherit**: This property is inherits its value from its parent element.

#### The flex property can take up to three values.
1. **One value**: The value must be a number or a keyword such as none, auto, or initial.
2. **Two values**: The first value must be a number (flex-grow), the second value can either be a number (flex-shrink) or a valid width value (flex-basis).
3. **Three values**: The first value must be a number (flex-grow), the second value must be a number (flex-shrink) and the third value must be a valid width value (flex-basis).

### Example
```
<!DOCTYPE html>
<html>
  <head>
    <title>CSS flex Property</title>
    <style>
      body
      {
        font-family: Arial, Helvetica, sans-serif;
      }
      .flex-container
      {
        width: 230px;
        height: 100px;
        border: 1px solid black;
        display: flex;
        background-color: #FF7A00;
      }
      .wrapper
      {
        width: 220px;  
        margin: 20px;
        float: left;
        text-align: center;
        margin-top: -20px;
      }
      .flex-item
      {
        flex: auto; /* flex-grow */
      }
      .flex-item1
      {
        flex: 0 60px; /* flex-grow, flex-basis */
      }
      .flex-item2
      {
        flex: 2 2; /* flex-grow, flex-shrink */
      }
      .flex-item3
      {
        flex: 0 1 40px; /* flex-grow, flex-shrink, flex-basis */
      }
      .flex-item, .flex-item1, .flex-item2, .flex-item3, .flex-item4
      {
        background-color: #fff6ee;
        margin: 4px;
        float: left;
      }
    </style>
  </head>

  <body>
    <h1 style="margin-left: 20px;"> CSS flex Property </h1>
    <div class="wrapper">
      <h3> flex: auto </h3>
      <div class = "flex-container">
        <div class = "flex-item"></div>
        <div class = "flex-item"></div>
        <div class = "flex-item"></div>
      </div>
    </div>
    <div class="wrapper">
      <h3> flex: 0 60px </h3>
      <div class = "flex-container">
        <div class = "flex-item1"></div>
        <div class = "flex-item1"></div>
        <div class = "flex-item1"></div>
      </div>
    </div>
    <div class="wrapper">
      <h3> flex: 2 2 </h3>
      <div class = "flex-container">
        <div class = "flex-item2"></div>
        <div class = "flex-item2"></div>
        <div class = "flex-item2"></div>
      </div>
    </div>
    <div class="wrapper">
      <h3> flex: 0 1 40px </h3>
      <div class = "flex-container">
        <div class = "flex-item3"></div>
        <div class = "flex-item3"></div>
        <div class = "flex-item3"></div>
      </div>
    </div>
  </body>
</html>
```
### Screenshot
![image](https://user-images.githubusercontent.com/84243683/134486080-2596c13a-5a42-44e9-afe2-b1c60706c98b.png)
