  <h3>CSS BUTTONS</h3>

  The `<button>` HTML element represents a clickable button, used to submit forms or anywhere in a document for accessible, standard button functionality. By default, HTML buttons  are presented in a style resembling the platform the user agent runs on, but you can change button's appearance with CSS.

  Before styling buttons with CSS, let’s take a quick look how button is created with HTML.
  
   The `<button>` element is used to create an HTML button. Any text appearing between the opening and closing tags will appear as text on the button. No action takes place by   default when a button is clicked. Actions must be added to buttons using JavaScript or by associating the button with a form.
  <br>Code Example:
  ```
  <button type = “button” onclick = “alert (‘You pressed the button!’)”>Click me!</button>
  ```
  This will create a button representing two words on it i.e “Click me!”, which on clicking gives us an alert saying “You pressed the button!”.

  Now, let's start with CSS. These are most common button styles which is achieved by CSS properties:

  <h2>Colored Buttons:</h2>
  In most systems, default color of button is blue. Use the “background-colour” property to change the background colour of a button.
  <br>Syntax:
   ```
   .button1 {background-colour: #4CAF50;} /* Green */
   <br>.button2 {background-colour: #008CBA;} /* Blue */
   ```

  <h2>Big Buttons</h2> 
  Use the “font-size” property to change the font size of a button.
   <br>Syntax:
   <br>'''
   <br>.button {font-size: 16px;}
   <br>'''

  <h2>Padded Buttons:</h2>
  Use the “padding” property to change the padding of a button.
  <br> Syntax:
  <br> '''
  <br> .button {padding: 10px 24px;}
  <br> '''

  <h2>Curvy Buttons:</h2>
  Use the “border-radius” property to add rounded corners to a button.
   <br> Syntax: 
   <br> '''
   <br>.button1 {border-radius: 2px;} 
   <br>.button2 {border-radius: 50%;}
   <br>'''

  <h2>Colored Borders:</h2>
  Use the “border” property to add a coloured border to a button.
    <br>Syntax:
    <br>'''
    <br>.button {
    <br>background-color: white;
    <br>color: black;
   <br> border: 2px solid #4CAF50; /* Green */}
    <br>'''

    <br><h2>Hoverable Buttons:</h2>
     <br>Use the “:hover” selector to change the style of a button when you move the mouse over it. You can Use the transition-duration property to determine the speed of the "hover" effect. 
  <br>Syntax:
  <br>'''
  <br>.button { transition-duration: 0.4s;}
  <br>.button:hover {
  <br>background-color: #4CAF50; /* Green */
  <br>color: white;}
  <br>'''

  <h2>Shadow Buttons:</h2>
  Use the “box-shadow” property to add shadows to button.
 <br> Syntax:
 <br> '''
 <br> .button1 {box-shadow: 0 8px 16px 0 rgba(0,0,0,0.2), 0 6px 20px 0 rgba(0,0,0,0.19);}
  <br>.button2:hover {box-shadow: 0 12px 16px 0 rgba(0,0,0,0.24), 0 17px 50px 0 rgba(0,0,0,0.19); }
  <br>'''

  <h2>Disabled Button:</h2> 
  Use the “opacity” property to add transparency to the button. You can also add “cursor”  property with a value of “ not-allowed” , which will display a “no parking sign “when   you mouse over the button.
 <br> Syntax:
 <br> '''
 <br> .disabled {
 <br> opacity: 0.6;
 <br> cursor: not-allowed; }
  <br>'''

  <h2>Wider Button:</h2>
  By default, the size of the button is determined by its text content (as wide as its content). Use the “width” property to change the width of a button. 
  <br>Syntax: 
  <br>'''
  <br>.button1 {width: 250px;}
  <br>.button2 {width: 50%;}
  <br>'''

  <h2>Grouped Buttons:</h2>
  Remove margins and add float:left to each button to create a button group.
  
  Syntax:
   
  '''
  
  <br>.button {float: left;}
  
  '''

  <h2>Grouped buttons-Bordered:</h2>
  Use the “border” property and remove margins by adding “float:left” to each button to create button group.
  <br>Syntax:
  <br>'''
  <br>.button {
  <br>float: left;
  <br>border: 1px solid green;}
  <br>'''

  <h2>Vertical Button Group:</h2>
  Use display:block instead of float:left to group the buttons below each other, instead of side by side.
  <br>Syntax:
  <br>'''
  <br>.button {
  <br>display: block;}
  <br>'''



Now, Let’s give some animation to our buttons by Vanilla CSS

  <h2>1.ADD ARROW ON HOVER</h2>
  '''
  Code:
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
  '''


  <h2>2.ADD RIPPLE EFFECT ON HOVER:</h2>

  Code:
  '''
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
  '''


  <h2>TRICK:</h2>
  There are many websites in which you specify what properties or designs you want with your buttons and you can have code for it. Ready to use, just in a flash. One such   suggested web are as follows:
  <a href="https://css3buttongenerator.com/">CSS Button Generator</a>




