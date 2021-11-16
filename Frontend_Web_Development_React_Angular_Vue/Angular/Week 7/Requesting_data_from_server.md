<!-- How to request data from server?
How to read full response?
How to request non-json data?
Explain with syntax/example -->

# Requesting data from the server

## Introduction

* Angular provides us with its own service called HttpClient for making requests to servers. Since providers should generally be registered at the top-most module and the HttpClient service is usually used in many places throughout the app, it's acceptable to register it either in the root AppModule or the SharedModule of your application when it gets bootstrapped. 
* We can do this by importing HttpClientModule from @angular/common/http, which contains all the providers we'll need for our application to make requests.
* Tt's recommended that HttpClient calls are wrapped within services instead of being used in Components directly. 
* This allows for greater flexibility for your application structure as you can reuse your your calls throughout the app, as well the ability to implement more advanced features such as caching.

## How to request data from server?

*  The ```getUser``` method is firing off a GET request to my profile info from the server. When the data comes back, the data is returned to any subscribers that are waiting for the data to resolve.
*  The HttpClient.get() method is used to fetch data from a server. The asynchronous method sends an HTTP request, and returns an Observable that emits the requested data when the response is received. The return type varies based on the observe and responseType values that you pass to the call.
* The get() method takes two arguments; the endpoint URL from which to fetch, and an options object that is used to configure the request.
* Syntax:
```jsx

 get(url: string, 
      options: {
          headers?: HttpHeaders | { [header: string]: string | string[]; };
          params?: HttpParams | { [param: string]: string | string[]; };
          observe?: "body|events|response|";
          responseType: "arraybuffer|json|blob|text";
          reportProgress?: boolean; 
          withCredentials?: boolean;}
     ): Observable<>
 ```
 
## Significance:

Under the options, we have several configuration options, which we can use to configure the request.
* ```headers```  : It allows you to add HTTP headers to the outgoing requests. 
* ```observe```  : The HttpClient.get method returns the body of the response parsed as JSON (or type specified by the responseType). Sometimes you may need to read the entire response along with the headers and status codes. To do this you can set the observe property to the response.
* The allowed options are : 
  ->```response``` which returns the entire response
  ->```body``` which returns only the body
  ->```events``` which return the response with events.
* ```params``` :  Allows us to Add the URL parameters or Get Parameters to the Get Request
* ```reportProgress``` :  This is a boolean property. Set this to true, if you want to get notified of the progress of the Get Request. This is a pretty useful feature when you have a large amount of data to download (or upload) and you want the user to notify of the progress.
* ```responseType``` :  Json is the default response type. In case you want a different type of response, then you need to use this parameter. The Allowed Options are arraybuffer, blob, JSON, and text. 
* ```withCredentials``` :  It is of boolean type. If the value is true then HttpClient.get will request data with credentials (cookies)

## Calling the HttpClient.Get method
```jsx 

public getData() {
  this.HttpClient.get<any[]>(this.baseUrl+'users/'+this.userName+'/repos')
           .subscribe(data => {
               this.repos= data;
           },
           error => {
           }
  );
}
```
# Response Type
* The responseType determines how the response is parsed. it can be one of the arraybuffer, json blob or text. The default behavior is to parse the response as JSON.

## 
