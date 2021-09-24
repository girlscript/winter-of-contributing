# What is an Event ?
JavaScript's interaction with HTML is handled through events that occur when the user or the browser manipulates a page.

When the page loads, it is called an event. When the user clicks a button, that click too is an event. Other examples include events like pressing any key, closing a window, resizing a window, etc.

Developers can use these events to execute JavaScript coded responses, which cause buttons to close windows, messages to be displayed to users, data to be validated, and virtually any other type of response imaginable.

Events are a part of the Document Object Model (DOM) Level 3 and every HTML element contains a set of events which can trigger JavaScript Code.

# Mouse Events

| Event Performed | Event Handler | Description                                         |
|-----------------|---------------|-----------------------------------------------------|
| click           | [onclick](https://www.w3schools.com/jsref/event_onclick.asp)      | When mouse click on an element                      |
| mouseover       | [onmouseover](https://www.w3schools.com/jsref/event_onmouseover.asp)   | When the cursor of the mouse comes over the element |
| mouseout        | [onmouseout](https://www.w3schools.com/jsref/event_onmouseout.asp)    | When the cursor of the mouse leaves an element      |
| mousedown       | [onmousedown](https://www.w3schools.com/jsref/event_onmousedown.asp)   | When the mouse button is pressed over the element   |
| mouseup         | [onmouseup](https://www.w3schools.com/jsref/event_onmouseup.asp)     | When the mouse button is released over the element  |
| mousemove       | [onmousemove](https://www.w3schools.com/jsref/event_onmousemove.asp)   | When the mouse movement takes place.                |

# Keyboard Events

| Event Performed | Event Handler       | Description                                 |
|-----------------|---------------------|---------------------------------------------|
| Keydown & Keyup | [onkeydown](https://www.w3schools.com/jsref/event_onkeydown.asp) & [onkeyup](https://www.w3schools.com/jsref/event_onkeyup.asp)	| When the user press and then release the key|

# onclick Event
The onclick event occurs when the user clicks on an element.

This is the most frequently used event type which occurs when a user clicks the left button of his mouse. You can put your validation, warning etc., against this event type.

### Syntax:
```js
// In JavaScript:
object.onclick = function(){myScript};
// In JavaScript, using the addEventListener() method:
object.addEventListener("click", myScript);
```
Example:

```js
// Click on a <p> element to change its text color to blue:
<p id="demo" onclick="myFunction()">Click me to change my text color.</p>

<script>
function myFunction() {
  document.getElementById("demo").style.color = "blue";
}
</script>
```
# onsubmit Event
The onsubmit event occurs when a form is submitted.

You can put your form validation against this event type.
### Syntax:
```js
// In JavaScript:
object.onsubmit = function(){myScript};
// In JavaScript, using the addEventListener() method:
object.addEventListener("submit", myScript);
```

Example:

```js
// Execute a JavaScript when a form is submitted:
<form onsubmit="myFunction()">
  Enter name: <input type="text">
  <input type="submit">
</form>
```
<br>

# Some HTML 5 Standard Events

| Attribute          | Value  | Description                                                                                                  |
|--------------------|--------|--------------------------------------------------------------------------------------------------------------|
| [Offline](https://www.w3schools.com/jsref/event_onoffline.asp)            | script | Triggers when the document goes offline                                                                      |
| [Onabort](https://www.w3schools.com/jsref/event_onabort.asp)            | script | Triggers on an abort event                                                                                   |
| [onafterprint](https://www.w3schools.com/jsref/event_onafterprint.asp)   | script | Triggers after the document is printed                                                                       |
| [onbeforeonload](https://www.w3schools.com/jsref/event_onbeforeonload.asp)    | script | Triggers before the document loads                                                                           |
| [onbeforeprint](https://www.w3schools.com/jsref/event_onbeforeprint.asp)      | script | Triggers before the document is printed                                                                      |


References:<br>
[W3Schools](https://www.w3schools.com/js/js_events.asp)<br>
[Javatpoint](https://www.javatpoint.com/javascript-events)<br>


Contributor: [Sushovan Banerjee](https://github.com/sushovanb02)
