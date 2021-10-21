# What is NPM
NPM, or 'Node Package Manager' is a huge repository of libraries, packags and modules that can be used with your JavaScript applications.  

NPM is the default package manager for JavaScript runtime environment Node JS. NPM mainly consists of two things - A command line client which is also called as 'NPM' and a huge online database of public/ private packages, referred to as 'NPM Registry.' Online database of packages can be fount at [npmjs.org](https://www.npmjs.com/).

NPM is been up since the launch of Node JS and contains over 800k packages, most of which are open source and free to use. Though NPM is publically available, some organizations also use NPM for managing private development.

### NPM Packages
Package is a bundle of files that is published to NPM online database. It may be a standalone function, library or even a framework. Every NPM package contains one common file - **package.json** that contains informaiton about the package.

# Installing NPM packages
As mentioned earlier, NPM consists of many packages that can be used in our applicaiton. In order to use those packages, first we need to install it in our local machine. For that, we need to have a file named `package.json` in the working directory.

## `package.json`
This file holds information about your JavaScript project - whether it may be a Node JS CLI application or a browser application. It is created when `npm init` command is executed followed by a bunch of questions, to fill the metadata of the file.
To start a JS project, run `npm init` in desired directory and answer follow up questions. Once your folder is initialied to run Node / JS applicaitons, you can install NPM packages in the directory.

package.json contains this information about the NPM package:

## Installing 'globally' and 'locally'
You are given freedom to install NPM packages either in the current working directory (where `package.json` exists) ie 'locally' or in your whole machine, ie globally. 
Though most of the times it is best to install packages locally, there are some use case where you want to them globally.  
If you will use the package as a CLI tool for something that doesn't need `package.json` or has the scope beyond `package.json`, you must install the package globally.

## Installing as 'dependency' or 'dev-dependency'
If you look at the package.json file you would realize that some of the dependencies are installed under 'dependencies' key of the JSON object and few are installed as 'devDependencies'.  
The difference is about the software environment on which project is currently running. If Node environment is set to Development only then dependencies mentioned under 'dependencies' will be installed. Otherwise, if project is in production environment, dependencies mentioned under devDependency will be ignored and only 'dependencies' will be checked for installation.

This is helpful when you need to install something that is only beneficial while developing phase and has no use in production. Such as: live servers, code formatters, etc. 

#### Few things to notice:
1. replace `<package-name>` with name of the package you want to install. NPM will throw an error if no package with that name exists in the repo.

2. You can type `-i` instead of `install` while installing NPM packages.

3. Similarly, you can use `-g` instead of `--global` as  a shortcut.

4. If you have not provided `--save-dev` or `--global` tag, it will be saved as a normal dependency that will be used for production.

### For Global Installation:
```bash
npm install --global <package-name>
```

### For Local Installation:
```bash
npm install <package-name>
```

### Installing a Specific Version:
```bash
npm -i <package-name>@<version>
```

### Installing with a Specific Tag:
```bash
npm -i <package-name>@<tag>
```

### Installing as a dev-dependency
```bash
npm -i <package-name> --save-dev
```
> You can also use an ally `-D` instead of `--save-dev`


# Using NPM packages
`.require()` function is used to import NPM packages in `.js` files. Name of the package is passed as parameter to the `.require()` function.

```js
const http = require('http')
```

## Commands for NPM Packages

## Listing Packages
These are various commands proided by NPM to list out NPM packages installed in your project/ machine.

### Packages With Dependencies
```bash
npm list
```
This command lists locally installed packages with their versions of all dependencies. You can also use `ls` instead of `list`.

> To get a list of the same for globally installed packages, add `-g` tag 

### Just package Names
The above command lists all packages with their dependencies. If you want to retrieve only package name, use `--depth=0` tag.
```bash
npm list --depth=0
```
> Use `-g` if you want global results.

### Outdated Packages
Lists outdated packages and dependencies from the project.
```bash
npm outdated
```

## Update Packages

### Specific Packages
```
npm update <package-name>
```

### Global Packages
```bash
npm update -g
```

### All packages
This command install **all* packages in your software
```bash
npm update --save/--save-dev
```

## Search Packages in Online Database
You can search if a package name exists in the online database of NPM packages.
```bash
npm search <package-name>
```

## Uninstall Package
```bash
npm uninstall <package-name>
```
> use `-g` to uninstall globally installed packages.

# Publishing your own NPM package
Let's say you have build your own new package and want to share this with the world, you can publish it on NPM repository, [npmjs.com](https://www.npmjs.com/).

You must have an account on npmjs.org to publish your package 

## Prerequisite
1. NPM Account
2. Node JS installed on your machine

## Steps
### Log-in
Log in with your NPM account:
```bash
npmm login
```

### Verify Log-in
```bash
npm whoami
```

### Search if package name exists
```bash
npm search `<package-name>`
```
You can't publish your package if another package with same name exists in the repository.

### Publish
```bash
npm publish
```
> Make sure you are in your package's directory.

# Conclusion:
We have covered:
1. NPM Basics
2. NPM Packages
3. Installing NPM Packages
4. global v/s local installation
5. devdependencies v/s dependencies
6. Important commands to get information about NPM packages
7. Publishing NPM packages.
