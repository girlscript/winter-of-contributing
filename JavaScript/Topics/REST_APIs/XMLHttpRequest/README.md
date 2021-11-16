# XMLHttpRequest
---

In this Tutorial , we will learn about  **XMLHttpRequest**.

## What is  XMLHttpRequest?

The XMLHttpRequest allows us to request data from servers. You can retrieve the data from a *URL* without refreshing the full page.

You will think that XMLHttpRequest can retrieve only XML type data because of its name but despite its name , it can be used to retrieve any type of data.


## How to send a Request?

```js
var xhr = new XMLHttpRequest();
 ```

1. An instance of the XMLHttpRequest object is created using object constructor. It uses the new keyword and stores the object in a variable. The variable name xhr is short for  XMLHttpRequest(the name of the object).

```js
xhr.open('GET','data/test.json',true);
```     

2. The XMLHttpRequest object's open () method prepares the request. It has three parameters:
i) The HTTP method
ii) The url of the page that will handle your request.(Here, "test.json" file used in the example above).
iii) A Boolean indicating if it should be asynchronous.


```js
xhr.send(null);
```
3. The send() method is the one that sends the prepared request to the server. Extra information ccan be passed to the server in the parentheses. If no extra information is sent, you may see the keyword null used (although it is not strictly needed).


## How to handle a Response?


```js
     xhr.onload = function()
     {
       if(xhr.status === 200){
         // code to process the results from server
       }     
     }
 ```
1. When the browser has received and loaded a response from the server, the onload event will fire. This will trigger a function (here, it is an anonymous function).

2. The function checks the status property of the object. This is used to make sure the server's response was okay. (If this property is blank, check the setup of the server.)


#### Let's consider an example:

```js
var xhr = new XMLHttpRequest(); // Create XMLHttpRequest object
xhr.onload = function() { // When response has loaded
    //The following conditional check will not work locally - only on a server
    if (xhr.status === 200) { // If server status was ok
        document.getElementByid('content').innerHTML = xhr.responseText; //Update
    }
};
xhr.open('GET', 'data/data.html', true); //prepare the request
xhr.send(null); //Send the request
```

The above example updating a element(whose id is content) innerHTML property by new HTML that has been sent from the server.

## XMLHttpRequest Object Methods:


1. **new XMLHttpRequest()** - Creates a new XMLHttpRequest object.

1. **abort()** - Cancels the current request.

1. **getAllResponseHeaders()** - Returns all the response headers.

1. **getResponseHeader()** - Returns the string containing the text of the specified header.

1. **open()** - Initializes a request.

1. **send()** - Sends the request to the server. Used for GET requests.

1. **send(string)** - Sends the request to the server. Used for POST requests.

1. **setRequestHeader()** - Sets the value of an HTTP request header. You must call setRequestHeader()after open(), but before send().

## XMLHttpRequest Object Properties:

1. **onreadystatechange** - Specifies which function to be called when onreadystatechange property changes.

1. **readystate** - Returns an unsigned short, the state of the request.

1. **responseText** - Returns the response data as a string.

1. **responseXML** - Returns the response data as XML data.

1. **status** - Returns an unsigned short with the status of the response of the request.

1. **statusText** - Returns a response string returned by the HTTP server. Unlike **XMLHttpRequest.status**, this includes the entire text of the response message (for example - "200 OK").

> XMLHttpRequest is mostly used in AJAX programming. To learn about AJAX,you can visit [**AJAX**](https://github.com/girlscript/winter-of-contributing/tree/Javascript/JavaScript/Topics/13.AJAX) folder in the same Javascript directory.
---
> Contribution by :  
> <cite>[Anjali Rai](https://github.com/anjalirai12)</cite>
