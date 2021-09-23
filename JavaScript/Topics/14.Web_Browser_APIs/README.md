# What is an API?
 API stands for **Application Programming Interface**. APIs are the little pieces of code that make it possible for digital devices, software applications, and data servers to talk with each other, and they’re the essential backbone of so many services we now rely on.

 Application Programming Interfaces (APIs) are constructs made available in programming languages to allow developers to create complex functionality more easily. They abstract more complex code away from you, providing some easier syntax to use in its place.

# What are APIs used for?
- APIs power desktop applications.
- APIs are behind most web applications.
- APIs make mobile applications possible.
- APIs are the integrations for no code solutions.
- APIs connect devices to the internet.
- APIs define the networks—or the information passed between applications, systems, and devices.
- APIs even connect everyday things like automobiles, doorbells, dishwashers, and wearable devices.

and even more...

# What can APIs do?
- Integration with internal and external systems
- Adding or enhancing functionality of internal and external systems
- Adding or enhancing functionality for customers
- Speeding up software and system development
- Reducing operating costs
- Reducing software development costs
- Improving software and system testing
- Improving organizational security and governance
- Enabling mobile applications
- Reducing outages and non-performing systems

# How do APIs work?
APIs work by sharing data and information between applications, systems, and devices—making it possible for these things to talk with each other.

Sometimes the easiest way to think about APIs is to think about a metaphor, and a common scenario that a lot of folks use is that of the customer, a waiter, and a restaurant kitchen: A customer talks to the waiter and tells the waiter what she wants. The waiter takes down the order and communicates it to the kitchen. The kitchen does their work, creating the food, and then the waiter delivers the order back to the customer.

In this metaphor, a customer is like a user, who tells the waiter what she wants. The waiter is like an API, receiving the customer’s order and translating the order into easy-to-follow instructions that the kitchen then uses to fulfill that order—often following a specific set of codes, or input, that the kitchen easily recognizes. The kitchen is like a server that does the work of creating the order in the manner the customer wants it, hopefully! When the food is ready, the waiter picks up the order and delivers it to the customer.

#  Types of APIs
## 1) Browser APIs

All browsers have a set of built-in Web APIs to support complex operations, and to help accessing data.
For example, the Geolocation API can return the coordinates of where the browser is located.

```js
// Get the latitude and longitude of the user's position
const myElement = document.getElementById("demo");

function getLocation() {
  if (navigator.geolocation) {
    navigator.geolocation.getCurrentPosition(showPosition);
  } else {
    myElement.innerHTML = "Geolocation is not supported by this browser.";
  }
}

function showPosition(position) {
  myElement.innerHTML = "Latitude: " + position.coords.latitude +
  "<br>Longitude: " + position.coords.longitude;
}
```

## 2) Third Party APIs
Third party APIs are not built into your browser.
To use these APIs, you will have to download the code from the Web.

Examples:

   - YouTube API - Allows you to display videos on a web site.
   - Twitter API - Allows you to display Tweets on a web site.
   - Facebook API - Allows you to display Facebook info on a web site.

### They are found on third-party servers
Browser APIs are built into the browser — you can access them from JavaScript immediately. For example, the Web Audio API we saw in the Introductory article is accessed using the native AudioContext object. For example:
```js
const audioCtx = new AudioContext();
  ...
const audioElement = document.querySelector('audio');
  ...
const audioSource = audioCtx.createMediaElementSource(audioElement);
// etc.
```
Third party APIs, on the other hand, are located on third party servers. To access them from JavaScript you first need to connect to the API functionality and make it available on your page. This typically involves first linking to a JavaScript library available on the server via a <script> element, example:
 
```js
<script src="https://api.mqcdn.com/sdk/mapquest-js/v1.3.2/mapquest.js"></script>
<link type="text/css" rel="stylesheet" href="https://api.mqcdn.com/sdk/mapquest-js/v1.3.2/mapquest.css"/>
```
You can then start using the objects available in that library. For example:
 
```js
let map = L.mapquest.map('map', {
  center: [53.480759, -2.242631],
  layers: L.mapquest.tileLayer('map'),
  zoom: 12
});
```
### They usually require API keys
Security for browser APIs tends to be handled by permission prompts. The purpose of these is so that the user knows what is going on in the websites they visit and is less likely to fall victim to someone using an API in a malicious way.

Third party APIs have a slightly different permissions system — they tend to use developer keys to allow developers access to the API functionality, which is more to protect the API vendor than the user.

You'll find a line similar to the following in the Mapquest API example:
```js
L.mapquest.key = 'YOUR-API-KEY-HERE';
```
 
References:<br>
[MDN](https://developer.mozilla.org/en-US/docs/Learn/JavaScript/Client-side_web_APIs/Introduction)<br>
[postman](https://blog.postman.com/intro-to-apis-what-is-an-api/)<br>
[W3Schools](https://www.w3schools.com/js/js_api_intro.asp)<br>

Contributor: [Sushovan Banerjee](https://github.com/sushovanb02)
