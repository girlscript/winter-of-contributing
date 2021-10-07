# HTML_APIs and its Applications
### Q. What is API?!
API stands for Application Programming Interface. A Web API is an application programming interface for the Web. A Browser API can extend the functionality of a web browser. A Server API can extend the functionality of a web server.
<br>

We will be discussing three types of HTML API here:-
<ol>
  <li>HTML Geolocation API</li>
  <li>HTML Drag and Drop API</li>
  <li>HTML Web Storage API</li>
</ol>
  

### HTML Geolocation API
The HTML Geolocation API is used to locate a user's position.
#### Locate the User's Position
The HTML Geolocation API is used to get the geographical position of a user.


```
<!DOCTYPE html>
<html>
<body>

<p>Click the button to get your coordinates.</p>

<button onclick="getLocation()">Try It</button>

<p id="demo"></p>

<script>
var x = document.getElementById("demo");

function getLocation() {
  if (navigator.geolocation) {
    navigator.geolocation.getCurrentPosition(showPosition);
  } else { 
    x.innerHTML = "Geolocation is not supported by this browser.";
  }
}

function showPosition(position) {
  x.innerHTML = "Latitude: " + position.coords.latitude + 
  "<br>Longitude: " + position.coords.longitude;
}
</script>

</body>
</html>


```

## Example explained:

### Check if Geolocation is supported
<ul>
<li>If supported, run the getCurrentPosition() method. If not, display a message to the user</li>
<li>If the getCurrentPosition() method is successful, it returns a coordinates object to the function specified in the parameter (showPosition)</li>
<li>The showPosition() function outputs the Latitude and Longitude</li>
<li>The example above is a very basic Geolocation script, with no error handling</li>
</ul>  


## Output


![image](https://user-images.githubusercontent.com/86418113/136343111-1d036373-16ca-45b5-9241-a975338e34e2.png)

## Displaying the Result in a Map
#### To display the result in a map, you need access to a map service, like Google Maps.

In the example below, the returned latitude and longitude is used to show the location in a Google Map:

```
function showPosition(position) {
  var latlon = position.coords.latitude + "," + position.coords.longitude;

  var img_url = "https://maps.googleapis.com/maps/api/staticmap?center=
  "+latlon+"&zoom=14&size=400x300&sensor=false&key=YOUR_KEY";

  document.getElementById("mapholder").innerHTML = "<img src='"+img_url+"'>";
}


```


### The getCurrentPosition() Method - Return Data
The getCurrentPosition() method returns an object on success. The latitude, longitude and accuracy properties are always returned. The other properties are returned if available:



| Property | Returns |
| --- | --- |
| coords.latitude | The latitude as a decimal number (always returned) |
| coords.longitude | The longitude as a decimal number (always returned) |
| coords.accuracy | The accuracy of position (always returned) |
| coords.altitude | The altitude in meters above the mean sea level (returned if available) |
| coords.altitudeAccuracy | The altitude accuracy of position (returned if available) |
| coords.heading | 	The heading as degrees clockwise from North (returned if available) |
| coords.speed | The speed in meters per second (returned if available) |
| timestamp | The date/time of the response (returned if available) |

Geolocation Object - Other interesting Methods
### The Geolocation object also has other interesting methods:
<ul>
<li>watchPosition() - Returns the current position of the user and continues to return updated position as the user moves (like the GPS in a car).</li>
<li>clearWatch() - Stops the watchPosition() method.</li>
</ul>

# HTML Drag and Drop API

In HTML, any element can be dragged and dropped.


### Drag and Drop
<stong>Drag and drop is a very common feature. It is when you "grab" an object and drag it to a different location.</strong>
<br>
  
#### HTML Drag and Drop Example
The example below is a simple drag and drop example:

```
<!DOCTYPE HTML>
<html>
<head>
<script>
function allowDrop(ev) {
  ev.preventDefault();
}

function drag(ev) {
  ev.dataTransfer.setData("text", ev.target.id);
}

function drop(ev) {
  ev.preventDefault();
  var data = ev.dataTransfer.getData("text");
  ev.target.appendChild(document.getElementById(data));
}
</script>
</head>
<body>

<div id="div1" ondrop="drop(event)" ondragover="allowDrop(event)"></div>

<img id="drag1" src="img_logo.gif" draggable="true" ondragstart="drag(event)" width="336" height="69">

</body>
</html>
```
It might seem complicated, but lets go through all the different parts of a drag and drop event.
## Make an Element Draggable

First of all: To make an element draggable, set the draggable attribute to true:
```
<img draggable="true">
```
## What to Drag - ondragstart and setData()
Then, specify what should happen when the element is dragged.
<br>
In the example above, the ondragstart attribute calls a function, **drag(event)**, that specifies what data to be dragged.

The **dataTransfer.setData() method** sets the data type and the value of the dragged data:
```
function drag(ev) {
  ev.dataTransfer.setData("text", ev.target.id);
}
```
In this case, the data type is "text" and the value is the id of the draggable element ("drag1").
## Where to Drop - ondragover
The **ondragover** event specifies where the dragged data can be dropped.
By default, data/elements cannot be dropped in other elements. To allow a drop, we must prevent the default handling of the element.
<br>
This is done by calling the **event.preventDefault() method** for the ondragover event:
```
event.preventDefault()
```
## Do the Drop - ondrop
When the dragged data is dropped, a drop event occurs.
<br>
In the example above, the ondrop attribute calls a function, drop(event):
```
function drop(ev) {
  ev.preventDefault();
  var data = ev.dataTransfer.getData("text");
  ev.target.appendChild(document.getElementById(data));
}
```
<ul>
<li>Call preventDefault() to prevent the browser default handling of the data (default is open as link on drop)</li>
<li>Get the dragged data with the dataTransfer.getData() method. This method will return any data that was set to the same type in the setData() method</li>
<li>The dragged data is the id of the dragged element ("drag1")</li>
<li>Append the dragged element into the drop element</li>
</ul>
## HTML Web Storage API
HTML web storage; better than cookies.

### What is HTML Web Storage?
With web storage, web applications can store data locally within the user's browser.

Before HTML5, application data had to be stored in cookies, included in every server request. Web storage is more secure, and large amounts of data can be stored locally, without affecting website performance.

Unlike cookies, the storage limit is far larger (at least 5MB) and information is never transferred to the server.

Web storage is per origin (per domain and protocol). All pages, from one origin, can store and access the same data.

### HTML Web Storage Objects
HTML web storage provides two objects for storing data on the client:
<ul>
<li>window.localStorage- stores data with no expiration date</li>
<li>window.sessionStorage - stores data for one session (data is lost when the browser tab is closed)</li>
</ul>
The localStorage Object
**The localStorage object stores the data with no expiration date. The data will not be deleted when the browser is closed, and will be available the next day, week, or year.**

The sessionStorage Object
**The sessionStorage object is equal to the localStorage object, except that it stores the data for only one session. The data is deleted when the user closes the specific browser tab.**
For more details refer [here](https://www.smashingmagazine.com/2017/02/designing-html-apis/)
## References
**https://www.smashingmagazine.com/2017/02/designing-html-apis/**
