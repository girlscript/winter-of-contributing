# What is NPM
NPM or 'Node Package Manager is a huge repository of libraries, packages and modules that can be used with your JavaScript applications.  

NPM is the default package manager for JavaScript runtime environment Node JS. NPM mainly consists of two things - A command line client which is also called 'NPM' and a huge online database of public/ private packages, referred to as 'NPM Registry.' The online database of packages can be found at [npmjs.org](https://www.npmjs.com/).

NPM is been up since the launch of Node JS and contains over 800k packages, most of which are open source and free to use. Though NPM is publically available, some organizations also use NPM for managing private development.

# Installing NPM
You don't need to manually install NPM in your systems. It is installed automatically when you install Node JS runtime.

To check if your system has NPM, open terminal and type this command:

```bash
npm -v
```

This command prompts the current version of NPM installed in your system. If you get an error, you need to install Node JS. You can install Node JS for free from their [official website](https://nodejs.org/en/).

# Installing NPM packages
As mentioned earlier, NPM consists of many packages that can be used in our application. In order to use those packages, first we need to install them on our local machine. For that, we need to have a file named `package.json` in the working directory.

## `package.json`
This file holds information about your JavaScript project - whether it may be a Node JS CLI application or a browser application. It is created when `npm init` command is executed followed by a bunch of questions, to fill the metadata of the file.

> To start a JS project, run `npm init` in desired directory and answer follow up questions. 

Once your folder is initialized to run Node / JS applications, you can install NPM packages in the directory.

## Installing 'globally' and 'locally'
You are given the freedom to install NPM packages either in the current working directory (where `package.json` exists) ie 'locally' or in your whole machine, ie globally. 
Though most of the time it is best to install packages locally, there is some use case where you want to them globally.
If you will use the package as a CLI tool for something that doesn't need `package.json` or has the scope beyond `package.json`, you must install the package globally.

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

replace `<package-name>` with the name of the package you want to install. NPM will throw an error if no package with that name exists in the repo.

> You can type `-i` instead of `install` while installing NPM packages.

> Similarly, you can use `-g` instead of `--global` as a shortcut.

# Using NPM packages
`.require()` function is used to import NPM packages in `.js` files. Name of the package is passed as parametear to the `.require()` function.

```js
const http = require('http')
```

# Important NPM Commands

## Check NPM Version
```bash
npm -v
```

## Update NPM
```bash
npm -i -g npm@latest

## ONLY FOR WINDOWS:
npm-windows-upgrade
```

## Listing Packages
These are various commands provided by NPM to list out NPM packages installed in your project/ machine.

## Packages With Dependencies
```bash
npm list
```
This command lists locally installed packages with their versions of all dependencies. You can also use `ls` instead of `list`.

> To get a list of the same for globally installed packages, add `-g` tag 

## Just package Names
The above command lists all packages with their dependencies. If you want to retrieve only the package name, use `--depth=0` tag.
```bash
npm list --depth=0
```
> Use `-g` if you want global results.

## Outdated Packages
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


# Conclusion
This page has briefly covered information about:
1. NPM Basics
2. Installing NPM
3. Installing NPM packages
4. Important NPM commands used for listing, updating, uninstalling and searching NPM packages.

Contributed by: [Kaushal Joshi](https://github.com/joshi-kaushal)
