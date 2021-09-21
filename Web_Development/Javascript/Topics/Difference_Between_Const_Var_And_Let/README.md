# **Difference Between Const , Var and Let**
---

## *Introduction:*
Basically there are three types of variable declaration  Const, var and let in Javascript. We will learn some most common and important uses and differences among the three.

---
  1. **Const :** 
  - Variables declared with the const maintain constant values.
    
  -  Const declarations can only be accessed within the block they were declared.

  -  Const are hoisted to the top but are not initialized.
  
  -  One of the advantages of const is that it cannot be updated or re-declared. So if we declare in Const we can never do this:                                                       
   ```js 
     const saluation = "Hi Gwoc";  
     saluation = "Hello Javascript";// error: Assignment to constant variable. 
     const saluation = "Hello Opensource"; // error: Identifier 'saluation' has already been declared
   ```
 So it must be carefully carefully initialized at the time of declaration.But a catch here in it is it behaves differently when we declare const as a object

   ```js 
     const saluation = {
     print: " Hi Gwoc",
      }                                 
     saluation.print = "Hello Javascript";
   ```

2. **Var :**  
- Var is function scoped when declared in a function which means it can only be accesed only within that function.
 ```js  
    var saluation = "hi gwoc";   
    function girlscript() {   
        var opensource = "hello Javascript";   
    }
 ```
 Here, saluation is globally scoped because it exists outside a function while opensource is function scoped. So we cannot access the variable opensource outside of a function.

- Var variables can be updated and re-declared
```js
   var saluation = "hi gwoc";   
   var saluation = "Hello Jvascript";
 ```

- Some difficulty in var is when we realise that a variable is already being declared then u might not get a desired output u want.

- Var  hoisting variables and function declarations are moved to the top of their scope before code execution.

3. **Let :** 
  
- Let is a block scoped means that it is only available for use within that block.
 ```js
     let saluation = " hi Gwoc" ;                         
     let a = 5;      
     let b = 2;    
     if(a+b < 10) {   
     let opensource ="hello Javascript";   
     console.log(opensource); // "hello Javascript"   
     }   
     console.log(opensource); // opensource not defined
  ```    
 - Just like var,let declaration are hoisted to the top.Unlike var which is initialized as undefined, the let keyword is not initialized.
 - let can be updated but not re-declared. Same variable is defined in different scopes, there will be no error.
 ```js
    let saluation = "Hi Gwoc";   
    saluation = "Hello Javascript";
 ```
---
These were the most common differences among the const , var and let

Happy Learning:)
---     
