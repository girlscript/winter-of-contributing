# Bundler

## What is a Bundler?

A JavaScript bundler is a tool that puts our code and all its dependencies together in a single JavaScript file. 

Module bundlers are tools frontend developers used to bundle JavaScript modules into a single JavaScript files that can be executed in the browser.

## Why do we need that?

The underlying problem is handling dependencies from our code. Earlier JavaScript hasn't had a standard for requiring dependencies from our code. There was no *import* or *require* statements before the new [ES2015](../ECMAScript/README.md) import statement. Let's ignore that because it is not widely implemented.

### Problem
How do we import and export things in JavaScript?<br>
How do we make functions of our code visible to the outer world?<br>How do we import functions from other people's code?<br>
If we have 10 JavaScript file, *http* will take 10 round trip of request in order to get our app started. How to minimise this time?

### Solution
The only way has always been through global variables. For examples, if we want to use JQuery:

```js
    <script src="//code.jquery.com/jquery-1.12.0.min.js"></script>
    <script>
        // `$` global variable available here
    </script>
```

This doesn't solve our problem. Imagine if we want to split our code into many small files in which one file depends on other file. In the below code, let's imagine *first.js* depends on *second.js*, we must have to change the order of the scripts, we are calling. This becomes quite messy.

```js
    <script src="//code.jquery.com/jquery-1.12.0.min.js"></script>

    <script src="/js/first.js"></script>
    <script src="/js/second.js"></script>
```

## The ultimate solution

### The module bundler is required because :
- Browser does not support module system, although it is not true entirely these days.
- It helps us to manage the dependency relationship of our code
- It will load modules in dependency order for us.
- It helps us to load our assets such as image asset, css asset etc. in dependency order.
- If we combine all files into a single file, then http will cover only one request round trip and out website loads faster.

## Bundlers available

There are many bundler available now-a-days which we can use in our project. Some of them has harder implementation while some of them has begineer friendly implementation. I would sugggest you to use [parcel bundler](https://parceljs.org/) first if you are a complete begineer to this.

### List of Bundlers
- [parcel](https://parceljs.org/)
- [snowpack](https://www.snowpack.dev/)
- [browserify](https://browserify.org/)
- [webpack](https://webpack.js.org/)
- [rollup](https://rollupjs.org/guide/en/)
- and many more...

## Summary

A bundler is a tool that is used to put all of our code to a single file or merge lots of file to a single file. It also helps in importing and exporting code from one file to other. Overall, it makes our project simpler to use with fast loading.

Hope you have enjoyed this topic.

__Contributor :__ [Harsh Anand](https://github.com/its-me-Harsh-Anand)