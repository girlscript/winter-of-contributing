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
- **Browser**, at the client-side.
- Now, whenever a user sends a request to the server, the cookie is added with that request automatically. Due to the cookie, the server recognizes the users.

<p align="center">
<img src="cookie.png" height=40% width=40% align="middle">
</p>

# Create a Cookie
With JavaScript, a cookie can be created like this:
```js
document.cookie = "username=John Doe; expires=Thu, 18 Dec 2013 12:00:00 UTC; path=/";
```
![](https://i.stack.imgur.com/x3bGr.png)
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

# Setting up cookies with Node.js
Go ahead and create a project directory on your computer. Initialize Node.js using ```npm init -y``` to generate a ```package.json``` file to manage Node.js project dependencies.
We will use the following NPM packages:

- **Express** - this is an opinionated server-side framework for Node.js that helps you create and manage HTTP server REST endpoints.

- **cookie-parser** - cookie-parser looks at the headers in between the client and the server transactions, reads these headers, parses out the cookies being sent, and saves them in a browser. In other words, cookie-parser will help us create and manage cookies depending on the request a user makes to the server.

Run the following command to install these NPM packages:
```
npm install express cookie-parser
```

## Step 1 - Import the installed packages
To set up a server and save cookies, import the cookie parser and express modules to your project. This will make the necessary functions and objects accessible.

```js
const express = require('express')
const cookieParser = require('cookie-parser')
```

## Step 2 - Get your application to use the packages
You need to use the above modules as middleware inside your application, as shown below.

```js
//setup express app
const app = express()

// let’s you use the cookieParser in your application
app.use(cookieParser());
```
This will make your application use the cookie parser and Express modules.

## Step 3 - Set a simple route to start the server
We use the following code to set up a route for the homepage:

```js
//set a simple for homepage route
app.get('/', (req, res) => {
    res.send('welcome to a simple HTTP cookie server');
});
```

## Step 4 - Set a port number
This is the port number that the server should listen to when it is running. This will help us access our server locally. In this example, the server will listen to port 8000, as shown below.

```js
//server listening to port 8000
app.listen(8000, () => console.log('The server is running port 8000...'));
```

# Setting cookies
Let’s add routes and endpoints that will help us create, update and delete a cookie.

## Step 1 - Set a cookie
We will set a route that will save a cookie in the browser. In this case, the cookies will be coming from the server to the client browser. To do this, use the res object and pass cookie as the method, i.e. res.cookie() as shown below.

```js
//a get route for adding a cookie
app.get('/setcookie', (req, res) => {
    res.cookie(`Cookie token name`,`encrypted cookie string Value`);
    res.send('Cookie have been saved successfully');
});
```
When the above route is executed from a browser, the client sends a get request to the server. But in this case, the server will respond with a cookie and save it in the browser.

Go ahead and run node app.js to serve the above endpoint. Open http://localhost:8000/getcookie your browser and access the route.

To confirm that the cookie was saved, go to your browser’s inspector tool 🡆 select the application tab 🡆 cookies 🡆 select your domain URL.

## Step 2 - Using the req.cookies method to check the saved cookies
If the server sends this cookie to the browser, this means we can iterate the incoming requests through req.cookies and check the existence of a saved cookie. You can log this cookie to the console or send the cookie request as a response to the browser. Let’s do that.

```js
// get the cookie incoming request
app.get('/getcookie', (req, res) => {
    //show the saved cookies
    console.log(req.cookies)
    res.send(req.cookies);
});
```

## Step 3 - Secure cookies
One precaution that you should always take when setting cookies is security. In the above example, the cookie can be deemed insecure.

For example, you can access this cookie on a browser console using JavaScript (document.cookie). This means that this cookie is exposed and can be exploited through cross-site scripting.

## Step 4 - Deleting a cookie
Typically, cookies can be deleted from the browser depending on the request that a user makes. For example, if cookies are used for login purposes, when a user decides to log out, the request should be accompanied by a delete command.

Here is how we can delete the cookie we have set above in this example. Use ```res.clearCookie()``` to clear all cookies.

```js
// delete the saved cookie
app.get('/deletecookie', (req, res) => {
    //show the saved cookies
    res.clearCookie()
    res.send('Cookie has been deleted successfully');
});
```

Open http://localhost:8000/deletecookie, and you will see that the saved cookie has been deleted.

# Why do you need a Cookie?
The communication between a web browser and server happens using a stateless protocol named HTTP. Stateless protocol treats each request independent. So, the server does not keep the data after sending it to the browser. But in many situations, the data will be required again. Here come cookies into a picture. With cookies, the web browser will not have to communicate with the server each time the data is required. Instead, it can be fetched directly from the computer.
<br>

Contributor: [Sushovan Banerjee](https://github.com/sushovanb02)
