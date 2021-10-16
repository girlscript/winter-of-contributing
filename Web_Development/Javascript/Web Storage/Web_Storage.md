<!-- issue 5183 use web storage in javascript -->
<!-- documentation -->

# What is web storage ?

With web storage, web applications can store data locally within the user's browser.

Web storage is more secure, and large amounts of data can be stored locally, without affecting website performance. Web storage is per origin (per domain and protocol). All pages, from one origin, can store and access the same data.

## Web Storage Objects

**window.localStorage** - stores data with no expiration date.

**window.sessionStorage** - stores data for one session (data is lost when the browser tab is closed).

Before using web storage, check browser support for localStorage and sessionStorage:

    if (typeof(Storage) !== "undefined") {
          // Code forlocalStorage/sessionStorage.
           }
            else  // Sorry! No Web Storage support.
    }

### The localStorage Object:

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
```
    <!--output-->
    Smith


Example explained:
- Create a localStorage name/value pair with name="lastname" and value="Smith"
- Now go to the application tab which is inside devtools of any browser, and in application tab there is local storgae which includes the key and value column and you will see     "lastname" into key column and "Smith" into value column.
- Retrieve the value of "lastname" and insert it into the element with id="result
- now this will print "Smith"

### The sessionStorage Object:

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
```

 Output:

 ![output](https://user-images.githubusercontent.com/55904928/137079262-7fa2b512-1873-4075-88eb-7c7c5bf12d13.jpeg)
 
 Example Explained:
 - first it will check that there is clickcount key is present or not in session storage if it is not present then it will set the key "clickcount" and value of this key is 1
 - now if you click on the "click me" button then the value of clickcount is get incremented by 1
 - you can check session storage in devtools and no. of times you clicked, you will see the value of clickcount in value column.
 - now if you close the browser tab then then counter is reset and value of clickcounnt would be 0.  
 

      

# Happy Learning ✌

