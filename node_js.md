#  What is Nodejs?
Node.js is an open-source server side runtime environment built on Chrome's V8 JavaScript engine. It is used for building highly scalable server-side applications using JavaScript.

## Prerequisites
Basic knowledge of HTML,CSS,JavaScript and basics of how the internet works. 
#
# How to install Nodejs
Node.js development environment can be setup in Windows, Mac, Linux and Solaris. The following tools/SDK are required for developing a Node.js application on any platform.

Node.js<br>
Node Package Manager (NPM)<br>
IDE (Integrated Development Environment) or TextEditor

Vist the official nodejs website <a href="https://nodejs.org">Nodejs</a>. It will automatically detect your OS and select the appropriate version click on install LTS and wait for the process to complete.

After the installation is complete,to verify go to your terminal and type:<br>
``` 
node -v
``` 
On running this command if it shows your version you are up and running if not then look back at this article and figure out what went wrong.
# 
<br></br>
# Basics  
If you know the basics of JavaScript you have already got the basics of Nodejs i.e the primitive data types, objects and use of functions. If you have not then i would suggest that you grasp these basics and come back to this article.  

# 
<br></br>
# Node.js  Modules  
Node.js includes three types of modules:
    <ul>
        <li>Core Modules</li>
        <li>Local Modules</li>
        <li>Third Party Modules</li>
    </ul>

### Core Modules: 
The core modules include bare minimum functionalities of Node.js
some of the example modules are:
    <ul>
        <li>http: create Node.js http server</li> 
        <li>url: for url resolution and parsing</li> 
        <li>querystring:to deal with query strings</li> 
        <li> path:deals with file paths</li> 
    </ul>
In order to use Node.js core or NPM modules, you first need to import it using require() function as shown below.
```
var module = require('module_name');
```
### Local Modules:
These are created locally in your system and are required in your nodejs file by giving the path to your file.

### Exported Modules:
The <mark>module.exports</mark> is a special object which is included in every JavaScript file in the Node.js application by default. The module is a variable that represents the current module, and exports is an object that will be exposed as a module. So, whatever you assign to <mark>module.exports</mark> will be exposed as a module.         
<br></br>


some of the content of this article is written with reference to tutorialsteacher.com


