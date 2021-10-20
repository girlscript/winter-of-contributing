![npm](https://upload.wikimedia.org/wikipedia/commons/thumb/d/db/Npm-logo.svg/1920px-Npm-logo.svg.png)





# Introduction To npm



### What is npm?


npm stands for Node Package Manager, which is the default package manager of Node.js( a JavaScript runtime environment).
It is a Node.js utility that lets you manage Javascript programming libraries.
It consists of a command-line client, commonly known as npm, and the npm registry, an online database of public and compensated private packages.




 ### What is the need of npm?


 This is an essential tool for everyone working in the software development industry. There are hundreds of thousands of code snippets shared by developers in the Javascript community, which helps new projects avoid recreating essential components, libraries, or frameworks.
 Many additional open source codes may be reliant on any of these code snippets.

 Fortunately, tools like npm have emerged for managing libraries. Otherwise, maintaining these collections will be very time consuming.

 ___


 ### npm Installation


 To execute NPM applications, your system must have NodeJS installed.

 As it comes by default with Node.js. So, NodeJS installer includes the NPM software.
 Once you've completed the NodeJS installation using either a Node version manager or a Node installer, you'll have both npm and Node.js installed.


 ### <ins>Installing Node.js and npm using a Node version management</ins>

 In order to test your apps on several versions of npm, you may use Node version managers to install and switch between different versions of Node.js and npm on your machine.

 <ins>OSX or Linux Node version managers</ins>

 * [nvm](https://github.com/nvm-sh/nvm)

 * [n](https://github.com/tj/n)

<ins>Windows Node version managers</ins>

 * [nodist](https://github.com/nullivex/nodist)

 * [nvm-windows](https://github.com/coreybutler/nvm-windows)


 ### <ins>Installing Node.js and npm with a Node installation</ins>

 Both Node.js and npm can be installed on your machine using a Node installer.

 * [Node.js installer](https://nodejs.org/en/download/)
 * [NodeSource installer](https://github.com/nodesource/distributions)

  If you use Linux, we recommend that you use a NodeSource installer.



<ins> OS X or Windows Node installers</ins>

 * Use one of the installers from the [Node.js installer](https://nodejs.org/en/download/)

<ins>Linux or other operating systems Node installers</ins>

Use one of the following installers if you're running Linux or another operating system:

 * [NodeSource installer](https://github.com/nodesource/distributions)

 * One of the installers on the [Node.js download page](https://nodejs.org/en/download/)

 Alternatively, check [this page](https://nodejs.org/en/download/package-manager/) to install npm for Linux in the manner preferred by many Linux developers.



 You may check the version of the Node.js and NPM once it has been installed on your machine by using the following command in CMD Window :

 `node -v` : For Node.js version.

 `npm -v`  : For npm version.

 You may use the NPM to download Javascript libraries from the Internet since it is a software application installed on your machine.

 To install a library, run the following command in a CMD window :  `npm install <package name>`

 ___

 As npm is the largest software registry in the world.
 With over one million packages, the free npm Registry has emerged as the go-to place for JavaScript code exchange.

 One of such package is `react`

 ___

 [React Package](https://www.npmjs.com/package/react)

 React is a user interface-building JavaScript library.

 The code required to define React components is included in the react package. 
 It's usually used in conjunction with a React renderer, such as `react-dom` for the web or `react-native` for native platforms.

 To install the react package in your system use the following code in CMD window :
 `npm install react`

 Once installed , you can use the react.js package in you javascript code.

 To get the package in you JS code, write this following code :
  ```javascript
var React = require('react');
```

