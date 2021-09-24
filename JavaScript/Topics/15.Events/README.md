# What is an Event ?
JavaScript's interaction with HTML is handled through events that occur when the user or the browser manipulates a page.

When the page loads, it is called an event. When the user clicks a button, that click too is an event. Other examples include events like pressing any key, closing a window, resizing a window, etc.

Developers can use these events to execute JavaScript coded responses, which cause buttons to close windows, messages to be displayed to users, data to be validated, and virtually any other type of response imaginable.

Events are a part of the Document Object Model (DOM) Level 3 and every HTML element contains a set of events which can trigger JavaScript Code.

# Mouse Events

| Event Performed | Event Handler | Description                                         |
|-----------------|---------------|-----------------------------------------------------|
| click           | onclick       | When mouse click on an element                      |
| mouseover       | onmouseover   | When the cursor of the mouse comes over the element |
| mouseout        | onmouseout    | When the cursor of the mouse leaves an element      |
| mousedown       | onmousedown   | When the mouse button is pressed over the element   |
| mouseup         | onmouseup     | When the mouse button is released over the element  |
| mousemove       | onmousemove   | When the mouse movement takes place.                |

# Keyboard Events

| Event Performed | Event Handler       | Description                                 |
|-----------------|---------------------|---------------------------------------------|
| Keydown & Keyup | onkeydown & onkeyup	| When the user press and then release the key|

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

# HTML 5 Standard Events

| Attribute          | Value  | Description                                                                                                  |
|--------------------|--------|--------------------------------------------------------------------------------------------------------------|
| Offline            | script | Triggers when the document goes offline                                                                      |
| Onabort            | script | Triggers on an abort event                                                                                   |
| onafterprint       | script | Triggers after the document is printed                                                                       |
| onbeforeonload     | script | Triggers before the document loads                                                                           |
| onbeforeprint      | script | Triggers before the document is printed                                                                      |
| onblur             | script | Triggers when the window loses focus                                                                         |
| oncanplay          | script | Triggers when media can start play, but might has to stop for buffering                                      |
| oncanplaythrough   | script | Triggers when media can be played to the end, without stopping for buffering                                 |
| onchange           | script | Triggers when an element changes                                                                             |
| onclick            | script | Triggers on a mouse click                                                                                    |
| oncontextmenu      | script | Triggers when a context menu is triggered                                                                    |
| ondblclick         | script | Triggers on a mouse double-click                                                                             |
| ondrag             | script | Triggers when an element is dragged                                                                          |
| ondragend          | script | Triggers at the end of a drag operation                                                                      |
| ondragenter        | script | Triggers when an element has been dragged to a valid drop target                                             |
| ondragleave        | script | Triggers when an element is being dragged over a valid drop target                                           |
| ondragover         | script | Triggers at the start of a drag operation                                                                    |
| ondragstart        | script | Triggers at the start of a drag operation                                                                    |
| ondrop             | script | Triggers when dragged element is being dropped                                                               |
| ondurationchange   | script | Triggers when the length of the media is changed                                                             |
| onemptied          | script | Triggers when a media resource element suddenly becomes empty.                                               |
| onended            | script | Triggers when media has reach the end                                                                        |
| onerror            | script | Triggers when an error occur                                                                                 |
| onfocus            | script | Triggers when the window gets focus                                                                          |
| onformchange       | script | Triggers when a form changes                                                                                 |
| onforminput        | script | Triggers when a form gets user input                                                                         |
| onhaschange        | script | Triggers when the document has change                                                                        |
| oninput            | script | Triggers when an element gets user input                                                                     |
| oninvalid          | script | Triggers when an element is invalid                                                                          |
| onkeydown          | script | Triggers when a key is pressed                                                                               |
| onkeypress         | script | Triggers when a key is pressed and released                                                                  |
| onkeyup            | script | Triggers when a key is released                                                                              |
| onload             | script | Triggers when the document loads                                                                             |
| onloadeddata       | script | Triggers when media data is loaded                                                                           |
| onloadedmetadata   | script | Triggers when the duration and other media data of a media element is loaded                                 |
| onloadstart        | script | Triggers when the browser starts to load the media data                                                      |
| onmessage          | script | Triggers when the message is triggered                                                                       |
| onmousedown        | script | Triggers when a mouse button is pressed                                                                      |
| onmousemove        | script | Triggers when the mouse pointer moves                                                                        |
| onmouseout         | script | Triggers when the mouse pointer moves out of an element                                                      |
| onmouseover        | script | Triggers when the mouse pointer moves over an element                                                        |
| onmouseup          | script | Triggers when a mouse button is released                                                                     |
| onmousewheel       | script | Triggers when the mouse wheel is being rotated                                                               |
| onoffline          | script | Triggers when the document goes offline                                                                      |
| onoine             | script | Triggers when the document comes online                                                                      |
| ononline           | script | Triggers when the document comes online                                                                      |
| onpagehide         | script | Triggers when the window is hidden                                                                           |
| onpageshow         | script | Triggers when the window becomes visible                                                                     |
| onpause            | script | Triggers when media data is paused                                                                           |
| onplay             | script | Triggers when media data is going to start playing                                                           |
| onplaying          | script | Triggers when media data has start playing                                                                   |
| onpopstate         | script | Triggers when the window's history changes                                                                   |
| onprogress         | script | Triggers when the browser is fetching the media data                                                         |
| onratechange       | script | Triggers when the media data's playing rate has changed                                                      |
| onreadystatechange | script | Triggers when the ready-state changes                                                                        |
| onredo             | script | Triggers when the document performs a redo                                                                   |
| onresize           | script | Triggers when the window is resized                                                                          |
| onscroll           | script | Triggers when an element's scrollbar is being scrolled                                                       |
| onseeked           | script | Triggers when a media element's seeking attribute is no longer true, and the seeking has ended               |
| onseeking          | script | Triggers when a media element's seeking attribute is true, and the seeking has begun                         |
| onselect           | script | Triggers when an element is selected                                                                         |
| onstalled          | script | Triggers when there is an error in fetching media data                                                       |
| onstorage          | script | Triggers when a document loads                                                                               |
| onsubmit           | script | Triggers when a form is submitted                                                                            |
| onsuspend          | script | Triggers when the browser has been fetching media data, but stopped before the entire media file was fetched |
| ontimeupdate       | script | Triggers when media changes its playing position                                                             |
| onundo             | script | Triggers when a document performs an undo                                                                    |
| onunload           | script | Triggers when the user leaves the document                                                                   |
| onvolumechange     | script | Triggers when media changes the volume, also when volume is set to "mute"                                    |
| onwaiting          | script | Triggers when media has stopped playing, but is expected to resume                                           |



References:<br>
[W3Schools](https://www.w3schools.com/js/js_events.asp)<br>
[Javatpoint](https://www.javatpoint.com/javascript-events)<br>


Contributor: [Sushovan Banerjee](https://github.com/sushovanb02)