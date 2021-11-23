<h1 align = "center">
UNFETCH IN REACT  
</h1>

<center>
<img src = "https://i.imgur.com/0cSIPzP.png" height = "100"></img>
</center>

## What is Unfetch

It is just an external library for AJAX fetch() call with headers and text or json responses

## Installation

You just need to install node on your System<br>
Open the Command Prompt in Windows or Terminal in MacOS or Linux and type the following command

```bat
npm i unfetch
```

## Benefits of the Unfetch in React.

With the help of module bundler like rollup or webpack, we can import unfetch to use in our code without declaring anything in global

## Usages

Fist we will import it as

```js
import fetch from "unfetch";
```

Now we can call it in useEffect() hook for fetching data

useEffect is the first hook to be called in the function based component. So it is called first by default

```jsx
import React, { useEffect } from "react";
import fetch from "unfetch";
export const Test = () => {
  useEffect(() => {
    // sending the request
    await fetch("/push", {
      method: "POST", // POST method
      headers: {
        "Content-Type": "application/json", // JSON format
      },
      body: JSON.stringify(), // Stringify it before passing it
    }).then((r) => {
      open(r.headers.get("confirm"));
      console.log(r.json());
    });
  });
};
```

## Now Lets Call an API using unfetch

The responses it returns are as follows:

|                       Code                        |                                        What it Returns                                         |
| :-----------------------------------------------: | :--------------------------------------------------------------------------------------------: |
|                    response.ok                    |                           Returns true if status is between 200-299                            |
|                  response.status                  |                            Returns the status code of the response                             |
|                response.statusText                |                          Message with respect to the response status                           |
|                 response.clone()                  |           Returns another object with same shape and also same content as response.            |
| response.text(), response.json(), response.blob() |            Returns response in the form of plain text, JSON and Blob, respectively.            |
|                   headers.keys                    |             Returns an Array containing the key for every header in the response.              |
|                  headers.entries                  | Returns Array containing the pairs of key and value for each and every Header in the response. |
|                 headers.get(key)                  |                        Returns the value associated with the given key.                        |
|                 headers.has(key)                  |    Returns TRUE if the existence of a value for some given key among the response headers.     |

## Lets write a Small Code

This code call an fake api and gets the data in the form of JSON data and displays the value in the in the page

```jsx
import React, { useEffect, useState } from "react";
import fetch from "unfetch";
export const Test = async () => {
  const [_data, setdata] = useState([]);
  const getData = async () => {
    // async function to wait for the api to send the data
    await fetch("https://api.com/data"),
      {
        method: "GET", // GET request
        headers: {
          "Content-Type": "application/json", // JSON format
        },
      }
        .then((r) => r.json()) // convert it to JSON format
        .then((data) => {
          setdata(data); // saving that data to _data variable state
        });
  };
  // called first
  useEffect(() => {
    getData();
  });

  return (
    <div>
      <h2>The Data is</h2>
      {_data.map((subdata) => {
        // maps the value of the data in _data
        return <p>{subdata}</p>;
      })}
    </div>
  );
};
```

## References

[Documentation](https://www.npmjs.com/package/unfetch)
