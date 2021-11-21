# Babel

## What is Babel?
Babel is a JavaScript [transpiler](../Transpile/README.md) that converts edge JavaScript(ES6) into plain old ES5 JavaScript that can run in any browser even in the old ones. It can [transpile](../Transpile/README.md) every new syntax code to old similar code which is supported by every browsers.

## Reason for using Babel
The biggest reason behind using *Babel* is that all the latest features of JavaScript are not supported in every browser yet. Hence, someone needs to do the converting part. And here comes Babel, which transpile latest ES6 features to ES5 features which is understandable by every browser.

## Setting up Babel into our project
- Babel comes as a package as a node module which can be installed via npm (node package manager).
- For Windows, if you are finding issue regargind installation of babel and other related package, use [git bash](https://git-scm.com/downloads) instead.
- For mac, it work just fine

* ### Step 1 

Create the directory of your project where we are going to test babel in action. I've created mine as *Babel-testing*

* ### Step 2

Change the directory to *Bable-testing*

* ### Step 3

Initialize your repository with npm with code given

```js
    npm init -y
```

This will create a <code>package.json</code> file.

* ### Step 4

Install babel core and babel cli by executing the  code given

```js
    npm install --save-dev @babel/core @babel/cli
```

* ### Step 5

Create a folder named *src* in the root of your directory. This src folder will contain all your code that is needed to be transpiled.<br>
Go to the <code>package.json</code> file and replace your <code>script object with below code</code>

```js
    "scripts" : {
        "build" : "babel src -d dest"
    }
```

The above build command will take each and every file present in **src** folder and then transpile it and finally put transpiled files to the destination folder - **dest**

* ### Step 6

Create a file named *script.js* in your *src* folder and write some code. Below is the example of code you can use:

```js
    const a = [1, 2, 3]
    console.log(...a)
```

* ### Step 7

Install a preset package of babel by executing below code.

```js
    npm install @babel/preset-env --save-dev
```

* ### Step 8

Create a file named *babel.config.json* in the root of your directory which will tell the babel what we want to do (here transpile). Write the below code to the same file:

```js
    {
        "presets" : ["@babel/preset-env"]
    }
```

* ### Step 9

Phew! We have done so many work but haven't got the result what we are trying to do. So it's time to get exact transpiled code as a result to this messy work. For this, execute the code given

```js
    npm run build
```

* ### Step 10

Finally, we have done it! All the files present inside src folder get transpiled and it can be visible in *dest* folder that have been created by **Babel**. <br>

You can write anything inside the file in *src* folder and babel will transpile it and send the output in *dest* folder.


For now, your code in *dext/script.js* should like below code which is supported by every browser :

```js
    "use strict";

    var _console;

    var a = [1, 2, 3];

    (_console = console).log.apply(_console, a);
```

## Summary

We have successfully done the setup of babel in our repository.

## Resources
- For more knowledge, you can visit [here](https://babeljs.io/setup)
- For downloading git, visit [here](https://git-scm.com/downloads)

Hope you have enjoyed and gained some knowledge. 

__Contributor__ : [Harsh Anand](https://github.com/its-me-Harsh-Anand)