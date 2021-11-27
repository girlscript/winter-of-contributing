# HTTP Request Methods
---
In this Tutorial , we will learn about different types of **HTTP Methods**.

## What are HTTP Request Methods?

HTTP defines a request that specifies what action to be performed for a given resource identified by a given URL.

## How Do HTTP Requests Work?

HTTP requests work as the intermediary transportation method between a client/application and a server. The client submits an HTTP request to the server, and after internalizing the message, the server sends back a response. The response contains status information about the request.

## Different types of HTTP Request Methods:

### 1. GET:

The GET method is used to request and retrieve information from the given server using a given URL. Requests using GET only retrieves data and there is no other effect on the data.

The query string (name/value pairs) is sent in the URL of a GET request.

Example:
> /demo/demo_form.php?name="abc"

The above example requesting the data  where name="abc".

### 2. HEAD:

HEAD is almost identical to GET, but without the response body.

The HTTP HEAD method requests the headers that would be returned.
For example, if a URL might produce a large download, a HEAD request could read its Content-Length header to check the filesize without actually downloading the file.

Example:
>HEAD /echo/head/json HTTP/1.1<br>
Accept: application/json<br>
Host: demo.com

### 3. POST:

Another type of request is POST. POST is used to send data to a server to create/update a resource.

The data sent to the server with POST is stored in the request body of the HTTP request:

Example:

> POST /test/demo_form.php HTTP/1.1<br>
Host: demo.example<br>
name1=value1&name2=value2

### 4. PUT:

PUT is similar to POST as PUT is also used to send data to a server to create/update a resource but there is a difference between PUT and POST that is PUT is idempotent. That is calling the same PUT request multiple times will always produce the same result whereas calling a POST request repeatedly have side effects of creating the same resource multiple times.

Example:

> POST /test/demo_form.php HTTP/1.1<br>
Host: demo.example<br>
Content-type: text/html<br>
Content-length: 20<br>
\<p>New File\</p>

If the PUT request successfully creates a new resource, then the server informs the user by sending 201(Created) response.

If the required resource already has a representation and it is successfully modified by the request then the server must send either a 200(OK) or 204(No Content) response means that the response is successful.

### 5. DELETE:

The DELETE request method is used to delete resources indicated by a specific URL.

Example:

>DELETE /demo.html HTTP/1.1<br>
Host: demo.com

If a DELETE method is successfully applied, then there are different response status codes possible:

* A **202 (Accepted)** status code if the action will likely succeed but has not yet been enacted.

* A **204 (No Content)** status code if the action has been enacted and no further information is to be supplied.

* A **200 (OK)** status code if the action has been enacted and the response message includes a representation describing the status.

```html
HTTP/1.1 200 OK
Date: Tue, 23 Nov 2021 06:05:00 GMT
<html>
  <body>
    <h1>File deleted.</h1>
  </body>
</html>
```

### 6. PATCH

A PATCH request is similar to POST and PUT. However, its main purpose is to apply partial modifications to the resource. And  like a POST request, the PATCH request is also non-idempotent.

With PATCH, you may send only updated data without sending whole data again unlike POST and PUT.

Example:

>PATCH /demo.json HTTP/1.1<br>
Host: demo.com<br>
Content-Type: application/json<br>
If-Match: "e0023aa4e"<br>
Content-Length: 100<br>
[description of changes]

### 7. TRACE

TRACE requests are used to invoke a remote, application loop-back test along the path to the target resource.

The TRACE method allows clients to view whatever message is being received at the other end of the request chain so that they can use the information for debugging purposes.

Example:
>TRACE / HTTP/1.1<br>
Host: demo.com<br>
User-Agent: Mozilla/4.0 (compatible; MSIE5.01; Windows NT)

### 8. CONNECT

The CONNECT request method is used by the client to create a network connection to a web server over a particular HTTP.

For example, the CONNECT method can be used to access websites that use SSL (HTTPS).The client asks an HTTP Proxy server to tunnel the TCP connection to the desired destination.

>CONNECT demo.com HTTP/1.1<br>
User-Agent: Mozilla/4.0 (compatible; MSIE5.01; Windows NT)



---

> Contribution by :  
> <cite>[Anjali Rai](https://github.com/anjalirai12)</cite>
