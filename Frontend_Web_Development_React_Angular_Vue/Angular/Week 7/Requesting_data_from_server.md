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

## Reading the full response.
* We use HttpClient to send a GET request to our API server to retrieve the first page of data. The get() method takes the URL of API endpoint as a first parameter and an options object as the second parameter. 
* In the options object, we add the observe property with a response value to instruct Angular to provide us with the full HTTP response. This way we can get and parse the Link header containing pagination information sent from our API server.
* We use the pipe() method and the tap() operator to run a side effect code that retrieves the Link header from the res.headers map, parse it and assigns the values to their respective variables.
* Sometimes, you might need more information about the transaction than is contained in the response body. Sometimes servers return special headers or status codes to indicate certain conditions that are important to the application workflow.
* Use HttpClient with the observe option of the get() method to get full response.
* Example:
```jsx 
getConfigResponse(): Observable<HttpResponse<Config>> {
  return this.http.get<Config>(
    this.configUrl, { observe: 'response' });
}
```
* Now HttpClient.get() returns an Observable of type HttpResponse.
* The component's showConfigResponse() method displays the response headers as well as the configuration.
```jsx
showConfigResponse() {
  this.configService.getConfigResponse()
    // resp is of type `HttpResponse<Config>`
    .subscribe(resp => {
      // display its headers
      const keys = resp.headers.keys();
      this.headers = keys.map(key =>
        `${key}: ${resp.headers.get(key)}`);

      // access the body directly, which is typed as `Config`.
      this.config = { ...resp.body! };
    });
}
```

## JSONP request

* Apps can use the HttpClient to make JSONP requests across domains when a server doesn't support CORS protocol.
* Angular JSONP requests return an Observable. Follow the pattern for subscribing to observables and use the RxJS map operator to transform the response before using the async pipe to manage the results.
* In Angular, use JSONP by including HttpClientJsonpModule in the NgModule imports. In the following example, the searchHeroes() method uses a JSONP request to query for heroes whose names contain the search term.
* Import JSONP module in your app module's definition file:
```jsx
 import {JsonpModule} from '@angular/http';

 @NgModule({
 declarations: [
     //... List of components that you need.
 ],
 imports: [
     JsonpModule,
     //...
 ],
 providers: [
     //...
 ],
 bootstrap: [AppComponent]
 })
 ```
* Inject jsonp service and map rxjs operator into your service:
```jsx
 import {Injectable} from '@angular/core';
 import {Jsonp} from '@angular/http';
 import 'rxjs/add/operator/map';

 @Injectable()
 export class MegaSuperService {
    constructor(private _jsonp: Jsonp) {}
 }
 ```
* Make requests using "JSONP_CALLBACK" as a callback property:
```jsx
 // inside your service
 this._jsonp.get('/api/get?callback=JSONP_CALLBACK').map(data => {
 // Do stuff.
 });
```
* Hence, The response is wrapped in the callback function, which takes the observables returned by the JSONP method and pipes them through to the error handler.

## How to request non-json data?

* Requesting non-JSON data is required because all APIs do not return JSON data. DownloaderService method reads a text file from the server and logs the file contents, before returning those contents to the caller as an Observable<string>.
```jsx 
 getTextFile(filename: string) {
  return this.http.get(filename, {responseType: 'text'})
    .pipe(
      tap( // Log the result or error
        data => this.log(filename, data),
        error => this.logError(filename, error)
      )
    );
}
```
 
* HttpClient.get() returns a string (non- JSON) rather than the default JSON because of the responseType option.
* A download() method in the DownloaderComponent initiates the request by subscribing to the service method.
 
```jsx
download() {
  this.downloaderService.getTextFile('assets/textfile.txt')
    .subscribe(results => this.contents = results);
}
```
 
* Hence, we get the non-JSON file.

Conclusion
 * Hence, we saw how to request data from server.
 
References
 
 * https://angular.io/guide/http#requesting-data-from-a-server
 
 Thank you..
