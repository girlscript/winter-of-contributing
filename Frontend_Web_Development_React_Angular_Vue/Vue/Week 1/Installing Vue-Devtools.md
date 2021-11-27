# What is Vue-DevTools?
Web developer tools, also known as DevTools that are meant to help developers in the process of testing as well as debugging their codes. 
The **Vue.js devtools** allows you to inspect and debug your applications while developing.

# Why it is needed?
These development tools are utterly different from IDEs and other website builders because these are not meant to help in the direct process of a webpage creation but instead, these are the tools that will help you in testing your webpage or web application.
These development tools are commonly available as *built-in* features and *add-ons* in web browsers.
# What are the most common features of DevTools?
– ***HTML*** and ***DOM*** editor  
– Assets, network and resources information of webpage  
– ***JavaScript*** debugging to add more

# Installation
## 1. Chrome :
 Install the extension on the _[Chrome Web Store](https://chrome.google.com/webstore/detail/vuejs-devtools/nhdogjmejiglipccpnnnanhbledajbpd)_.  Follow the following steps

	
- Step 1 - Click on the `three dots button(Menu)` at top right corner of browser then select`More tools` then `Extensions`. 
	
- Step 2 -  Click on the  `Details`  button on the Vue.js Devtools extension.
	
- Step 3 - Check the following settings.
	
		
<img src="https://devtools.vuejs.org/assets/chrome-settings2.e239f122.png"  
   alt="Markdown Monster icon"  
   style="float: left; margin-right: 10px;" />

## 2. Firefox :
 Install the extension on the _[Firefox Addon](https://addons.mozilla.org/en-US/firefox/addon/vue-js-devtools/)_. 
<img src="https://flaviocopes.com/vue-devtools/firefox-addon-installed.png"  
   alt="Markdown Monster icon"  
   style="float: left; margin-right: 10px;" />

Follow the following steps : 

- Step 1 - Click on the `three horizontal lines button(Menu)` at top right corner of browser then select`Addons and Themes` or just press `Ctrl + Shift + A`. 
	
- Step 2 -  Click on `three horizontal dots button` then  `Manage`  button on the Vue.js Devtools extension.
	
- Step 3 - Check the following settings.

  <img src="https://devtools.vuejs.org/assets/firefox-settings3.92d80ebf.png"  
   alt="Markdown Monster icon"  
   style="float: left; margin-right: 10px;" />
 
 ## 3. Standalone :
 A **standalone** application is an application that runs locally on the device and doesn't require anything else to be functional. Required when using an unsupported browser, or if you have other specific needs (for example your application is in **Electron**).
 <img src="https://flaviocopes.com/vue-devtools/standalone-vue-devtools-waiting.png"  
   alt="Markdown Monster icon"  
   style="float: left; margin-right: 10px;" />

- To install the package globally using npm:
	- Step 1 : 
		> npm install -g @vue/devtools
		or
		> yarn add -g @vue/devtools

		**-g** installs the devtools from vue package globally on your computer means you can use it from anywhere inside the system.
	- Step 2 : Run in terminal 
		> vue-devtools
	
	- Step 3 : Then add this code to the `<head>` section of your application HTML file. Specify the specific port number where you want the devtools to start.
		
		```<script src="http://localhost:<port_number>"></script>```
		
		Or if you want to debug your device remotely:
		```html
		<script>
		  window.__VUE_DEVTOOLS_HOST__ = '<your-local-ip>' // default: localhost
		  window.__VUE_DEVTOOLS_PORT__ = '<devtools-port>' // default: 8098
		</script>
		<script src="http://<your-local-ip>:8098"></script>
		```
		`<your-local-ip>` usually looks like this: `192.168.x.x`
		Remove it during deployment.
		
		Then start your development server like you are used to, _without_ killing the `vue-devtools` command as both need to run in parallel. Open a new terminal and type :
		> npm dev
		or
		> npm serve
		or
		> yarn dev
		or
		> yarn serve
		 
		
	
- To install the package locally or specific to the project:
	- Step 1 : 
		>npm install --save-dev @vue/devtools
		>or
		>yarn add  --save-dev @vue/devtools

		**--save-dev** installs the package in the workspace of th project hence you cannot use it outside the workspace.
	- Step 2 :  
		> ./node_modules/.bin/vue-devtools
	
	- Step 3 : import it directly in your app  
		```js
		import devtools from '@vue\devtools'
		```
		Import **devtools** before importing **Vue**.
	- Step 4 : And connect to host
	  ```js
	  if (process.env.NODE_ENV === 'development') {
	  devtools.connect(/* host(optional), port(optional) */)
	  }
	  ```
		**host** -argument that tells your application where devtools middleware server is running, required only while debugging on mobile.
		**port** - argument that tells your application on what port devtools middleware server is running. If you use proxy server, you might want to set it to `null`    so the port won't be added to connection URL.

# How to open Vue-DevTools in the browser?
 
**Vue-DevTools** can be activated by opening the Developer Tools in the browser and moving to the Vue panel.
To use the devtools, we must open the Developer Tools panel, using `View → Developer → Developer Tools`, or `Cmd+Alt+i`(Mac) and `Ctrl+Alt+i`(Windows).
 
 <img src="https://flaviocopes.com/vue-devtools/devtools-window.png"  
   alt="Markdown Monster icon"  
   style="float: left; margin-right: 10px;" />

Another option is to right-click on any element in the page, and choose `Inspect Vue component` on both Mac and Windows:
 
 <img src="https://flaviocopes.com/vue-devtools/inspect-vue-component.png"  
   alt="Markdown Monster icon"  
   style="float: left; margin-right: 10px;" />

	

 
