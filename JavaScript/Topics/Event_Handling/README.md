# What is an Event?
 An HTML event is something that the browser does or something a user does. You can also call events as actions or occurrences that happen in the browser, to which you can respond to in some way.An event can be triggered by the user actione.g. clicking amouse button or tapping keyboard.

 Here are some more examples of HTML events-<br>
 ● An HTML web page has finished loading<br>
 ● An HTML input field was changed<br>
 ● An HTML button was clicked<br>

# What are the functions of Event Handling?
  Functions of Event Handling-<br>
  ● Event Handling identifies where an event should be forwarded.<br>
  ● It makes the forward event.<br>
  ● It receives the forwarded event.<br>
  ● It takes some kind of appropriate action in response, such as writing to a log, sending an error or   recovery routine or sending a message.<br>
  ● The event handler may ultimately forward the event to an event consumer.<br>

  Events can represent everything from basic user interactions to automated notifications of things happening in the rendering model.<br>
  To execute these events, you use functions and link them to an element. Sometimes in a function, you will see aparameter name such as 'event', 'evt' or 'e'. This is called an event objectand it is automatically passed to the function.<br>

  To get notified of DOM events, you can use two ways -<br>
  ● Using addEventListener() method<br>
  ● Using on<event> handlers

# What are the types of Event Handling?
  Types of Event-Handling are-<br>

   1. addEventListener() Method-<br>
      The 'addEventListener()' method sets up a function that will be called whenever the specified event is delivered to the target.<br>

      The syntax is -target.addEventListener(type, listener, options);<br>
      Here;<br>
        The 'target' represents the element on which the event is added/attached.<br>
        The 'type' is a case-sensitive stringrepresenting the event type like 'click', 'keypress', etc.<br>
        The 'listener' is mostly a JavaScript function.<br>

      Example- you can show an alert box upon a mouse click on a button as-<br>
       varsubmitButton= document.getElementById("submit-button");<br>
       submitButton.addEventListener("click", function(){<br>
          alert("Submit Button is Clicked.");<br>
        });
 
    2. on<event> Handlers-
       The on<event>handlers are a group of properties offered by DOM elements to help manage how that element reacts to events.
 
       The syntax is -target.on<event> = functionRef;
       Here;<br>
         The 'target' represents the element on which the event is added/attached.<br>
         The 'functionRef' represents the function name or a function expression.<br>
         The function receives an argument of an 'Event' object.<br>
  
        Example of on<event> handlers are 'onclick', 'onkeypress', etc.<br>
 
       NOTE: When using on<event>, you can only have one handle for each event for an element. To use more than one event handler
             for the same event,'addEventListener()' is a good choice

    3. Click Event-
       The click eventoccurs when the user clicks on an element. The click event is completed when the mouse button is pressed and releasedon a single element.

       The syntax is- You can use one of the following syntax:<br>
       -target.onclick= functionRef;<br>
       OR
       target.addEventListener("click", function(){
         // JavaScript Code<br>
       });

       You can assign only one 'onclick' event to an element at a time as shown in below example:<br>
       You can use the onclick event on an input tag as-<br>
        functionabc(event){<br>
          console.log("Input element contains text -",<br>
          event.target.value);<br>
        }<br>
        document.getElementsByTagname("input")[0].onclick= abc;<br>

        This will print the value written inside the first input element of the web page<br>
 
These are the some important event handlers.There are many event handlers like-
1. onAbort-	It executes when the user aborts loading an image.
2. onBlur-	    It executes when the input focus leaves the field of a text, textarea or a select option.
3. onChange-	It executes when the input focus exits the field after the user modifies its text.
4. onError-	It executes when an error occurs while loading a document or an image.
5. onFocus-	It executes when input focus enters the field by tabbing in or by clicking but not selecting input from the field.
6. onLoad- 	It executes when a window or image finishes loading.
7. onMouseOver- The JavaScript code is called when the mouse is placed over a specific link or an object.
8. onMouseOut-	The JavaScript code is called when the mouse leaves a specific link or an object.
9. onReset-	It executes when the user resets a form by clicking on the reset button.
10. onSelect-	It executes when the user selects some of the text within a text or textarea field.
11. onSubmit-	It calls when the form is submitted.
12. onUnload-	It calls when a document is exited.

# Example: Simple Program on onsubmit() & onfocus() Event handler.
<html>
     <body>
          <script>  
               function validateform()
               {  
                    var uname=document.myform.name.value;  
                    var upassword=document.myform.password.value;  
                    if (uname==null || uname=="")
                    {  
                         alert("Name cannot be left blank");  
                         return false;  
                    }
                    else if(upassword.length<6)
                    {  
                         alert("Password must be at least 6 characters long.");  
                         return false;  
                    }  
               }  
               function emailvalidation()
               {
                    var a=document.myform.email.value
                    if (a.indexOf("@")==-1)
                    {
                         alert("Please enter valid email address")
                         document.myform.email.focus()
                    }
               }
          </script>  
     <body>  
          <form name="myform" method="post" action="validpage.html" onsubmit="return validateform()">  
               Email: <input type="text" size="20" name="email" onblur="emailvalidation()"><br>
               User Name: <input type="text" name="name"><br>  
               Password: <input type="password" name="password"><br>  
               <input type="submit" value="Submit" >  
          </form>  
     </body>
</html>

<html>
     <body>
          <script type="text/javascript">
               alert("You are a Valid User !!!");
          </script>
     </body>
</html>
# Example: Simple Program on onload() Event handler
<html>
     <head>
     <script type="text/javascript">
     function time()
     {
          var d = new Date();
          var ty = d.getHours() + ":"+d.getMinutes()+":"+d.getSeconds();
          document.frmty.timetxt.value=ty;
          setInterval("time()",1000)
     }
     </script>
     </head>
<body onload="time()">
     <center><h2>Displaying Time</h2>
          <form name="frmty">
               <input type=text name=timetxt size="8">
          </form>
     </center>
</body>
</html>
So basically Event handlers can be used to handle and verify user input, user actions, and browser actions:<br>
● Things that should be done every time a page loads.<br>
● Things that should be done when the page is closed.<br>
● Action that should be performed when a user clicks a button.<br>
● Content that should be verified when a user inputs data.<br>
 and even more.....<br>
Many different methods can be used to let JavaScript work with events:<br>
● HTML event attributes can execute JavaScript code directly.<br>
● HTML event attributes can call JavaScript functions.<br>
● You can assign your own event handler functions to HTML elements.<br>
● You can prevent events from being sent or being handled.<br>
 and even more.....<br>
  
