# What is NODE JS?

- First of all, `Node` is not a `Framework` or a `Programming Language`.
- `NODE JS` is a *JavaScript Runtime Environment* and it was introduced by **Ryan Dahl** in 2009. He used the Chrome v8 Engine which is a JavaScript Engine that converts JavaScript Code to Machine Code.
- It allow us to Execute `JavaScript` outside the `Browser`.
- `Node Js` was written using: `C++`,`JavaScript`,`CoffeeScript`.

### Why Node JS?

- `Super Fast`
- `Highly Scalable`
- `Used by Top Companies`

### JavaScript is Everywhere

Node JS behind the scene uses JavaScript which makes it great for the developers out there. Nobody prefers to learn two different languages for backend and frontend. We can use JavaScript for frontend as well as backend development. This makes it easy to learn and use.

One of the main reasons behind every language, framework, or library’s popularity is Community. Node Js has great community support and almost we can find any help and support we want in Node Js. There is code available for almost most of the cases, which makes Node JS preferable to use. With less amount of code, we can create highly scalable and efficient applications.

## Install Node.js on Windows

Visit Node.js official web site [https://nodejs.org](https://nodejs.org/). It will automatically detect OS and display download link as per your Operating System. For example, it will display following download link for 64 bit Windows OS.

<img src="Nodejs.png" style="zoom:100%;" />

Download and install the latest version of Node on your machine.

After installation open command prompt and type the text `node -v`, this will give you back the version of node available on your machine.

<img src="installation.png" style="zoom:100%;" />

Great! You have successfully installed Node Js.

Now its time for us to write our very first node program. To write in Node just simply type `node` on command prompt

then you can do all the JavaScript functionality available in the browser console easily on your command line.

![nodeprogram](nodeprogram.png)

Now let us talk about NPM (Node Package Manager).

## What is NPM

NPM is basically a JavaScript package manager which allows you to quickly add & manage any available package /module/dependency in your project with just a couple of commands.

With NPM, you don't have to go manually **downloading, installing & setting up the package**. NPM take cares of everything so that you can focus on your project.

If you are using npm in your project then there are two very important files associated with npm that you should know about.

- `node_modules` - It's a directory automatically created in the root folder of your project which will contain all the npm packages you install locally. One more thing you should note here that this directory will be automatically ignored by git and will not appear in your project's repo.
- `package.json` - It is a file that is again automatically created in the root directory of your project which contains metadata about the packages you have installed.

Both of these files are created automatically & are managed by npm so you don't have to worry about them until you're experienced enough to manually work on them.

*Working with npm is super easy, all you need is to make sure that Node JS is installed in your system. NPM comes pre-installed with Node JS so you don't have to worry about installing it manually.*

### Important NPM Commands

##### `npm init`

This command initializes npm in your project and will automatically create the package.json file.

##### **`npm init -y`**

This command is simply an alteration of **`npm init`** which just skips a few unnecessary steps and creates the package.json file quickly.

##### **`npm install xyz`**

This command will install the specified package locally and add it into the package.json as a dependency.

##### `npm install -g xyz`

This command is again an alteration of the **`npm install`** command which will install the specified package but on a system-wide or global scale.

##### `npm update xyz`

This command is used to update a specified package to its most recent release available.

##### `npm update`

This command is used to update all the packages present in the ```package.json``` file at once to their most recent versions available.

##### `npm list`

This command lists all the packages installed in your system.

##### `npm uninstall xyz`

This command is used to uninstall the specified package which you no longer need.

##### `npm uninstall xyz -g`

This command will uninstall the specified package globally.

------

This is it. I encourage you to learn more about Node and npm via below resources. 🐱‍🏍

### Resources

Node.js official web site: [https://nodejs.org](https://nodejs.org/)

Node.js official docs: [docs](https://nodejs.org/en/docs/)

npm official website https://www.npmjs.com/

more npm cli [commands](https://docs.npmjs.com/cli/v7/commands)

