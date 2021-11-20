<h1 align="center">Require vs Import in Javascript</h1>

While looking at code you might have come across things like

```javascript
let fs=require('fs');
```

And

```javascript
import users from './users.js'
```

We know that both of these things let us use code from other files in our main file but lets see the difference between the two :-

---
## Require -

"require" statement syntax works only in nodeJS. That means , we can require modules, only when we are compiling our code with NodeJs . That is why when we are writing server side applications, we use require syntax. The require statement does not work in front-end apps and will give a error.

Also you can use the require statement whenever you want in your code.

---
## Import -

import statements are a part of ECMA script 6. All major browsers have support for ES6 modules syntax and hence , we can use import statement in front-end applications.

You need to use import statements in the begining of the code only else it will give an error.

---
## Dynamic Imports

Now, assume there are several large files you need to import in your code, but you want to import them only when a user clicks a button,else you do not want to waste time loading the files.

In this case Dynamic imports come to our rescue.

You know import statments need to be written on the top only, but dynamic imports can be used anywhere you want 

Lets see a example -

```javascript
let users=[];

//lets assume there is a array called data in users.js and it is being exported from there.

btn.addEventListener("click",()=>{
   import('./users.jsx')
   .then(( { data } /*using destructuring*/)=>{
       users=data;
   })
})
```

We can see from the above code, that we are importing the users.js file only when the button is clicked using the import() function.

This function takes the file name as paramenter and returns a priomise which is completed when the file is completly loaded.
Then we can poppulate the data in our users array.

This is the difference between require, import and dynamic import.

---
## References -

* https://flexiple.com/javascript-require-vs-import/
* https://www.youtube.com/watch?v=ddVm53j80vc
