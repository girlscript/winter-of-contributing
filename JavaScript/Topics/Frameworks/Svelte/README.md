![Svelte](images/Svelte_Logo.png)

# Introduction

Svelte is an open-source front-end compiler which has an unique approach to execute the front-end code and shows it in browser in an efficient way. <br>

Other frameworks like ReactJS execute the code in the browser itself, when the app is running. Whereas Svelte does it in a different way. It executes the code during the compile time, producing highly-optimised Vanilla JavaScript. <br>

As compared to other frameworks, Svelte uses less concepts and tools to create a web application. For example, virtual DOM is present in ReactJS but not in Svelte. <br>

<br>

# Creation of Svelte App

<b>Note: </b> Make sure NodeJS and npm is downloaded before creating Svelte App.

<b>Step-1: </b> Download and unzip the Svelte repo using `degit` method.

``` 
npx degit sveltejs/template <app-name>
```

For example,

![Step-1](images/Terminal_Step1.png)

<b>Step-2: </b> Go to the app directory.

```
cd <app-name>
```

For example,

![Step-2](images/Terminal_Step2.png)

<b>Step-3: </b> Run the application.

```
npm install
npm run dev
```

For example, 

![Step-3_1](images/Terminal_Step3_1.png)
<br>
![Step-3_2](images/Terminal_Step3_2.png)

<b>Step-4: </b> Go to the link as shown in the above picture `http://localhost:5000`

![Step-4](images/Terminal_Step4.png)

Tada!!! We have created the app!

<br>

# Understanding File Structure in Svelte App

The file structure of Svelte app is given below:

<br>

```
girlscript-app
├── node_modules
├── public
    ├── build
        ├── bundle.css
        ├── bundle.js
        ├── bundle.js.map
    ├── favicon.png
    ├── global.css
    ├── index.html
├── scripts
    ├── setupTypeScript.js
├── src
    ├── App.svelte
    ├── main.js
├── package.json
├── package-lock.json
├── README.md
├── rollup.config.js
```

<br>
