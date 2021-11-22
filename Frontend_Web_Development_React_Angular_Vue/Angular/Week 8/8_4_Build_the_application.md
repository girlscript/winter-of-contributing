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
* --i18n-missing-translation
* --index
* --inline-style-language
* --localize
* --main
* --named-chunks
* --ngsw-config-path
* --optimization
* --output-hashing
* --output-path
* --poll
* --polyfills
* --preserve-symlinks
* --prod
* --progress
* --resources-output-path
* --service-worker
* --show-circular-dependencies
* --source-map
**And many more.....**
Refer the documentation here https://angular.io/cli/build#options for more in depth knowledge.

## Building the new Application

* To create a new angular application use this command ```ng new appname```, choose 'yes' for Angular routing option and select the styles like CSS or SCSS. 
* Once executed, Angular CLI will create an Angular project with some default node module packages. 
* One can also use ```ng build <project> [options]``` and ```ng b <project> [options]```.
* It compiles an Angular app into an output directory named dist/ at the given output path. Must be executed from within a workspace directory.



