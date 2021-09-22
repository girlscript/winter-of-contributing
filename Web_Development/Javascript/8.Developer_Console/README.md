# Developer console
---

## What is Developer Console?
---

Code is prone to errors. You will quite likely make errors. But in the browser, users don’t see errors by default. So, if something goes wrong in the script, we won’t see what’s broken and can’t fix it. To see errors and get a lot of other useful information about scripts, “developer tools” have been embedded in browsers. Most developers lean towards Chrome or Firefox for development because those browsers have the best developer tools. Other browsers also provide developer tools, sometimes with special features, but are usually playing “catch-up” to Chrome or Firefox. So most developers have a “favorite” browser and switch to others if a problem is browser-specific.

Developer tools are potent; they have many features. To start, we’ll learn how to open them, look at errors, and run JavaScript commands. Modern browsers have development tools built in to work with JavaScript and other web technologies. These tools include the Console which is similar to a shell interface, along with tools to inspect the DOM, debug, and analyze network activity.

The Console can be used to log information as part of the JavaScript development process, as well as allow you to interact with a web page by carrying out JavaScript expressions within the page’s context. Essentially, the Console provides you with the ability to write, manage, and monitor JavaScript on demand.

## Working with the Console in a Browser
---

Most modern web browsers that support standards-based HTML and XHTML will provide you with access to a Developer Console where you can work with JavaScript in an interface similar to a terminal shell. We’ll go over how to access the Console in Firefox and Chrome.

### Chrome
---

To open the JavaScript Console in Chrome, you can navigate to the menu at the top-right of your browser window signified by three vertical dots in a row. From there, you can select More Tools then Developer Tools.

![image1](images/image1.png)

This will open a panel where you can click on Console along the top menu bar to bring up the JavaScript Console if it is not highlighted already:

![image2](images/image2.png)

You can also enter into the JavaScript Console by using the keyboard shortcut CTRL + SHIFT + J on Linux or Windows, or COMMAND + OPTION + J on macOS, which will bring focus immediately to the Console.

Now that we have accessed the Console, we can begin working within it in JavaScript.

### Firefox
---

To open the Web Console in FireFox, you can navigate to the ☰ menu in the top right corner next to the address bar.

From there, click on the Developer button symbolized by the wrench icon, which will open the Web Developer menu. With that open, click on the Web Console menu item.

![image3](images/image3.png)

Once you do so, a tray will open at the bottom of your browser window:

![image4](images/image4.png)

You can also enter into the Web Console with the keyboard shortcut CTRL + SHIFT + K on Linux and Windows, or COMMAND + OPTION + K on macOS.

Now that we have accessed the Console, we can begin working within it in JavaScript.

### Safari
---
Most other browsers use F12 to open developer tools.

The look & feel of them is quite similar. Once you know how to use one of these tools (you can start with Chrome), you can easily switch to another.

Safari (Mac browser, not supported by Windows/Linux) is a little bit special here. We need to enable the “Develop menu” first.

Open Preferences and go to the “Advanced” pane. There’s a checkbox at the bottom:

![image5](images/image5.png)

Now Cmd+Opt+C can toggle the console. Also, note that the new top menu item named “Develop” has appeared. It has many commands and options.

### Working in the Console
---

Within the Console, you can type JavaScript code.

Let’s start with an alert that prints out the string  ``` Hello, World! ```:

```
>> alert("Hello, World!");
```
Once you press the ENTER key following your line of JavaScript, you should see the following alert popup in your browser:

image3

Note that the Console will also print the result of evaluating an expression, which will read as undefined when the expression does not explicitly return something.

Rather than have pop-up alerts that we need to continue to click out of, we can work with JavaScript by logging it to the Console with console.log.

To print the Hello, World! string, we can type the following into the Console:

```
>> console.log("Hello, World!");
```
 
Within the console, you’ll receive the following output:

Output:
```
Hello, World!
```

We can also use JavaScript to perform math in the Console:

```
>> console.log(3 + 6);
```
 
Output:
```
9
```

You can also try some more complicated math:

```
>> console.log(2344455.89898 * 87897987.89779);
```
 
Output:
```
206072956235446.4
```

Additionally, we can work on multiple lines with variables:

```
>> let d = new Date();
>> console.log("Today's date is " + d);
```
 
Output:
```
Today's date is Wed Jun 21 2017 15:49:47 GMT-0400 (EDT)
```

If you need to modify a command that you passed through the Console, you can type the up arrow ↑ key on your keyboard to retrieve the previous command. This will allow you to edit the command and send it again.

The JavaScript Console provides you with a space to try out JavaScript code in real time by letting you use an environment similar to a terminal shell interface.

## Understanding Other Development Tools
---

Depending on which browser’s development tools you use, you’ll be able to use other tools to help with your web development workflow. Let’s go over a few of these tools.

### DOM — Document Object Model
---

Each time a web page is loaded, the browser it is in creates a Document Object Model, or DOM, of the page.

The DOM is a tree of Objects and shows the HTML elements within a hierarchical view. The DOM Tree is available to view within the Inspector panel in Firefox or the Elements panel in Chrome.

These tools enable you to inspect and edit DOM elements and also let you identify the HTML related to an aspect of a particular page. The DOM can tell you whether a text snippet or image has an ID attribute and can let you determine what that attribute’s value is.

The page that we modified above would have a DOM view that looks similar to this before we reload the page:

JavaScript DOM Example

Additionally, you will see CSS styles in a side panel or below the DOM panel, allowing you to see what styles are being employed within the HTML document or via a CSS style sheet. This is what our sample page above’s body style looks like within the Firefox Inspector:

JavaScript CSS Example

To live-edit a DOM node, double-click a selected element and make changes. To start, for example, you can modify an ```<h1>``` tag and make it an ```<h2>``` tag.

As with the Console, if you reload the page you’ll return to the saved state of the HTML document.

### Network
---

The Network tab of your browser’s built-in development tools can monitor and record network requests. This tab shows you the network requests that the browser makes, including when it loads a page, how long each request takes, and provides the details of each of these requests. This can be used to optimize page load performance and debug request issues.

You can use the Network tab alongside the JavaScript Console. That is, you can start debugging a page with the Console then switch to the Network tab to see network activity without reloading the page.

To learn more about how to use the Network tab, you can read about working with Firefox’s Network Monitor or getting started with analyzing Network performance with Chrome’s DevTools.

### Responsive Design
---

When websites are responsive, they are designed and developed to both look and function properly on a range of different devices: mobile phones, tablets, desktops, and laptops. Screen size, pixel density, and supporting touch are factors to consider when developing across devices. As a web developer, it is important to keep responsive design principles in mind so that your websites are fully available to people regardless of the device that they have access to.

Both Firefox and Chrome provide you with modes for ensuring that responsive design principles are given attention as you create and develop sites and apps for the web. These modes will emulate different devices that you can investigate and analyze as part of your development process.

Read more about Firefox’s Responsive Design Mode or Chrome’s Device Mode to learn more about how to leverage these tools to ensure more equitable access to web technologies.


#### References:
- [Digitalocean](https://www.digitalocean.com/community/tutorials/how-to-use-the-javascript-developer-console)
- [JAVASCRIPT.INFO](https://javascript.info/devtools)

<br>


 __Contributor :__ [Aniket Pathak](https://github.com/aniketpathak028)
