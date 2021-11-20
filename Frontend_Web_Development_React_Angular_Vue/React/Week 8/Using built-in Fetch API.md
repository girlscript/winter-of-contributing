<h1 align='center'>Using built-in Fetch API</h1>

## What is Built-in Fetch API ?

## Where we are Using Built-in Fetch API ?

- #### Example 1 : While fetching data from an API using 'GET' Method

  ```javascript
  import { useState, useEffect } from "react";

  const App = () => {
    const [movies, setMovies] = useState([]);
    useEffect(() => {
      fetch("https://swapi.dev/api/films/")
        .then((response) => {
          return response.json();
        })
        .then((data) => {
          setMovies(data.results);
        })
        .catch((err) => {
          console.log(err);
        });
    }, []);
    console.log(movies);
    return (
      <div>
        {movies.map((movie) => (
          <div key={movie.episode_id}>
            <h2>{movie.title}</h2>
            <h6>{movie.opening_crawl}</h6>
            <h4>Released on : {movie.release_date}</h4>
          </div>
        ))}
      </div>
    );
  };
  export default App;
  ```

  This code would render the following output:

  ![](./assets/fetchapi_example1.JPG)

  ##### Explanation:

  -

- #### Example 2 : While uploading data to a database using 'POST' Method

  ```javascript
  import "./App.css";
  import { useRef, useState } from "react";

  const App = () => {
    const [posts, setPosts] = useState([]);
    const nameRef = useRef();
    const jobRef = useRef();

    const submitHandler = (event) => {
      event.preventDefault();
      const name = nameRef.current.value;
      const job = jobRef.current.value;

      fetch("https://reqres.in/api/users", {
        method: "POST",
        body: JSON.stringify({
          name: name,
          job: job,
        }),
        headers: {
          "Content-Type": "application/json",
        },
      })
        .then((res) => res.json())
        .then((data) => {
          setPosts(data);
        });

      console.log(posts);
    };
    return (
      <div className="App">
        <form onSubmit={submitHandler}>
          <label htmlFor="name-input">Name</label>
          <input
            id="name-input"
            type="text"
            name="Name"
            placeholder="Enter your name here"
            ref={nameRef}
          />
          <label htmlFor="job-input">Job</label>
          <input
            id="job-input"
            name="Job"
            placeholder="Enter job position here"
            type="text"
            ref={jobRef}
          />
          <button type="submit">SUBMIT</button>
        </form>
        <div>
          <h1>You've submitted the following details: </h1>
          <h2>Your Name: {posts.name}</h2>
          <h2>Your Job: {posts.job}</h2>
        </div>
      </div>
    );
  };
  export default App;
  ```

  This code would render the following output:

  ![](./assets/fetchapi_example2.JPG)

  ##### Explanation:

  - We have used the Firebase AUTH REST API to demonstrate sign up/sign in.

## Benefits of the Using Built-In Fetch API.

## References

- https://reactjs.org/docs/faq-ajax.html
- https://jasonwatmore.com/post/2020/11/02/react-fetch-http-put-request-examples
