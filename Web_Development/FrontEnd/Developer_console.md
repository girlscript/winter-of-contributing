# Developer Console
The Developer Console is an open to all races development surroundings (more usually named an IDE) where you can develop in mind or physically, troubleshoot, and test apps in your org.
If something goes wrong in the our code, we can't exactly debug and find the error as our code contains lots of lines. Hence, to solve this problem we have something called as the 'Developer Tools' that are in­built inside browsers. Mostly Chrome or Firefox is used as these have the best developer tools, however other browsers also provide the same. Developer tools are super important, beacuse of the multiple features they offer which we will learn here. Browsers have in­built development tools to work with JavaScript and other web technologies.
## How to Open the Console in a Browser
we can create, debug, and test applications in the console.Now, lets discuss how we can work with the console in different web browsers like Chrome, Firefox, Safari etc. <br/>
=> Developer can also be opened by clicking "F12" in most browsers.
### Chrome - <br/>
=> Click Chrome menu(3 vertical dots)  in the upper right corner. <br/>
<br/>
 &emsp;  ![Menu](./menu.PNG) <br/>
 <br/>
 => Select More Tools -> Developer Tools.<br/>
 &emsp;  ![Menu](./menu2.jpg) <br/>
 <br/>
=> you can simply use the shortcut "Ctrl+Shift+J" in windows/Linux and "Cmd+Opt+J" in Mac. 
### Firefox - <br/>
=> Click Chrome menu(Hamburger Menu))  in the upper right corner. <br/>
<br/>
 &emsp;  ![fMenu](./fmenu.PNG) <br/>
 <br/>
 => Select More Tools -> Web Developer Tools.<br/>
 &emsp;  ![Menu](./menuf2.jpg) <br/>
 <br/>
=> you can simply use the shortcut "Ctrl+Shift+K" in windows/Linux and "Cmd+Opt+K" in Mac. <br/>
### Safari - <br/>
=> We need to enable the “Develop menu” first.<br/>
=> Open Preferences and go to the “Advanced” pane section.<br/>
=> There’s a checkbox at the bottom:<br/>
 &emsp; -Cmd+Opt+C can toggle the console. <br/>
 &emsp; -The new top menu item named “Develop” will appear.
 ## Working with the Console in a Browser 
 Now we will see how to write/edit code in chrome console :-
 <br/>
 => Here is the chrome console.
  &emsp;  ![Menu](./console.PNG) <br/>
  Getting started with the javascript Code :<br/>
```javascript
var s = "JavaScript syntax";
console.log(s);
```
 Output :<br/>
JavaScript syntax<br/>
Once you press the "Enter" the code you have written will be executed . we can also work with multpile lines of js code . To use the previous command again press up arrow and check for the command you want.<br/>
=> you can scrape the Html code by selecting the DOM Elements.<br/>
Example :<br/>
```javascript
$('body')
$('#skip-link')
$('.menu-wrapper')
$('.menu-wrapper').length
```
 &emsp;  ![Menu](./DOM.PNG) <br/>
 => You can use your browser as an text Editor and edit/access any line of your html code by following line of code :
```javascript
document.body.contentEditable=true 
```
=> To find the events for each Element in DOM .
```javascript
getEvenetListeners($('#skip-link'))
```
=> To clear the console .
```javascript
clear()
```
CSS styles can also be viewed in a side panel or below the DOM panel, which allows us to see what styles are being
implemented within the HTML document or via the style sheets.
Network
Every browser's built­in development tools consists of a network tab that can monitor and record network requests. This is
used to view the network requests that the browser makes, for example, when it is loading a page, or how long each request
is taking, and based on these, it provides us the details of the requests. This information can be used to optimize page load
performance and in debugging request issues. 
