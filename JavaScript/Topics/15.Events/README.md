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
// Here "click" is the event and "myScript" is set as a EventListener 
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
// Here "submit" is the event and "myScript" is set as a EventListener 
```

Example:

```js
// Execute ```myFunction()``` when the form is submitted:
<form onsubmit="myFunction()">
  Enter name: <input type="text">
  <input type="submit">
</form>
```
<br>

# Event Listener and Event Handler in JavaScript
An **event listener** is a procedure or function in a computer program that waits for an event to occur. Examples of an event are the user clicking or moving the mouse, pressing a key on the keyboard, disk I/O, network activity, or an internal timer or interrupt. The listener is programmed to react to an input or signal by calling the event's handler.

The term **event listener** is often specific to Java and JavaScript. In other languages, a subroutine that performs a similar function is referred to as an **event handler**.

The following JavaScript code would add an event listener to an HTML document:

```js
document.addEventListener('click', myfunction, false);
```
# HTML 5 Standard Events

| Attribute          | Value  | Description                                                                                                  |
|--------------------|--------|--------------------------------------------------------------------------------------------------------------|
| [Offline](https://www.w3schools.com/jsref/event_onoffline.asp)            | script | Triggers when the document goes offline                                                                      |
| [Onabort](https://www.w3schools.com/jsref/event_onabort.asp)            | script | Triggers on an abort event                                                                                   |
| [onafterprint](https://www.w3schools.com/jsref/event_onafterprint.asp)   | script | Triggers after the document is printed                                                                       |
| [onbeforeonload](https://www.w3schools.com/jsref/event_onbeforeonload.asp)    | script | Triggers before the document loads                                                                           |
| [onbeforeprint](https://www.w3schools.com/jsref/event_onbeforeprint.asp)      | script | Triggers before the document is printed                                                                      |
| [onblur](https://www.w3schools.com/jsref/event_onblur.asp)             | script | Triggers when the window loses focus                                                                         |
| [oncanplay](https://www.w3schools.com/jsref/event_oncanplay.asp)          | script | Triggers when media can start play, but might has to stop for buffering                                      |
| [oncanplaythrough](https://www.w3schools.com/jsref/event_oncanplaythrough.asp)   | script | Triggers when media can be played to the end, without stopping for buffering                                 |
| [onchange](https://www.w3schools.com/jsref/event_onchange.asp)           | script | Triggers when an element changes                                                                             |
| [onclick](https://www.w3schools.com/jsref/event_onclick.asp)            | script | Triggers on a mouse click                                                                                    |
| [oncontextmenu](https://www.w3schools.com/jsref/event_oncontextmenu.asp)      | script | Triggers when a context menu is triggered                                                                    |
| [ondblclick](https://www.w3schools.com/jsref/event_ondblclick.asp)         | script | Triggers on a mouse double-click                                                                             |
| [ondrag](https://www.w3schools.com/jsref/event_ondrag.asp)             | script | Triggers when an element is dragged                                                                          |
| [ondragend](https://www.w3schools.com/jsref/event_ondragend.asp)          | script | Triggers at the end of a drag operation                                                                      |
| [ondragenter](https://www.w3schools.com/jsref/event_ondragenter.asp)        | script | Triggers when an element has been dragged to a valid drop target                                             |
| [ondragleave](https://www.w3schools.com/jsref/event_ondragleave.asp)        | script | Triggers when an element is being dragged over a valid drop target                                           |
| [ondragover](https://www.w3schools.com/jsref/event_ondragover.asp)         | script | Triggers at the start of a drag operation                                                                    |
| [ondragstart](https://www.w3schools.com/jsref/event_ondragstart.asp)        | script | Triggers at the start of a drag operation                                                                    |
| [ondrop](https://www.w3schools.com/jsref/event_ondrop.asp)             | script | Triggers when dragged element is being dropped                                                               |
| [ondurationchange](https://www.w3schools.com/jsref/event_ondurationchange.asp)   | script | Triggers when the length of the media is changed                                                             |
| [onemptied](https://www.w3schools.com/jsref/event_onemptied.asp)          | script | Triggers when a media resource element suddenly becomes empty.                                               |
| [onended](https://www.w3schools.com/jsref/event_onended.asp)            | script | Triggers when media has reach the end                                                                        |
| [onerror](https://www.w3schools.com/jsref/event_onerror.asp)            | script | Triggers when an error occur                                                                                 |
| [onfocus](https://www.w3schools.com/jsref/event_onfocus.asp)            | script | Triggers when the window gets focus                                                                          |
| [onformchange](https://www.w3schools.com/jsref/event_onformchange.asp)       | script | Triggers when a form changes                                                                                 |
| [onforminput](https://www.w3schools.com/jsref/event_onforminput.asp)        | script | Triggers when a form gets user input                                                                         |
| [onhaschange](https://www.w3schools.com/jsref/event_onhaschanget.asp)        | script | Triggers when the document has change                                                                        |
| [oninput](https://www.w3schools.com/jsref/event_oninput.asp)            | script | Triggers when an element gets user input                                                                     |
| [oninvalid](https://www.w3schools.com/jsref/event_oninvalid.asp)          | script | Triggers when an element is invalid                                                                          |
| [onkeydown](https://www.w3schools.com/jsref/event_onkeydown.asp)          | script | Triggers when a key is pressed                                                                               |
| [onkeypress](https://www.w3schools.com/jsref/event_onkeypress.asp)         | script | Triggers when a key is pressed and released                                                                  |
| [onkeyup](https://www.w3schools.com/jsref/event_onkeyup.asp)            | script | Triggers when a key is released                                                                              |
| [onload](https://www.w3schools.com/jsref/event_onload.asp)             | script | Triggers when the document loads                                                                             |
| [onloadeddata](https://www.w3schools.com/jsref/event_onloadeddata.asp)       | script | Triggers when media data is loaded                                                                           |
| [onloadedmetadata](https://www.w3schools.com/jsref/event_onloadedmetadata.asp)   | script | Triggers when the duration and other media data of a media element is loaded                                 |
| [onloadstart](https://www.w3schools.com/jsref/event_onloadstart.asp)        | script | Triggers when the browser starts to load the media data                                                      |
| [onmessage](https://www.w3schools.com/jsref/event_onmessage.asp)          | script | Triggers when the message is triggered                                                                       |
| [onmousedown](https://www.w3schools.com/jsref/event_onmousedown.asp)        | script | Triggers when a mouse button is pressed                                                                      |
| [onmousemove](https://www.w3schools.com/jsref/event_onmousemove.asp)        | script | Triggers when the mouse pointer moves                                                                        |
| [onmouseout](https://www.w3schools.com/jsref/event_onmouseout.asp)         | script | Triggers when the mouse pointer moves out of an element                                                      |
| [onmouseover](https://www.w3schools.com/jsref/event_onmouseover.asp)        | script | Triggers when the mouse pointer moves over an element                                                        |
| [onmouseup](https://www.w3schools.com/jsref/event_onmouseup.asp)          | script | Triggers when a mouse button is released                                                                     |
| [onmousewheel](https://www.w3schools.com/jsref/event_onmousewheel.asp)       | script | Triggers when the mouse wheel is being rotated                                                               |
| [onoffline](https://www.w3schools.com/jsref/event_onoffline.asp)          | script | Triggers when the document goes offline                                                                      |
| [onoine](https://www.w3schools.com/jsref/event_onoine.asp)             | script | Triggers when the document comes online                                                                      |
| [ononline](https://www.w3schools.com/jsref/event_ononline.asp)           | script | Triggers when the document comes online                                                                      |
| [onpagehide](https://www.w3schools.com/jsref/event_onpagehide.asp)         | script | Triggers when the window is hidden                                                                           |
| [onpageshow](https://www.w3schools.com/jsref/event_onpageshow.asp)         | script | Triggers when the window becomes visible                                                                     |
| [onpause](https://www.w3schools.com/jsref/event_onpause.asp)            | script | Triggers when media data is paused                                                                           |
| [onplay](https://www.w3schools.com/jsref/event_onplay.asp)             | script | Triggers when media data is going to start playing                                                           |
| [onplaying](https://www.w3schools.com/jsref/event_onplaying.asp)          | script | Triggers when media data has start playing                                                                   |
| [onpopstate](https://www.w3schools.com/jsref/event_onpopstate.asp)         | script | Triggers when the window's history changes                                                                   |
| [onprogress](https://www.w3schools.com/jsref/event_onprogress.asp)         | script | Triggers when the browser is fetching the media data                                                         |
| [onratechange](https://www.w3schools.com/jsref/event_onratechange.asp)       | script | Triggers when the media data's playing rate has changed                                                      |
| [onreadystatechange](https://www.w3schools.com/jsref/event_onreadystatechange.asp) | script | Triggers when the ready-state changes                                                                        |
| [onredo](https://www.w3schools.com/jsref/event_onredo.asp)             | script | Triggers when the document performs a redo                                                                   |
| [onresize](https://www.w3schools.com/jsref/event_onresize.asp)           | script | Triggers when the window is resized                                                                          |
| [onscroll](https://www.w3schools.com/jsref/event_onscroll.asp)           | script | Triggers when an element's scrollbar is being scrolled                                                       |
| [onseeked](https://www.w3schools.com/jsref/event_onseeked.asp)           | script | Triggers when a media element's seeking attribute is no longer true, and the seeking has ended               |
| [onseeking](https://www.w3schools.com/jsref/event_onseeking.asp)          | script | Triggers when a media element's seeking attribute is true, and the seeking has begun                         |
| [onselect](https://www.w3schools.com/jsref/event_onselect.asp)           | script | Triggers when an element is selected                                                                         |
| [onstalled](https://www.w3schools.com/jsref/event_onstalled.asp)          | script | Triggers when there is an error in fetching media data                                                       |
| [onstorage](https://www.w3schools.com/jsref/event_onstorage.asp)          | script | Triggers when a document loads                                                                               |
| [onsubmit](https://www.w3schools.com/jsref/event_onsubmit.asp)           | script | Triggers when a form is submitted                                                                            |
| [onsuspend](https://www.w3schools.com/jsref/event_onsuspend.asp)          | script | Triggers when the browser has been fetching media data, but stopped before the entire media file was fetched |
| [ontimeupdate](https://www.w3schools.com/jsref/event_ontimeupdate.asp)       | script | Triggers when media changes its playing position                                                             |
| [onundo](https://www.w3schools.com/jsref/event_onundo.asp)             | script | Triggers when a document performs an undo                                                                    |
| [onunload](https://www.w3schools.com/jsref/event_onunload.asp)           | script | Triggers when the user leaves the document                                                                   |
| [onvolumechange](https://www.w3schools.com/jsref/event_onvolumechange.asp)     | script | Triggers when media changes the volume, also when volume is set to "mute"                                    |
| [onwaiting](https://www.w3schools.com/jsref/event_onwaiting.asp)          | script | Triggers when media has stopped playing, but is expected to resume                                           |

References:<br>
[W3Schools](https://www.w3schools.com/js/js_events.asp)<br>
[Javatpoint](https://www.javatpoint.com/javascript-events)<br>


Contributor: [Sushovan Banerjee](https://github.com/sushovanb02)
