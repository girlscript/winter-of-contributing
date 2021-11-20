<h1 align="center">REST API</h1>

## What is an API

___Definition___ - API stands for Application Programming Interface and in simple terms it is a layer between the frontend and the backend / Database.

It is a application which does not have any user interface and only returns and accepts data from the database and frontend applications respectively.

Eg - https://reqres.in/api/users?page=1 is a API which returns a array of objects with dummy information about people. Like so -

![](./assets/RESTAPI.png)

---
## What is a REST API

There are some rules that a developer need to follow while building a API. Depending on these rules, we can have differnet types of API.

And if a API follows these rules ,Then it is called a REST API -
* The API must return JSON,html,xlt or plain text data 
* The API must remain stateless
* The API must respond in the same way for a particular request, no matter the source.
* The API routes should use nouns in the links eg-"/auth/login"
* The API should not use Verbs in URLs for eg - "/getUsers" is wrong.
* The verb should be specified by the type of HTTP request only.(next topic).
* For in-depth info read https://www.redhat.com/en/topics/api/what-is-a-rest-api

Although ,there are different types of APIs for eg - SOAP, The REST APIs are by far the most popular choise among developers.

---

## HTTP Requests
An HTTP request is made by a client, to a named host, which is located on a server. The aim of the request is to access a resource on the server. To make the request, the client uses components of a URL (Uniform Resource Locator), which includes the information needed to access the resource.

There are different types of HTTP requests -

* GET - The GET method requests a representation of the specified resource. Requests using GET should only retrieve data.

* HEAD - The HEAD method asks for a response identical to a GET request, but without the response body.

* POST - The POST method submits an entity to the specified resource, often causing a change in state or side effects on the server.

* PUT - The PUT method replaces all current representations of the target resource with the request payload.

* DELETE - The DELETE method deletes the specified resource.

* CONNECT - The CONNECT method establishes a tunnel to the server identified by the target resource.

* OPTIONS - The OPTIONS method describes the communication options for the target resource.

* TRACE - The TRACE method performs a message loop-back test along the path to the target resource.

* PATCH - The PATCH method applies partial modifications to a resource. 

---

## How To Make a HTTP request to an API.
There are several in-built and external javascript packages that help you to make HTTP requests to APIs on different routes. Some of these are -

* fetch - In-built and browser side only.
* axios - External library and works on both browser side and server side
* Unfetch - External library
* Superagent - External library Ajax for Node.js and browsers
* node-fetch - External library

There are many more.

---
## When we use APIs
* Whenever We are using a databse in our application and we want the data from the database or we want to make changes to the data stored in the database, we need to use API calls.
* Whenever we have dynamic data in our website that might change, we need to make api calls to get the data.
* If we have large number of heavy components in our app, we can request them when we want from the api, instead of statically loading the components.
* When we are using data from some other API like getting weather details, we make API calls. 

---
## Benefits of the API calls.
* Load times of the website decrease significantly.
* A layer of protection is added on the data as we can decide who has access to what data.
* We dont need to write code for everything, for example you want to make a sudoku game, instead of generating the game yourself you can just call an API and you yourself do not need to write complex code for the same.
* APIs can be monetized and can help developers make extra money.
---

## Conclusion 
We have covered what APIs are and when to use them in a react application.

APIs are part of back-end engineering and that's why we covered only the most important topics.
But , in-fact they are a very vast topic and i suggest you to go through the links in the refferences section for better understanding.

---
## Refferences

* https://openbase.com/categories/js/best-javascript-http-request-libraries
* https://www.redhat.com/en/topics/api/what-is-a-rest-api
* https://www.mulesoft.com/resources/api/what-is-an-api
* List of various APIs - https://github.com/public-api-lists/public-api-lists#weather