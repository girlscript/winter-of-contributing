<h1 align='center'>Axios in React</h1>

## What is Axios in React ?

Promise based HTTP client for the browser and node.js.Axios as a data fetching library, how to set it up with React, and perform every type of HTTP request with it.

**Setting Up Axios with React**

```
npm install axios

```

## Where we use Axios in React ?

- Make XMLHttpRequests from the browser
- Make http requests from node.js
- Supports the Promise API
- Intercept request and response
- Transform request and response data
- Cancel requests
- Automatic transforms for JSON data
- Client side support for protecting against XSRF

- #### Example 1: GET Request Using Axios

  ```javascript
  import "./App.css";
  import React, { useEffect, useState } from "react";
  import axios from "axios";

  const App = () => {
    const [articlesData, setArticlesData] = useState([]);
    const apiKey = "YOUR_API_KEY";
    useEffect(() => {
      axios
        .get(
          `https://newsapi.org/v2/top-headlines?language=en&apiKey=${apiKey}`
        )
        .then((res) => {
          console.log(res.data.articles);
          setArticlesData(res.data.articles);
        })
        .catch((err) => {
          console.log(err);
        });
    }, []);
    return (
      <>
        {articlesData.map((d) => {
          return (
            <div key={d.url} className="App">
              <h3>{d.title}</h3>
              <img src={d.urlToImage} alt={d.content} height="150px" />
              <h5>{d.description}</h5>
              <a href={d.url}>Read More</a>
            </div>
          );
        })}
      </>
    );
  };
  export default App;
  ```

  This code would render the following output:

  ![](./assets/axios_example1.JPG)

  ##### Explanation :

- #### Example 2 : POST Request Using Axios

## Benefits of the Axios

- It has good defaults to work with JSON data. Unlike alternatives such as the Fetch API, you often don't need to set your headers. Or perform tedious tasks like converting your request body to a JSON string.
- Axios has function names that match any HTTP methods. To perform a GET request, you use the .get() method.
- Axios can be used on the server as well as the client. If you are writing a Node.js application, be aware that Axios can also be used in an environment separate from the browser.

## References

- https://www.freecodecamp.org/news/how-to-use-axios-with-react/
-
