## What is jQuery ?

 Query is a fast, small, cross-platform and feature-rich JavaScript library. It is designed to simplify the client-side scripting of HTML. **jQuery is a lightweight, "write     less, do more", JavaScript library** .jQuery takes a lot of common tasks that require many lines of JavaScript code to accomplish, and wraps them into methods that you can call with a single line of code.jQuery also simplifies a lot of the complicated things from JavaScript, like AJAX calls and DOM manipulation.

  The purpose of jQuery is to make it much easier to use JavaScript on your website.

  The jQuery library contains the following features:<br>
  <ul>
  <li> HTML/DOM manipulation</li>
  <li> CSS manipulation</li>
  <li> HTML event methods</li>
  <li> Effects and animations</li>
  <li> AJAX</li>
  <li> Utilities</li>
  </ul>

## Is jQuery a programming language?
  jQuery is not a programming language but a well-written JavaScript code. It is used to traverse documents, event handling, Ajax interaction, and Animation.

## What is the difference between JavaScript and jQuery?
  The simple difference is that JavaScript is a language while jQuery is a built-in library built for JavaScript. jQuery simplifies the use of JavaScript language.  

## Why jQuery is required ?
  <ul>
    <li> It is very fast and extensible.</li>
    <li>  It facilitates the users to write UI related function codes in minimum possible lines.</li>
    <li>  It improves the performance of an application.</li>
    <li>  Browser's compatible web applications can be developed.</li>
    <li>  It uses mostly new features of new browsers.</li>
    <li>  So, you can say that out of the lot of JavaScript frameworks, jQuery is the most popular and the most extendable.
            Many of the biggest companies on the web use jQuery.</li>
  </ul>

  Some of these companies are:<br>
  <ul>
    <li> Microsoft</li>
    <li> Google</li>
    <li> IBM</li>
    <li> Netflix</li>
  </ul>

## What should you know before starting to learn jQuery?
  It is always advised to a fresher to learn the basics of web designing before starting to learn jQuery. He should learn HTML, CSS and JavaScript first. But, if you belong to a technical background, it is up to you.

## what is jQuery History?
  jQuery was first released in January 2006 by John Resig at BarCamp NYC. It is currently headed by Timmy Wilson and maintained by a team of developers. Nowadays, jQuery is widely used technology. Most of the websites are using jQuery.
  
## Is jQuery library used for server scripting or client scripting?
  It is a library for client-side Scripting.

## Is jQuery a W3C standard?
  No, jQuery is not a W3C standard.

## How to add jQuery to your web pages?
  There are several ways to start using jQuery on your web site. You can:<br>
 <ul>
  <li> Download the jQuery library from jQuery.com</li>
  <li> Include jQuery from a CDN, like Google</li>
  <li> Downloading jQuery</li>
 </ul> 
  There are two versions of jQuery available for downloading:<br>
<ul>
  <li> Production version - this is for your live website because it has been minified and compressed</li>
  <li> Development version - this is for testing and development (uncompressed and readable code)</li>
  <li> Both versions can be downloaded from jQuery.com.</li>
</ul>
The jQuery library is a single JavaScript file, and you reference it with the HTML <script> tag (note that the <script> tag should be inside the <head> section):<br>
 Syntax: <script src="jquery-3.5.1.min.js"></script><br>
  
<ul><li> Important Points: Place the downloaded file in the same directory as the pages where you wish to use it.</li></ul>

jQuery CDN: If you don't want to download and host jQuery yourself, you can include it from a  CDN (Content Delivery Network).<br>
Google is an example of someone who host jQuery:<br>
Google CDN:
Syntax: <script src= "https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js" ></script><br>
  
<ul><li> One big advantage of using the hosted jQuery from Google: Many users already have downloaded jQuery from Google when visiting another site. As a result, it will be loaded from cache when they visit your site, which leads to faster loading time. Also, most CDN's will make sure that once a user requests a file from it, it will be served from the server closest to them, which also leads to faster loading time. </li></ul>
  
##  How to use jQuery in your scripting file?
  
   The jQuery syntax is tailor-made for selecting HTML elements and performing some action on the element(s).<br>
    Basic syntax is: $(selector).action()<br>
   Here;<br>
  <ul>
   <li> A $ sign to define/access jQuery</li>
   <li> A (selector) to "query (or find)" HTML elements</li>
   <li> A jQuery action() to be performed on the element(s)</li>
  </ul> 
   Examples:<br>
   <ul>
    <li> $(this).hide() - hides the current element.</li>
    <li> $("p").hide() - hides all "p" elements.</li>
    <li> $(".test").hide() - hides all elements with class="test".</li>
    <li> $("#test").hide() - hides the element with id="test". </li>
   </ul>
  
## What is the starting point of code execution in jQuery?
  $(document).ready() function is the starting point of jQuery code. It is executed when DOM is loaded.

## What are the selectors in jQuery? How many types of selectors in jQuery?
  If you want to work with an element on the web page, first you need to find it. Selectors find the HTML elements in jQuery. There are many types of selectors. Some basic  selectors are:<br>
<ul>
  <li> Name: It is used to select all elements which match with the given element Name.</li>
  <li> #ID: It is used to select a single element which matches with the given ID</li>
  <li> .Class: It is used to select all elements which match with the given Class.</li>
  <li> Universal (*): It is used to select all elements available in a DOM.</li>
  <li> Multiple Elements E, F, G: It is used to selects the combined results of all the specified selectors E, F or G.</li>
  <li> Attribute Selector: It is used to select elements based on its attribute value.</li>
 </ul> 
  
## What are the effects methods used in jQuery?
  These are some effects methods used in jQuery:<br>
<ul>
  <li> show() - It displays or shows the selected elements.</li>
  <li> hide() - It hides the matched or selected elements.</li>
  <li> toggle() - It shows or hides the matched elements. In other words, it toggles between the hide() and shows() methods.</li>
  <li> fadeIn() - It shows the matched elements by fading it to opaque. In other words, it fades in the  selected elements.</li>
  <li> fadeOut() - It shows the matched elements by fading it to transparent. In other words, it fades out the selected elements.</li>
</ul>
  
## jQuery Properties are:
<ul>
  <li> context: Removed in version 3.0. Contains the original context passed to jQuery()</li>
 <li> jquery:  Contains the jQuery version number</li>
 <li> jQuery.fx.interval: Change the animation firing rate in milliseconds</li>
 <li> jQuery.fx.off: Globally disable/enable all animations</li>
 <li> jQuery.support: A collection of properties representing different browser features  or bugs (Intended for jQuery's internal use)</li>
 <li> length:	Contains the number of elements in the jQuery object</li>    
  </ul>
  
 Contributor : [Aditi Tomar](https://aditi-247.github.io/AditiTomar/)
