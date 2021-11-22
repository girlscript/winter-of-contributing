<h1 align='center'>Axios in React</h1>

## What is Axios in React ?

Axios is a Promise based HTTP data fetching library that is based in javascript and used for the browser as well as Node applications.Axios makes it easy to perform asynchronous API calls to REST endpoints, perform **CRUD** (Create, Read, Update, Delete) operations and is compatible with front-end frameworks like React.

**Setting Up Axios with React**:

To set up Axios in React, run the following command in the terminal of the react app.

```
npm install axios

```

**Shorthand methods for Axios HTTP requests**:

Axios library provides a set of shorthand methods for performing different types of HTTP requests. They are self-explanatory and match the HTTP method names. The methods are as follows:

- axios.request(config)
- axios.get(url, config)
- axios.delete(url, config)
- axios.head(url, config)
- axios.options(url, config)
- axios.post(url, data, config)
- axios.put(url, data, config)
- axios.patch(url, data, config)

## Where we use Axios in React ?

Axios is useful to perform a multitude of tasks involving HTTP Requests.

- Making HTTP Requests from the browser and Node Applications
- Intercepting Requests and Response data
- Modifying and transforming Request and Response data
- Cancelling Requests
- Automatic transformation for JSON data
- Providing Client side support for protecting against XSRF

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

  - To perform a HTTP GET request and retrieve a list of news headlines from the endpoint **https://newsapi.org/v2/top-headlines?language=en** the **axios.get()** shorthand method is used.
  - The url of the endpoint is passed as a parameter to this axios.get() method.
  - This method then returns a Promise, so that we can use the .then() to store the res.data.articles in a state variable called articles.
  - The articles is then mapped using .map() to render the list of news headlines on the screen.
  - If something goes wrong, the .catch() handler logs the error to the console.

- #### Example 2 : POST Request Using Axios

  ```javascript
  import "./App.css";
  import React, { useState, useRef } from "react";
  import axios from "axios";

  const App = () => {
    const [posts, setPosts] = useState([]);
    const titleRef = useRef();
    const bodyRef = useRef();
    const createPost = (event) => {
      event.preventDefault();
      const title = titleRef.current.value;
      const body = bodyRef.current.value;

      axios
        .post("https://jsonplaceholder.typicode.com/posts", {
          title: title,
          body: body,
        })
        .then((res) => {
          console.log(res.data);
          setPosts(res.data);
        })
        .catch((err) => {
          console.log(err);
        });
    };

    return (
      <div className="App">
        <form onSubmit={createPost}>
          <label htmlFor="title-input">Title</label>
          <input
            id="title-input"
            type="text"
            name="Title"
            placeholder="Enter Post Title"
            ref={titleRef}
          />
          <br />
          <br />
          <label htmlFor="body-input">Description</label>
          <input
            id="body-input"
            name="Body"
            placeholder="Enter Post Body"
            type="textarea"
            ref={bodyRef}
          />
          <br />
          <br />
          <button type="submit">Create Post</button>
        </form>

        <div key={posts.id}>
          <h3>{posts.title}</h3>
          <h5>{posts.body}</h5>
        </div>
      </div>
    );
  };
  export default App;
  ```

  This code would render the following output:

  ![](./assets/axios_example2.JPG)

  ##### Explanation:

  - For demonstrating a POST method, a form is used to let the user enter a new post title and post body.
  - The submit event of the form is therefore connected with the event handler method createPost.
  - The HTTP post request is performed by calling **axios.post()** that takes in two parameters.
    - First one is the url of the API i.e. **https://jsonplaceholder.typicode.com/posts**.
    - Second one is an object which contains the JSON data of the new post item: title and body.
  - This method then returns a Promise, so that we can use the .then() to store the res.data in a state variable called posts.
  - The post.title and post.body is then rendered on the screen.

## Benefits of the Axios

- One of the biggest benefits of Axios is that it has really good defaults to work around with **JSON data**. Unlike other alternatives like the Fetch API, it is not required to set any headers or convert the data or request body using .json() or JSON.stringify().
- Axios provides **matching HTTP shorthand methods** which makes performing any HTTP Requests or API calls way easier, thereby providing a simpler development experience. For example, to perform a GET request, use the .get() method.
- Axios helps to make **asynchronous requests** and handle responses better by using promises and thereby avoiding callback hell.
- We can use async/await with it as well as write functions to modify a request before it is sent.
- Axios can be used both on the server as well as the client.

## References

- https://www.freecodecamp.org/news/how-to-use-axios-with-react/
- https://github.com/axios/axios
