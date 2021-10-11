<!-- issue 5183 use web storage in javascript -->
<!-- documentation -->

# **`What is web storage ?`**

With web storage, web applications can store data locally within the user's browser.

Web storage is more secure, and large amounts of data can be stored locally, without affecting website performance. Web storage is per origin (per domain and protocol). All pages, from one origin, can store and access the same data.

# **`Web Storage Objects`**

**window.localStorage** - stores data with no expiration date.

**window.sessionStorage** - stores data for one session (data is lost when the browser tab is closed).

Before using web storage, check browser support for localStorage and sessionStorage:

    if (typeof(Storage) !== "undefined") {
          // Code forlocalStorage/sessionStorage.
           }
            else  // Sorry! No Web Storage support.
    }

# **`The localStorage Object ?`**

The localStorage object stores the data with no expiration date. The data will not be deleted when the browser is closed, and will be available the next day, week, or year

```html
<!DOCTYPE html>
<html>
  <body>
    <div id="result"></div>

    <script>
      // Check browser support
      if (typeof Storage !== "undefined") {
        // Store
        localStorage.setItem("lastname", "Smith");
        // Retrieve
        document.getElementById("result").innerHTML =
          localStorage.getItem("lastname");
      } else {
        document.getElementById("result").innerHTML =
          "Sorry, your browser does not support Web Storage...";
      }
    </script>
  </body>
</html>
//output smith
```

Example explained:

- Create a localStorage name/value pair with name="lastname" and value="Smith"
- Retrieve the value of "lastname" and insert it into the element with id="result

# **`The sessionStorage Object`**

The sessionStorage object is equal to the localStorage object, except that it stores the data for only one session. The data is deleted when the user closes the specific browser tab.

The following example counts the number of times a user has clicked a button, in the current session:

```html
<!DOCTYPE html>
<html>
  <head>
    <script>
      function clickCounter() {
        if (typeof Storage !== "undefined") {
          if (sessionStorage.clickcount) {
            sessionStorage.clickcount = Number(sessionStorage.clickcount) + 1;
          } else {
            sessionStorage.clickcount = 1;
          }
          document.getElementById("result").innerHTML =
            "You have clicked the button " +
            sessionStorage.clickcount +
            " time(s) in this session.";
        } else {
          document.getElementById("result").innerHTML =
            "Sorry, your browser does not support web storage...";
        }
      }
    </script>
  </head>
  <body>
    <p><button onclick="clickCounter()" type="button">Click me!</button></p>
    <div id="result"></div>
    <p>Click the button to see the counter increase.</p>
    <p>
      Close the browser tab (or window), and try again, and the counter is
      reset.
    </p>
  </body>
</html>
// output
<button>click me</button> Click Button Click the button to see the counter
increase. Close the browser tab (or window), and try again, and the counter is
reset.
```

# happy learning ✌
