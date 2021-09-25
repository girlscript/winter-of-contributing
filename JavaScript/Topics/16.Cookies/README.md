# What are Cookies?
A **cookie** is an amount of information that persists between a server-side and a client-side. A web browser stores this information at the time of browsing.

A cookie contains the information as a string generally in the form of a name-value pair separated by semi-colons. It maintains the state of a user and remembers the user's information among all the web pages.

Cookies are saved in name-value pairs like:
```js
username = John Doe
```
# How Cookies Works?

- When a user sends a request to the server, then each of that request is treated as a new request sent by the different user.
- So, to recognize the old user, we need to add the cookie with the response from the server.
- browser at the client-side.
- Now, whenever a user sends a request to the server, the cookie is added with that request automatically. Due to the cookie, the server recognizes the users.

<p align="center">
<img src="cookie.png" height=40% width=40% align="middle">
</p>

# Create a Cookie
With JavaScript, a cookie can be created like this:
```js
document.cookie = "username=John Doe; expires=Thu, 18 Dec 2013 12:00:00 UTC; path=/";
```

# Read a Cookie with JavaScript
With JavaScript, cookies can be read like this:
```js
let x = document.cookie;
// document.cookie will return all cookies in one string much like: cookie1=value; cookie2=value; cookie3=value;
```

# Change a Cookie with JavaScript
With JavaScript, you can change a cookie the same way as you create it:
```js
document.cookie = "username=John Smith; expires=Thu, 18 Dec 2013 12:00:00 UTC; path=/";
// The old cookie is overwritten
```

# Delete a Cookie with JavaScript
Deleting a cookie is very simple.
You don't have to specify a cookie value when you delete a cookie.
Just set the expires parameter to a past date:
```js
document.cookie = "username=; expires=Thu, 01 Jan 1970 00:00:00 UTC; path=/;";
```

# Javascript Set Cookie
The ```set()``` method of the cookies API sets a cookie containing the specified cookie data. This method is equivalent to issuing an HTTP Set-Cookie header during a request to a given URL.

The call succeeds only if you include the "cookies" API permission in your manifest.json file, as well as host permissions for the given URL specified in its manifest. The given URL also needs the necessary permissions to create a cookie with the given parameters.

This is an asynchronous function that returns a Promise.

### Syntax:
```js
var setting = browser.cookies.set(
  details               // object
)
```

Example:
```js
// This example sets a cookie for the document hosted by the currently active tab:
var getActive = browser.tabs.query({active: true, currentWindow: true});
getActive.then(setCookie);

function setCookie(tabs) {
  browser.cookies.set({
    url: tabs[0].url,
    name: "favorite-color",
    value: "red"
  });
}
```

# Javascript Get Cookie
The ```get()``` method of the cookies API retrieves information about a single cookie, given its name and URL.

If more than one cookie with the same name exists for a given URL, the one with the longest path will be returned. For cookies with the same path length, the cookie with the earliest creation time will be returned. If no matching cookie could be found, null is returned.

This is an asynchronous function that returns a Promise.

### Syntax:
```js
var getting = browser.cookies.get(
  details                // object
)
```

Example:
```js
// This example tries to get the cookie named "favorite-color", associated with the URL for the currently active tab:
function logCookie(cookie) {
  if (cookie) {
    console.log(cookie.value);
  }
}

function getCookie(tabs) {
  var getting = browser.cookies.get({
    url: tabs[0].url,
    name: "favorite-color"
  });
  getting.then(logCookie);
}

var getActive = browser.tabs.query({
  active: true,
  currentWindow: true
});
getActive.then(getCookie);
```
# Why do you need a Cookie?
The communication between a web browser and server happens using a stateless protocol named HTTP. Stateless protocol treats each request independent. So, the server does not keep the data after sending it to the browser. But in many situations, the data will be required again. Here come cookies into a picture. With cookies, the web browser will not have to communicate with the server each time the data is required. Instead, it can be fetched directly from the computer.
<br>

Contributor: [Sushovan Banerjee](https://github.com/sushovanb02)