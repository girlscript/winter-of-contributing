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

```jsx
import React, { useEffect } from "react";
import fetch from "unfetch";
export const Test = () => {
  useEffect(() => {
    await fetch("/push", {
      method: "POST",
      headers: {
        "Content-Type": "application/json",
      },
      body: JSON.stringify(),
    }).then((r) => {
      open(r.headers.get("confirm"));
      console.log(r.json());
    });
  });
};
```

Now Lets Call an API using unfetch

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

```jsx
import React, { useEffect, useState } from "react";
import fetch from "unfetch";
export const Test = () => {
  const [_data, setdata] = useState([]);
  const getData = async () => {
    await fetch("https://api.com/data"),
      {
        method: "GET",
        headers: {
          "Content-Type": "application/json",
        },
      }
        .then((r) => r.json())
        .then((data) => {
          setdata(data);
        });
  };
  useEffect(() => {
    getData();
  });

  return (
    <div>
      <h2>The Data is</h2>
      {_data.map((subdata) => {
        return <p>{subdata}</p>;
      })}
    </div>
  );
};
```

## References

[Documentation](https://www.npmjs.com/package/unfetch)