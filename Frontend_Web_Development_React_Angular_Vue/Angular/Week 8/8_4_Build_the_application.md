# Create Angular Application Using CLI

## Introduction

* Angular is a platform and front-end framework for building single-page client applications using HTML and Typescript. 
* It uses Typescript by default for creating logic and methods for a class. 
* However, the browser doesn't know the typescript here, as Webpack comes in the picture. 
* Webpack is used to compile these typescript files to javascript. For this type of configuration, files are required in the Angular project.
* Angular CLI is a tool that does all these things for a project with some simple commands.

## Prerequisites for Angular Application

* Node 4.x.x or higher
* Npm 3.x.x or higher
**If you have already installed the above software, verify that you are running at least node 4.x.x and 3.x.x or higher by running ```node -v``` and ```npm -v``` (check the versions) in a terminal/ console window.**
If not then install in using ```npm install -g @angular/cli```


## Ng command

* One can use ```ng build <project> [options]``` and ```ng b <project> [options]```.
* It compiles an Angular app into an output directory named dist/ at the given output path. Must be executed from within a workspace directory.

**Arguments**
```<project>``` : The name of the project to build. Can be an application or a library. It has value type as ```string```.

**Options**
It has varied options such as :
* --allowed-common-js-dependencies
* --aot
* --base-href
* --build-optimizer
* --common-chunk
* --configuration
* --cross-origin
* --delete-output-path
* --deploy-url
* --extract-licenses
* --help

**And many more.....**

Refer the documentation [here](https://angular.io/cli/build#options) for more in depth knowledge.

## Building the new Application

* To create a new angular application use this command ```ng new appname```.
* Choose 'yes' for Angular routing option.
 
![x](https://github.com/HastiSutaria/winter-of-contributing/blob/Frontend_Web_Development_React_Angular_Vue/Frontend_Web_Development_React_Angular_Vue/Angular/Week%208/assets/Angular-App-Images/angular1.png)

* Select the styles like CSS or SCSS.

![](https://github.com/HastiSutaria/winter-of-contributing/blob/Frontend_Web_Development_React_Angular_Vue/Frontend_Web_Development_React_Angular_Vue/Angular/Week%208/assets/Angular-App-Images/angular2.png)

* After selecting routing and styles, Angular CLI will install required node modules packages for the angular project.
* Go to Project directory by using "cd myapp".

![](https://github.com/HastiSutaria/winter-of-contributing/blob/Frontend_Web_Development_React_Angular_Vue/Frontend_Web_Development_React_Angular_Vue/Angular/Week%208/assets/Angular-App-Images/angular3.png)

* To build and execute the project by using "ng serve" command.

![](https://github.com/HastiSutaria/winter-of-contributing/blob/Frontend_Web_Development_React_Angular_Vue/Frontend_Web_Development_React_Angular_Vue/Angular/Week%208/assets/Angular-App-Images/angular4.png)

* After successfully building the Angular project, open your browser and enter "http://localhost:4200/" OR by using "ng serve --open " command to directly display UI in your browser.

## Conclusion
Hence, we successfully created an Angular App using CLI.

## References 
* https://angular.io/cli/build

## Thank You!
