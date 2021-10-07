
# What is ANGULAR?
Angular is a development platform for building mobile and desktop web applications  using Typescript/JavaScript and other languages. 
It is a component based frame work meaning entire app is divided in small components both reusable(single code used many times) and non reusable(seperate code for each component).
Some frameworks are preintegrated into the app while external frameworks can be integrated into the app using cli or manually.
App can be scalled up from single developer to enterprise level.

# PREREQUISITES

**Angular** is essentially a frontend framework hence knowledge of the basic and most common front end languages is essential.
To use the Angular framework, you should be familiar with the following:

-   [**JavaScript**](https://developer.mozilla.org/en-US/docs/Web/JavaScript/A_re-introduction_to_JavaScript) - Used to make the app dynamic.
-   [**HTML**](https://developer.mozilla.org/docs/Learn/HTML/Introduction_to_HTML) - Used to give different meanings to various pieces of texts and images.
-   [**CSS**](https://developer.mozilla.org/docs/Learn/CSS/First_steps) - Used to style the app especially the HTML components.

## **Tools required to install ANGULAR on local machine :**  
1. [ **Node.js**](https://nodejs.org/en/download/) : is an asynchronous event-driven JavaScript runtime designed to build scalable network applications. It is an open source server environment used by **ANGULAR** to render the code onto a local server(http://localhost:4200/).
Angular requires an active LTS(version **14**) or maintenance LTS(version **12**) version of Node.js only.
Download and install [Node.js](https://nodejs.org/en/download/) on your computer. It will be installed globally in your computer.
2. [**npm (Node Package Manager)**]() :  is the world's largest software registry. It contains over 800,000 **code packages** that can be used into any project for free. It uses **Node.js** to install packages locally in your app. CLI is most commanly used to interact with npm. To check that you have the npm client installed, run `npm -v` in a terminal window.
	#### Windows Example
	>C:\>npm install <package_name>
	#### Mac OS Example
	>npm install <package_name>
 
## Install the Angular CLI
You use the Angular CLI to create projects, generate application and library code, and perform a variety of ongoing development tasks such as testing, bundling, and deployment.

To install the Angular CLI, open a terminal window and run the following command:
#### Windows Example
>C:\>npm install -g @angular/cli
#### Mac OS Example
>npm install -g @angular/cli


npm uses Node.js to install the **cli (Command Line Interface)** from **@angular** code package and -g means it will install the **cli** globally means it can be accessed from anywhere in the system using terminal.

## Create a workspace and initial application

**Workspace** is a collection of Angular projects (that is, applications and libraries) powered by the Angular CLI that are typically co-located in a single source-control repository is called a workspace. It is like your desk where you keep all the frameworks, dependencies, assets and other tools required for that project exclusively and not supposed to be installed globally.

**To create a new workspace and initial starter app:**

1. Go to your specified folder and run the CLI command  `ng new`  and provide the name  `my-app`(name of the app):
    
    #### Windows Example
	>C:\>ng new my-app
	
	#### Mac OS Example
	>ng new my-app
    
    A folder will be created with the name my-app and it will contain all   the necessary Angular npm packages and other dependencies to start your app. The CLI creates a new workspace and a simple Welcome app, ready to run
    
2.  The  `ng new`  command prompts you for information about features to include in the initial app. Accept the defaults by pressing the Enter or Return key.

## Run the application

The Angular CLI includes a server, for you to build and serve your app locally.

1.  Navigate to the workspace folder, such as  `my-app`.
    
2.  Run the following command:
	 
	#### Windows Example
	>C:\>cd my-app
	
	>C:\my-app\>ng serve --open
	
	#### Mac OS Example
	>cd my-app 
	
	>ng serve --open

The  `ng serve`  command launches the server, watches your files, and rebuilds the app as you make changes to those files.

The  `--open`  (or just  `-o`) option automatically opens your browser to  `http://localhost:4200/`

Go to the localhost:4200 in your browser and see the starter app template provided by **ANGULAR**.

Saurabh Prakash Frontend_With_Framework_Batch_2
