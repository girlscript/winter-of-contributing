<!-- How to request data from server?
How to read full response?
How to request non-json data?
Explain with syntax/example -->


* Angular provides us with its own service called HttpClient for making requests to servers. Since providers should generally be registered at the top-most module and the HttpClient service is usually used in many places throughout the app, it's acceptable to register it either in the root AppModule or the SharedModule of your application when it gets bootstrapped. 
* We can do this by importing HttpClientModule from @angular/common/http, which contains all the providers we'll need for our application to make requests.
* Tt's recommended that HttpClient calls are wrapped within services instead of being used in Components directly. 
* This allows for greater flexibility for your application structure as you can reuse your your calls throughout the app, as well the ability to implement more advanced features such as caching.

# Requesting data from the server
### The ```getUser``` method is firing off a GET request to my profile info from the server. When the data comes back, the data is returned to any subscribers that are waiting for the data to resolve.
