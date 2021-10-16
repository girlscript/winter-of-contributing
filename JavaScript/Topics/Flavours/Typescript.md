## What is Typescript?
Typescript is an open source programming language developed and maintained by Microsoft.  
It is a strict syntactical superset of *javascript*,it means that it has all features of javascript ,and an additional layer on top of these.  

The typescript is itself wriiten in typescript and compiled to plain javascript.So it can be run anywhere where javascript can be run.
Typescript knows the Javascript language and will generate types for you in many cases. For example in creating a variable and assigning it to a particular value, Typescript will use the value as its type.
  
**For example:**   

`var x=4;`    

typescript will view ***x*** as integer  
  
`var c='A';`
  
typescript will view ***c*** as char    

`var name="Wajiha"`  

typescript will view ***name*** as string

Another important reason to consider javascript is the enhanced IDE support,with typescript we get intellisense support ,ability to refactor code easily and the red squiggy line 
whenever there is an error along with the description of that error.So this way we spend more time on coding and less time on debugging.  
 ## Why Typescript is better?  (from web dev zone )
- Typescript make the javascript code more readable and make easy to debug.
-  As we know  javascript does not support variable type which take more time to identify errors(during run time) so which typescript add natural syntax for providing types which helps in clearing the bugs easily.  
- Another important reason to consider javascript is the enhanced IDE support,with typescipt we get intellisense support ,ability to refactor code easily and the red squiggy line .
whenever there is an error along with the desciption of that error.So this way we spend more time on coding and less time on debugging. 
- Since it is open source ,it is always improving.
- Typescript is a superset of ES3, ES5, and ES6 and provide all features along with more productivity.
- It has powerful type system including generics(Typescript Generics is a tool which provides a way to create reusable components).
- It supports static typing as we know there is a performance benefit to letting the compiler know what type the value is, without having to check it.
- As it supports static typing ,it(Typescript) does not allow intermixing of values with different datatypes.If restrictions are violated then it will throw error.

  ```ts
  let name:  string = "wajiha";
  name = "myName";        // This will work.
  name = 5;               // This will throw an error

- And some of the additional features are modules support , generic support , functions with optional parameters as optional parameters are great for simplifying code, and hiding advanced but not-often-used functionality.

## What are types?

   ###   BASICS  
- `number` which consist all type of numbers integers or decimals as javascript doesn't have int or float types simply here everything is called number.  
**Example**  
      `let num: number = 5;`            ( In typescript ,Type annotations will always go after the thing being typed unlike other programming languages like c,c++,python)
      
- `boolean` has only two values either true or false;  
**Example**  
      ` let isequal: boolean =false; ` 
      
- `string`represents values like "hello world" enclosed in " "  or ' ';   
**Example**  
      `let myName: string = "Alice";`  
      
 - `any`  is useful when you don’t want to write out a long type just to convince Typescript that a particular line of code is okay.
  **Example**
      ```
       let obj: any = { x: 0 };
           obj.foo();
           obj();
           obj.bar = 100;
           obj = "hello";
         const n: number = obj;
   ```
     None of the following lines of code will throw compiler errors. Using `any` disables all further type checking, and it is assumed  you know the environment better than Typescript.
    
   **Functions**  
   
   Functions are the primary means of passing data around in Javascript. Typescript allows you to specify the types of both the input and output values of functions
   
  ``` 
     function make_coffe(numofcups: number) {
       console.log("Hello,we want " + numofcups + " cups of coffee!!");
          }  
```

## Defining types (from typescript official website)

We can use a wide variety of design patterns in Javascript. However, some design patterns make it difficult for types to be inferred automatically (for example, patterns that use dynamic programming). To cover these cases, Typescript supports an extension of the Javascript language, which offers places for you to tell Typescript what the types should be.

**Example**
let's create an object employee with name (string ) and emp_id(number)

```
const emp={
 name : "John",
 emp_id : 101
}
```
We can explicitly describe the object's shape using an *interface*  declaration

```
interface Emp={
name : string;
emp_id : number ;
}
```
Now we can use above to create new objects
```
const emp : Emp={
name : "John",
emp_id : 101
}
```
### Combining types
 In typescript we can use simple types to make complex types.  
 
 ```
type primeNumsUnderTen = 2| 3 | 5 | 7 

```

## GENERICS

`Typescript generics` are the tools which provides a way to use reusable components.
It creates a component that can work with many data type rather than single data type like we created a function and we want to pass string as an argument but after sometime I want to pass a number into that function  but its looks not possible but with generics it surely is .  
 In generics, we need to write a type parameter between the open (<) and close (>) brackets, which makes it strongly typed collections. Generics use a special kind of type variable <T> that denotes types. The generics collections contain only similar types of objects.
  
For example :
```
function simpleExample<T>(arg: T): T{              //T stands for Type
  return arg;
  }
  
  const name = simpleExample<string>('John');
  
  const id = simpleExample<number>(1);
  
  //both are correct
```




![WhatsApp Image 2021-10-12 at 11 08 17](https://user-images.githubusercontent.com/68144616/136898283-5701d15e-6442-46f9-8837-9f75fa5f9498.jpeg)
  
  
  ## Generic Types
  
  Like other functions generic functions can also be written like this (function declaration)
  ```
  function simpleExample<T>(arg : T): T{              //T stands for Type
  return arg;
  }
  
  let example: <T>(arg : T) => T = simpleExample ;
  
  ```
  
  We can also write the generic type as a call signature of an object literal type:
  
  ```
   function simpleExample<T>(arg : T): T{              //T stands for Type
  return arg;
  }
  
  const example: { <T>(arg: T): T } = simpleExample;
  
  ```
  
  Thus ,here also we can make interface and use it to save ourself from writing more lines of code
  
  ```
  interface GenericExample{
  <T>(arg: T): T;
  }
    
  function simpleExample<T>(arg : T): T{              //T stands for Type
  return arg;
  }
    
    let myExample = GenericExample<string> =simpleExample;
    
  
  ```

    
 ~Wajiha Fatima | Contributor
