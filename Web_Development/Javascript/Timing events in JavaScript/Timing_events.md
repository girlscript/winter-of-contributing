# Timing Events in JavaScript
- The execution of a code is done at particular time intervals .These time intervals are called **Timing events**.
- There are two native functions in JS library to achieve it. 

    1. setTimeout(function,milliseconds)
    2. setInterval(function,milliseconds)
- ## setTimeout()
  - The setTimeout(function,milliseconds) method calls function after the specified time.
  - The function is executed once.
  
  **Example** //It displays alert message after 2 secs
  ```html
    <button onclick="setTimeout(function_Alert, 2000);">Register</button>
    <script>
        function function_Alert() {
        alert('Congrats, your account is created');
        }
    </script>

- ## setInterval()
  - The setTimeout(function,milliseconds) method calls function at every given interval.
  - The function is called after every given interval and the execution will be continued until cleared. 
  
  **Example** //It displays the text after every 2 secs 
  ```html
    <script>
        var var1 = setInterval(text, 2000);
        function text() {
        var var2 = document.write("Welcome to GWOC"+"<br>");
        }
    </script> 
- To stop the timer - 
  1. clearTimeout(setTimeout variable) 
  2. clearInterval(setInterval variable)

  

