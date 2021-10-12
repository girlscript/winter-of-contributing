# Event Listeners
---

In this Tutorial , we will learn about Javascript **Event Listeners**.

## What are Event Listeners?

Event listeners are a more recent approach to handling events. The **Event Listener** listens for the events and gets triggered when an event occurs.


## How to add an Event Listener to an element?

The   **addEventListener()**  method attaches an event handler to an element.

The **addEventListener()** method takes three parameters:

 i)   The event you want it to listen for.<br>
 ii)  The function you want to execute when an event occurs.<br>
 iii) useCapture (boolean value) indicating whether to use event bubbling or event capturing.(This parameter is optional.)

 ##### Syntax:

> element.addEventListener('event', functionName [,useCapture]) ;


Let's take an Example:

```js

function checkUsername() // Declare function
{
  var elMsg = document.getElementById('feedback');  //Get feedback element  

  if(this.value.length<5)  // If username too short
  {
    elMsg.textContent = 'Username must be 5 characters or more';  // Set Message
  }
  else {                     // Otherwise
    elMsg.textContent = ' '; // Clear Message
  }
}

var elUsername = document.get ElementByld(' username'); // Get username input

// When it loses focus call checkUsername()
elUsername.addEventlistener('blur' , checkUsername , false) ;
```


## Add Many Event Handlers to the Same Element:

The **addEventListener()** method allows you to add many events to the same element, without overwriting existing events:


>element.addEventListener("click", firstFunction);
element.addEventListener("click", secondFunction);


## Add Event Handler to the Window Object:

The **addEventListener()** method also allows you to add event listeners to the window object, or other objects that support events.

```js
window.addEventListener("mousedown",function(event){
 alert("window");
 console.log(event);
});
```

## Using Parameters with Event Listeners:

Because you cannot have parentheses after the function names in event listeners, passing arguments requires a workaround.

So, if you need to pass arguments to a function that is called by an event listener, you wrap the function call in an anonymous function.

The named function that requires the arguments lives inside the anonymous function.

Let's consider an example of this :

```js
var elUsername = document.getElementById('username') ; // Get username input
var elMsg = document.getElementById('feedback') ; // Get feedback element

function checkUsername(minlength) { //Declare function
  if (elUsername.value.length < minlength) // If username too short
  {
   elMsg.textContent = 'Username must be ' + minlength + ' characters or more'; // Set the error message
   }
  else { // Otherwise
  elMsg.innerHTML = ' '; // clear the message
  }
}

// When it loses focus
elUsername.addEventListener('blur' , function() { // anonymous function
checkUsername(5); // Pass arguments here
}, false) ;

```

## Event Bubbling and Event Capturing:

There are two ways of event propagation in the HTML DOM, event bubbling and event capturing.

Event propagation is a way of defining the element order when an event occurs.

HTML elements nest inside other elements. If you hover or click on a link, you will also be hovering or clicking on its parent elements.

**for example:**

If the is a \<p> elements inside a \<div> element and user clicks on \<p> element , according to you which element's click event should be handled first?

Well here is the answer of this question , this decision will be taken according to the value of **useCapture** value.(third parameter of *addEventListener()* method)
<br>

#### Event Bubbling

In Event bubbling case , inner most element's event is handled first  and then outer. So, \<p> element's event click is handled first and  then \<div> element's click event.

#### Event Capturing

In Event Capturing case , outer most element's event is handled first  and then inner. So, \<div> element's event click is handled first and  then \<p> element's click event.


 ##### Syntax:
 >addEventListener(event, functionName ,<span style="color:#E90000">*useCapture*</span>);


 Its default value is false which will use event bubbling propagation and if the value is set to true , the event uses the event capturing propogation.

 Example:

 ```js
document.getElementById("firstP").addEventListener("click", firstFunction, true);
document.getElementById("firstDiv").addEventListener("click", secondFunction, true)
```


## How to remove an Event Listener from an element?

The **removeEventListener()** method removes event handlers that have been added with the addEventListener() method:

The **removeEventListener()** method also takes same three parameters that **addEventListener()** method takes.

##### Syntax:

>element.removeEventListener('event', functionName [,useCapture]);


### Advantages of Event Listeners:

i) You can add many Event Listener to one element.

ii) You can add many event handlers of the same type to one element using event listeners , i.e two "mousedown" events.

iii) The **addEventListener()** method adds an event handler to an element without overwriting existing event handlers to the same element.

iv) You can even add event listeners to any DOM object  HTML  like the **window object**.

---

> Contribution by :  
> <cite>[Anjali Rai](https://github.com/anjalirai12)</cite>
