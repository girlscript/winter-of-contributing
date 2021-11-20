<h1 align="center">  Superagent in React </h1>

## :arrow_right: What is Superagent in React ?
Superagent is a progressive client-side HTTP request library that supports many high-level HTTP client features.The browser-ready, minified version of this package is only 6KB (with gzipped). It's fairly simple to use and it's very feature packed.

* **Command for Installing SuperAgent:-**<br>
 npm install superagent@5.2.2

* **Example:-**
```jsx
import superagent from 'superagent';

/*...*/

superagent
      .post('/api/pet')
      .send({ name: 'Manny', species: 'cat' }) // sending POST data
      .set('X-API-Key', 'foobar')
      .set('accept', 'json')
      .end(function (err, res) {
         // working with err, res here
      });
```

## :arrow_right: Where we use Superagent in React ?
* Superagent is one of most used Ajax API's used for making asynchronous requests in the browser. Its beginner friendly and even developers having no knowledge of JavaScript would easily implement it.

**Example:-**<br>
The following code snippet showcases how to use SuperAgent to make a request:
```jsx
const superagent = require('superagent');

(async () => {
  try {
    const queryArguments = {
      api_key: 'MY_KEY'
    }

    const response = await superagent.get('https://the-one-api.dev/v2/book').query(queryArguments)
    console.log(response.body.name);
  } catch (error) {
    console.log(error.response.body);
  }
})();
```

* SuperAgent is a promising agent. It can be used in different ways: callback, promise with then/catch, and promise with async/await.

**Example:-**
```jsx
const superagent = require('superagent');

// callback
superagent
  .post('/api/pet')
  .send({ name: 'Manny', species: 'cat' }) // sends a JSON post body
  .set('X-API-Key', 'foobar')
  .set('accept', 'json')
  .end((err, res) => {
    // Calling the end function will send the request
  });

// promise with then/catch
superagent.post('/api/pet').then(console.log).catch(console.error);

// promise with async/await
(async () => {
  try {
    const res = await superagent.post('/api/pet');
    console.log(res);
  } catch (err) {
    console.error(err);
  }
})();
```
## :arrow_right: Benefits of the Superagent in React
The benefits of using Superagent are as follows:-<br>
*  What's cool about SuperAgent is that you have other useful functions that you can chain onto requests such as query() to add parameters to the request rather than passing them through as an options object. 

**Example:-**<br>
***Here,you don’t have to parse the JSON response yourself***
```jsx
const superagent = require('superagent');

(async () => {
  try {
    const queryArguments = {
      api_key: 'DEMO_KEY',
      date: '2020-03-18'
    }

    const response = await superagent.get('https://api.nasa.gov/planetary/apod').query(queryArguments)
    console.log(response.body.url);
    console.log(response.body.explanation);
  } catch (error) {
    console.log(error.response.body);
  }
})();
```

* The fact that SuperAgent has dozens of plugins available to accomplish things like prevent caching, convert server payloads, or prefix or suffix URLs, is pretty impressive.<br>
* Alternatively, you could extend functionality by writing your own plugin.<br>
* SuperAgent also conveniently parses JSON data for you.<br>

## :arrow_right:References:-
* https://openbase.com/js/superagent<br>
* https://visionmedia.github.io/superagent/
