
# Different ways by which style properties can be implemented
There are three ways by which CSS properties can be implemented to an HTML document.

- Inline CSS
- Internal CSS
- External CSS

### INLINE CSS
In this type of styling method, one has to specify the CSS properties inside a particular HTML element that is intended to be styled by using the “style” keyword.

### INTERNAL CSS
Internal stylesheets are embedded inside one HTML document. It is generally used if one single page has an unique style. These styles are included within `<style>` tags inside the `<head>` tags of the HTML document.
  
### EXTERNAL CSS
With the help of this stylesheet, one can link a separate CSS file having a .css extension using the `<link  rel=””  type=”” href=””>`  inside the <head> section.

### EXAMPLE OF INLINE CSS

```
  <!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Box Shadow</title>
  </head>
  <body
    style="
      font-family: Cambria, Cochin, Georgia, Times, 'Times New Roman', serif;
      font-size: 18px;
      padding-top: 20px;
    "
    ,
  >
    <h1 style="text-align: center">DC World</h1>
    <div
      class="box"
      style="
        width: 100%;
        display: flex;
        flex-direction: column;
        justify-content: center;
        align-items: center;
      "
    >
      <div
        class="card"
        style="
          width: 250px;
          text-align: center;
          margin-top: 30px;
          border: 1px solid gray;
          box-shadow: 0 10px 10px 0 gray;
        "
      >
        <img
          src="https://images.unsplash.com/photo-1531259683007-016a7b628fc3?ixid=MnwxMjA3fDB8MHxzZWFyY2h8Mnx8ZGMlMjBjb21pY3N8ZW58MHx8MHx8&ixlib=rb-1.2.1&auto=format&fit=crop&w=500&q=60"
          style="width: 100%"
        />
        <div class="text" style="padding: 10px; background-color: #fff">
          <p>Batman</p>
        </div>
      </div>
    </div>
  </body>
</html>
  ```
  
### EXAMPLE OF INTERNAL CSS
```
  <!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Box Shadow</title>
     <style>
        body {
    font-family: Cambria, Cochin, Georgia, Times, "Times New Roman", serif;
    font-size: 18px;
    padding-top: 20px;
  }
  
  h1 {
    text-align: center;
  }
  
  .box {
    width: 100%;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
  }
  
  div .card {
    width: 250px;
    text-align: center;
    margin-top: 30px;
    border: 1px solid gray;
    box-shadow: 0 10px 10px 0 gray;
  }
  
  div .card img {
    width: 100%;
  }
  
  div .text {
    padding: 10px;
    background-color: #fff;
  }
  
    </style>
  </head>
  <body>
    <h1>DC World</h1>
    <div class="box">
      <div class="card">
        <img
          src="https://images.unsplash.com/photo-1531259683007-016a7b628fc3?ixid=MnwxMjA3fDB8MHxzZWFyY2h8Mnx8ZGMlMjBjb21pY3N8ZW58MHx8MHx8&ixlib=rb-1.2.1&auto=format&fit=crop&w=500&q=60"
        />
        <div class="text">
          <p>Batman</p>
        </div>
      </div>
    </div>
  </body>
</html>
  ```
  
### EXAMPLE OF EXTERNAL CSS
```
  <!-- index.html file -->
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Box Shadow</title>
    <link rel="stylesheet" type="text/css" href="style.css" />
  </head>
  <body>
    <h1>DC World</h1>
    <div class="box">
      <div class="card">
        <img
          src="https://images.unsplash.com/photo-1531259683007-016a7b628fc3?ixid=MnwxMjA3fDB8MHxzZWFyY2h8Mnx8ZGMlMjBjb21pY3N8ZW58MHx8MHx8&ixlib=rb-1.2.1&auto=format&fit=crop&w=500&q=60"
        />
        <div class="text">
          <p>Batman</p>
        </div>
      </div>
    </div>
  </body>
</html>


/* style.css file */
body {
    font-family: Cambria, Cochin, Georgia, Times, "Times New Roman", serif;
    font-size: 18px;
    padding-top: 20px;
  }
  
  h1 {
    text-align: center;
  }
  
  .box {
    width: 100%;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
  }
  
  div .card {
    width: 250px;
    text-align: center;
    margin-top: 30px;
    border: 1px solid gray;
    box-shadow: 0 10px 10px 0 gray;
  }
  
  div .card img {
    width: 100%;
  }
  
  div .text {
    padding: 10px;
    background-color: #fff;
  }
  ```
#### All the above code snippets yield the same result as given below :
  ![batman](https://user-images.githubusercontent.com/79986094/134778023-6e9d578a-7baa-4f32-bdc3-863728bfe0a1.png)

### CREDIBILITY
Among all the above mentioned methods, the process of embedding external stylesheets in the most used one due to lesser complexities while developing or viewing code; whereas, inline styles are the least used, as the length of code becomes huge and complex by repeatedly defining styles of the same class of elements.
  
### REFERENCES
- [https://www.hostinger.in/tutorials/difference-between-inline-external-and-internal-css](https://www.hostinger.in/tutorials/difference-between-inline-external-and-internal-css)
- [https://www.youtube.com/watch?v=OmRDI3S5y4o](https://www.youtube.com/watch?v=OmRDI3S5y4o)
- [https://www.youtube.com/watch?v=VFSBetQhBA4&t=317s](https://www.youtube.com/watch?v=VFSBetQhBA4&t=317s)
