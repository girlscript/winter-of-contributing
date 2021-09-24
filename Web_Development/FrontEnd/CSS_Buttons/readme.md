## CSS BUTTONS

The `<button>` HTML element represents a clickable button, used to submit forms or anywhere in a document for accessible, standard button functionality. By default, HTML buttons  are presented in a style resembling the platform the user agent runs on, but you can change button's appearance with CSS.

Before styling buttons with CSS, let’s take a quick look how button is created with HTML.
  
The `<button>` element is used to create an HTML button. Any text appearing between the opening and closing tags will appear as text on the button. No action takes place by   default when a button is clicked. Actions must be added to buttons using JavaScript or by associating the button with a form.

Code Example:

  ```
  <button type = “button” onclick = “alert (‘You pressed the button!’)”>Click me!</button>
  ```
  
This will create a button representing two words on it i.e ***Click me!***, which on clicking gives us an alert saying ***You pressed the button!***.

Now, let's start with CSS. These are most common button styles which is achieved by CSS properties:
 
* Colored Buttons:
In most systems, default color of button is blue. Use the "background-colour" property to change the background colour of a button.

Syntax:
 
   ```
   
   .button1 {background-colour: #4CAF50;} /* Green */
   .button2 {background-colour: #008CBA;} /* Blue */
   
   ```

* Big Buttons:
Use the “font-size” property to change the font size of a button.

Syntax:
   
   ```
   
   .button {font-size: 16px;}
   
   ```

* Padded Buttons:
Use the “padding” property to change the padding of a button.

Syntax:
  
  ```
  
  .button {padding: 10px 24px;}
  
  ```

* Curvy Buttons:
Use the “border-radius” property to add rounded corners to a button.

Syntax: 
  
   ```
   
   .button1 {border-radius: 2px;} 
   .button2 {border-radius: 50%;}
   
   ```

* Colored Borders:
Use the “border” property to add a coloured border to a button.

Syntax:
    
    ```
    .button {
    background-color: white;
    color: black;
    border: 2px solid #4CAF50; /* Green */}
    ```
    
* Hoverable Buttons:
Use the “:hover” selector to change the style of a button when you move the mouse over it. You can Use the transition-duration property to determine the speed of the "hover" effect.

Syntax:

  ```
  
  .button { transition-duration: 0.4s;}
  .button:hover {
  background-color: #4CAF50; /* Green */
  color: white;}
  
  ```

* Shadow Buttons:
Use the “box-shadow” property to add shadows to button.

Syntax:
 
  ```
  
  .button1 {box-shadow: 0 8px 16px 0 rgba(0,0,0,0.2), 0 6px 20px 0 rgba(0,0,0,0.19);}
  .button2:hover {box-shadow: 0 12px 16px 0 rgba(0,0,0,0.24), 0 17px 50px 0 rgba(0,0,0,0.19); }
  
  ```

* Disabled Button:
Use the “opacity” property to add transparency to the button. You can also add “cursor”  property with a value of “ not-allowed” , which will display a “no parking sign" when   you mouse over the button.

Syntax:
 
  ```
  
  .disabled {
  opacity: 0.6;
  cursor: not-allowed; }
 
  ```

* Wider Button:
By default, the size of the button is determined by its text content (as wide as its content). Use the “width” property to change the width of a button. 

Syntax: 
  
  ```
  
  .button1 {width: 250px;}
  .button2 {width: 50%;}
  
  ```

* Grouped Buttons:
Remove margins and add "float:left" to each button to create a button group.

Syntax:
   
  ```
  
  .button {float: left;}
  
  ```

* Grouped buttons-Bordered:
Use the “border” property and remove margins by adding “float:left” to each button to create button group.

Syntax:
  
  ```
  
  .button {
  <br>float: left;
  <br>border: 1px solid green;}
  
  ```

* Vertical Button Group:
Use display:block instead of float:left to group the buttons below each other, instead of side by side.

Syntax:
  
  ```
  
  .button {
  <br>display: block;}
  
  ```
     
Now, Let’s give some animation to our buttons by Vanilla CSS
  
* ADD ARROW ON HOVER
  
Code:
  
  ```
  
  <!DOCTYPE html>
  <html>
  <head>
  <style>
  .button {
  display: inline-block;
  border-radius: 4px;
  background-color: #f4511e;
  border: none;
  color: #FFFFFF;
  text-align: center;
  font-size: 28px;
  padding: 20px;
  width: 200px;
  transition: all 0.5s;
  cursor: pointer;
  margin: 5px;
  }

  .button span {
  cursor: pointer;
  display: inline-block;
  position: relative;
  transition: 0.5s;
  }

  .button span:after {
  content: '\00bb';
  position: absolute;
  opacity: 0;
  top: 0;
  right: -20px;
  transition: 0.5s;
  }

  .button:hover span {
  padding-right: 25px;
  }

  .button:hover span:after {
  opacity: 1;
  right: 0;
  }
  </style>
  </head>
  <body>

  <h2>Animated Button</h2>

  <button class="button" style="vertical-align:middle"><span>Hover </span></button>

  </body>
  </html>
  
  ```

* ADD RIPPLE EFFECT ON HOVER:

Code:
  
  ```
  
  <!DOCTYPE html>
  <html>
  <head>
  <style>
  .button {
  position: relative;
  background-color: #4CAF50;
  border: none;
  font-size: 28px;
  color: #FFFFFF;
  padding: 20px;
  width: 200px;
  text-align: center;
  transition-duration: 0.4s;
  text-decoration: none;
  overflow: hidden;
  cursor: pointer;
  }

  .button:after {
  content: "";
  background: #f1f1f1;
  display: block;
  position: absolute;
  padding-top: 300%;
  padding-left: 350%;
  margin-left: -20px !important;
  margin-top: -120%;
  opacity: 0;
  transition: all 0.8s
  }

  .button:active:after {
  padding: 0;
  margin: 0;
  opacity: 1;
  transition: 0s
  }
  </style>
  </head>
  <body>

  <h2>Animated Button - Ripple Effect</h2>

  <button class="button">Click Me</button>

  </body>
  </html>
  
  ```
  

## TRICK:
There are many websites in which you specify what properties or designs you want with your buttons and you can have code for it. Ready to use, just in a flash. One such   suggested web are as follows:
  [CSS Button Generator](https://css3buttongenerator.com/)




