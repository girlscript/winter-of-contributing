# Introduce JavaScript's usage in the Command-Line 
<br>

***JavaScript*** is a powerful, widely used, open-source, and dynamic programming language used to add and render interactivity on websites. Also, a variety of other developer tools have been built on top of it, giving rise to a vast range of functionalities that can be implemented with ease to add to the dynamism of the websites.<br>

Besides using JS to render user-friendly interactive functionalities and features on our websites, a JavaScript shell (Command-line) enables us to quickly run and test snippets of JS code without having to load and reload it on a web page. This makes developing and debugging JS code extremely easy. These JS programs that run on Command Line Interfaces (CLI) are standalone JS scripts.
<hr>
Some JavaScript shells that are standalone environments are:

- ***Node.js*** - Node.js is an open-source, single-threaded JavaScript runtime for servers that puts chrome's V8 engine into your servers to execute JavaScript code outside your chrome browser.
- ***GraalJS*** - A high-performance implementation of the JavaScript programming language. Built on the GraalVM by Oracle Labs.
- ***ShellJS*** - Portable Unix shell commands for Node.js

<hr>

## ***Node.js***

***Node.js*** is a popular JS runtime environment for creating web applications on the server-side, that is it allows us to run JS on the backend outside the browser. It comes with a lot of built-in modules and it enables us to run and test JS code very fast and efficiently mainly because of its asynchronous event run model running on the Google V8 engine.
<br>

We can our first JS program as follows: <br>
Having Node.js installed in our systems, to run a standalone JS program in node.js, we follow steps as :<br>
1. Open any text editor and create a JS file with any piece of JS sample code. Like, here, I used VS Code to create the js file with the code shown. 

<image src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Javascript/JavaScript/Topics/4.Command_Line/divv8.PNG">
 
2. Open the terminal or command prompt
3. Change the directory and file path to where the JS file is located
4. Run the code `node <name of the file>`
 
<image src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Javascript/JavaScript/Topics/4.Command_Line/divv7.PNG">
 
5. Verify the output.

<hr>

## ***NPM (Node Package Manager)***
Now, coming to ***NPM***, a popular package manager or package registry for JavaScript CommonJS modules, which can be used to packaging almost any CommonJS modules and makes it ready for distribution and once your modules are distributed then anyone having node installed in their computers can install almost any modules and after getting installed these packages get saved into a directory named Node Modules (which contains both package and its dependencies), we need to work on the front-end of our applications. Similarly, ***NodeJs***, besides the backend, can efficiently be used for the front-end of our application. <br>

## ***About Packages and Modules***

The npm registry contains packages, many of which are also Node modules or contain Node modules. <br>
 
***A package*** is a file or directory that is described by a package.json file. A package must contain a package.json file in order to be published to the npm registry. <br>

***A module*** is any file or directory in the node_modules directory that can be loaded by the Node.js require() function. <br>
To be loaded by the Node.js require() function, a module must be one of the following:

- A folder with a package.json file containing a "main" field.
- A JavaScript file.


## ***Using NPM***
- NPM is included with Node.js installation. After we install Node.js, we can verify NPM installation by writing the `npm -v` command in terminal or command prompt as follows:     <br>
 
  <image src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Javascript/JavaScript/Topics/4.Command_Line/divv1.PNG">
  <br>

- We can also update NPM to the latest version by running `npm install npm -g` command in the terminal or command prompt.

  Now, NPM can perform operations ***globally***, affecting all the Node.js applications on the computer or ***locally***, in which NPM performs operations for the particular local directory which affects an application in that directory only.
  <br>
- To install any third-party module in our local "new" project folder, we run the command `npm install <package name>` or we can use `npm install <package name>@<version>`  to specify the version of the package to be installed.<br>
  In the following example, the command will install ExpressJS into the "new" folder.
   
  <image src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Javascript/JavaScript/Topics/4.Command_Line/divv2.PNG">

  It is to be noted that all the modules installed using NPM are installed under ***"node_modules"*** folder. The above command will create ***ExpressJS folder*** under      ***node_modules folder*** in the root folder of your project and install Express.js there.

- The `--save` at the end of the `install` command adds dependency entry into package.json of your application. For example, the command, `E:\new> npm install express --save` will install ExpressJS in your application and also adds dependency entry into the package.json.

- We use `-g` in the `install` command to install a package globally. For example, the following command will install ExpressJS globally: <br>
   `E:\new> npm install -g express`
- To update the package installed locally in the "new" project, we have to navigate the command prompt or terminal window path to the project folder and write the update command: `E:\new> npm update <package name>`

  For example, the following command will update the existing ExpressJS module to the latest version: <br>
  `E:\new> npm update express`
- We can also uninstall packages using the `E:\new>npm uninstall <package name>` command to remove a local package from the project.

  For example, the following command will uninstall ExpressJS from the application: <br>
  `E:\new> npm uninstall express`


Check the [documentation](https://docs.npmjs.com/) to know more about NPM.

<br>
   
We can also install and use Bootstrap, Skeleton, and other front-end frameworks via npm.
Some popular NodeJs frameworks for web applications are ***Express.js, Feather.js, Meteor.js, Total.js, Socket.io, Nest.js, Hapi.js, Sails.js, etc***. <br> <br>
   
<image src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Javascript/JavaScript/Topics/4.Command_Line/divv6.png"  width=100%/>
 
<hr>
 
Developing desktop applications can be full of challenges that make it difficult to approach, considering the difficult parts for things like packaging, installation, and managing updates but there's also the design of the application itself where we have to translate creativity across different operating systems. We see that making use of native features like menus and notifications presents hurdles even for experienced developers, supporting multiple platforms.<br><br>
What if we can combine the pervasiveness of web technology and the native experience of a desktop application, across the cross-platform versatility of the different web browsers and wrap everything into a single package with all the advantages!<br><br>
  
***ElectronJS*** is a framework that lets us create cross-platform applications using HTML, JavaScript, and CSS. It does this by providing a rich JavaScript API that can handle the particulars of talking to different operating systems and it also uses web pages for creating user interfaces. <br>
We can think of an Electron app as a kind of a minimal web browser with the ability to interact with the local file system and this web browser is part of the application packaging, so we can code with confidence knowing everyone using your app is running it under the same set of conditions but most importantly, this means we can write your application once and have it run on Mac, Windows, or Linux because Electron serves as a universal Interface of the operating system. <br>
 
Overall, it serves for :
- Simplified management with high performance
- Cross-platform compatibility and thus, a reusable framework
- Interaction with web UI/UX tools
- High data security

 <hr>

Coming to Native and Hybrid frameworks, ***Hybrid*** are built upon web technologies like HTML, CSS, and JavaScript whereas ***Native*** frameworks are built with specific technology and language for specific platforms like Java for Android, Swift for iOS. So, the hybrid framework supports a single code base for all platforms, i.e write once and run anywhere but for native app scenarios, we need to build and maintain separate apps and code for different platforms.<br>
 
<image src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Javascript/JavaScript/Topics/4.Command_Line/divv5.jpg" width=100%>
 
***📌React Native*** is a hybrid mobile application development framework, for developing hybrid mobile applications that can run natively on both Android and iOS. So, React Native, written on JavaScript, is classified as a hybrid framework as it is platform-independent. It tends to combine the high-performance capabilities of a native application while retaining the fundamental ease of development as in web technologies.<br><br>
***📌Ionic*** is a hybrid app development framework for web developers. We can build amazing mobile, web, and desktop apps all with one shared code base and open web standards. It uses **Cordova**, an open-source mobile development framework. behind the scenes.<br><br>
 
<image src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Javascript/JavaScript/Topics/4.Command_Line/divv9.png" width="100%">

However, considering the pros and cons, the choice between Native or Hybrid frameworks is based on different use cases, ideas and goals.
<hr>
 
***Click [here](https://creative-coding.decontextualize.com/node/) to know more.***
 
<br>
 
***Image credits: [Railsware](https://railsware.com/blog/native-vs-hybrid-vs-cross-platform/) , [Angular Minds](https://www.angularminds.com/blog/article/comparison-between-hybrid-vs-native-app.html)***
 
