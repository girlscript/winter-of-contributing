![Untitled](React.png)

## Introduction

`ReactJS` is a declarative, efficient, and flexible JavaScript library for building reusable UI components. It is an open-source, component-based front-end library responsible only for the view layer of the application. It was created by Jordan Walke, who was a software engineer at Facebook. It was initially developed and maintained by Facebook and was later used in its products like WhatsApp & Instagram. Facebook developed ReactJS in 2011 in its newsfeed section, but it was released to the public in the month of May 2013.

Today, most of the websites are built using MVC (model view controller) architecture. In MVC architecture, React is the 'V' which stands for view, whereas the architecture is provided by the Redux or Flux

A ReactJS application is made up of multiple components, each component responsible for outputting a small, reusable piece of HTML code. The components are the heart of all React applications. These Components can be nested with other components to allow complex applications to be built of simple building blocks. ReactJS uses virtual DOM based mechanism to fill data in HTML DOM. The virtual DOM works fast as it only changes individual DOM elements instead of reloading complete DOM every time.

## Steps to create a ReactJS app

1. Prerequisites: Download Node packages with their latest version
2. Create a new React project by using the command below:

```
npx create-react-app myapp
```

The above mentioned command will create a directory called `my-app` inside the current folder. Inside that directory, it will generate the initial project structure and install the transitive dependencies:

```
my-app
├── README.md
├── node_modules
├── package.json
├── .gitignore
├── public
│   ├── favicon.ico
│   ├── index.html
│   ├── logo192.png
│   ├── logo512.png
│   ├── manifest.json
│   └── robots.txt
└── src
    ├── App.css
    ├── App.js
    ├── App.test.js
    ├── index.css
    ├── index.js
    ├── logo.svg
    ├── serviceWorker.js
    └── setupTests.js
```

1. Filename App.js: Now change the App.js file with the given below code:
    
    ```jsx
    import React,{ Component }  from 'react';
     
    class App extends Component {
     
      render() {
        return (    
           <div>
             <h1>Hello World</h1>
           </div>
     
        );
      }
    }
        
    export default App;
    ```
    

## React Features

- **JSX** − JSX is JavaScript syntax extension. It isn't necessary to use JSX in React development, but it is recommended.
- **Components** − React is all about components. You need to
think of everything as a component. This will help you maintain the code when working on larger scale projects.
- **Unidirectional data flow and Flux** − React implements
one-way data flow which makes it easy to reason about your app. Flux is a pattern that helps keeping your data unidirectional.
- **License** − React is licensed under the MIT License. A short and simple permissive license with conditions only requiring preservation of copyright and license notices. Licensed works, modifications, and larger works may be distributed under different terms and without source code. Documentation is licensed under CC BY 4.0.

## Top Companies That Use ReactJS

1. Facebook
2. Atlassian 
3. UberEats
4. Netflix
5. Airbnb
6. Dropbox
7. Codecademy
8. Skyscanner
9. Zendesk

## React Advantages

- Uses virtual DOM which is a JavaScript object. This will improve
apps performance, since JavaScript virtual DOM is faster than the
regular DOM.
- Can be used on client and server side as well as with other frameworks.
- Component and data patterns improve readability, which helps to maintain larger apps.

## React Limitations

- Covers only the view layer of the app, hence you still need to
choose other technologies to get a complete tooling set for development.
- Uses inline templating and JSX, which might seem awkward to some developers.

## Learn More

To learn more about ReactJS, you can visit the `Frontend_Web_Development_React` directory in this repository.


### **Contributor:** [Harsh Mathur](https://github.com/harshmathurx)