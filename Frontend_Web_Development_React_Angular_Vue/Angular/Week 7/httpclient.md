<p align="center">
<img  src="https://thecodebuzz.com/wp-content/uploads/2020/08/Angular-9-HTTPClient-post-Examples.jpg" 
 alt="JSX-logo" width="80%" />
</p>

# What is http client?

In Angular, the HttpClient is a distinct model that can be found in the @angular/common/http package, that relies on the XMLHttpRequest API, which is available in all current browsers, to allow you to send HTTP requests and manage their responses.

* A builder is used to create a HttpClient.
* The builder may be used to set per-client state such as the preferred protocol version (HTTP/1.1 or HTTP/2), whether to follow redirects, whether to utilise a proxy, and so on.
* An HttpClient is immutable once created and may be used to submit repeated requests.

# What is httpclient module?

HttpClient is a Service that your app may use by importing the **HttpClientModule** from the @angular/common/http package. You may inject HttpClient into all of your Services across the app after importing HttpClientModule into your Root Module.

* HttpClientModule configures HttpClient's dependency injector with XSRF-supporting services.

* The HttpClientModule must be imported after the BrowserModule in the imports array, as illustrated below.

```angular
import { NgModule }         from '@angular/core';  
import { BrowserModule }    from '@angular/platform-browser';  
import { HttpClientModule } from '@angular/common/http';
@NgModule({

  declarations: [

    AppComponent

  ],
  imports: [

    BrowserModule,

    HttpClientModule

  ],
  providers: [],

  bootstrap: [AppComponent]
})
export class AppModule { }
```
When Angular has to resolve a dependency for the first time, it uses **providers** to construct and manage service objects. Some of them are :- 

1. HttpHandler -
 By httphandler, an HttpRequest is converted into a series of HttpEvents, one of which is most likely a HttpResponse.

HttpHandler can be injected. When the handler instance is injected, it sends requests to the first interceptor in the chain, which sends them to the second, and so on, until they reach the HttpBackend.
```js
import { HttpHandler } from '@angular/common/http';
```

2. HttpXhrBackend -
An HttpBackend that sends requests to a backend server using the XMLHttpRequest API.

``` js
import { HttpXhrBackend } from '@angular/common/http';
```

3. HttpBackend - 

A final HttpHandler that will send the request to a backend using browser HTTP APIs.

The HttpClient interface and the HttpBackend are separated by interceptors.

When HttpBackend is injected, it sends requests straight to the backend, bypassing the interceptor chain.

```js
import { HttpBackend } from '@angular/common/http';
```

## External References

* [Angular Docs](https://angular.io/api/common/http/HttpClientModule#description)
* [Angular HttpClient](https://www.techiediaries.com/angular-http-client/)