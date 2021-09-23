
<p align="center">
<img  src="https://reactjs.org/logo-og.png"
 alt="JSX-logo" width="40%" />
</p>

# Create and initialize a React App 

## What Is React
React is a JavaScript library created for building fast and interactive user interfaces for web and mobile applications.  It is a programming paradigm that ties JavaScript with an HTML-like syntax known as **JSX**.
 It is an open-source, component-based, front-end library responsible only for the application’s view layer.We can create
 In Model View Controller (MVC) architecture, the view layer is responsible for how the app looks and feels. React was created by **Jordan Walke**, a software engineer at Facebook.

---
---
## Prerequisites-Tools 
we all need the following, Pre-Downloadable In your computer/pc

* <a href="https://nodejs.org/en/">Node.js</a> version 10.16.0 installed on your computer. To install this on macOS or Ubuntu 18.04, follow the steps in <a href="https://www.digitalocean.com/community/tutorials/how-to-install-node-js-and-create-a-local-development-environment-on-macos">  How to Install Node.js and Create a Local Development Environment on macOS</a> or the Installing Using a PPA section of
<a href="https://www.digitalocean.com/community/tutorials/how-to-install-node-js-on-ubuntu-18-04">How To Install Node.js on Ubuntu 18.04.</a>
---
---

## Creating a New Project Using  React App
* In this first step, We wil create a new application using the npm package manager to run a remote script. The script will copy the necessary files into a new directory and install all dependencies.

 * When we installed Node, we also installed a package managing application called **npm**. 
---
## What Is Npm And How It work 

* NPM – or "Node Package Manager" – is the default package manager for JavaScript's runtime Node.js.

* Npm also includes a tool called **npx**, which will run executable packages. What that means if we will run the Create React App code without first downloading the project.
---
## Differntiate between Npm nd Npx
* NPM - Manages packages but doesn't make life easy executing any.
NPX - A tool for executing Node packages.
NPX comes bundled with NPM version 5.2+

* NPM by itself does not simply run any package. it doesn't run any package in a matter of fact. If you want to run a package using NPM, you must specify that package in your package.json file.
---
 
## Creating A React App
* The executable package will run the installation of create-react-app into the directory that you specify.
* It will start by making a new project in a directory, which in this tutorial will be called as  **girlscript-Winter-Of-contribution** .
*  Again, this directory does not need to exist beforehand; the executable package will create it for you. The script will also run **npm install** inside the project directory, which will download any additional dependencies.
---
* Step-1:- To start, create a new application using Create React App on your local machine. In a **terminal**, run the command to build an application called:**girlscript-Winter-Of-contribution-app**
<p>&nbsp;</p>

### Command to create react App:
 ```jsx
 npx create-react-app girlscript-Winter-Of-contribution-app

```
 
## How This Command Works
* The **npx** command will run a Node package without downloading it to your machine.
*  The **create-react-app** script will install all of the dependencies and will build a base project in the **girlscript-Winter-Of-contribution-app** directory.

* The code will download the dependencies and will create a base project. It may take a few minutes to finish. When it is complete, you will receive a **success** message. Your version may be slightly different if you use **yarn** instead of **npm**

### Output :
```html
Success!
 Created girlscript-Winter-Of-contribution-app at your_file_path/girlscript-Winter-Of-contribution-app
Inside that directory, you can run several commands:

  npm start
    Starts the development server.

  npm build
    Bundles the app into static files for production.

  npm test
    Starts the test runner.

  npm eject
    Removes this tool and copies build dependencies, configuration files
    and scripts into the app directory. If you do this, you can’t go back!

We suggest that you begin by typing:

  cd girlscript-Winter-Of-contribution-app
  npm start

Happy hacking!
```
* Now that we have a base project, run it locally so you can test how the project will appear on the server. 

### First, change into the directory:
 ```jsx
 $ cd girlscript-Winter-Of-contribution-app

```


### Run the project using the npm start script:
 ```jsx
 $ npm start
```

### When the command runs, you’ll receive output with the URL for the local development server: 
 ```jsx
Compiled successfully!

You can now view girlscript-Winter-Of-contribution-app in the browser.

  Local:            http://localhost:3000
  On Your Network:  http://192.168.1.110:3000

Note that the development build is not optimized.
To create a production build, use npm build.
```
* Open a browser to http://localhost:3000 and you’ll find your project:
<p align="center">
<img  src="https://reactjs.org/logo-og.png"
 alt="JSX-logo" width="40%"  />
</p>
* Stop the project by typing either CTRL+C or ⌘+C in the terminal

